# -*- coding: utf-8 -*-
############################################################################
# Licensed under the Apache License, Version 2.0 (the "License");          #
# you may not use this file except in compliance with the License.         #
# You may obtain a copy of the License at                                  #
#                                                                          #
# http://www.apache.org/licenses/LICENSE-2.0                               #
#                                                                          #
# Unless required by applicable law or agreed to in writing, software      #
# distributed under the License is distributed on an "AS IS" BASIS,        #
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. #
# See the License for the specific language governing permissions and      #
# limitations under the License.                                           #
############################################################################
# Author: Tiago Sá Marques                                                 #
############################################################################
import os
import subprocess
import xml.etree.ElementTree as Et

from . import utils


class Message:
    def __init__(self, root, node, rs, consts):
        self._root = root
        self._node = node
        self._consts = consts

        rs.add_imc_header("Message::*")
        rs.add_imc_header("Header::Header")
        rs.add_imc_header("packet::ImcError")
        rs.add_rust_header("bytes::BufMut")

        if self.has_fields():
            rs.add_imc_header("packet::*")

        # `use (...)`
        fields = node.findall("field")
        has_msg_field = False
        for field in fields:
            if field.get('type') == 'message-list':
                rs.add_imc_header('MessageList')
                rs.add_imc_header('DUNE_IMC_CONST_NULL_ID')
                break
            elif field.get('type') == 'message':
                has_msg_field = True

        if has_msg_field:
            rs.add_imc_header('DUNE_IMC_CONST_NULL_ID')

        # Process inline enumerations.
        iens = node.findall("field[@unit='Enumerated']")
        for ien in iens:
            if ien.get('enum-def', None) is not None:
                continue
            enum = utils.Enum(utils.get_enum_name(ien.get('name')), ien.get('name'))
            enum.add_property("#[allow(non_camel_case_types)]")
            for field in ien.findall('value'):
                name = ien.get('prefix') + '_' + field.get('abbrev')
                enum.add_field(utils.EnumField(name, field.get('id'), field.get('name')))
            rs.append(enum)

        # Process inline bitfields.
        bfs = node.findall("field[@unit='Bitfield']")
        for bf in bfs:
            if bf.get('bitfield-def', None) is not None:
                continue
            enum = utils.Bitfield(utils.get_bfield_name(bf.get('name')), bf.get('name'))
            enum.add_property("#[allow(non_camel_case_types)]")
            for field in bf.findall('value'):
                name = bf.get('prefix') + '_' + field.get('abbrev')
                enum.add_field(utils.BitfieldField(name, field.get('id'), field.get('name'), "u32"))
            rs.append(enum)

        # message struct
        desc_tag = node.find('description')
        s = utils.Struct(name=node.get('abbrev'), desc=utils.get_description(desc_tag))
        s.add_property("#[derive(Default)]")

        s.add_field(utils.StructField('header', 'Header', 'Message Header', 'Header::new(' + node.get('id') + ')'))
        for field in fields:
            desc = field.find('description')
            if desc is not None:
                desc = desc.text
            s.add_field(utils.StructField(field.get('abbrev'),
                                          utils.get_rust_types(root, field),
                                          desc,
                                          utils.get_field_initial_value(root, field)))

        functions = []

        # base constructor
        fn_new = utils.Function('new', rett=node.get('abbrev'))
        constructor_body = 'let msg = ' + node.get('abbrev') + ' {\n'
        constructor_body += ',\n'.join(s.get_default_initialization()) + '\n'
        constructor_body += '};\n\n'
        constructor_body += 'msg'
        fn_new.add_body(constructor_body)

        functions.append(fn_new)

        # static id
        fn_stid = utils.Function(name='static_id', rett='u16', inline=True)
        fn_stid.add_body(node.get('id'))
        functions.append(fn_stid)

        # id
        fn_id = utils.Function(name='id', is_method=True, const=True, rett='u16', inline=True)
        fn_id.add_body(node.get('id'))
        functions.append(fn_id)

        # Get header
        fn_get_hdr = utils.Function(name='get_header', is_method=True, const=False, rett='&mut Header')
        fn_get_hdr.body("&mut self._header")
        functions.append(fn_get_hdr)

        msglist_fields = node.findall("field[@type='message-list']")
        msg_fields = node.findall("field[@type='message']")
        # override calls to implement nested callbacks
        if len(msglist_fields) != 0 or len(msg_fields) != 0:
            fn_var = utils.Var(name='ts', xtype='f64')
            fn_set_timestamp = utils.Function('set_timestamp_secs', is_method=True, const=False, args=[fn_var])
            fn_set_timestamp.add_body('self.get_header()._timestamp = ts;')

            fn_var = utils.Var(name='src', xtype='u16')
            fn_set_source = utils.Function('set_source', is_method=True, const=False, args=[fn_var])
            fn_set_source.add_body('self.get_header()._src = src;')

            fn_var = utils.Var(name='src_ent', xtype='u8')
            fn_set_source_ent = utils.Function('set_source_ent', is_method=True, const=False, args=[fn_var])
            fn_set_source_ent.add_body('self.get_header()._src_ent = src_ent;')

            fn_var = utils.Var(name='dst', xtype='u16')
            fn_set_destination = utils.Function('set_destination', is_method=True, const=False, args=[fn_var])
            fn_set_destination.add_body('self.get_header()._dst = dst;')

            fn_var = utils.Var(name='dst_ent', xtype='u8')
            fn_set_destination_ent = utils.Function('set_destination_ent', is_method=True, const=False, args=[fn_var])
            fn_set_destination_ent.add_body('self.get_header()._dst_ent = dst_ent;')

            for f in msglist_fields:
                fn_set_timestamp.add_body(utils.call_message_list_nested('set_timestamp_secs', f, ['ts']))
                fn_set_source.add_body(utils.call_message_list_nested('set_source', f, ['src']))
                fn_set_source_ent.add_body(utils.call_message_list_nested('set_source_ent', f, ['src_ent']))
                fn_set_destination.add_body(utils.call_message_list_nested('set_destination', f, ['dst']))
                fn_set_destination_ent.add_body(utils.call_message_list_nested('set_destination_ent', f, ['dst_ent']))

            for f in msg_fields:
                fn_set_timestamp.add_body(utils.call_inline_nested('set_timestamp_secs', f, ['ts']))
                fn_set_source.add_body(utils.call_inline_nested('set_source', f, ['src']))
                fn_set_source_ent.add_body(utils.call_inline_nested('set_source_ent', f, ['src_ent']))
                fn_set_destination.add_body(utils.call_inline_nested('set_destination', f, ['dst']))
                fn_set_destination_ent.add_body(utils.call_inline_nested('set_destination_ent', f, ['dst_ent']))

            functions.append(fn_set_timestamp)
            functions.append(fn_set_source)
            functions.append(fn_set_source_ent)
            functions.append(fn_set_destination)
            functions.append(fn_set_destination_ent)

        # clear
        fn_clear = utils.Function(name='clear', is_method=True, const=False)
        fn_clear.body(';\n'.join('self.' + f for f in s.get_reset()) + '\n')
        functions.append(fn_clear)

        # Get fixed serialization size
        fn_fixed_sersize = utils.Function('fixed_serialization_size', is_method=True, rett='usize', inline=True)
        fn_fixed_sersize.body(str(self.get_fixed_size()))
        functions.append(fn_fixed_sersize)

        # Get dynamic serialization size
        fn_var_sersize = utils.Function('dynamic_serialization_size', is_method=True, rett='usize', inline=True)
        var_size = self.get_variable_size()
        if len(var_size) != 0:
            fn_var_sersize.body('let mut dyn_size :usize = 0;\n' +
                                var_size + ';\n\n' +
                                'dyn_size')
        else:
            fn_var_sersize.body('0\n')

        functions.append(fn_var_sersize)

        # Serialize fields
        if self.has_fields():
            fn_arg = utils.Var(name='bfr', xtype='&mut bytes::BytesMut')
        else:
            fn_arg = utils.Var(name='_bfr', xtype='&mut bytes::BytesMut')

        fn_serialize = utils.Function(name='serialize_fields', is_method=True, args=[fn_arg])
        if self.has_fields():
            for field in node.findall('field'):
                fn_serialize.add_body(utils.get_field_serialization(root, field))
        else:
            fn_serialize.add_body('')

        functions.append(fn_serialize)

        # Deserialize fields
        if self.has_fields():
            fn_arg = utils.Var(name='bfr', xtype='&mut dyn bytes::Buf')
        else:
            fn_arg = utils.Var(name='_bfr', xtype='&mut dyn bytes::Buf')
        fn_deserialize = utils.Function(name='deserialize_fields', rett='Result<(), ImcError>', is_method=True,
                                        const=False, args=[fn_arg])
        if self.has_fields():
            for field in node.findall('field'):
                fn_deserialize.add_body(utils.get_field_deserialization(root, field))
        else:
            fn_deserialize.add_body('')

        fn_deserialize.add_body('Ok(())')
        functions.append(fn_deserialize)

        rs.append(str(s))

        # start impl block
        rs.append("impl Message for " + node.get('abbrev') + ' {\n')
        for fn in functions:
            rs.append(fn)

        # end of impl block
        rs.append("}\n")


    def get_fixed_size(self):
        size = 0
        for field in self._node.findall('field'):
            size += self._consts['sizes'][field.get('type')]
        return size

    def get_variable_size(self):
        size = []
        for field in self._node.findall('field'):
            xtype = field.get('type')
            abbrev = field.get('abbrev')
            if xtype == 'plaintext' or xtype == 'rawdata':
                size.append('dyn_size += self._%s.len() + 2' % abbrev)
            elif xtype == 'message':
                size.append('inline_message_serialization_size!(dyn_size, self._%s)' % abbrev)
            elif xtype == 'message-list':
                size.append('message_list_serialization_size!(dyn_size, self._%s)' % abbrev)
        return ';\n'.join(size)

    # Retrieve a list of abbreviations of variable length fields.
    def get_variable_fields(self):
        ret = []
        for field in self._node.findall('field'):
            if field.get('type') in self._consts['variable_types']:
                ret.append(field.get('abbrev'))
        return ret

    def has_fields(self):
        return len(self._node.findall('field')) > 0

    def count_nested(self):
        return len(self._node.findall("field[@type='message']")) + \
               len(self._node.findall("field[@type='message-list']"))


def gen_message_files(consts, dest_folder, root, abbrevs, xml_md5):
    for abbrev in abbrevs:
        msg_deps = utils.get_first_level_deps(root, abbrev)

        rs = utils.File("src/%s.rs" % abbrev, dest_folder, md5=xml_md5)

        groups = [g.get('abbrev') for g in root.findall("message-groups/message-group")]
        for dep in msg_deps:
            if dep not in groups:
                rs.add_imc_header(dep + "::" + dep)

        # @fixme not using supertypes for now
        # for group in utils.get_msg_groups(root, abbrev):
        #     rs.add_imc_header("%s/%s.hpp" % (utils.SPEC_FOLDER, group))

        msg = root.find("message[@abbrev='%s']" % abbrev)
        Message(root, msg, rs, consts)
        rs.write()


def gen_header_file(root, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder + '/src', ns=False, md5=xml_md5)
    f.add_rust_header("bytes::BufMut")

    desc_tag = root.find('header').find('description')
    s = utils.Struct('Header', desc=utils.get_description(desc_tag))
    s.add_property("#[derive(Default, PartialEq, Debug)]")

    fields = root.findall("header/field")
    for field in fields:
        s.add_field(utils.StructField(field.get('abbrev'),
                                      utils.get_rust_types(root, field),
                                      field.get('name'),
                                      utils.get_field_initial_value(root, field)))
    f.append(s)

    f.text += "impl Header {\n"

    constr_arg = utils.Var(name="msg_id", xtype="u16")
    fn_constructor = utils.Function(name="new", args=[constr_arg], rett="Header", private=False)

    constructor_body = 'let mut header = Header {\n'
    constructor_body += ',\n'.join(s.get_default_initialization())
    constructor_body += '\n};\n'
    constructor_body += '\nheader._mgid = msg_id;\n'
    constructor_body += 'header'

    fn_constructor.body(constructor_body)
    f.text += str(fn_constructor) + '\n\n'

    fn_clear = utils.Function(name="clear", is_method=True, private=False, const=False)
    clear_fn_body = ';\n'.join('self.' + f for f in s.get_reset())
    fn_clear.add_body(clear_fn_body)
    f.text += str(fn_clear)

    serialize_args = utils.Var(name="bfr", xtype="&mut bytes::BytesMut")
    fn_serialize = utils.Function(name="serialize", is_method=True, private=False, args=[serialize_args])
    fn_serialize_body = ''
    for field in fields:
        xtype = utils.get_rust_types(root, field)
        if xtype == 'u8':
            ser_str = "bfr.put_u8"
        elif xtype == 'i8':
            ser_str = "bfr.put_i8"
        else:
            ser_str = "bfr.put_" + xtype + "_le"
        fn_serialize_body += ser_str + '(self._' + field.get("abbrev") + ');\n'

    fn_serialize.add_body(fn_serialize_body)
    f.text += str(fn_serialize)

    # end impl block
    f.text += '}\n'
    f.write()


def get_git_info(xml):
    git_dir = os.path.dirname(xml)
    info = 'unknown'
    cwd_old = os.getcwd()
    os.chdir(git_dir)
    try:
        info = subprocess.check_output(['git',
                                        'log',
                                        "--pretty=format:%ad %h %d",
                                        '--abbrev-commit',
                                        '--date=short', '-1'],
                                       universal_newlines=True).strip()
    except subprocess.CalledProcessError:
        pass
    os.chdir(cwd_old)
    return info


def gen_messages_md5(root, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder, ns=False, md5=xml_md5)
    for msg in root.findall('message'):
        name = msg.attrib['abbrev'].upper()
        md5 = utils.xml_node_md5(msg)
        f.append("#define IMC_%s_MD5 \"%s\"" % (name, md5))
    f.write()


def gen_lib_file(consts, dest_folder, root, abbrevs, xml_md5):
    f = utils.File("lib.rs", dest_folder + "/src", ns=False, md5=xml_md5)
    f.add_macro("#![allow(non_snake_case)]")
    f.add_macro("#![allow(dead_code)]")

    f.add_crate_mod("Header")
    f.add_crate_mod("Message")
    f.add_crate_mod("MessageGroup")
    f.add_crate_mod("factory")
    f.add_crate_mod("packet")

    f.add_custom_type("MessageList<T>", "Vec<T>")

    for abbrev in abbrevs:
        f.add_imc_mod(abbrev)

    f.text += '\n'
    f.append("/// IMC Constants")
    f.add_const_variable("DUNE_IMC_VERSION", "&\'static str", "\"" + str(consts["version"]) + "\"")
    f.add_const_variable("DUNE_IMC_CONST_SYNC", "u16", consts["sync"])
    f.add_const_variable("DUNE_IMC_CONST_SYNC_REV", "u16", consts["sync_rev"])
    f.add_const_variable("IMC_CONST_HEADER_SIZE", "u8", consts["header_size"])
    f.add_const_variable("IMC_CONST_FOOTER_SIZE", "u8", consts["footer_size"])
    f.add_const_variable("IMC_CONST_UNK_EID", "u8", "255")
    f.add_const_variable("DUNE_IMC_CONST_NULL_ID", "u16", "65535")
    f.add_const_variable("DUNE_IMC_CONST_MAX_SIZE", "usize", "65535")
    f.add_const_variable("DUNE_IMC_CONST_SYS_EID", "u8", "0")

    f.text += '\n'
    f.append("/// Global Enumerators\n")
    ens = root.findall('enumerations/def')
    for en in ens:
        enum = utils.Enum(en.get('abbrev'), en.get('name'))
        enum.add_property("#[allow(non_camel_case_types)]")
        for field in en.findall('value'):
            name = en.get('prefix') + '_' + field.get('abbrev')
            enum.add_field(utils.EnumField(name, field.get('id'), field.get('name')))
        f.append(enum)

    f.append("/// Global Bitfields")
    ens = root.findall('bitfields/def')
    for en in ens:
        bitf = utils.Bitfield(en.get('abbrev'), en.get('name'))
        bitf.add_property("#[allow(non_camel_case_types)]")
        for field in en.findall('value'):
            name = en.get('prefix') + '_' + field.get('abbrev')
            bitf.add_field(utils.BitfieldField(name,
                                               field.get('id'),
                                               field.get('name'),
                                               "u32"))
        f.append(bitf)
    f.write()


def gen_factory_file(dest_folder, root, xml_md5):
    f = utils.File("src/factory.rs", dest_folder, ns=False, md5=xml_md5)
    f.add_imc_header("Header::Header")
    f.add_imc_header("Message::Message")
    # so that we don't need to include all messages
    f.add_imc_header("*")

    fn_arg = utils.Var(name='hdr', xtype='Header')
    fn_buildfrom = utils.Function(name='buildFrom<T :Message>', rett='Option<T>', args=[fn_arg], private=False)
    fn_buildfrom.add_body("let mut msg: T = T::new();\n"
                          "if msg.id() != hdr._mgid {\n"
                          "return Option::None;\n"
                          "}\n"
                          "msg.get_header()._mgid = hdr._mgid;\n"
                          "msg.get_header()._sync = hdr._sync;\n"
                          "msg.get_header()._size = hdr._size;\n"
                          "msg.get_header()._timestamp = hdr._timestamp;\n"
                          "msg.get_header()._src = hdr._src;\n"
                          "msg.get_header()._src_ent = hdr._src_ent;\n"
                          "msg.get_header()._dst = hdr._dst;\n"
                          "msg.get_header()._dst_ent = hdr._dst_ent;\n"
                          "Option::Some(msg)\n")

    f.append(fn_buildfrom)

    fn_arg = utils.Var(name='hdr', xtype='Header')
    fn_build = utils.Function(name='build', rett='Option<Box<dyn Message>>', args=[fn_arg], private=False)
    fn_build.add_body("let ret = buildFromId(hdr._mgid);\n"
                      "if ret.is_none() {\n"
                      "return ret;\n"
                      "}\n\n"
                      "let mut msg = ret.unwrap();\n"
                      "msg.get_header()._dst = hdr._dst;\n"
                      "msg.get_header()._size = hdr._size;\n"
                      "msg.get_header()._sync = hdr._sync;\n"
                      "msg.get_header()._src = hdr._src;\n"
                      "msg.get_header()._dst_ent = hdr._dst_ent;\n"
                      "msg.get_header()._src_ent = hdr._src_ent;\n"
                      "msg.get_header()._timestamp = hdr._timestamp;\n\n"
                      "return Option::from(msg);\n")

    f.append(fn_build)

    fn_arg = utils.Var(name='id', xtype='u16')
    fn_buildfid = utils.Function(name='buildFromId', rett='Option<Box<dyn Message>>', args=[fn_arg], private=False)
    fn_buildfid.add_body("match id {\n")

    for msg in root.findall('message'):
        mid = msg.get('id')
        abbrev = msg.get('abbrev')
        fn_buildfid.add_body(mid + ' => ' + 'Option::Some(Box::new(' + abbrev + "::" + abbrev + "::new())),")

    fn_buildfid.add_body("_ => Option::None,")
    fn_buildfid.add_body("}\n")

    f.append(fn_buildfid)

    f.write()


def main(xml, out_folder, no_base, force):
    xml_md5 = utils.compute_md5(xml)
    dest_folder = out_folder

    # Parse XML specification.
    tree = Et.parse(xml)
    root = tree.getroot()

    # Initialize constant values.
    sync = root.find("header/field/[@fixed='true']").get('value')
    consts = {'git_info': get_git_info(xml),
              'md5': xml_md5,
              'sync': sync,
              'sync_rev': sync[0:2] + sync[4:6] + sync[2:4],
              'version': root.get('version').strip(),
              'fixed_types': {},
              'variable_types': {},
              'sizes': {},
              'footer_size': 0,
              'header_size': 0,
              }

    for t in root.findall('types/type'):
        min_size = int(t.get('size', 0))
        # Variable size types use at least 2 bytes when serialized.
        if min_size == 0:
            min_size = 0
            consts['variable_types'][t.get('name')] = True
        else:
            consts['fixed_types'][t.get('name')] = True
        consts['sizes'][t.get('name')] = min_size

    # Header size.
    for f in root.findall("header/field"):
        consts['header_size'] += consts['sizes'][f.get('type')]

    # Footer size.
    consts['footer_size'] = 0
    for f in root.findall('footer/field'):
        consts['footer_size'] += consts['sizes'][f.get('type')]

    deps = utils.Dependencies(root)
    abbrevs = deps.get_list()

    gen_lib_file(consts, dest_folder, root, abbrevs, xml_md5)
    gen_header_file(root, xml_md5, dest_folder, 'Header.rs')
    gen_message_files(consts, dest_folder, root, abbrevs, xml_md5)
    gen_factory_file(dest_folder, root, xml_md5)
    # if not no_base:
    #     base.install(base_folder)

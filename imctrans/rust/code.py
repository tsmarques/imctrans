# -*- coding: utf-8 -*-
############################################################################
# Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             #
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
# Author: Ricardo Martins                                                  #
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
            s.add_field(utils.StructField(field.get('abbrev'),
                                          utils.get_rust_types(root, field),
                                          field.get('name'),
                                          utils.get_field_initial_value(root, field)))

        functions = []

        # base constructor
        fn_new = utils.Function('new', rett=node.get('abbrev'))
        fn_new.where("Self: Sized")
        constructor_body = 'let msg = ' + node.get('abbrev') + ' {\n'
        constructor_body += ',\n'.join(s.get_default_initialization()) + '\n'
        constructor_body += '};\n\n'
        constructor_body += 'msg'
        fn_new.add_body(constructor_body)

        # static id
        fn_stid = utils.Function(name='static_id', rett='u16', inline=True)
        fn_stid.where("Self: Sized")
        fn_stid.add_body(node.get('id'))

        # id
        fn_id = utils.Function(name='id', is_method=True, const=True, rett='u16', inline=True)
        fn_id.where("Self: Sized")
        fn_id.add_body(node.get('id'))

        # Get header
        fn_get_hdr = utils.Function(name='get_header', is_method=True, const=False, rett='&mut Header')
        fn_get_hdr.body("&mut self._header")

        # clear
        fn_clear = utils.Function(name='clear', is_method=True, const=False)
        fn_clear.body(';\n'.join('self.' + f for f in s.get_reset()) + '\n')

        # Get fixed serialization size
        fn_fixed_sersize = utils.Function('fixed_serialization_size', is_method=True, rett='usize', inline=True)
        fn_fixed_sersize.body(str(self.get_fixed_size()))

        fn_var_sersize = utils.Function('dynamic_serialization_size', is_method=True, rett='usize', inline=True)
        var_size = self.get_variable_size()
        if len(var_size) != 0:
            fn_var_sersize.body('let mut dyn_size :usize = 0;\n' +
                                var_size + ';\n\n' +
                                'dyn_size')
        else:
            fn_var_sersize.body('0\n')

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

        functions.append(fn_new)
        functions.append(fn_stid)
        functions.append(fn_id)
        functions.append(fn_get_hdr)
        functions.append(fn_clear)
        functions.append(fn_fixed_sersize)
        functions.append(fn_var_sersize)
        functions.append(fn_serialize)
        functions.append(fn_deserialize)

        rs.append(str(s))

        # start impl block
        rs.append("impl Message for " + node.get('abbrev') + ' {\n')
        for fn in functions:
            rs.append(fn)

        # end of impl block
        rs.append("}\n")

        # public = []
        # protected = []
        #
        # # getIdStatic()
        # f = utils.Function('getIdStatic', 'uint16_t', static=True, inline=True)
        # f.body('return %s;' % node.get('id'))
        # public.append(f)
        #
        # # cast()
        # f = utils.Function('cast', '%s*' % node.get('abbrev'), [utils.Var('msg__', 'Message*')], static=True,
        #                    inline=True)
        # f.body('return (%s*)msg__;' % node.get('abbrev'))
        # public.append(f)
        #
        # # Constructor.
        # f = utils.Function(node.get('abbrev'), inline=True)
        # f.add_body('m_header.mgid = %s::getIdStatic();' % node.get('abbrev'))
        # f.add_body('clear();')
        # for field in node.findall("field[@type='message']"):
        #     f.add_body(utils.get_name(field) + '.setParent(this);')
        # for field in node.findall("field[@type='message-list']"):
        #     f.add_body(utils.get_name(field) + '.setParent(this);')
        # public.append(f)
        #
        # # clone()
        # f = utils.Function('clone', '%(abbrev)s*' % node.attrib, inline=True)
        # f.body('return new %(abbrev)s(*this);' % node.attrib)
        # public.append(f)
        #
        # # clear()
        # f = utils.Function('clear', 'void', inline=True)
        # f.body('\n'.join([utils.get_clear(field) for field in node.findall('field')]))
        # public.append(f)
        #
        # # fieldsEqual()
        # if self.has_fields():
        #     f = utils.Function('fieldsEqual', 'bool', [utils.Var('msg__', 'const Message&')], inline=True)
        #     f.add_body('const IMC::' + node.get('abbrev') + '& other__ = static_cast<const ' + node.get(
        #         'abbrev') + '&>(msg__);')
        #     f.add_body('\n'.join([utils.get_not_equal(field) for field in node.findall('field')]))
        #     f.add_body('return true;')
        #     public.append(f)
        #
        # # serializeFields()
        # f = utils.Function('serializeFields', 'uint8_t*', [utils.Var('bfr__', 'uint8_t*')], inline=True)
        # if self.has_fields():
        #     f.add_body('uint8_t* ptr__ = bfr__;')
        #     for field in node.findall('field'):
        #         if field.get('type').startswith('message'):
        #             f.add_body('ptr__ += %s.serialize(ptr__);' % utils.get_name(field))
        #         else:
        #             f.add_body('ptr__ += IMC::serialize(%s, ptr__);' % utils.get_name(field))
        #     f.add_body('return ptr__;')
        # else:
        #     f.add_body('return bfr__;')
        # public.append(f)
        #
        # # deserializeFields()
        # f = utils.Function('deserializeFields', 'size_t',
        #                    [utils.Var('bfr__', 'const uint8_t*'), utils.Var('size__', 'size_t')], inline=True)
        # if self.has_fields():
        #     f.add_body('const uint8_t* start__ = bfr__;')
        #     for field in node.findall('field'):
        #         if field.get('type').startswith('message'):
        #             f.add_body('bfr__ += %s.deserialize(bfr__, size__);' % utils.get_name(field))
        #         else:
        #             f.add_body('bfr__ += IMC::deserialize(%s, bfr__, size__);' % utils.get_name(field))
        #     f.add_body('return bfr__ - start__;')
        # else:
        #     f.add_body('(void)bfr__;\n(void)size__;')
        #     f.add_body('return 0;')
        # public.append(f)
        #
        # # reverseDeserializeFields()
        # f = utils.Function('reverseDeserializeFields', 'size_t',
        #                    [utils.Var('bfr__', 'const uint8_t*'), utils.Var('size__', 'size_t')], inline=True)
        # if self.has_fields():
        #     f.add_body('const uint8_t* start__ = bfr__;')
        #     for field in node.findall('field'):
        #         if consts['sizes'][field.get('type')] == 1:
        #             f.add_body('bfr__ += IMC::deserialize({0}, bfr__, size__);'.format(utils.get_name(field)))
        #         elif field.get('type').startswith('message'):
        #             f.add_body('bfr__ += %s.reverseDeserialize(bfr__, size__);' % utils.get_name(field))
        #         else:
        #             f.add_body('bfr__ += IMC::reverseDeserialize(%s, bfr__, size__);' % utils.get_name(field))
        #     f.add_body('return bfr__ - start__;')
        # else:
        #     f.add_body('(void)bfr__;\n(void)size__;')
        #     f.add_body('return 0;')
        # public.append(f)
        #
        # # getId()
        # f = utils.Function('getId', 'uint16_t', inline=True)
        # f.body('return %(abbrev)s::getIdStatic();' % node.attrib)
        # public.append(f)
        #
        # # getName()
        # f = utils.Function('getName', 'const char*', inline=True)
        # f.body('return "%(abbrev)s";' % node.attrib)
        # public.append(f)
        #
        # # getFixedSerializationSize()
        # f = utils.Function('getFixedSerializationSize', 'size_t', inline=True)
        # f.body('return ' + str(self.get_fixed_size()) + ';')
        # public.append(f)
        #
        # # getVariableSerializationSize()
        # var_size = str(self.get_variable_size())
        # if var_size != '':
        #     f = utils.Function('getVariableSerializationSize', 'size_t', inline=True)
        #     f.body('return ' + var_size + ';')
        #     public.append(f)
        #
        # subid = node.find("field/[@abbrev='id']")
        # if subid is not None and subid.get('type') in consts['fixed_types']:
        #     # getSubId()
        #     f = utils.Function('getSubId', 'uint16_t', inline=True)
        #     f.body('return id;')
        #     public.append(f)
        #
        #     # setSubId()
        #     f = utils.Function('setSubId', 'void', [utils.Var('subid', 'uint16_t')], inline=True)
        #     f.body('id = ({0})subid;'.format(subid.get('type')))
        #     public.append(f)
        #
        # value = node.find("field/[@abbrev='value']")
        # if value is not None and value.get('type') in consts['fixed_types']:
        #     is_double = utils.get_rust_types(root, value) == 'double'
        #     # getValueFP()
        #     f = utils.Function('getValueFP', 'double', inline=True)
        #     if is_double:
        #         f.body('return value;')
        #     else:
        #         f.body('return static_cast<double>(value);')
        #     public.append(f)
        #
        #     # setValueFP()
        #     f = utils.Function('setValueFP', 'void', [utils.Var('val', 'double')], inline=True)
        #     if is_double:
        #         f.body('value = val;')
        #     else:
        #         f.body('value = static_cast<{0}>(val);'.format(utils.get_rust_types(root, value)))
        #     public.append(f)
        #
        # valid_numeric_types = ['int8_t', 'uint8_t', 'int16_t', 'uint16_t',
        #                        'int32_t', 'uint32_t', 'int64_t', 'uint64_t',
        #                        'fp32_t', 'fp64_t']
        # units_bitfield = ['Bitfield', ]
        # units_enum = ['Enumerated', ]
        #
        # # getFlatNumericsMap
        # f = utils.Function('getFlatNumericsMap', 'std::map<std::string, double>', inline=True)
        # f.add_body('std::map<std::string, double> output;')
        # if self.has_fields():
        #     for field in node.findall('field'):
        #         if field.get('unit') in units_bitfield + units_enum:
        #             continue
        #
        #         if field.get('type') in valid_numeric_types:
        #             f.add_body('output.insert(std::pair<std::string, double>'
        #                        '("{abbrev}", static_cast<double>({abbrev_lowercase})));'
        #                        .format(abbrev=field.get('abbrev'), abbrev_lowercase=field.get('abbrev').lower()))
        #
        # f.add_body('return output;\n')
        # f.add_body('')
        # public.append(f)
        #
        # # fieldsToJSON()
        # if self.has_fields():
        #     f = utils.Function('fieldsToJSON', 'void',
        #                        [utils.Var('os__', 'std::ostream&'), utils.Var('nindent__', 'unsigned')],
        #                        inline=True)
        #     f.add_body(self.fields_to_json())
        #     public.append(f)
        #
        # # Nested functions.
        # if self.count_nested() > 0:
        #     funcs = [('TimeStamp', 'double'), ('Source', 'uint16_t'),
        #              ('SourceEntity', 'uint8_t'), ('Destination', 'uint16_t'),
        #              ('DestinationEntity', 'uint8_t')]
        #     for func in funcs:
        #         f = utils.Function('set' + func[0] + 'Nested', 'void', [utils.Var('value__', func[1])], inline=True)
        #         for field in node.findall("field[@type='message']"):
        #             f.add_body(
        #                 utils.call_inline_message_function(utils.get_name(field), 'set' + func[0], 'value__'))
        #         for field in node.findall("field[@type='message-list']"):
        #             f.add_body(
        #                 utils.call_message_list_function(utils.get_name(field), 'set' + func[0], 'value__'))
        #         protected.append(f)
        #
        # # HPP.
        # base_classes = []
        # for group in root.findall('message-groups/message-group'):
        #     if group.find("message-type[@abbrev='%s']" % node.get('abbrev')) is not None:
        #         base_classes.append(group.get('abbrev'))
        # if len(base_classes) == 0:
        #     base_classes.append('Message')
        # hpp.append(utils.comment(node.get('name'), nl=''))
        #
        # hpp.append('class %s: public %s' % (node.get('abbrev'), ', '.join(base_classes)))
        # hpp.append('{')
        # hpp.append('public:')
        #
        # # Process inline enumerations.
        # iens = node.findall("field[@unit='Enumerated']")
        # for ien in iens:
        #     if ien.get('enum-def', None) is not None:
        #         continue
        #     enum = utils.Enum(utils.get_enum_name(ien.get('name')), ien.get('name'))
        #     for field in ien.findall('value'):
        #         name = ien.get('prefix') + '_' + field.get('abbrev')
        #         enum.add_field(utils.EnumField(name, field.get('id'), field.get('name')))
        #     hpp.append(enum)
        #
        # # Process inline bitfields.
        # bfs = node.findall("field[@unit='Bitfield']")
        # for bf in bfs:
        #     if bf.get('bitfield-def', None) is not None:
        #         continue
        #     enum = utils.Enum(utils.get_bfield_name(bf.get('name')), bf.get('name'))
        #     for field in bf.findall('value'):
        #         name = bf.get('prefix') + '_' + field.get('abbrev')
        #         enum.add_field(utils.EnumField(name, field.get('id'), field.get('name')))
        #     hpp.append(enum)
        #
        # for f in node.findall('field'):
        #     v = utils.Var(utils.get_name(f), utils.get_rust_types(root, f), desc=f.get('name'))
        #     hpp.append(v.as_decl())
        # hpp.append('')
        #
        # for func in public:
        #     if func.is_inline():
        #         hpp.append(func)
        #     else:
        #         hpp.append(func.decl())
        #
        # if len(protected) > 0:
        #     hpp.append('protected:')
        #     for func in protected:
        #         if func.is_inline():
        #             hpp.append(func)
        #         else:
        #             hpp.append(func.decl())
        #
        # hpp.append('};\n')

    def fields_to_json(self):
        lines = []
        for field in self._node.findall('field'):
            if field.get('type').startswith('message'):
                lines.append('{0}.toJSON(os__, "{0}", nindent__);'.format(utils.get_name(field)))
            else:
                lines.append('IMC::toJSON(os__, "{0}", {0}, nindent__);'.format(utils.get_name(field)))
        return '\n'.join(lines)

    def get_fixed_size(self):
        size = 0
        for field in self._node.findall('field'):
            size += self._consts['sizes'][field.get('type')]
        return size

    def get_variable_size(self):
        size = []
        for field in self._node.findall('field'):
            xtype = field.get('type')
            abbrev = utils.get_name(field)
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
                ret.append(utils.get_name(field))
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


def gen_factory_file(root, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder, ns=False, md5=xml_md5)
    for msg in root.findall('message'):
        f.append('MESSAGE(%s, %s, \"%s\")' % (msg.get('id'), msg.get('abbrev'), utils.xml_node_md5(msg)))
    f.append('#undef MESSAGE')
    f.write()


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


def gen_constants_file(consts, xml_md5, specs_folder, fname):
    f = utils.File(fname, specs_folder, ns=False, md5=xml_md5)
    f.append(utils.Macro('CONST_VERSION', '"%(version)s"' % consts, 'IMC version string'))
    f.append(utils.Macro('CONST_GIT_INFO', '"%(git_info)s"' % consts, 'Git repository information'))
    f.append(utils.Macro('CONST_MD5', '"%(md5)s"' % consts, 'MD5 sum of XML specification file'))
    f.append(utils.Macro('CONST_SYNC', consts['sync'], 'Synchronization number'))
    f.append(utils.Macro('CONST_SYNC_REV', consts['sync_rev'], 'Reversed synchronization number'))
    f.append(utils.Macro('CONST_HEADER_SIZE', consts['header_size'], 'Size of the header in bytes'))
    f.append(utils.Macro('CONST_FOOTER_SIZE', consts['footer_size'], 'Size of the footer in bytes'))
    f.write()


def gen_bitfields_file(root, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder, ns=True, md5=xml_md5)
    ens = root.findall('bitfields/def')
    for en in ens:
        enum = utils.Enum(en.get('abbrev'), en.get('name'))
        for field in en.findall('value'):
            name = en.get('prefix') + '_' + field.get('abbrev')
            enum.add_field(utils.EnumField(name, field.get('id'), field.get('name')))
        f.append(enum)
    f.write()


def gen_enumerations_file(root, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder, ns=True, md5=xml_md5)
    ens = root.findall('enumerations/def')
    for en in ens:
        enum = utils.Enum(en.get('abbrev'), en.get('name'))
        for field in en.findall('value'):
            name = en.get('prefix') + '_' + field.get('abbrev')
            enum.add_field(utils.EnumField(name, field.get('id'), field.get('name')))
        f.append(enum)
    f.write()


def gen_super_type_files(root, xml_md5, dest_folder):
    for group in root.findall("message-groups/message-group"):
        name = group.get('name')
        abbrev = group.get('abbrev')
        f = utils.File("%s.hpp" % abbrev, dest_folder, ns=True, md5=xml_md5)
        f.add_imc_headers('%s/Message.hpp' % utils.BASE_FOLDER)
        f.append(utils.comment("Super type %s" % name, nl=''))
        f.append("class %s: public Message\n" % abbrev)
        f.append('{ };\n')
        f.write()


def gen_macros_file(root, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder, ns=False, md5=xml_md5)
    for msg in root.findall('message'):
        macro = msg.get('abbrev').upper()
        f.append(utils.Macro(macro, '(%s)' % msg.get('id'), '%s Identifier' % msg.get('name')))
    f.write()


def gen_all_messages_file(abbrevs, xml_md5, dest_folder, fname):
    f = utils.File(fname, dest_folder, ns=False, md5=xml_md5)
    for abbrev in abbrevs:
        f.append("#include <IMC/%s/%s.hpp>" % (utils.SPEC_FOLDER, abbrev))
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
    #
    # gen_super_type_files(root, xml_md5, dest_folder)
    # gen_all_messages_file(abbrevs, xml_md5, dest_folder, 'AllMessages.hpp')
    # gen_enumerations_file(root, xml_md5, dest_folder, 'Enumerations.hpp')
    # gen_bitfields_file(root, xml_md5, dest_folder, 'Bitfields.hpp')
    # gen_constants_file(consts, xml_md5, dest_folder, 'Constants.hpp')
    # gen_factory_file(root, xml_md5, dest_folder, 'Factory.xdef')
    # gen_macros_file(root, xml_md5, dest_folder, 'Macros.hpp')
    # blob.create_imc_blob(xml, dest_folder, 'Blob.hpp', force)
    #
    # if not no_base:
    #     base.install(base_folder)

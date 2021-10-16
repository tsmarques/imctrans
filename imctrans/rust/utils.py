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

import hashlib
import os.path
from xml.dom.minidom import Node, parseString
from xml.etree import ElementTree as Et

BASE_FOLDER = 'Base'
SPEC_FOLDER = 'Spec'


def get_enum_name(name):
    """ Sanitize the name of enumerations."""
    return name.replace(' ', '') + 'Enum'


def get_bfield_name(name):
    """Sanitize the name of bitfields."""
    return name.replace(' ', '') + 'Bits'


def get_name(node):
    """Retrieve the name of a field."""
    return node.get('abbrev').lower()


def comment(text, dox=True, nl='\n'):
    """Convert text to C++ comment."""
    c = ''
    if dox:
        c = '/'
    return '//' + c + ' ' + text + '.' + nl


def get_rust_copyright(xml_md5, skip_md5=False):
    """Extract copyright from this script and convert it to a format suitable to be used in C++ files."""

    fd = open(os.path.abspath(__file__).replace('.pyc', '.py'))
    result = []
    header = False
    for line in fd.readlines():
        line = line.strip()
        if len(line) == 0:
            break
        if line.startswith('##') and not header:
            header = True
            result.append(line)
        elif header:
            result.append(line)

    result = [l[1:] for l in result]
    result = ['//' + l for l in result]
    result.append('// Automatically generated.'.ljust(len(result[0]) - 1) + '*')
    result.append(result[0])
    if not skip_md5:
        result.append(('// IMC XML MD5: ' + xml_md5).ljust(len(result[0]) - 1) + '*')
        result.append(result[0])

    result.append("\n/// Author: Tiago Sá Marques <tmarques@oceanscan-mst.com>")
    return '\n'.join(result) + '\n'


def beautify(text):
    """Cleanup and indent source file."""
    indent = 0
    blank = False
    list0 = []

    # Remove extra empty lines and indent.
    lines = text.splitlines()
    for line in lines:
        strip = line.strip()
        if len(strip) == 0:
            if blank:
                continue
            else:
                blank = True
                list0.append('')
                continue
        else:
            blank = False

        if strip == '};' and len(list0[-1]) == 0:
            list0.pop()

        if strip == '{':
            list0.append(' ' * indent + strip)
            indent += 2
        elif strip == '}' or strip == '};':
            indent -= 2
            list0.append(' ' * indent + strip)
        elif strip == 'public:' or strip == 'protected:' or strip == 'public:':
            list0.append(' ' * (indent - 2) + strip)
        else:
            list0.append(' ' * indent + strip)

    # Remove empty lines between blocks.
    list1 = []
    for line in list0:
        strip = line.strip()
        if (strip == '}' or strip == '};') and len(list1[-1]) == 0:
            list1.pop()
        list1.append(line)

    # Remove extra empty lines at EOF.
    while len(list1[-1]) == 0:
        list1.pop()

    return '\n'.join(list1) + '\n'


def abbrev_to_var(abbrev, prefix=''):
    """Convert camel case abbrev to proper variable name."""
    name = ''
    for c in abbrev:
        if c.isupper():
            name += '_' + c
        else:
            name += c

    if prefix == '':
        return name
    else:
        return prefix + '_' + name[1:].lower()


def abbrev_to_macro(abbrev, prefix=''):
    """Convert camel case abbrev to proper macro name."""
    name = ''
    for c in abbrev:
        if c.isupper():
            name += '_' + c
        else:
            name += c

    if prefix == '':
        return name
    else:
        return prefix + '_' + name[1:].upper()


def compute_md5(imc_xml):
    """Compute MD5 sum."""
    m = hashlib.md5()
    m.update(open(imc_xml, 'rb').read())
    return m.hexdigest()


def file_md5_matches(file_name, xml_md5):
    try:
        with open(file_name, 'r') as fd:
            cpp_md5 = ''
            for line in fd:
                if line.strip().startswith('// IMC XML MD5:'):
                    parts = line.split(':')
                    cpp_md5 = parts[1].split()
                    cpp_md5 = cpp_md5[0]

            return xml_md5 == cpp_md5
    except IOError:
        return False


def get_first_level_deps(root, abbrev):
    msg = root.find("message[@abbrev='%s']" % abbrev)

    if msg is None:
        return []

    return [field.get('message-type') for field in msg.findall('field[@message-type]')]


def get_msg_groups(root, abbrev):
    groups = root.findall("message-groups/message-group")
    for group in groups:
        type_id = group.find('message-type[@abbrev="%s"]' % abbrev)
        if type_id is not None:
            return [group.get('abbrev')]

    return []


def get_rust_types(root, field_node):
    """Retrieve the Rust type of a message field node"""
    xtype = field_node.get('type')
    msg_type = field_node.get('message-type', 'Message')
    if xtype == 'plaintext':
        return 'String'
    elif xtype == 'rawdata':
        return 'Vec<u8>'
    elif xtype == 'message':
        if len(get_msg_groups(root, msg_type)) == 0:
            return 'Option<Box<%s>>' % msg_type
        else:
            return 'Option<Box<dyn Message>>'
    elif xtype == 'message-list':
        if len(get_msg_groups(root, msg_type)) == 0:
            return 'MessageList<Box<%s>>' % msg_type
        else:
            return 'MessageList<Box<dyn Message>>'
    elif xtype == 'fp64_t':
        return 'f64'
    elif xtype == 'fp32_t':
        return 'f32'
    elif xtype == 'uint8_t':
        return 'u8'
    elif xtype == "uint16_t":
        return 'u16'
    elif xtype == 'uint32_t':
        return 'u32'
    elif xtype == 'uint64_t':
        return 'u64'
    elif xtype == 'int8_t':
        return 'i8'
    elif xtype == "int16_t":
        return 'i16'
    elif xtype == 'int32_t':
        return 'i32'
    elif xtype == 'int64_t':
        return 'i64'
    else:
        return xtype


def get_field_initial_value(root, field_node):
    """Retrieve the initial value of a message field node"""
    dvalue = field_node.get('value')
    if dvalue is None:
        return "Default::default()"

    return dvalue + '_' + get_rust_types(root, field_node)


def is_fixed(field_node):
    t = field_node.get('type')
    if t == 'message':
        return False
    elif t == 'plaintext':
        return False
    elif t == 'rawdata':
        return False
    elif t == 'message-list':
        return False
    return True


def get_clear(field_node):
    rv = get_name(field_node)
    if is_fixed(field_node):
        rv += ' = 0'
    else:
        rv += '.clear()'
    return rv + ';'


def get_not_equal(field_node):
    name = get_name(field_node)
    return 'if ({0} != other__.{0}) return false;'.format(name)


def get_field_names(message):
    return [get_name(field) for field in message.findall('field')]


def call_inline_message_function(name, func, args):
    return 'if (!' + name + '.isNull())\n{\n' + \
           name + '.get()->' + func + '(' + args + ');\n' + \
           '}\n'


def call_message_list_function(name, func, args):
    return name + '.' + func + '(' + args + ');\n'


class Macro:
    def __init__(self, name, value, desc):
        self._data = {'name': 'IMC_' + name, 'value': value, 'desc': desc}

    def __str__(self):
        return comment(self._data['desc']) + \
               '#define %(name)s %(value)s' % self._data


class Var:
    def __init__(self, name, xtype, desc=''):
        self._data = {'name': name, 'type': xtype, 'desc': desc}

    def as_func_arg(self):
        return '%(name)s :%(type)s' % self._data

    def as_decl(self):
        return comment(self._data['desc']) + \
               'let %(name)s :%(type)s;' % self._data

    def __str__(self):
        return '%(name)s :%(type)s ' % self._data


class StructField:
    def __init__(self, name, xtype, desc, defvalue):
        if defvalue is None:
            default_value = "default::Default()"
        else:
            default_value = defvalue
        self._data = {'name': name, 'type': xtype, 'desc': desc, 'default': default_value}

    def __str__(self):
        return comment(self._data['desc']) + \
               'pub _%(name)s: %(type)s' % self._data

    def as_field_initialization(self):
        return '_%(name)s: %(default)s' % self._data

    def as_reset(self):
        return '_%(name)s = %(default)s' % self._data


class Struct:
    def __init__(self, name, desc):
        self._name = name
        self._desc = desc
        self._fields = []
        self._properties = []

    def add_field(self, field):
        self._fields.append(field)

    def add_property(self, prop):
        self._properties.append(prop)

    def get_default_initialization(self):
        ret = []
        for field in self._fields:
            ret.append(field.as_field_initialization())

        return ret

    def get_reset(self):
        ret = []
        for field in self._fields:
            ret.append(field.as_reset())

        return ret

    def __str__(self):
        out = comment(self._desc)
        out += '\n'.join([f for f in self._properties]) + '\n'
        out += 'pub struct ' + self._name + '\n'
        out += '{\n'
        out += ',\n'.join([str(f) for f in self._fields]) + ',\n'
        out += '}\n'
        return out


class EnumField:
    def __init__(self, name, value, desc):
        self._data = {'name': name, 'value': value, 'desc': desc}

    def __str__(self):
        if self._data['value'] == '':
            return comment(self._data['desc']) + '%(name)s' % self._data
        return comment(self._data['desc']) + '%(name)s = %(value)s' % self._data


class Enum:
    def __init__(self, name, desc):
        self._name = name
        self._desc = desc
        self._fields = []
        self._properties = []

    def add_field(self, field):
        self._fields.append(field)

    def add_property(self, prop):
        self._properties.append(prop)

    def __str__(self):
        out = comment(self._desc)
        out += '\n'.join([p for p in self._properties]) + '\n'
        out += 'pub enum ' + self._name + ' '
        out += '{\n'
        out += ',\n'.join([str(f) for f in self._fields]) + '\n'
        out += '}\n'
        return out


class BitfieldField:
    def __init__(self, name, value, desc, ftype):
        self._data = {'name': name, 'value': value, 'desc': desc, 'type': ftype}

    def __str__(self):
        if self._data['value'] == '':
            return comment(self._data['desc']) + '%(name)s' % self._data
        return comment(self._data['desc']) + \
               'pub const %(name)s :%(type)s = %(value)s' % self._data


class Bitfield:
    def __init__(self, name, desc):
        self._name = name
        self._desc = desc
        self._fields = []
        self._properties = []

    def add_field(self, field):
        self._fields.append(field)

    def add_property(self, prop):
        self._properties.append(prop)

    def __str__(self):
        out = comment(self._desc)
        out += '\n'.join([p for p in self._properties]) + '\n'
        out += 'pub mod ' + self._name + ' '
        out += '{\n'
        out += ';\n'.join([str(f) for f in self._fields]) + ';\n'
        out += '}\n'
        return out


class Function:
    def __init__(self, name, is_method=False, const=True, rett=None, args=None, inline=False, static=False,
                 private=True, crate_public=False):
        self._data = {}
        self._name = name
        self._is_method = is_method
        self._const = const
        self._rett = rett
        self._args = args
        self._inline = inline
        self._body = ''
        self._class = None
        self._static = static
        self._private = private
        self._crate_public = crate_public
        self._args_str = ''

        if self._is_method and self._const:
            self._args_str = '&mut self, '
        elif self._is_method:
            self._args_str = '&self, '

        if self._args is not None:
            self._args_str += ', '.join([v.as_func_arg() for v in self._args])

    def is_inline(self):
        return self._inline

    def body(self, text):
        self._body = text

    def add_body(self, text):
        self._body += text + '\n'

    def decl(self):
        out = ''

        if self._static:
            out += 'static '

        if self._rett is not None:
            out += self._rett + '\n'

        return out + self._name + '(' + self._args_str + ')' + ';\n'

    def __str__(self):
        out = ''

        if self._inline:
            out += '#[inline(always)]\n'

        if self._static:
            out += 'static '

        if self._private:
            out += "fn "
        elif self._crate_public:
            out += "pub(crate) fn "
        else:
            out += "pub fn "

        if self._rett is not None:
            rett_str = " -> " + self._rett
        else:
            rett_str = ''

        return out + self._name + '(' + self._args_str + ')' + rett_str + ' {\n' + self._body + '\n}\n'


class Dependencies:
    def __init__(self, root):
        self._root = root
        self._abbrevs = []

    def append(self, abbrev):
        if abbrev in self._abbrevs:
            return
        self._abbrevs.append(abbrev)

    def get_deps(self, abbrev):
        msg = self._root.find("message[@abbrev='%s']" % abbrev)

        if msg is None:
            return

        if msg.get('abbrev') in self._abbrevs:
            return

        types = [field.get('message-type') for field in msg.findall('field[@message-type]')]
        for xtype in types:
            if xtype not in self._abbrevs:
                self.get_deps(xtype)

        self.append(abbrev)

    def get_list(self):
        for msg in self._root.findall('message'):
            self.get_deps(msg.get('abbrev'))
        return self._abbrevs


class File:
    def __init__(self, name, folder, ns, stdout=False, md5=None, skip_md5=False):
        self.path = os.path.join(folder, name)
        self.path_file = os.path.split(self.path)[1]
        self.path_ext = os.path.splitext(self.path)[1]
        self.name = os.path.splitext(self.path_file)[0]
        self._macros = []
        self.custom_types = {}
        self.imc_mods = []
        self.rust_hdrs = []
        self.imc_hdrs = []
        self.local_hdrs = []
        # (abbrev, type, value)
        self.consts = []
        self.text = ''
        self._ns = ns
        self._stdout = stdout
        self._skip_md5 = skip_md5
        if md5 is None:
            self.md5 = 'unknown'
        else:
            self.md5 = md5

        # if len(folder) > 0:
        #     os.makedirs(folder, exist_ok=True)

    def append(self, text):
        self.text += str(text) + '\n'

    def add_const_variable(self, abbrev, vtype, value):
        self.text += "pub const " + abbrev + ": " + vtype + " = " + str(value) + ";\n"

    def add_custom_type(self, from_type, to_type):
        self.custom_types[from_type] = to_type

    def add_rust_header(self, header):
        self.rust_hdrs.append(header)

    def add_imc_mod(self, mod):
        self.imc_mods.append(mod)

    def add_imc_headers(self, *headers):
        self.imc_hdrs += ['IMC/' + h for h in headers]

    def add_imc_header(self, header):
        self.imc_hdrs.append('IMC/' + header)

    def add_local_headers(self, *headers):
        self.local_hdrs += headers

    def add_local_header(self, header):
        self.local_hdrs.append(header)

    def add_macro(self, macro):
        self._macros.append(macro)

    def write(self):
        print('* ' + self.path)
        text = ''

        # needs to come first or rustc complains
        for macro in self._macros:
            text += str(macro) + "\n"

        text += '\n' + get_rust_copyright(self.md5, self._skip_md5) + '\n'

        for k, v in self.custom_types.items():
            text += "pub type " + k + " = " + v + ";\n"

        text += '\n'

        for imc_mod in self.imc_mods:
            text += "pub mod " + imc_mod + ';\n'

        if len(self.rust_hdrs) > 0:
            for hdr in self.rust_hdrs:
                type(hdr)
                text += "use " + hdr + ";\n"
            text += '\n'

        if len(self.imc_hdrs) > 0:
            for hdr in self.imc_hdrs:
                text += 'use crate:: ' + hdr + ';\n'
            text += '\n'

        if self._ns:
            text += 'pub mod imc {\n'

        text += self.text

        if self._ns:
            text += '}\n'

        text += '\n'

        if self._stdout:
            import sys
            sys.stdout.write(text)
            return

        fd = open(self.path, 'w')
        fd.write(text)
        fd.close()


def xml_node_remove_blanks(xml_node):
    for x in xml_node.childNodes:
        if x.nodeType == Node.TEXT_NODE:
            if x.nodeValue:
                x.nodeValue = x.nodeValue.strip()
        elif x.nodeType == Node.ELEMENT_NODE:
            xml_node_remove_blanks(x)


def xml_node_md5(xml_node):
    xml = Et.tostring(xml_node, encoding='utf-8')
    node = parseString(xml)
    xml_node_remove_blanks(node)
    node.normalize()
    text = node.toprettyxml(indent='', newl='', encoding="utf-8")
    m = hashlib.md5()
    m.update(text)
    return m.hexdigest()

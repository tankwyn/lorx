# -*- encoding: utf-8 -*-

# note:
# This script use regex to parse headers.
# Pay attention to the correctness and integrity of the parsed results.
# As there might be problems as the Orx version evolves.


import os
import re
import collections

from gen.typemapping import typemap
from gen.verbose import *
from gen.cfg import fqlist, fslist, corinout, mblist, excon


# firsthand data produced when parsing
headers = None
efuncs0 = None
sfuncs0 = None
qstrcs0 = None
ostrcs0 = None
mfuncs0 = None
enums0 = None

# processed info from parsing results
flist = None # function list (static and extern)
otdict = None # open structs dict
qtdict = None # opaque structs dict
enums = None # enums dict
doxygen =None # doxygen dict


ORX_CODE_PATH = os.getenv("ORX").replace('"', '').replace('\\', '/').replace(' ', '\ ')
ORX_H_PATH = ORX_CODE_PATH + "/include"


# excluding headers
excluding_header_list = [
    # ignore top level headers
    ORX_H_PATH + "/orx.h",
    ORX_H_PATH + "/orxKernel.h",
    ORX_H_PATH + "/orxPluginAPI.h",
    ORX_H_PATH + "/orxUtils.h",
    ORX_H_PATH + "/orxInclude.h",

    # hardly useful on lua side, only include orxString.h
    ORX_H_PATH + "/utils/orxLinkList.h",
    ORX_H_PATH + "/utils/orxHashTable.h",
    ORX_H_PATH + "/utils/orxTree.h",

    ORX_H_PATH + "/main/orxParam.h",
    ORX_H_PATH + "/main/orxAndroid.h",
    ORX_H_PATH + "/memory",
    ORX_H_PATH + "/plugin",

    # ORX_H_PATH + "/base/orxDecl.h", 
    ORX_H_PATH + "/base/orxBuild.h",
    ORX_H_PATH + "/base/orxVersion.h",
]

# words that can be ignored when parsing a C signature
ignorable_words = [
    "orxINLINE",
    "orxIMPORT",
    "orxFASTCALL",
    "orxCDECL",
    "orxSTDCALL",
    "orxDLLEXPORT",
    "orxDLLIMPORT",
    "orxDLLAPI",
    "extern",
    "inline",
    "static",
    "__orxCPP__",
    "__orxEMBEDDED__",
    "__orxSTATIC__",
]


# macros that need to be pre-expanded
def _expand_orxJOYSTICK_DECLARE_BUTTON_ENUM(s):
    m = re.match(r'orxJOYSTICK_DECLARE_BUTTON_ENUM\((\d+)\)', s)
    if m:
        ID = m.groups()[0]
        enums = [
            "orxJOYSTICK_BUTTON_A_" + ID,                
            "orxJOYSTICK_BUTTON_B_" + ID,                
            "orxJOYSTICK_BUTTON_X_" + ID,                
            "orxJOYSTICK_BUTTON_Y_" + ID,                
            "orxJOYSTICK_BUTTON_LBUMPER_" + ID,          
            "orxJOYSTICK_BUTTON_RBUMPER_" + ID,          
            "orxJOYSTICK_BUTTON_BACK_" + ID,             
            "orxJOYSTICK_BUTTON_START_" + ID,            
            "orxJOYSTICK_BUTTON_GUIDE_" + ID,            
            "orxJOYSTICK_BUTTON_LTHUMB_" + ID,           
            "orxJOYSTICK_BUTTON_RTHUMB_" + ID,           
            "orxJOYSTICK_BUTTON_UP_" + ID,               
            "orxJOYSTICK_BUTTON_RIGHT_" + ID,            
            "orxJOYSTICK_BUTTON_DOWN_" + ID,             
            "orxJOYSTICK_BUTTON_LEFT_" + ID,             
            "orxJOYSTICK_BUTTON_1_" + ID,                
            "orxJOYSTICK_BUTTON_2_" + ID,                
            "orxJOYSTICK_BUTTON_3_" + ID,                
            "orxJOYSTICK_BUTTON_4_" + ID,                
            "orxJOYSTICK_BUTTON_5_" + ID,                
            "orxJOYSTICK_BUTTON_6_" + ID,                
            "orxJOYSTICK_BUTTON_7_" + ID,                
            "orxJOYSTICK_BUTTON_8_" + ID,                
            "orxJOYSTICK_BUTTON_9_" + ID,                
            "orxJOYSTICK_BUTTON_10_" + ID,               
            "orxJOYSTICK_BUTTON_11_" + ID,               
            "orxJOYSTICK_BUTTON_12_" + ID,               
            "orxJOYSTICK_BUTTON_13_" + ID,               
            "orxJOYSTICK_BUTTON_14_" + ID,               
            "orxJOYSTICK_BUTTON_15_" + ID,               
            "orxJOYSTICK_BUTTON_16_" + ID,               
            "orxJOYSTICK_BUTTON_17_" + ID,               
            "orxJOYSTICK_BUTTON_18_" + ID,               
            "orxJOYSTICK_BUTTON_19_" + ID,               
            "orxJOYSTICK_BUTTON_20_" + ID,               
            "orxJOYSTICK_BUTTON_21_" + ID,               
            "orxJOYSTICK_BUTTON_22_" + ID,               
            "orxJOYSTICK_BUTTON_23_" + ID,               
            "orxJOYSTICK_BUTTON_24_" + ID,               
            "orxJOYSTICK_BUTTON_25_" + ID
        ]
        return enums
    else:
        return None
def _expand_orxJOYSTICK_DECLARE_AXIS_ENUM(s):
    m = re.match(r'orxJOYSTICK_DECLARE_AXIS_ENUM\((\d+)\)', s)
    if m:
        ID = m.groups()[0]
        enums = [
            "orxJOYSTICK_AXIS_LX_" + ID,
            "orxJOYSTICK_AXIS_LY_" + ID,
            "orxJOYSTICK_AXIS_RX_" + ID,
            "orxJOYSTICK_AXIS_RY_" + ID,
            "orxJOYSTICK_AXIS_LTRIGGER_" + ID,
            "orxJOYSTICK_AXIS_RTRIGGER_" + ID
        ]
        return enums
    return None


def _findline(s, content):
    """find line number of line s in content"""

    m = re.search(re.escape(s), content)
    if m:
        r = content.count('\n', 0, m.start()) + 1
    else:
        r = -1
    return r


def _proc_type_name(ft, name, underscore=True):
    """process variable type and name"""

    # put all the pointer sign in type part
    while True:
        if name[0] == '*':
            name = name[1:].strip()
            ft = ft + '*'
        else:
            break

    # remove the space before '*'
    ft = _norm_ptr(ft)

    # [] -> @
    i = name.find('[')
    if i >= 0:
        j = name.rfind(']')
        alen = name[i+1:j]
        name = name[:i].strip()
        ft += '@' # sign for array
    else:
        alen = None
    del i

    # correct '*' to '@' if the variable name starts with '_a' (indicates an array rather than a common pointer)
    if underscore:
        x = '_a'
    else:
        x = 'a'

    # assume there is no 'array of array' case
    if name.startswith(x):
        if ft[-1] == '*':
            ft = ft[:-1] + '@'

    return ft, name, alen


def _index_headers(path):
    """find all headers"""

    ret = []
    for fn in os.listdir(path):
        sfp = path + "/" + fn
        if sfp in excluding_header_list:
            continue
        if os.path.isdir(sfp):
            ret += _index_headers(sfp)
        else:
            if os.path.splitext(fn)[-1] == '.h':
                ret.append(sfp)
    return ret


def _norm_ptr(s):
    """remove the space between type and '*'"""

    s = re.sub(r'\s+\*', '*', s)
    return s


def _parse_sig(rawstr, content):
    """parse the signature of a c function (must join to a single line first)"""

    # line number
    ln = _findline(rawstr, content)
    assert(ln > 0)
    
    # signature string
    sigstr = rawstr.replace('\r\n', '') # remove '\r\n'
    sigstr = rawstr.replace('\n', '') # remove '\n'
    if sigstr[-1] == ';':
        sigstr = sigstr[:-1] # remove ';' at the end

    # function name (single line)
    tmp = re.findall(r'\s([^\s]+)\(.*\)', sigstr)
    assert(len(tmp) == 1)
    name = tmp[0].strip()

    # function arguments (single line)
    args = []
    tmp = re.findall(r'\((.*?)\)', sigstr) # arg string
    assert(len(tmp) == 1)
    tmp = tmp[0].split(',')  # splited args
    for i in tmp:
        if i != "":
            a = collections.OrderedDict()
            items = i.split() # split words for one arg
            if items[0].strip() == 'const':
                a['const'] = True
                a['type'] = ' '.join(items[1:-1]).strip()
            else:
                a['const'] = False
                a['type'] = ' '.join(items[:-1]).strip()
            a['name'] = items[-1].strip()
            if a['name'] == '...':
                a['type'] = '$VARARGS' # special case, check and ignore when generating
            else:
                a['type'], a['name'], _ = _proc_type_name(a['type'], a['name'])

            # every arg is stored as a dict of {const, type, name}
            args.append(a)

    # return type
    tmp = sigstr[:sigstr.index(name)] # before function name (normally function name would just appear once)
    for d in ignorable_words:
        tmp = tmp.replace(d, '')
    tmp = tmp.strip()

    # put '*' from function name to return type
    if name.startswith('*'):
        name = name[1:]
        tmp = tmp + '*'

    if tmp.startswith('const'):
        retconst = True
        tmp = tmp[len('const'):]
    else:
        retconst = False
    rettype = { "type" : _norm_ptr(tmp.strip()), "const" : retconst }

    return ln, sigstr, name, args, rettype


def _parse_doxygen(lines, li):
    """ parse the the first doxygen block before the specified line """

    # get the block `/* ... */`
    flag_inside = False
    dlines = []
    for j in range(li-1, -1, -1):
        if j < 0:
            break
        line = lines[j]

        if flag_inside:
            m = re.match(r'^\s*/\s*\*', line)
            if m is not None: # match `/*`
                flag_inside = False
                dlines.insert(0, line[m.span()[0]:])
            else:
                dlines.insert(0, line)
        else:
            m = re.match(r'^\s*\*\s*/', line)
            if m is not None: # match `*/`
                flag_inside = True
                dlines.insert(0, line[:m.span()[1]])
            elif line != "": # stop when not inside `/*/` and the line is not empty
                break

    doc = ''.join(dlines).strip()

    # parse params and return
    dsp = ''
    args = []
    ret = ''
    flag = True
    for line in dlines:
        # try parse param
        tmp = re.findall(r'^[\*\ ]+@\s*param\s*\[(.+?)\]\s+([_0-9A-z]+)\s+(.+)', line)
        if len(tmp) > 0:
            tmp = tmp[0]
            vardir = tmp[0]
            name = tmp[1]
            info = tmp[2]

            # check & correct
            prefix = re.findall(r'_([a-z0-9]+)', name)[0] # prefix without `_`
            assert(prefix != "")
            if 'out' in vardir and not (prefix.startswith('z') or prefix.startswith('a') or prefix.startswith('p')):
                vardir = 'in'
                verbose >= 1 and print(f"warning: wrong param indication: 'out' for param: {name}! (corrected to `in`)")

            args.append({
                "name" : name,
                "prefix" : prefix,
                "direction" : vardir,
                "description" : info
            })

            flag = False
        else:
            # try parse return
            tmp = re.findall(r'^[\*\ ]+@\s*return\s+(.+)', line)
            if (len(tmp) > 0):
                ret = tmp[0]
                flag = False
            # try parse description
            elif flag:
                tmp = re.findall(r'^/?[\*\ ]+\s*(.+)', line)
                if len(tmp) > 0 and tmp[0].strip() != '/':
                    if dsp != '':
                        dsp += ' '
                    dsp += tmp[0]

    return doc, dsp, args, ret


def _get_block(lines, li):
    """get the first code block after the specified line"""

    tmp = []
    fold = 0
    for j in range(li, len(lines)):
        line = lines[j]

        if fold:
            ind1 = line.find('}')
            if ind1 >= 0:
                fold -= 1
                if fold == 0:
                    tmp.append(line[:ind1+1]) # '... }'
                    break
                else:
                    tmp.append(line)
            else:
                tmp.append(line)

        ind0 = line.find('{')
        if ind0 >= 0:
            fold += 1
            if fold == 1:
                tmp.append(line[ind0:]) # '{ ...'

    block = ''.join(tmp).strip()

    return block


def _get_block_ex(lines, li):
    """get the first code block after the specified line (include the first ';' after '}')"""

    tmp = []
    fold = 0
    for j in range(li, len(lines)):
        line = lines[j]

        if fold:
            ind1 = line.find('}')
            if ind1 >= 0:
                fold -= 1
                if fold == 0:
                    ind2 = line.find(';')
                    if ind2 >= 0:
                        tmp.append(line[:ind2+1])
                        break
                    else:
                        tmp.append(line)
                else:
                    tmp.append(line)
            else:
                tmp.append(line)
        else:
            ind2 = line.find(';')
            if ind2 >= 0:
                tmp.append(line[:ind2+1])
                break

        ind0 = line.find('{')
        if ind0 >= 0:
            fold += 1
            if fold == 1:
                tmp.append(line[ind0:]) # '{ ...'

    block = ''.join(tmp).strip()

    return block


# parse the fields of an open structure
def _parse_struct(lines, li):
    # get block with '...;' after '}'
    block = _get_block_ex(lines, li)[:-1].strip() # remove ';'

    # find name
    i = block.rfind('}')
    sname = block[i+1:].strip()

    # skip structures that is explicitly disabled
    if sname in fslist or sname in fqlist or sname in mblist:
        return sname, []

    block = block[1:i] # { ... }
    assert(block[-1] != '}')
    del i

    # remove comments
    for m in re.findall(r'//.*?$|/\*.*?\*/', block, re.M):
        block = block.replace(m, '')

    fields = []
    # search for embeded struct/unions
    reducible = True
    for x in re.findall(r'\}([\s\S]*?);', block.replace('\r\n', '').replace('\n', ''), re.M):
        if x.strip() != "":
            reducible = False
            break

    if (block.find('struct') >= 0 or block.find('union') >= 0) and not reducible:
        raise Exception("We currently don't parse complex structs!")
    else: # simple
        if block != '':
            # search for embeded struct/unions
            x = []
            p0 = re.compile(r'((struct|union)[\s\S]+?\{)', re.MULTILINE)
            for item in p0.findall(block):
                item = item[0]
                if item != "":
                    x.append(item)
            p1 = re.compile(r'\}[\s\S]*?;', re.MULTILINE)
            for item in p1.findall(block):
                if item != "":
                    x.append(item)

            # reduce embded things (remove all struct/union heads and tails)
            for item in x:
                block = block.replace(item, '')

            block = block.replace('\r\n', '')
            block = block.replace('\n', '')
            sfs = block.split(';')
            for sf in sfs:
                if sf.strip() == "":
                    continue

                if sf.find(',') >= 0: # multiple fields declared with one type
                    _a = sf.split(',')
                    _b = _a[0].split()
                    ft = ' '.join(_b[:-1]).strip()
                    names = [_b[-1],] + _a[1:]
                    _last_ft = None
                    alen = [None,]*len(names)
                    for i in range(len(names)):
                        names[i] = names[i].strip()
                        _ft, names[i], alen[i] = _proc_type_name(ft, names[i], False)
                        if _last_ft is not None:
                            assert(_ft == _last_ft)
                        _last_ft = _ft
                    ft = _last_ft

                    if ft.startswith('const'):
                        isconst = True
                        ft = ft[5:].strip()
                    else:
                        isconst = False

                    for i in range(len(names)):
                        fields.append({
                            "name" : names[i],
                            "type" : ft,
                            "const" : isconst,
                            "alen" :  alen[i]
                        })
                else: # one field one type
                    items = sf.split()
                    name = items[-1].strip()
                    ft = ' '.join(items[:-1]).strip()
                    ft, name, alen = _proc_type_name(ft, name, False)

                    if ft.startswith('const'):
                        isconst = True
                        ft = ft[5:].strip()
                    else:
                        isconst = False

                    fields.append({
                        "name" : name,
                        "type" : ft,
                        "const" : isconst,
                        "alen" : alen
                    })

    nset = set()
    for f in fields:
        nset.add(f["name"])
    assert(len(nset) == len(fields))

    return sname, fields


def _parse_enum_fields(lines, li):
    """parse the fields of an enum definition"""

    block = _get_block(lines, li)[1:-1] # remove '{' and '}'
    # remove comments
    for m in re.findall(r'//.*$|/\*.*?\*/', block, re.M):
        block = block.replace(m, '')
    sfields = block.split(',')
    fields = []

    for sf in sfields:
        e = sf.split('=')[0].strip()
        if e != "" and not e.endswith('_NUMBER'): # skip '*_NUMBER' and '*_NONE'
            tmp = _expand_orxJOYSTICK_DECLARE_BUTTON_ENUM(e)
            if tmp is None:
                tmp = _expand_orxJOYSTICK_DECLARE_AXIS_ENUM(e)
            if tmp is not None:
                fields += tmp
            else:
                fields.append(e) # enum name

    # should all be unique
    assert(len(set(fields)) == len(fields))

    return fields


def _parse_header(h):
    """parse a header file"""

    # read
    with open(h, newline='\n') as f:
        content = f.read().replace('\r\n', '\n')
        lines = [x for x in content.split('\n')]

    # extern functions
    p0 = re.compile(r'^[\ \t]*extern\s[\s\S\(]+?\);', re.MULTILINE)
    efs = []
    for item in p0.findall(content):
        if item != "":
            # join lines
            item = item.replace('\n', ' ')

            # skip extern global variables
            if item.find('=', 0, item.find('(')) >= 0:
                continue
            # skip extern blocks
            if item.find('{', 0, item.find('(')) >= 0:
                continue

            # parse signature
            ln, sig, name, args, rettype = _parse_sig(item, content)
            # parse doxygen
            _, description, doxparam, doxret = _parse_doxygen(lines, ln-1)

            # patch in,out indications
            if name in corinout.keys():
                for p in doxparam:
                    if p['name'] in corinout[name].keys():
                        p['direction'] = corinout[name][p['name']]

            efs.append({
                "file" : h,
                "line" : ln,
                "signature" : sig,
                "name" : name,
                "params" : args,
                "return" : rettype,
                'description': description,
                "doxparam" : doxparam,
                'doxreturn' : doxret,
            })

    # find static functions
    p1 = re.compile(r'(^[\ \t]*static\s[\s\S\(]+?\))\s*\{', re.MULTILINE)
    tmp = p1.findall(content)
    sfs = []
    for item in tmp:
        if item != "":
            # skip quoted constants
            if item.find('=', 0, item.find('(')) >= 0:
                continue
            # skip static blocks
            if item.find('{', 0, item.find('(')) >= 0:
                continue

            # parse signature
            ln, sig, name, args, rettype = _parse_sig(item, content)
            # parse doxygen
            _, description, doxparam, doxret = _parse_doxygen(lines, ln-1)

            # patch in,out indications
            if name in corinout.keys():
                for p in doxparam:
                    if p['name'] in corinout[name].keys():
                        p['direction'] = corinout[name][p['name']]

            sfs.append({
                "file" : h,
                "line" : ln,
                "signature" : sig,
                "name" : name,
                "params" : args,
                "return" : rettype,
                'description': description,
                "doxparam" : doxparam,
                "doxreturn" : doxret,
            })

    # macro functions
    p2 = re.compile(r'^[\ \t]*#define\s[^\s]+?\(.*?\)', re.MULTILINE) # macro function signature don't cross multiple lines !
    mfs = []
    for item in p2.findall(content):
        if item != "":
            sig = item.replace('\r\n', '')
            sig = sig.replace('\n', '')
            mfs.append({
                "file" : h,
                "line" : _findline(item, content),
                "signature" : sig
            })

    # opaque structs
    p3 = re.compile(r'^[\ \t]*typedef\sstruct\s[^\{\}]+?;', re.MULTILINE)
    oqs = []
    for item in p3.findall(content):
        if item != "":
            tmp = item.replace('\r\n', '')[:-1]
            tmp = tmp.replace('\n', '')
            oqs.append({
                "file" : h,
                "line" : _findline(item, content),
                "name" : tmp.split()[-1].strip()
            })

    # open structs
    p4 = re.compile(r'^[\ \t]*typedef\s+struct[^;]*?\{', re.MULTILINE)
    ops = []
    for item in p4.findall(content):
        if item != "":
            tmp = item.replace('\r\n', '')[:-1]
            tmp = tmp.replace('\n', '')
            ln = _findline(item, content)
            name, fields = _parse_struct(lines, ln-1)
            if name in fslist: # skip structures that is explicitly disabled
                verbose >=2 and print('info: ignoring {}!'.format(name))
                continue
            elif name in fqlist: # force opaque structures
                verbose >=2 and print('info: turn {} to opaque!'.format(name))
                oqs.append({
                    "file" : h,
                    "line" : ln,
                    "name" : name
                })
            else:
                ops.append({
                    "file" : h,
                    "line" : ln,
                    "name" : name,
                    "fields" : fields,
                })

    # enums
    p5 = re.compile(r'^[\ \t]*typedef\senum\s[\s\S{]+?}.+?;', re.MULTILINE)
    eus = []
    for item in p5.findall(content):
        if item != "":
            tmp = item.replace('\r\n', '')[:-1]
            tmp = tmp.replace('\n', '')
            name = tmp.split('}')[-1].strip()
            ln = _findline(item, content)
            fields = _parse_enum_fields(lines, ln-1)
            eus.append({
                "file" : h,
                "line" : ln,
                "name" : name,
                "fields" : fields
            })

    # macro defines
    p6 = re.compile(r'(^[\ \t]*#define\s+([^\(\)\n]+?)[\ \t]+([^\n]+))', re.MULTILINE)
    mds = []
    for item in p6.findall(content):
        if len(item) != 0:
            k = item[1].strip() 
            v = item[2].strip() 
            i = v.find('//')
            if i >= 0:
                v = v[:i]
            i = v.find('/*')
            if i >= 0:
                v = v[:i]
            v = v.strip()
            if k.endswith('FORMAT') or not k.startswith('orx'):
                verbose >= 2 and print(f'info: skip define: {k} : {v}')
                continue
            else:
                skip = False
                for i in range(3, len(k)):
                    if k[i].islower():
                        skip = True
                        break
                if skip:
                    continue
            mds.append({
                "file" : h,
                "line" : _findline(item[0], content),
                "define" : [k, v]
            })

    return efs, sfs, mfs, oqs, ops, eus, mds


def parse():
    """parse all headers"""

    global headers, efuncs0, sfuncs0, qstrcs0, ostrcs0, mfuncs0, enums0, defines0

    efuncs0 = []
    sfuncs0 = []
    mfuncs0 = []
    qstrcs0 = []
    ostrcs0 = []
    enums0 = []
    defines0 = []

    headers = _index_headers(ORX_H_PATH)
    for h in headers:
        exfs, stfs, mfs, oqs, ops, eus, mds = _parse_header(h)
        efuncs0 += exfs
        sfuncs0 += stfs
        mfuncs0 += mfs
        qstrcs0 += oqs
        ostrcs0 += ops
        enums0 += eus
        defines0 += mds

    # duplication check 
    strc_names = []
    for s in ostrcs0 + qstrcs0 + enums0:
        strc_names.append(s["name"])
    assert( len(strc_names) == len(set(strc_names)) )


setup_flag = False
def setup(verbose=1):
    """parse & post-process (run only once)"""

    global enums, flist, fdict, otdict, qtdict, mdefs, doxygen, setup_flag, deleted_funcs, deleted_strcs

    if setup_flag:
        return

    verbose = verbose

    enums = collections.OrderedDict()
    flist = []
    fdict = collections.OrderedDict()
    otdict = collections.OrderedDict()
    qtdict = collections.OrderedDict()
    mdefs = collections.OrderedDict()
    doxygen = collections.OrderedDict()

    parse()
    print("parsing completed")

    strc_names = []
    for t in ostrcs0 + qstrcs0 + enums0:
        strc_names.append(t["name"])

    # flatten open data structures
    for s in ostrcs0:
        for i in range(len(s['fields'])-1, -1, -1):
            f = s['fields'][i]
            if f['type'] == '$STRUCT':
                s['fields'].pop(i)
                for sf in f['fields']:
                    s['fields'].append({
                        "name" : f['name']+'.'+sf['name'],
                        "type" : sf['type'],
                        "const" : sf['const']
                    })

    # filter out open data structures which references un-recorded structs and non-const string fields
    deleted_strcs = []
    while True:
        n = len(deleted_strcs)
        for i in range(len(ostrcs0)-1, -1, -1):
            t = ostrcs0[i]
            for f in t["fields"]:
                x = f["type"]
                while True:
                    if x[-1] in ('@', '*'):
                        x = x[:-1]
                    else:
                        break
                if (x not in strc_names and x not in typemap.keys() and not x.startswith('$') and x != "void") or \
                    (f['type'] in ('orxSTRING', 'orxCHAR*', 'char*') and not f['const']):
                    deleted_strcs.append(ostrcs0.pop(i))
                    strc_names.remove(t["name"])
                    verbose >= 2 and print("info: delete {} for having {}".format(t["name"], x))
                    break

        if n == len(deleted_strcs):
            break

    for x in qstrcs0:
        qtdict[x["name"]] = x

    for x in ostrcs0:
        otdict[x["name"]] = x

    flist += efuncs0 + sfuncs0
    flist.sort(key=(lambda x: x['name']))
    
    # filter out functions with un-recorded types (includes those which has a function callback as parameter) and non-const string params
    deleted_funcs = []
    for i in range(len(flist)-1, -1, -1):
        f = flist[i]

        # args and return types
        for x in f["params"] + [f["return"],]:
            deleted = False

            t = x["type"]

            # non-const string param is not acceptable
            if t == 'orxSTRING' and not x["const"] and x in f["params"]:
                deleted_funcs.append(flist.pop(i))
                verbose >= 2 and print("info: delete {} for non-const string".format(f["name"]))
                deleted = True
                break

            while True:
                if t[-1] in ('@', '*'):
                    t = t[:-1]
                else:
                    break
            if t not in strc_names and t not in typemap.keys() and not t.startswith('$') and t != "void":
                deleted_funcs.append(flist.pop(i))
                verbose >= 2 and print("delete {} for having {}".format(f["name"], t))
                deleted = True
                break

        # index params' doxygen
        if not deleted:
            pdict = collections.OrderedDict()
            for p in f["doxparam"]:
                pdict[p["name"]] = p
            doxygen[f["name"]] = [ pdict, f["doxreturn"], f['description'] ]

    for x in flist:
        fdict[x['name']] = x

    # index enums
    for item in enums0:
        name = item["name"]
        fields = item["fields"]
        edict = collections.OrderedDict()
        for f in fields:
            orx_name = f
            lua_name = f[len(name)+1:].lower()
            edict[orx_name] = lua_name
        enums[name] = edict

    # index macro defines
    _mdefs = collections.OrderedDict()
    for item in defines0:
        key = item['define'][0]
        value = item['define'][1]
        _mdefs[key] = {
            'file' : item['file'],
            'line' : item['line'],
            'value' : value
        }

    for k,x in _mdefs.items():
        if '_KZ_' in k:
            s = 'orxSTRING'
        elif '_KC_' in k:
            s = 'orxCHAR'
        elif '_KF_' in k:
            s = 'orxFLOAT'
        elif '_KD_' in k:
            s = 'orxDOUBLE'
        elif '_KS8_' in k:
            s = 'orxS8'
        elif '_KS16_' in k:
            s = 'orxS16'
        elif '_KS32_' in k:
            s = 'orxS32'
        elif '_KS64_' in k:
            s = 'orxS64'
        elif '_KU8_' in k:
            s = 'orxU8'
        elif '_KU16_' in k:
            s = 'orxU16'
        elif '_KU32_' in k:
            s = 'orxU32'
        elif '_KU64_' in k or '_GUID_' in k:
            s = 'orxU64'
        else:
            verbose >= 1 and print('warning: skip macro define: {} {}'.format(k, x['value']))
            continue
        mdefs[k] = {
            'file': x['file'],
            'line': x['line'],
            'value': x['value'],
            'type': s
        }

    # merge with extra constants
    for k,v in excon.items():
        mdefs[k] = v

    print("\nexplicitly disabled structs: ({} in total)".format(len(fslist)))
    for i in fslist:
        print(i)
    print("\nforced-private structs: ({} in total)".format(len(fqlist)))
    for i in fqlist:
        print(i)
    print("\nfiltered structs: ({} in total)".format(len(deleted_strcs)))
    for i in deleted_strcs:
        print(i["name"])
    print("\nfiltered functions: ({} in total)".format(len(deleted_funcs)))
    for i in deleted_funcs:
        print(i["name"])

    nos = len(ostrcs0)
    nps = len(qstrcs0)
    nes = len(enums0)
    nfs = len(flist)

    print(f"\nC symbols to be processed:\n{nos} open structures\n{nps} opaque structures\n{nes} named enums\n{nfs} functions")

    setup_flag = True


setup()
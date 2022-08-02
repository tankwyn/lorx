import shutil
import sys
import os
import re


#################### args ####################

# clean
if len(sys.argv) > 1 and sys.argv[1] == 'clean':
    for i in ('bindings.h', 'bindings.c', 'conenum.h', 'conenum.c', 'constructors.h', 'conutype.h', 'conutype.c', 'modules.h', 'modules.c', 'properties.h', 'utypes.h', 'orxver.h'):
        if os.path.isfile('src/' + i):
            os.remove('src/' + i)
    for i in os.listdir('src'):
        if i.endswith('.ilk') or i.endswith('.pdb') or i.endswith('.exe') or i.endswith('.obj') or i.endswith('.o') or i.endswith('.dll') or i.endswith('.lib') or i.endswith('.exp') or i.endswith('.so') or i in ('compile_commands.json', 'lorx', 'lorxd', 'lorxp'):
            os.remove('src/' + i)
        elif i == '.cache':
            shutil.rmtree('src/' + i);
    if os.path.isdir('doc'):
        shutil.rmtree('doc')
    if os.path.isdir('api'):
        shutil.rmtree('api')
    if os.path.isdir('bin'):
        shutil.rmtree('bin')
    sys.exit(0)

# -v 0, 1 or 2
verbose = 1
if len(sys.argv) > 2 and sys.argv[1] == '-v':
    verbose = int(sys.argv[2])
with open('gen/verbose.py', 'w') as f:
    f.write(f'verbose = {verbose}')
del f


################# detect orx version ###################

def get_orx_version():
    """extract Orx version from orxVersion.h"""

    ORX_CODE_PATH = os.getenv("ORX").replace('"', '').replace('\\', '/').replace(' ', '\ ')
    fp = ORX_CODE_PATH + '/include/base/orxBuild.h'
    with open(fp) as f:
        content = f.read()
    res = re.findall(r'#define __orxVERSION_BUILD__\s+(\d+)', content, flags=re.M)
    if res and len(res) >= 1:
        build = int(res[-1])
    else:
        build = None
    del fp, content

    fp = ORX_CODE_PATH + '/include/base/orxVersion.h'
    with open(fp) as f:
        content = f.read()
    res = re.findall(r'#define __orxVERSION_MAJOR__\s+(\d+)', content, flags=re.M)
    assert(res and len(res) == 1)
    major = int(res[0])
    res = re.findall(r'#define __orxVERSION_MINOR__\s+(\d+)', content, flags=re.M)
    assert(res and len(res) == 1)
    minor = int(res[0])
    if build is None:
        res = re.findall(r'#define __orxVERSION_BUILD__\s+(\d+)', content, flags=re.M)
        assert(res and len(res) == 1)
        build = int(res[0])

    return major, minor, build


orx_major, orx_minor, orx_build = get_orx_version()
print(f'working with orx {orx_major}.{orx_minor}.{orx_build}\n')
with open('src/orxver.h', 'w') as f:
    f.write(f"""#ifndef __LORX_ORXVER_H__
#define __LORX_ORXVER_H__

#define LORX_ORX_VERSION_MAJOR {orx_major}
#define LORX_ORX_VERSION_MINOR {orx_minor}
#define LORX_ORX_VERSION_BUILD {orx_build}

#endif /* __LORX_ORXVER_H__ */
""")
del f, orx_major, orx_minor, orx_build

################## clean bin #####################

if os.path.isdir('bin'):
    shutil.rmtree('bin')
os.mkdir('bin')

################## auto generation ######################

from gen.conversion import gen_conenum, gen_conutype
from gen.bind import gen_bindings
from gen.oaccess import gen_constructors, gen_properties
from gen.modules import gen_module_doc, gen_module_emmy, gen_modules
from gen.utypes import gen_utypes, gen_utype_docs, gen_utype_emmy
from gen.enumdoc import gen_enum_doc, gen_enum_emmy
from gen.cfg import methoddict


################# code auto-generation ##################

print("\n>> generate enum conversion functions")
gen_conenum()

print("\n>> generate userdata conversion functions")
gen_conutype()

print("\n>> generate function bindings")
bmap = gen_bindings()
print(f"{len(bmap)} functions are binded")

mlist = []
for v in methoddict.values():
    mlist += v
modfuncs = {}
for k, v in bmap.items():
    if k not in mlist:
        modfuncs[k] = v
del mlist

print("\n>> generate constructors for open data structures")
constructors, cdocs = gen_constructors()

print("\n>> generate meta functions")
metas, propdocs = gen_properties()

print("\n>> generate submodules")
moddoc, cinfo = gen_modules(modfuncs, constructors, cdocs)
print(f"created {len(moddoc)} submodules")
print(moddoc.keys())

print("\n>> generate methods")
typedoc = gen_utypes(methoddict, bmap, metas, propdocs)



################# doc auto-generation ##################

if os.path.isdir('doc'):
    shutil.rmtree('doc')
shutil.copytree('templates/doc', 'doc')

with open('doc/mkdocs.yml.template', 'r') as f:
    content = f.read()
del f

print("\n>> generate modules documentation")
mods_str = gen_module_doc(moddoc)
content = content.replace('${MODULES}', mods_str)

shutil.copy('doc/docs/modules/constants.md', 'doc/docs/constants.md')

print("\n>> generate types documentation")
types_str = gen_utype_docs(typedoc, cinfo)
content = content.replace('${TYPES}', types_str)

print("\n>> generate enums documentation")
gen_enum_doc()

with open('doc/mkdocs.yml', 'w') as f:
    f.write(content)

os.remove('doc/mkdocs.yml.template')

del content, f, mods_str, types_str


################# api(emmy) auto-generation ##################

if os.path.isdir('api'):
    shutil.rmtree('api')
shutil.copytree('templates/api', 'api')

with open('api/library/lorx.lua.template', 'r') as f:
    content = f.read()
del f

print("\n>> generate modules emmy")
gen_module_emmy(moddoc)

print("\n>> generate types emmy")
s = gen_utype_emmy(typedoc)

print("\n>> generate enums emmy")
s1 = gen_enum_emmy()

with open(f'api/library/lorx.lua', 'w') as f:
    f.write(content + f"""
{s1}

{s}
""")
os.remove('api/library/lorx.lua.template')

del s, s1, f, content


print('\nAll done, you can now build the source and doc!')
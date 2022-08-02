from gen.orxparse import enums

def gen_enum_doc():
    """generate enum doc"""

    elist = list(enums.keys())
    elist.sort()
    with open('doc/docs/enums.md', 'w') as f:
        for et in elist:
            edict = enums[et]
            f.write(f'## {et}\n\n')
            f.write('lua string | orx enum\n')
            f.write('--- | ---\n')
            for k,v in edict.items():
                f.write(f'{v} | {k}\n')
            f.write('\n\n')
            f.write('---\n\n')


def gen_enum_emmy():
    """generate enum emmy annotations"""
    
    res = ''
    elist = list(enums.keys())
    elist.sort()
    for et in elist:
        res += f"---@alias {et} string"
        for v in enums[et].values():
            res += f" | \"'{v}'\""
        res += "\n\n"
    return res
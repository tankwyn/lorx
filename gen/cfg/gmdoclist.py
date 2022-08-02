# docs for generic methods
gmdoclist = [
    {
        'name': 'asVoid',
        'description': 'convert to a void*',
        'params': [
            {}, # dummpy
        ],
        'returns': [
            { 'type': 'void*', 'description': 'the converted void*' }
        ],
        'csig': None,
        'non_const_self': 'no'
    },
    {
        'name': 'type',
        'description': 'get the type name of the lorx userdata',
        'params': [
            {}, # dummpy
        ],
        'returns': [
            { 'type': 'string', 'description': 'the type name' }
        ],
        'csig': None,
        'non_const_self': 'no'
    },
    {
        'name': 'aeq',
        'description': 'check if the c memory address of this lorx userdata equals to another',
        'params': [
            {}, # dummpy
            { 'name': 'u', 'type': 'any lorx utype', 'dir': '', 'description': 'another lorx userdata' }
        ],
        'returns': [
            { 'type': 'boolean', 'description': 'true or false' }
        ],
        'csig': None,
        'non_const_self': 'no'
    },
    {
        'name': 'addr',
        'description': 'get the c memory address of the lorx userdata',
        'params': [
            {}, # dummpy
        ],
        'returns': [
            { 'type': 'string', 'description': 'address string' }
        ],
        'csig': None,
        'non_const_self': 'no'
    },
]
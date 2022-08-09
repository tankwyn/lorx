# public fields for forced-opaque structs
fieldsdict = {
    'orxCHARACTER_MAP' : [
        { 'name': 'fCharacterHeight', 'type': 'orxFLOAT', 'const': False, 'alen': None },
    ],
    'orxCLOCK_INFO' : [
        { 'name': 'fTickSize', 'type': 'orxFLOAT', 'const': False, 'alen': None },
        { 'name': 'fDT', 'type': 'orxFLOAT', 'const': False, 'alen': None },
        { 'name': 'fTime', 'type': 'orxFLOAT', 'const': False, 'alen': None },
        { 'name': 'afModifierList', 'type': 'orxFLOAT@', 'const': False, 'alen': 'orxCLOCK_MODIFIER_NUMBER' },
    ],
    'orxSOUND_STREAM_PACKET' : [
        { 'name' : 'afSampleList', 'type': 'orxFLOAT@', 'const': False, 'alen': 'self->u32SampleNumber' },
        { 'name' : 'u32SampleNumber', 'type': 'orxU32', 'const': False, 'alen': None },
        { 'name' : 'fTimeStamp', 'type': 'orxFLOAT', 'const': False, 'alen': None },
        { 'name' : 'fTime', 'type': 'orxFLOAT', 'const': False, 'alen': None },
        { 'name' : 's32ID', 'type': 'orxS32', 'const': False, 'alen': None },
        { 'name' : 'bDiscard', 'type': 'orxBOOL', 'const': False, 'alen': None },
        { 'name' : 'bLast', 'type': 'orxBOOL', 'const': False, 'alen': None },
    ],
    'orxSOUND_STREAM_INFO' : [
        { 'name' : 'zName', 'type': 'orxSTRING', 'const': True, 'alen': None },
        { 'name' : 'u32SampleRate', 'type': 'orxU32', 'const': False, 'alen': None },
        { 'name' : 'u32ChannelNumber', 'type': 'orxU32', 'const': False, 'alen': None },
    ]
}
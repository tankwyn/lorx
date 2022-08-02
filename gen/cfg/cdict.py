# public struct creators
cdict = {
    'orxRGBA' : [
        ['u8R', 'u8G', 'u8B', 'u8A'],
    ],
    'orxCOLOR' : [
        ['vRGB', 'fAlpha'],
    ],
    'orxVECTOR' : [
        ['fX', 'fY', 'fZ'],
    ],

    # prohibit creator generation, should get the instance of these types from an orx api call
    'orxCOMMAND_VAR' : [],
    'orxANIM_CUSTOM_EVENT' : [],
}
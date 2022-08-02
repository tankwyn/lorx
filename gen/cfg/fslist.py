# ignore these structs when parsing
fslist = [
    # event and all event payloads are implemented manually without explicitly creating types
    'orxPHYSICS_EVENT_PAYLOAD',
    'orxINPUT_EVENT_PAYLOAD',
    'orxTIMELINE_EVENT_PAYLOAD',
    'orxFX_EVENT_PAYLOAD',
    'orxLOCALE_EVENT_PAYLOAD',
    'orxRENDER_EVENT_PAYLOAD',
    'orxANIM_EVENT_PAYLOAD',
    'orxSOUND_EVENT_PAYLOAD',
    'orxRESOURCE_EVENT_PAYLOAD',
    'orxSHADER_EVENT_PAYLOAD',
    'orxDISPLAY_EVENT_PAYLOAD',
    'orxSYSTEM_EVENT_PAYLOAD',
    'orxEVENT',
    
    # disabled
    "orxBODY_PART_DEF",
    "orxBODY_JOINT_DEF",
    "orxBODY_DEF",
    'orxCOMMAND_VAR_DEF',

    # orxDISPLAY_MESH is forced to opaque, so this type is not used
    'orxDISPLAY_VERTEX',
]
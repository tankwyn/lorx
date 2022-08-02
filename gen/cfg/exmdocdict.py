# docs for extra module functions
exmdocdict = {
    'config': [
        {
            'name': 'save',
            'description': 'Save all config info (set the lorx.tmpcfgsave callback to filter)',
            'params': [
                { 'name': 'filename', 'type': 'string', 'dir': '', 'description': 'File name, if null or empty the default file name will be used' },
                { 'name': 'useencryption', 'type': 'boolean', 'dir': '', 'description': 'Use file encryption to make it human non-readable?' },
                { 'name': '[func]', 'type': 'lorxCFGSAVE_CALLBACK', 'dir': '', 'description': 'Callback used to filter sections/keys to save. If null, all sections/keys will be saved' },
            ],
            'returns': [ {'type': 'orxSTATUS', 'description': 'success / failure'} ],
            'csig': "orxSTATUS orxConfig_Save(const orxSTRING _zFileName, orxBOOL _bUseEncryption, const orxCONFIG_SAVE_FUNCTION _pfnSaveCallback)",
        },
        {
            'name': 'clear',
            'description': 'Clear all config info (set the lorx.tmpcfgclear callback to filter)',
            'params': [
                { 'name': '[func]', 'type': 'lorxCFGCLEAR_CALLBACK', 'dir': '', 'description': 'Callback used to filter sections/keys to clear. If null, all sections/keys will be cleared' },
            ],
            'returns': [ {'type': 'orxSTATUS', 'description': 'success / failure'} ],
            'csig': "orxSTATUS orxFASTCALL orxConfig_Clear(const orxCONFIG_CLEAR_FUNCTION _pfnClearCallback)",
        }
    ],
    'object': [
        {
            'name': 'getNeighborList',
            'description': 'Get the neighboring objects',
            'params': [
                { 'name': 'box', 'type': 'orxOBOX', 'dir': '', 'description': 'Box to select objects'},
                { 'name': 'groupid', 'type': 'integer', 'dir': '', 'description': 'Group ID, orxSTRINGID_UNDEFINED for all'},
            ],
            'returns': [ {'type': 'table of orxOBJECT', 'description': 'Objects in the box'} ],
            'csig': "orxBANK *orxObject_CreateNeighborList(const orxOBOX *_pstCheckBox, orxSTRINGID _stGroupID);\nvoid orxObject_DeleteNeighborList(orxBANK *_pstObjectList);",
        },
    ],
    'input': [
        {
            'name': 'getBindingList',
            'description': 'Get an input binding list (mouse/keyboard/joystick)',
            'params': [
                { 'name': 'name', 'type': 'string', 'dir': '', 'description': 'Concerned input name' },
            ],
            'returns': [
                { 'type': 'orxSTATUS', 'description': 'success / failure' },
                { 'type': 'table of orxINPUT_TYPE', 'description': 'List of binding types (if a slot is not bound, its value is orxINPUT_TYPE_NONE)'},
                { 'type': 'table of string', 'description': 'List of binding IDs (button/key/axis)' },
                { 'type': 'table of orxINPUT_MODE', 'description': 'List of modes (only used for axis inputs)' },
            ],
            'csig': "orxSTATUS orxInput_GetBindingList(const orxSTRING _zName, orxINPUT_TYPE _aeTypeList[orxINPUT_KU32_BINDING_NUMBER], orxENUM _aeIDList[orxINPUT_KU32_BINDING_NUMBER], orxINPUT_MODE _aeModeList[orxINPUT_KU32_BINDING_NUMBER])"
        }
    ],
    'sound': [
        {
            'name': 'filterDataBiquad',
            'description': 'Create a orxSOUND_FILTER_DATA of biquad type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'a0', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'a1', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'a2', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'b0', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'b1', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'b2', 'type': 'number', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataLowPass',
            'description': 'Create a orxSOUND_FILTER_DATA of low pass type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'order', 'type': 'integer', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataHighPass',
            'description': 'Create a orxSOUND_FILTER_DATA of high pass type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'order', 'type': 'integer', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataBandPass',
            'description': 'Create a orxSOUND_FILTER_DATA of band pass type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'order', 'type': 'integer', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataLowShelf',
            'description': 'Create a orxSOUND_FILTER_DATA of low shelf type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'q', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'gain', 'type': 'number', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataHighShelf',
            'description': 'Create a orxSOUND_FILTER_DATA of low shelf type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'q', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'gain', 'type': 'number', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataNotch',
            'description': 'Create a orxSOUND_FILTER_DATA of notch type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'q', 'type': 'number', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataPeaking',
            'description': 'Create a orxSOUND_FILTER_DATA of peaking type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'frequency', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'q', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'gain', 'type': 'number', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
        {
            'name': 'filterDataDelay',
            'description': 'Create a orxSOUND_FILTER_DATA of delay type',
            'params': [
                { 'name': 'nameid', 'type': 'integer', 'dir': '', 'description': '' },
                { 'name': 'delay', 'type': 'number', 'dir': '', 'description': '' },
                { 'name': 'decay', 'type': 'number', 'dir': '', 'description': '' },
            ],
            'returns': [
                { 'type': 'orxSOUND_FILTER_DATA', 'description': 'The new instance' },
            ],
            'csig': None,
        },
    ],
    'clock': [
        {
            'name': 'addGlobalTimer',
            'description': 'Add a global timer function (ie. using the main core clock)',
            'params': [
                { 'name': 'timercb', 'type': 'lorxCLOCK_CALLBACK', 'dir': '', 'description': 'Concerned timer callback' },
                { 'name': 'delay', 'type': 'number', 'dir': '', 'description': "Timer's delay between 2 calls, must be strictly positive" },
                { 'name': 'repetition', 'type': 'integer', 'dir': '', 'description': 'Number of times this timer should be called before removed, -1 for infinite' },
            ],
            'returns': [
                { 'type': 'orxSTATUS', 'description': 'success / failure' },
            ],
            'csig': 'orxSTATUS orxClock_AddGlobalTimer(const orxCLOCK_FUNCTION _pfnCallback, orxFLOAT _fDelay, orxS32 _s32Repetition, void *_pContext)',
        },
        {
            'name': 'removeGlobalTimer',
            'description': 'Removes a global timer function (ie. from the main core clock)',
            'params': [
                { 'name': 'timercb', 'type': 'lorxCLOCK_CALLBACK', 'dir': '', 'description': 'Concerned timer callback' },
                { 'name': 'delay', 'type': 'number', 'dir': '', 'description': "Timer's delay between 2 calls, must be strictly positive" },
            ],
            'returns': [
                { 'type': 'orxSTATUS', 'description': 'success / failure' },
            ],
            'csig': 'orxSTATUS orxClock_RemoveGlobalTimer(const orxCLOCK_FUNCTION _pfnCallback, orxFLOAT _fDelay, void *_pContext)',
        },
    ],
    'command': [
        {
            'name': 'sRegister',
            'description': 'Register a Lorx sub-command',
            'params': [
                { 'name': 'func', 'type': 'function', 'dir': '', 'description': 'command function, just like any common lua functions, but conforms to registering prototype' },
                { 'name': 'name', 'type': 'string', 'dir': '', 'description': "Sub-command name" },
                { 'name': 'rtype', 'type': 'orxCOMMAND_VAR_TYPE', 'dir': '', 'description': 'returning type' },
                { 'name': 'reqargs', 'type': 'integer', 'dir': '', 'description': 'number of required args' },
                { 'name': 'optargs', 'type': 'integer', 'dir': '', 'description': 'number of optional args' },
                { 'name': '...', 'type': 'orxCOMMAND_VAR_TYPE', 'dir': '', 'description': 'arg type, must be specified multiple times to match with `reqargs + optargs`' },
            ],
            'returns': [
                { 'type': 'boolean', 'description': 'true on success, false on failure (e.g. if a sub-command with the specified name has already been registered)' },
            ],
            'csig': None,
        },
        {
            'name': 'sUnregister',
            'description': 'Unregister a Lorx sub-command',
            'params': [
                { 'name': 'name', 'type': 'string', 'dir': '', 'description': "Sub-command name" },
            ],
            'returns': [
                { 'type': 'boolean', 'description': 'true on success, false on failure (e.g. if the sub-command is not yet registered)' },
            ],
            'csig': None,
        },
        {
            'name': 'sIsRegistered',
            'description': 'Query if a Lorx sub-command is registered or not',
            'params': [
                { 'name': 'name', 'type': 'string', 'dir': '', 'description': "Sub-command name" },
            ],
            'returns': [
                { 'type': 'boolean', 'description': 'true or false' },
            ],
            'csig': None,
        },
        {
            'name': 'sComment',
            'description': 'Comment on a Lorx sub-command',
            'params': [
                { 'name': 'name', 'type': 'string', 'dir': '', 'description': "Sub-command name" },
                { 'name': 'description', 'type': 'string', 'dir': '', 'description': "description" },
                { 'name': 'ret', 'type': 'string', 'dir': '', 'description': "Returning name" },
                { 'name': '...', 'type': 'string', 'dir': '', 'description': "arg name, must be specified multiple times to match with the number of args" },
            ],
            'returns': [
                { 'type': 'boolean', 'description': 'false if the sub-command is not yet registered' },
            ],
            'csig': None,
        },
    ],
    'debug': [
        {
            'name': 'setLogCallback',
            'description': 'Sets log callback function, if the callback returns failure, the log entry will be entirely inhibited',
            'params': [
                { 'name': 'func', 'type': 'lorxLOG_CALLBACK', 'dir': '', 'description': "log callback function" },
            ],
            'returns': [],
            'csig': None,
        },
    ]
}
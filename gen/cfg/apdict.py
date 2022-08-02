# array params' lengths (auto-determination would be too risky)
apdict = {
    "orxBody_BoxPick" : {
        "_apstBodyList" : ["_u32Number", 0]
    },
    "orxPhysics_BoxPick" : {
        "_ahUserDataList" : ["_u32Number", 0],
    },
    "orxInput_GetBindingList" : {
        "_aeTypeList" : ["orxINPUT_KU32_BINDING_NUMBER", 1],
        "_aeIDList" : ["orxINPUT_KU32_BINDING_NUMBER", 1],
        "_aeModeList" : ["orxINPUT_KU32_BINDING_NUMBER", 1],
    },
    "orxFont_SetCharacterWidthList" : {
        "_afCharacterWidthList" : ["_u32CharacterNumber", 0],
    },
    "orxDisplay_SetBitmapData" : {
        "_au8Data" : ["_u32ByteNumber", 0]
    },
    "orxDisplay_GetBitmapData" : {
        "_au8Data" : ["_u32ByteNumber", 0],

    },
    "orxDisplay_SetPartialBitmapData" : {
        "_au8Data" : None
    },
    "orxDisplay_DrawPolyline" : {
        "_avVertexList" : ["_u32VertexNumber", 0],
    },
    "orxDisplay_DrawPolygon" : {
        "_avVertexList" : ["_u32VertexNumber", 0],
    },
    "orxMath_GetRandomSeeds" : {
        "_au32Seeds" : ["4", 1],
    },
    "orxMath_SetRandomSeeds" : {
        "_au32Seeds" : ["4", 0],
    },
    "orxConfig_LoadFromMemory" : {
        "_acBuffer" : ["_u32BufferSize", 0],
    },
    "orxConfig_MergeFiles" : {
        "_azSrcFileName" : ["_u32Number", 0],
    },
    "orxConfig_SetListString" : {
        "_azValue" : ["_u32Number", 0],
    },
    "orxConfig_AppendListString" : {
        "_azValue" : ["_u32Number", 0],
    },
    "orxCommand_Execute" : {
        "_astArgList" : ["_u32ArgNumber", 1],
    },
    "orxCommand_ParseNumericalArguments" : {
        "_astArgList" : ["_u32ArgNumber", 0],
        "_astOperandList" : ["_u32ArgNumber", 0],
    },
    "orxShader_AddFloatParam" : {
        "_afValueList" : ["_u32ArraySize", 0],
    },
    "orxShader_AddVectorParam" : {
        "_avValueList" : ["_u32ArraySize", 0],
    },
    "orxShader_AddTextureParam" : {
        "_apstValueList" : ["_u32ArraySize", 0],
    },
    "orxShader_SetFloatParam" : {
        "_afValueList" : ["_u32ArraySize", 0],
    },
    "orxShader_SetVectorParam" : {
        "_avValueList" : ["_u32ArraySize", 0],
    },
    "orxShader_SetTextureParam" : {
        "_apstValueList" : ["_u32ArraySize", 0],
    },
    "orxShader_CompileCode" : {
        "_azCodeList" : ["_u32Size", 0],
    },
    "orxSoundSystem_SetSampleData" : {
        "_afData" : ["_u32SampleNumber", 0],
    },
    "orxViewport_GetTextureList" : {
        "_apstTextureList" : ["_u32TextureNumber", 1],
    },
    "orxDisplay_SetDestinationBitmaps" : {
        "_apstBitmapList" : ["_u32Number", 0],
    },
    "orxViewport_SetTextureList" : {
        "_apstTextureList" : ["_u32TextureNumber", 0],
    },
}
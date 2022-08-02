#ifndef __LORX_UTYPES_H__
#define __LORX_UTYPES_H__

#include <orx.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "bindings.h"
#include "generics.h"
#include "helpers.h"
#include "properties.h"


/*
** Userdata types generated with utypes.py
*/


static const struct luaL_Reg l_lorx_file_info_m[] = {
  { "findNext", l_File_FindNext },
  { "findClose", l_File_FindClose },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_command_var_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_anim_custom_event_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_obox_m[] = {
  { "getCenter", l_OBox_GetCenter },
  { "isInside", l_OBox_IsInside },
  { "_2DIsInside", l_OBox_2DIsInside },
  { "zAlignedTestIntersection", l_OBox_ZAlignedTestIntersection },
  { "_2DSet", l_OBox_2DSet },
  { "copy", l_OBox_Copy },
  { "move", l_OBox_Move },
  { "_2DRotate", l_OBox_2DRotate },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_vector_m[] = {
  { "set", l_Vector_Set },
  { "setAll", l_Vector_SetAll },
  { "copy", l_Vector_Copy },
  { "getSquareSize", l_Vector_GetSquareSize },
  { "getSize", l_Vector_GetSize },
  { "isNull", l_Vector_IsNull },
  { "bezier", l_Vector_Bezier },
  { "catmullRom", l_Vector_CatmullRom },
  { "clamp", l_Vector_Clamp },
  { "neg", l_Vector_Neg },
  { "rec", l_Vector_Rec },
  { "floor", l_Vector_Floor },
  { "round", l_Vector_Round },
  { "normalize", l_Vector_Normalize },
  { "_2DRotate", l_Vector_2DRotate },
  { "fromCartesianToSpherical", l_Vector_FromCartesianToSpherical },
  { "fromSphericalToCartesian", l_Vector_FromSphericalToCartesian },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_aabox_m[] = {
  { "reorder", l_AABox_Reorder },
  { "isInside", l_AABox_IsInside },
  { "testIntersection", l_AABox_TestIntersection },
  { "test2DIntersection", l_AABox_Test2DIntersection },
  { "getCenter", l_AABox_GetCenter },
  { "copy", l_AABox_Copy },
  { "move", l_AABox_Move },
  { "set", l_AABox_Set },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_rgba_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_display_transform_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_display_video_mode_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_character_glyph_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_color_m[] = {
  { "setRGBA", l_Color_SetRGBA },
  { "set", l_Color_Set },
  { "setRGB", l_Color_SetRGB },
  { "setAlpha", l_Color_SetAlpha },
  { "toRGBA", l_Color_ToRGBA },
  { "copy", l_Color_Copy },
  { "fromRGBToHSL", l_Color_FromRGBToHSL },
  { "fromHSLToRGB", l_Color_FromHSLToRGB },
  { "fromRGBToHSV", l_Color_FromRGBToHSV },
  { "fromHSVToRGB", l_Color_FromHSVToRGB },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_filter_data_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_file_m[] = {
  { "seek", l_File_Seek },
  { "tell", l_File_Tell },
  { "getSize", l_File_GetSize },
  { "getTime", l_File_GetTime },
  { "print", l_File_Print },
  { "close", l_File_Close },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_thread_semaphore_m[] = {
  { "delete", l_Thread_DeleteSemaphore },
  { "wait", l_Thread_WaitSemaphore },
  { "signal", l_Thread_SignalSemaphore },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_clock_m[] = {
  { "delete", l_Clock_Delete },
  { "resync", l_Clock_Resync },
  { "restart", l_Clock_Restart },
  { "pause", l_Clock_Pause },
  { "unpause", l_Clock_Unpause },
  { "isPaused", l_Clock_IsPaused },
  { "getInfo", l_Clock_GetInfo },
  { "setModifier", l_Clock_SetModifier },
  { "getModifier", l_Clock_GetModifier },
  { "setTickSize", l_Clock_SetTickSize },
  { "getNext", l_Clock_GetNext },
  { "getName", l_Clock_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_clock_info_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_animpointer_m[] = {
  { "delete", l_AnimPointer_Delete },
  { "getAnimSet", l_AnimPointer_GetAnimSet },
  { "getCurrentAnim", l_AnimPointer_GetCurrentAnim },
  { "getTargetAnim", l_AnimPointer_GetTargetAnim },
  { "getCurrentAnimName", l_AnimPointer_GetCurrentAnimName },
  { "getTargetAnimName", l_AnimPointer_GetTargetAnimName },
  { "getCurrentAnimData", l_AnimPointer_GetCurrentAnimData },
  { "getTime", l_AnimPointer_GetTime },
  { "getFrequency", l_AnimPointer_GetFrequency },
  { "setCurrentAnim", l_AnimPointer_SetCurrentAnim },
  { "setTargetAnim", l_AnimPointer_SetTargetAnim },
  { "setCurrentAnimFromName", l_AnimPointer_SetCurrentAnimFromName },
  { "setTargetAnimFromName", l_AnimPointer_SetTargetAnimFromName },
  { "setTime", l_AnimPointer_SetTime },
  { "setFrequency", l_AnimPointer_SetFrequency },
  { "pause", l_AnimPointer_Pause },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_animset_m[] = {
  { "delete", l_AnimSet_Delete },
  { "addReference", l_AnimSet_AddReference },
  { "removeReference", l_AnimSet_RemoveReference },
  { "cloneLinkTable", l_AnimSet_CloneLinkTable },
  { "addAnim", l_AnimSet_AddAnim },
  { "removeAnim", l_AnimSet_RemoveAnim },
  { "removeAllAnims", l_AnimSet_RemoveAllAnims },
  { "addLink", l_AnimSet_AddLink },
  { "removeLink", l_AnimSet_RemoveLink },
  { "getLink", l_AnimSet_GetLink },
  { "setLinkProperty", l_AnimSet_SetLinkProperty },
  { "getLinkProperty", l_AnimSet_GetLinkProperty },
  { "computeAnim", l_AnimSet_ComputeAnim },
  { "findNextAnim", l_AnimSet_FindNextAnim },
  { "getAnim", l_AnimSet_GetAnim },
  { "getAnimStorageSize", l_AnimSet_GetAnimStorageSize },
  { "getAnimCount", l_AnimSet_GetAnimCount },
  { "getAnimIDFromName", l_AnimSet_GetAnimIDFromName },
  { "getName", l_AnimSet_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_animset_link_table_m[] = {
  { "deleteLink", l_AnimSet_DeleteLinkTable },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_anim_m[] = {
  { "delete", l_Anim_Delete },
  { "addKey", l_Anim_AddKey },
  { "removeLastKey", l_Anim_RemoveLastKey },
  { "removeAllKeys", l_Anim_RemoveAllKeys },
  { "addEvent", l_Anim_AddEvent },
  { "removeLastEvent", l_Anim_RemoveLastEvent },
  { "removeAllEvents", l_Anim_RemoveAllEvents },
  { "getNextEvent", l_Anim_GetNextEvent },
  { "getEventAfter", l_Anim_GetEventAfter },
  { "getKey", l_Anim_GetKey },
  { "getKeyData", l_Anim_GetKeyData },
  { "getKeyStorageSize", l_Anim_GetKeyStorageSize },
  { "getKeyCount", l_Anim_GetKeyCount },
  { "getEventStorageSize", l_Anim_GetEventStorageSize },
  { "getEventCount", l_Anim_GetEventCount },
  { "getLength", l_Anim_GetLength },
  { "getName", l_Anim_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_shaderpointer_m[] = {
  { "delete", l_ShaderPointer_Delete },
  { "start", l_ShaderPointer_Start },
  { "stop", l_ShaderPointer_Stop },
  { "enable", l_ShaderPointer_Enable },
  { "isEnabled", l_ShaderPointer_IsEnabled },
  { "addShader", l_ShaderPointer_AddShader },
  { "removeShader", l_ShaderPointer_RemoveShader },
  { "getShader", l_ShaderPointer_GetShader },
  { "addShaderFromConfig", l_ShaderPointer_AddShaderFromConfig },
  { "removeShaderFromConfig", l_ShaderPointer_RemoveShaderFromConfig },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_shader_m[] = {
  { "delete", l_Shader_Delete },
  { "start", l_Shader_Start },
  { "stop", l_Shader_Stop },
  { "addFloatParam", l_Shader_AddFloatParam },
  { "addTextureParam", l_Shader_AddTextureParam },
  { "addVectorParam", l_Shader_AddVectorParam },
  { "addTimeParam", l_Shader_AddTimeParam },
  { "setFloatParam", l_Shader_SetFloatParam },
  { "setTextureParam", l_Shader_SetTextureParam },
  { "setVectorParam", l_Shader_SetVectorParam },
  { "compileCode", l_Shader_CompileCode },
  { "enable", l_Shader_Enable },
  { "isEnabled", l_Shader_IsEnabled },
  { "getName", l_Shader_GetName },
  { "getID", l_Shader_GetID },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_viewport_m[] = {
  { "delete", l_Viewport_Delete },
  { "setTextureList", l_Viewport_SetTextureList },
  { "getTextureList", l_Viewport_GetTextureList },
  { "getTextureCount", l_Viewport_GetTextureCount },
  { "setBackgroundColor", l_Viewport_SetBackgroundColor },
  { "clearBackgroundColor", l_Viewport_ClearBackgroundColor },
  { "hasBackgroundColor", l_Viewport_HasBackgroundColor },
  { "getBackgroundColor", l_Viewport_GetBackgroundColor },
  { "enable", l_Viewport_Enable },
  { "isEnabled", l_Viewport_IsEnabled },
  { "setCamera", l_Viewport_SetCamera },
  { "getCamera", l_Viewport_GetCamera },
  { "addShader", l_Viewport_AddShader },
  { "removeShader", l_Viewport_RemoveShader },
  { "enableShader", l_Viewport_EnableShader },
  { "isShaderEnabled", l_Viewport_IsShaderEnabled },
  { "getShaderPointer", l_Viewport_GetShaderPointer },
  { "setBlendMode", l_Viewport_SetBlendMode },
  { "getBlendMode", l_Viewport_GetBlendMode },
  { "setPosition", l_Viewport_SetPosition },
  { "setRelativePosition", l_Viewport_SetRelativePosition },
  { "getPosition", l_Viewport_GetPosition },
  { "setSize", l_Viewport_SetSize },
  { "setRelativeSize", l_Viewport_SetRelativeSize },
  { "getSize", l_Viewport_GetSize },
  { "getRelativeSize", l_Viewport_GetRelativeSize },
  { "getBox", l_Viewport_GetBox },
  { "getCorrectionRatio", l_Viewport_GetCorrectionRatio },
  { "getName", l_Viewport_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_camera_m[] = {
  { "delete", l_Camera_Delete },
  { "addGroupID", l_Camera_AddGroupID },
  { "removeGroupID", l_Camera_RemoveGroupID },
  { "getGroupIDCount", l_Camera_GetGroupIDCount },
  { "getGroupID", l_Camera_GetGroupID },
  { "setFrustum", l_Camera_SetFrustum },
  { "setPosition", l_Camera_SetPosition },
  { "setRotation", l_Camera_SetRotation },
  { "setZoom", l_Camera_SetZoom },
  { "getFrustum", l_Camera_GetFrustum },
  { "getPosition", l_Camera_GetPosition },
  { "getRotation", l_Camera_GetRotation },
  { "getZoom", l_Camera_GetZoom },
  { "getName", l_Camera_GetName },
  { "getFrame", l_Camera_GetFrame },
  { "setParent", l_Camera_SetParent },
  { "getParent", l_Camera_GetParent },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_bitmap_m[] = {
  { "delete", l_Display_DeleteBitmap },
  { "save", l_Display_SaveBitmap },
  { "setData", l_Display_SetBitmapData },
  { "getData", l_Display_GetBitmapData },
  { "setPartialData", l_Display_SetPartialBitmapData },
  { "getSize", l_Display_GetBitmapSize },
  { "getID", l_Display_GetBitmapID },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_display_mesh_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_character_map_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_font_m[] = {
  { "delete", l_Font_Delete },
  { "setTexture", l_Font_SetTexture },
  { "setCharacterList", l_Font_SetCharacterList },
  { "setCharacterHeight", l_Font_SetCharacterHeight },
  { "setCharacterWidthList", l_Font_SetCharacterWidthList },
  { "setCharacterSpacing", l_Font_SetCharacterSpacing },
  { "setOrigin", l_Font_SetOrigin },
  { "setSize", l_Font_SetSize },
  { "getTexture", l_Font_GetTexture },
  { "getCharacterList", l_Font_GetCharacterList },
  { "getCharacterHeight", l_Font_GetCharacterHeight },
  { "getCharacterWidth", l_Font_GetCharacterWidth },
  { "getCharacterSpacing", l_Font_GetCharacterSpacing },
  { "getOrigin", l_Font_GetOrigin },
  { "getSize", l_Font_GetSize },
  { "getMap", l_Font_GetMap },
  { "getName", l_Font_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_texture_m[] = {
  { "delete", l_Texture_Delete },
  { "linkBitmap", l_Texture_LinkBitmap },
  { "unlinkBitmap", l_Texture_UnlinkBitmap },
  { "getBitmap", l_Texture_GetBitmap },
  { "getSize", l_Texture_GetSize },
  { "getName", l_Texture_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_text_m[] = {
  { "delete", l_Text_Delete },
  { "getName", l_Text_GetName },
  { "getLineCount", l_Text_GetLineCount },
  { "getLineSize", l_Text_GetLineSize },
  { "isFixedSize", l_Text_IsFixedSize },
  { "getSize", l_Text_GetSize },
  { "getString", l_Text_GetString },
  { "getFont", l_Text_GetFont },
  { "setSize", l_Text_SetSize },
  { "setString", l_Text_SetString },
  { "setFont", l_Text_SetFont },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_graphic_m[] = {
  { "delete", l_Graphic_Delete },
  { "clone", l_Graphic_Clone },
  { "getName", l_Graphic_GetName },
  { "setData", l_Graphic_SetData },
  { "getData", l_Graphic_GetData },
  { "setFlip", l_Graphic_SetFlip },
  { "getFlip", l_Graphic_GetFlip },
  { "setPivot", l_Graphic_SetPivot },
  { "setRelativePivot", l_Graphic_SetRelativePivot },
  { "getPivot", l_Graphic_GetPivot },
  { "setSize", l_Graphic_SetSize },
  { "getSize", l_Graphic_GetSize },
  { "setColor", l_Graphic_SetColor },
  { "setRepeat", l_Graphic_SetRepeat },
  { "clearColor", l_Graphic_ClearColor },
  { "hasColor", l_Graphic_HasColor },
  { "getColor", l_Graphic_GetColor },
  { "getRepeat", l_Graphic_GetRepeat },
  { "setOrigin", l_Graphic_SetOrigin },
  { "getOrigin", l_Graphic_GetOrigin },
  { "updateSize", l_Graphic_UpdateSize },
  { "setSmoothing", l_Graphic_SetSmoothing },
  { "getSmoothing", l_Graphic_GetSmoothing },
  { "setBlendMode", l_Graphic_SetBlendMode },
  { "clearBlendMode", l_Graphic_ClearBlendMode },
  { "hasBlendMode", l_Graphic_HasBlendMode },
  { "getBlendMode", l_Graphic_GetBlendMode },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_body_m[] = {
  { "delete", l_Body_Delete },
  { "getName", l_Body_GetName },
  { "testDefFlags", l_Body_TestDefFlags },
  { "testAllDefFlags", l_Body_TestAllDefFlags },
  { "getDefFlags", l_Body_GetDefFlags },
  { "addPartFromConfig", l_Body_AddPartFromConfig },
  { "removePartFromConfig", l_Body_RemovePartFromConfig },
  { "getNextPart", l_Body_GetNextPart },
  { "addJointFromConfig", l_Body_AddJointFromConfig },
  { "getNextJoint", l_Body_GetNextJoint },
  { "setPosition", l_Body_SetPosition },
  { "setRotation", l_Body_SetRotation },
  { "setScale", l_Body_SetScale },
  { "setSpeed", l_Body_SetSpeed },
  { "setAngularVelocity", l_Body_SetAngularVelocity },
  { "setCustomGravity", l_Body_SetCustomGravity },
  { "setFixedRotation", l_Body_SetFixedRotation },
  { "setDynamic", l_Body_SetDynamic },
  { "setAllowMoving", l_Body_SetAllowMoving },
  { "getPosition", l_Body_GetPosition },
  { "getRotation", l_Body_GetRotation },
  { "getSpeed", l_Body_GetSpeed },
  { "getSpeedAtWorldPosition", l_Body_GetSpeedAtWorldPosition },
  { "getAngularVelocity", l_Body_GetAngularVelocity },
  { "getCustomGravity", l_Body_GetCustomGravity },
  { "isFixedRotation", l_Body_IsFixedRotation },
  { "isDynamic", l_Body_IsDynamic },
  { "getAllowMoving", l_Body_GetAllowMoving },
  { "getMass", l_Body_GetMass },
  { "getMassCenter", l_Body_GetMassCenter },
  { "setLinearDamping", l_Body_SetLinearDamping },
  { "setAngularDamping", l_Body_SetAngularDamping },
  { "getLinearDamping", l_Body_GetLinearDamping },
  { "getAngularDamping", l_Body_GetAngularDamping },
  { "isInside", l_Body_IsInside },
  { "applyTorque", l_Body_ApplyTorque },
  { "applyForce", l_Body_ApplyForce },
  { "applyImpulse", l_Body_ApplyImpulse },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_body_part_m[] = {
  { "getName", l_Body_GetPartName },
  { "getBody", l_Body_GetPartBody },
  { "remove", l_Body_RemovePart },
  { "setSelfFlags", l_Body_SetPartSelfFlags },
  { "setCheckMask", l_Body_SetPartCheckMask },
  { "getSelfFlags", l_Body_GetPartSelfFlags },
  { "getCheckMask", l_Body_GetPartCheckMask },
  { "setSolid", l_Body_SetPartSolid },
  { "isSolid", l_Body_IsPartSolid },
  { "setFriction", l_Body_SetPartFriction },
  { "getFriction", l_Body_GetPartFriction },
  { "setRestitution", l_Body_SetPartRestitution },
  { "getRestitution", l_Body_GetPartRestitution },
  { "setDensity", l_Body_SetPartDensity },
  { "getDensity", l_Body_GetPartDensity },
  { "isInside", l_Body_IsInsidePart },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_body_joint_m[] = {
  { "getName", l_Body_GetJointName },
  { "remove", l_Body_RemoveJoint },
  { "enableMotor", l_Body_EnableMotor },
  { "setMotorSpeed", l_Body_SetJointMotorSpeed },
  { "setMaxMotorTorque", l_Body_SetJointMaxMotorTorque },
  { "getReactionForce", l_Body_GetJointReactionForce },
  { "getReactionTorque", l_Body_GetJointReactionTorque },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_physics_body_m[] = {
  { "delete", l_Physics_DeleteBody },
  { "setPosition", l_Physics_SetPosition },
  { "setRotation", l_Physics_SetRotation },
  { "setSpeed", l_Physics_SetSpeed },
  { "setAngularVelocity", l_Physics_SetAngularVelocity },
  { "setCustomGravity", l_Physics_SetCustomGravity },
  { "setFixedRotation", l_Physics_SetFixedRotation },
  { "setDynamic", l_Physics_SetDynamic },
  { "setAllowMoving", l_Physics_SetAllowMoving },
  { "getPosition", l_Physics_GetPosition },
  { "getRotation", l_Physics_GetRotation },
  { "getSpeed", l_Physics_GetSpeed },
  { "getSpeedAtWorldPosition", l_Physics_GetSpeedAtWorldPosition },
  { "getAngularVelocity", l_Physics_GetAngularVelocity },
  { "getCustomGravity", l_Physics_GetCustomGravity },
  { "isFixedRotation", l_Physics_IsFixedRotation },
  { "getMass", l_Physics_GetMass },
  { "getMassCenter", l_Physics_GetMassCenter },
  { "setLinearDamping", l_Physics_SetLinearDamping },
  { "setAngularDamping", l_Physics_SetAngularDamping },
  { "getLinearDamping", l_Physics_GetLinearDamping },
  { "getAngularDamping", l_Physics_GetAngularDamping },
  { "applyTorque", l_Physics_ApplyTorque },
  { "applyForce", l_Physics_ApplyForce },
  { "applyImpulse", l_Physics_ApplyImpulse },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_physics_body_part_m[] = {
  { "delete", l_Physics_DeletePart },
  { "setSelfFlags", l_Physics_SetPartSelfFlags },
  { "setCheckMask", l_Physics_SetPartCheckMask },
  { "getSelfFlags", l_Physics_GetPartSelfFlags },
  { "getCheckMask", l_Physics_GetPartCheckMask },
  { "setSolid", l_Physics_SetPartSolid },
  { "isSolid", l_Physics_IsPartSolid },
  { "setFriction", l_Physics_SetPartFriction },
  { "getFriction", l_Physics_GetPartFriction },
  { "setRestitution", l_Physics_SetPartRestitution },
  { "getRestitution", l_Physics_GetPartRestitution },
  { "setDensity", l_Physics_SetPartDensity },
  { "getDensity", l_Physics_GetPartDensity },
  { "isInside", l_Physics_IsInsidePart },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_physics_body_joint_m[] = {
  { "delete", l_Physics_DeleteJoint },
  { "enableMotor", l_Physics_EnableMotor },
  { "setMotorSpeed", l_Physics_SetJointMotorSpeed },
  { "setMaxMotorTorque", l_Physics_SetJointMaxMotorTorque },
  { "getReactionForce", l_Physics_GetJointReactionForce },
  { "getReactionTorque", l_Physics_GetJointReactionTorque },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_soundsystem_sound_m[] = {
  { "addFilter", l_SoundSystem_AddFilter },
  { "delete", l_SoundSystem_Delete },
  { "play", l_SoundSystem_Play },
  { "pause", l_SoundSystem_Pause },
  { "stop", l_SoundSystem_Stop },
  { "removeLastFilter", l_SoundSystem_RemoveLastFilter },
  { "removeAllFilters", l_SoundSystem_RemoveAllFilters },
  { "setBus", l_SoundSystem_SetBus },
  { "setVolume", l_SoundSystem_SetVolume },
  { "setPitch", l_SoundSystem_SetPitch },
  { "setTime", l_SoundSystem_SetTime },
  { "setPosition", l_SoundSystem_SetPosition },
  { "setSpatialization", l_SoundSystem_SetSpatialization },
  { "setPanning", l_SoundSystem_SetPanning },
  { "loop", l_SoundSystem_Loop },
  { "getVolume", l_SoundSystem_GetVolume },
  { "getPitch", l_SoundSystem_GetPitch },
  { "getTime", l_SoundSystem_GetTime },
  { "getPosition", l_SoundSystem_GetPosition },
  { "getSpatialization", l_SoundSystem_GetSpatialization },
  { "getPanning", l_SoundSystem_GetPanning },
  { "isLooping", l_SoundSystem_IsLooping },
  { "getDuration", l_SoundSystem_GetDuration },
  { "getStatus", l_SoundSystem_GetStatus },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_soundsystem_sample_m[] = {
  { "delete", l_SoundSystem_DeleteSample },
  { "getInfo", l_SoundSystem_GetSampleInfo },
  { "setData", l_SoundSystem_SetSampleData },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_m[] = {
  { "delete", l_Sound_Delete },
  { "linkSample", l_Sound_LinkSample },
  { "unlinkSample", l_Sound_UnlinkSample },
  { "isStream", l_Sound_IsStream },
  { "play", l_Sound_Play },
  { "pause", l_Sound_Pause },
  { "stop", l_Sound_Stop },
  { "removeLastFilter", l_Sound_RemoveLastFilter },
  { "removeAllFilters", l_Sound_RemoveAllFilters },
  { "addFilter", l_Sound_AddFilter },
  { "addFilterFromConfig", l_Sound_AddFilterFromConfig },
  { "setVolume", l_Sound_SetVolume },
  { "setPitch", l_Sound_SetPitch },
  { "setTime", l_Sound_SetTime },
  { "setPosition", l_Sound_SetPosition },
  { "setSpatialization", l_Sound_SetSpatialization },
  { "setPanning", l_Sound_SetPanning },
  { "loop", l_Sound_Loop },
  { "getVolume", l_Sound_GetVolume },
  { "getPitch", l_Sound_GetPitch },
  { "getTime", l_Sound_GetTime },
  { "getPosition", l_Sound_GetPosition },
  { "getSpatialization", l_Sound_GetSpatialization },
  { "getPanning", l_Sound_GetPanning },
  { "isLooping", l_Sound_IsLooping },
  { "getDuration", l_Sound_GetDuration },
  { "getStatus", l_Sound_GetStatus },
  { "getName", l_Sound_GetName },
  { "getBusID", l_Sound_GetBusID },
  { "setBusID", l_Sound_SetBusID },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_stream_info_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_stream_packet_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_soundpointer_m[] = {
  { "delete", l_SoundPointer_Delete },
  { "enable", l_SoundPointer_Enable },
  { "isEnabled", l_SoundPointer_IsEnabled },
  { "setVolume", l_SoundPointer_SetVolume },
  { "setPitch", l_SoundPointer_SetPitch },
  { "setPanning", l_SoundPointer_SetPanning },
  { "play", l_SoundPointer_Play },
  { "pause", l_SoundPointer_Pause },
  { "stop", l_SoundPointer_Stop },
  { "addFilter", l_SoundPointer_AddFilter },
  { "addSound", l_SoundPointer_AddSound },
  { "removeSound", l_SoundPointer_RemoveSound },
  { "removeAllSounds", l_SoundPointer_RemoveAllSounds },
  { "addSoundFromConfig", l_SoundPointer_AddSoundFromConfig },
  { "removeSoundFromConfig", l_SoundPointer_RemoveSoundFromConfig },
  { "getLastAddedSound", l_SoundPointer_GetLastAddedSound },
  { "removeLastFilter", l_SoundPointer_RemoveLastFilter },
  { "removeAllFilters", l_SoundPointer_RemoveAllFilters },
  { "addFilterFromConfig", l_SoundPointer_AddFilterFromConfig },
  { "getCount", l_SoundPointer_GetCount },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_structure_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_spawner_m[] = {
  { "delete", l_Spawner_Delete },
  { "enable", l_Spawner_Enable },
  { "isEnabled", l_Spawner_IsEnabled },
  { "reset", l_Spawner_Reset },
  { "setTotalObjectLimit", l_Spawner_SetTotalObjectLimit },
  { "setActiveObjectLimit", l_Spawner_SetActiveObjectLimit },
  { "getTotalObjectLimit", l_Spawner_GetTotalObjectLimit },
  { "getActiveObjectLimit", l_Spawner_GetActiveObjectLimit },
  { "getTotalObjectCount", l_Spawner_GetTotalObjectCount },
  { "getActiveObjectCount", l_Spawner_GetActiveObjectCount },
  { "setWaveSize", l_Spawner_SetWaveSize },
  { "setWaveDelay", l_Spawner_SetWaveDelay },
  { "setNextWaveDelay", l_Spawner_SetNextWaveDelay },
  { "getWaveSize", l_Spawner_GetWaveSize },
  { "getWaveDelay", l_Spawner_GetWaveDelay },
  { "getNextWaveDelay", l_Spawner_GetNextWaveDelay },
  { "setObjectSpeed", l_Spawner_SetObjectSpeed },
  { "getObjectSpeed", l_Spawner_GetObjectSpeed },
  { "spawn", l_Spawner_Spawn },
  { "getFrame", l_Spawner_GetFrame },
  { "setPosition", l_Spawner_SetPosition },
  { "setRotation", l_Spawner_SetRotation },
  { "setScale", l_Spawner_SetScale },
  { "getPosition", l_Spawner_GetPosition },
  { "getWorldPosition", l_Spawner_GetWorldPosition },
  { "getRotation", l_Spawner_GetRotation },
  { "getWorldRotation", l_Spawner_GetWorldRotation },
  { "getScale", l_Spawner_GetScale },
  { "getWorldScale", l_Spawner_GetWorldScale },
  { "setParent", l_Spawner_SetParent },
  { "getParent", l_Spawner_GetParent },
  { "getName", l_Spawner_GetName },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_frame_m[] = {
  { "delete", l_Frame_Delete },
  { "setParent", l_Frame_SetParent },
  { "getParent", l_Frame_GetParent },
  { "getChild", l_Frame_GetChild },
  { "getSibling", l_Frame_GetSibling },
  { "isRootChild", l_Frame_IsRootChild },
  { "setPosition", l_Frame_SetPosition },
  { "setRotation", l_Frame_SetRotation },
  { "setScale", l_Frame_SetScale },
  { "getPosition", l_Frame_GetPosition },
  { "getRotation", l_Frame_GetRotation },
  { "getScale", l_Frame_GetScale },
  { "transformPosition", l_Frame_TransformPosition },
  { "transformRotation", l_Frame_TransformRotation },
  { "transformScale", l_Frame_TransformScale },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_fxpointer_m[] = {
  { "delete", l_FXPointer_Delete },
  { "enable", l_FXPointer_Enable },
  { "isEnabled", l_FXPointer_IsEnabled },
  { "addFX", l_FXPointer_AddFX },
  { "addDelayedFX", l_FXPointer_AddDelayedFX },
  { "removeFX", l_FXPointer_RemoveFX },
  { "removeAllFXs", l_FXPointer_RemoveAllFXs },
  { "addFXFromConfig", l_FXPointer_AddFXFromConfig },
  { "addUniqueFXFromConfig", l_FXPointer_AddUniqueFXFromConfig },
  { "addDelayedFXFromConfig", l_FXPointer_AddDelayedFXFromConfig },
  { "addUniqueDelayedFXFromConfig", l_FXPointer_AddUniqueDelayedFXFromConfig },
  { "removeFXFromConfig", l_FXPointer_RemoveFXFromConfig },
  { "synchronize", l_FXPointer_Synchronize },
  { "getTime", l_FXPointer_GetTime },
  { "getCount", l_FXPointer_GetCount },
  { "getFrequency", l_FXPointer_GetFrequency },
  { "setTime", l_FXPointer_SetTime },
  { "setFrequency", l_FXPointer_SetFrequency },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_object_m[] = {
  { "delete", l_Object_Delete },
  { "update", l_Object_Update },
  { "enable", l_Object_Enable },
  { "enableRecursive", l_Object_EnableRecursive },
  { "isEnabled", l_Object_IsEnabled },
  { "pause", l_Object_Pause },
  { "pauseRecursive", l_Object_PauseRecursive },
  { "isPaused", l_Object_IsPaused },
  { "setUserData", l_Object_SetUserData },
  { "getUserData", l_Object_GetUserData },
  { "setOwner", l_Object_SetOwner },
  { "getOwner", l_Object_GetOwner },
  { "getOwnedChild", l_Object_GetOwnedChild },
  { "getOwnedSibling", l_Object_GetOwnedSibling },
  { "setClock", l_Object_SetClock },
  { "setClockRecursive", l_Object_SetClockRecursive },
  { "getClock", l_Object_GetClock },
  { "linkStructure", l_Object_LinkStructure },
  { "unlinkStructure", l_Object_UnlinkStructure },
  { "setFlip", l_Object_SetFlip },
  { "getFlip", l_Object_GetFlip },
  { "setPivot", l_Object_SetPivot },
  { "setOrigin", l_Object_SetOrigin },
  { "setSize", l_Object_SetSize },
  { "getPivot", l_Object_GetPivot },
  { "getOrigin", l_Object_GetOrigin },
  { "getSize", l_Object_GetSize },
  { "setPosition", l_Object_SetPosition },
  { "setWorldPosition", l_Object_SetWorldPosition },
  { "setRotation", l_Object_SetRotation },
  { "setWorldRotation", l_Object_SetWorldRotation },
  { "setScale", l_Object_SetScale },
  { "setWorldScale", l_Object_SetWorldScale },
  { "getPosition", l_Object_GetPosition },
  { "getWorldPosition", l_Object_GetWorldPosition },
  { "getRotation", l_Object_GetRotation },
  { "getWorldRotation", l_Object_GetWorldRotation },
  { "getScale", l_Object_GetScale },
  { "getWorldScale", l_Object_GetWorldScale },
  { "setParent", l_Object_SetParent },
  { "getParent", l_Object_GetParent },
  { "getChild", l_Object_GetChild },
  { "getSibling", l_Object_GetSibling },
  { "getNextChild", l_Object_GetNextChild },
  { "attach", l_Object_Attach },
  { "detach", l_Object_Detach },
  { "setIgnoreFlags", l_Object_SetIgnoreFlags },
  { "setLiteralIgnoreFlags", l_Object_SetLiteralIgnoreFlags },
  { "getIgnoreFlags", l_Object_GetIgnoreFlags },
  { "getLiteralIgnoreFlags", l_Object_GetLiteralIgnoreFlags },
  { "logParents", l_Object_LogParents },
  { "setAnimSet", l_Object_SetAnimSet },
  { "setAnimFrequency", l_Object_SetAnimFrequency },
  { "setAnimFrequencyRecursive", l_Object_SetAnimFrequencyRecursive },
  { "getAnimFrequency", l_Object_GetAnimFrequency },
  { "setCurrentAnim", l_Object_SetCurrentAnim },
  { "setCurrentAnimRecursive", l_Object_SetCurrentAnimRecursive },
  { "setTargetAnim", l_Object_SetTargetAnim },
  { "setTargetAnimRecursive", l_Object_SetTargetAnimRecursive },
  { "getCurrentAnim", l_Object_GetCurrentAnim },
  { "getTargetAnim", l_Object_GetTargetAnim },
  { "isCurrentAnim", l_Object_IsCurrentAnim },
  { "isTargetAnim", l_Object_IsTargetAnim },
  { "setSpeed", l_Object_SetSpeed },
  { "setRelativeSpeed", l_Object_SetRelativeSpeed },
  { "setAngularVelocity", l_Object_SetAngularVelocity },
  { "setCustomGravity", l_Object_SetCustomGravity },
  { "getSpeed", l_Object_GetSpeed },
  { "getRelativeSpeed", l_Object_GetRelativeSpeed },
  { "getAngularVelocity", l_Object_GetAngularVelocity },
  { "getCustomGravity", l_Object_GetCustomGravity },
  { "getMass", l_Object_GetMass },
  { "getMassCenter", l_Object_GetMassCenter },
  { "applyTorque", l_Object_ApplyTorque },
  { "applyForce", l_Object_ApplyForce },
  { "applyImpulse", l_Object_ApplyImpulse },
  { "setTextString", l_Object_SetTextString },
  { "getTextString", l_Object_GetTextString },
  { "getBoundingBox", l_Object_GetBoundingBox },
  { "addFX", l_Object_AddFX },
  { "addFXRecursive", l_Object_AddFXRecursive },
  { "addUniqueFX", l_Object_AddUniqueFX },
  { "addUniqueFXRecursive", l_Object_AddUniqueFXRecursive },
  { "removeFX", l_Object_RemoveFX },
  { "removeFXRecursive", l_Object_RemoveFXRecursive },
  { "removeAllFXs", l_Object_RemoveAllFXs },
  { "removeAllFXsRecursive", l_Object_RemoveAllFXsRecursive },
  { "setFXFrequency", l_Object_SetFXFrequency },
  { "setFXFrequencyRecursive", l_Object_SetFXFrequencyRecursive },
  { "getFXFrequency", l_Object_GetFXFrequency },
  { "synchronizeFX", l_Object_SynchronizeFX },
  { "addSound", l_Object_AddSound },
  { "removeSound", l_Object_RemoveSound },
  { "getLastAddedSound", l_Object_GetLastAddedSound },
  { "setVolume", l_Object_SetVolume },
  { "setPitch", l_Object_SetPitch },
  { "setPanning", l_Object_SetPanning },
  { "play", l_Object_Play },
  { "stop", l_Object_Stop },
  { "addFilter", l_Object_AddFilter },
  { "removeLastFilter", l_Object_RemoveLastFilter },
  { "removeAllFilters", l_Object_RemoveAllFilters },
  { "addShader", l_Object_AddShader },
  { "addShaderRecursive", l_Object_AddShaderRecursive },
  { "removeShader", l_Object_RemoveShader },
  { "removeShaderRecursive", l_Object_RemoveShaderRecursive },
  { "enableShader", l_Object_EnableShader },
  { "isShaderEnabled", l_Object_IsShaderEnabled },
  { "addTimeLineTrack", l_Object_AddTimeLineTrack },
  { "addTimeLineTrackRecursive", l_Object_AddTimeLineTrackRecursive },
  { "removeTimeLineTrack", l_Object_RemoveTimeLineTrack },
  { "removeTimeLineTrackRecursive", l_Object_RemoveTimeLineTrackRecursive },
  { "enableTimeLine", l_Object_EnableTimeLine },
  { "isTimeLineEnabled", l_Object_IsTimeLineEnabled },
  { "getName", l_Object_GetName },
  { "setSmoothing", l_Object_SetSmoothing },
  { "setSmoothingRecursive", l_Object_SetSmoothingRecursive },
  { "getSmoothing", l_Object_GetSmoothing },
  { "getWorkingTexture", l_Object_GetWorkingTexture },
  { "getWorkingGraphic", l_Object_GetWorkingGraphic },
  { "setColor", l_Object_SetColor },
  { "setColorRecursive", l_Object_SetColorRecursive },
  { "hasColor", l_Object_HasColor },
  { "getColor", l_Object_GetColor },
  { "setRGB", l_Object_SetRGB },
  { "setRGBRecursive", l_Object_SetRGBRecursive },
  { "setAlpha", l_Object_SetAlpha },
  { "setAlphaRecursive", l_Object_SetAlphaRecursive },
  { "setRepeat", l_Object_SetRepeat },
  { "getRepeat", l_Object_GetRepeat },
  { "setBlendMode", l_Object_SetBlendMode },
  { "setBlendModeRecursive", l_Object_SetBlendModeRecursive },
  { "hasBlendMode", l_Object_HasBlendMode },
  { "getBlendMode", l_Object_GetBlendMode },
  { "setLiteralLifeTime", l_Object_SetLiteralLifeTime },
  { "setLifeTime", l_Object_SetLifeTime },
  { "getLifeTime", l_Object_GetLifeTime },
  { "getActiveTime", l_Object_GetActiveTime },
  { "getGroupID", l_Object_GetGroupID },
  { "setGroupID", l_Object_SetGroupID },
  { "setGroupIDRecursive", l_Object_SetGroupIDRecursive },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_fx_m[] = {
  { "delete", l_FX_Delete },
  { "apply", l_FX_Apply },
  { "enable", l_FX_Enable },
  { "isEnabled", l_FX_IsEnabled },
  { "addAlpha", l_FX_AddAlpha },
  { "addRGB", l_FX_AddRGB },
  { "addHSL", l_FX_AddHSL },
  { "addHSV", l_FX_AddHSV },
  { "addRotation", l_FX_AddRotation },
  { "addScale", l_FX_AddScale },
  { "addPosition", l_FX_AddPosition },
  { "addSpeed", l_FX_AddSpeed },
  { "addVolume", l_FX_AddVolume },
  { "addPitch", l_FX_AddPitch },
  { "addSlotFromConfig", l_FX_AddSlotFromConfig },
  { "getDuration", l_FX_GetDuration },
  { "getName", l_FX_GetName },
  { "loop", l_FX_Loop },
  { "isLooping", l_FX_IsLooping },
  { "setStagger", l_FX_SetStagger },
  { "getStagger", l_FX_GetStagger },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_timeline_m[] = {
  { "delete", l_TimeLine_Delete },
  { "enable", l_TimeLine_Enable },
  { "isEnabled", l_TimeLine_IsEnabled },
  { "addTrackFromConfig", l_TimeLine_AddTrackFromConfig },
  { "removeTrackFromConfig", l_TimeLine_RemoveTrackFromConfig },
  { "getCount", l_TimeLine_GetCount },
  { "update", l_Structure_Update },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "increaseCount", l_Structure_IncreaseCount },
  { "decreaseCount", l_Structure_DecreaseCount },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  { "setFlags", l_Structure_SetFlags },
  
  { NULL, NULL }
};
/*
** Userdata types generated with utypes.py
*/


static const struct luaL_Reg l_lorx_file_info_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_command_var_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_anim_custom_event_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_obox_const_m[] = {
  { "getCenter", l_OBox_GetCenter },
  { "isInside", l_OBox_IsInside },
  { "_2DIsInside", l_OBox_2DIsInside },
  { "zAlignedTestIntersection", l_OBox_ZAlignedTestIntersection },
  { "copy", l_OBox_Copy },
  { "move", l_OBox_Move },
  { "_2DRotate", l_OBox_2DRotate },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_vector_const_m[] = {
  { "copy", l_Vector_Copy },
  { "getSquareSize", l_Vector_GetSquareSize },
  { "getSize", l_Vector_GetSize },
  { "isNull", l_Vector_IsNull },
  { "bezier", l_Vector_Bezier },
  { "catmullRom", l_Vector_CatmullRom },
  { "clamp", l_Vector_Clamp },
  { "neg", l_Vector_Neg },
  { "rec", l_Vector_Rec },
  { "floor", l_Vector_Floor },
  { "round", l_Vector_Round },
  { "normalize", l_Vector_Normalize },
  { "_2DRotate", l_Vector_2DRotate },
  { "fromCartesianToSpherical", l_Vector_FromCartesianToSpherical },
  { "fromSphericalToCartesian", l_Vector_FromSphericalToCartesian },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_aabox_const_m[] = {
  { "isInside", l_AABox_IsInside },
  { "testIntersection", l_AABox_TestIntersection },
  { "test2DIntersection", l_AABox_Test2DIntersection },
  { "getCenter", l_AABox_GetCenter },
  { "copy", l_AABox_Copy },
  { "move", l_AABox_Move },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_rgba_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_display_transform_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_display_video_mode_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_character_glyph_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_color_const_m[] = {
  { "toRGBA", l_Color_ToRGBA },
  { "copy", l_Color_Copy },
  { "fromRGBToHSL", l_Color_FromRGBToHSL },
  { "fromHSLToRGB", l_Color_FromHSLToRGB },
  { "fromRGBToHSV", l_Color_FromRGBToHSV },
  { "fromHSVToRGB", l_Color_FromHSVToRGB },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_filter_data_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_file_const_m[] = {
  { "tell", l_File_Tell },
  { "getSize", l_File_GetSize },
  { "getTime", l_File_GetTime },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_thread_semaphore_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_clock_const_m[] = {
  { "isPaused", l_Clock_IsPaused },
  { "getInfo", l_Clock_GetInfo },
  { "getNext", l_Clock_GetNext },
  { "getName", l_Clock_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_clock_info_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_animpointer_const_m[] = {
  { "getAnimSet", l_AnimPointer_GetAnimSet },
  { "getCurrentAnim", l_AnimPointer_GetCurrentAnim },
  { "getTargetAnim", l_AnimPointer_GetTargetAnim },
  { "getCurrentAnimName", l_AnimPointer_GetCurrentAnimName },
  { "getTargetAnimName", l_AnimPointer_GetTargetAnimName },
  { "getCurrentAnimData", l_AnimPointer_GetCurrentAnimData },
  { "getTime", l_AnimPointer_GetTime },
  { "getFrequency", l_AnimPointer_GetFrequency },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_animset_const_m[] = {
  { "cloneLinkTable", l_AnimSet_CloneLinkTable },
  { "getLink", l_AnimSet_GetLink },
  { "getLinkProperty", l_AnimSet_GetLinkProperty },
  { "getAnim", l_AnimSet_GetAnim },
  { "getAnimStorageSize", l_AnimSet_GetAnimStorageSize },
  { "getAnimCount", l_AnimSet_GetAnimCount },
  { "getAnimIDFromName", l_AnimSet_GetAnimIDFromName },
  { "getName", l_AnimSet_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_animset_link_table_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_anim_const_m[] = {
  { "getNextEvent", l_Anim_GetNextEvent },
  { "getEventAfter", l_Anim_GetEventAfter },
  { "getKey", l_Anim_GetKey },
  { "getKeyData", l_Anim_GetKeyData },
  { "getKeyStorageSize", l_Anim_GetKeyStorageSize },
  { "getKeyCount", l_Anim_GetKeyCount },
  { "getEventStorageSize", l_Anim_GetEventStorageSize },
  { "getEventCount", l_Anim_GetEventCount },
  { "getLength", l_Anim_GetLength },
  { "getName", l_Anim_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_shaderpointer_const_m[] = {
  { "start", l_ShaderPointer_Start },
  { "stop", l_ShaderPointer_Stop },
  { "isEnabled", l_ShaderPointer_IsEnabled },
  { "getShader", l_ShaderPointer_GetShader },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_shader_const_m[] = {
  { "start", l_Shader_Start },
  { "stop", l_Shader_Stop },
  { "setFloatParam", l_Shader_SetFloatParam },
  { "setTextureParam", l_Shader_SetTextureParam },
  { "setVectorParam", l_Shader_SetVectorParam },
  { "isEnabled", l_Shader_IsEnabled },
  { "getName", l_Shader_GetName },
  { "getID", l_Shader_GetID },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_viewport_const_m[] = {
  { "getTextureList", l_Viewport_GetTextureList },
  { "getTextureCount", l_Viewport_GetTextureCount },
  { "hasBackgroundColor", l_Viewport_HasBackgroundColor },
  { "getBackgroundColor", l_Viewport_GetBackgroundColor },
  { "isEnabled", l_Viewport_IsEnabled },
  { "getCamera", l_Viewport_GetCamera },
  { "isShaderEnabled", l_Viewport_IsShaderEnabled },
  { "getShaderPointer", l_Viewport_GetShaderPointer },
  { "getBlendMode", l_Viewport_GetBlendMode },
  { "getPosition", l_Viewport_GetPosition },
  { "getSize", l_Viewport_GetSize },
  { "getRelativeSize", l_Viewport_GetRelativeSize },
  { "getBox", l_Viewport_GetBox },
  { "getCorrectionRatio", l_Viewport_GetCorrectionRatio },
  { "getName", l_Viewport_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_camera_const_m[] = {
  { "getGroupIDCount", l_Camera_GetGroupIDCount },
  { "getGroupID", l_Camera_GetGroupID },
  { "getFrustum", l_Camera_GetFrustum },
  { "getPosition", l_Camera_GetPosition },
  { "getRotation", l_Camera_GetRotation },
  { "getZoom", l_Camera_GetZoom },
  { "getName", l_Camera_GetName },
  { "getFrame", l_Camera_GetFrame },
  { "getParent", l_Camera_GetParent },
  { "getOwner", l_Structure_GetOwner },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_bitmap_const_m[] = {
  { "save", l_Display_SaveBitmap },
  { "getData", l_Display_GetBitmapData },
  { "getSize", l_Display_GetBitmapSize },
  { "getID", l_Display_GetBitmapID },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_display_mesh_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_character_map_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_font_const_m[] = {
  { "getTexture", l_Font_GetTexture },
  { "getCharacterList", l_Font_GetCharacterList },
  { "getCharacterHeight", l_Font_GetCharacterHeight },
  { "getCharacterWidth", l_Font_GetCharacterWidth },
  { "getCharacterSpacing", l_Font_GetCharacterSpacing },
  { "getOrigin", l_Font_GetOrigin },
  { "getSize", l_Font_GetSize },
  { "getMap", l_Font_GetMap },
  { "getName", l_Font_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_texture_const_m[] = {
  { "getBitmap", l_Texture_GetBitmap },
  { "getSize", l_Texture_GetSize },
  { "getName", l_Texture_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_text_const_m[] = {
  { "getName", l_Text_GetName },
  { "getLineCount", l_Text_GetLineCount },
  { "getLineSize", l_Text_GetLineSize },
  { "isFixedSize", l_Text_IsFixedSize },
  { "getSize", l_Text_GetSize },
  { "getString", l_Text_GetString },
  { "getFont", l_Text_GetFont },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_graphic_const_m[] = {
  { "clone", l_Graphic_Clone },
  { "getName", l_Graphic_GetName },
  { "getData", l_Graphic_GetData },
  { "getFlip", l_Graphic_GetFlip },
  { "getPivot", l_Graphic_GetPivot },
  { "getSize", l_Graphic_GetSize },
  { "hasColor", l_Graphic_HasColor },
  { "getColor", l_Graphic_GetColor },
  { "getRepeat", l_Graphic_GetRepeat },
  { "getOrigin", l_Graphic_GetOrigin },
  { "getSmoothing", l_Graphic_GetSmoothing },
  { "hasBlendMode", l_Graphic_HasBlendMode },
  { "getBlendMode", l_Graphic_GetBlendMode },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_body_const_m[] = {
  { "getName", l_Body_GetName },
  { "testDefFlags", l_Body_TestDefFlags },
  { "testAllDefFlags", l_Body_TestAllDefFlags },
  { "getDefFlags", l_Body_GetDefFlags },
  { "getNextPart", l_Body_GetNextPart },
  { "getNextJoint", l_Body_GetNextJoint },
  { "getPosition", l_Body_GetPosition },
  { "getRotation", l_Body_GetRotation },
  { "getSpeed", l_Body_GetSpeed },
  { "getSpeedAtWorldPosition", l_Body_GetSpeedAtWorldPosition },
  { "getAngularVelocity", l_Body_GetAngularVelocity },
  { "getCustomGravity", l_Body_GetCustomGravity },
  { "isFixedRotation", l_Body_IsFixedRotation },
  { "isDynamic", l_Body_IsDynamic },
  { "getAllowMoving", l_Body_GetAllowMoving },
  { "getMass", l_Body_GetMass },
  { "getMassCenter", l_Body_GetMassCenter },
  { "getLinearDamping", l_Body_GetLinearDamping },
  { "getAngularDamping", l_Body_GetAngularDamping },
  { "isInside", l_Body_IsInside },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_body_part_const_m[] = {
  { "getName", l_Body_GetPartName },
  { "getBody", l_Body_GetPartBody },
  { "getSelfFlags", l_Body_GetPartSelfFlags },
  { "getCheckMask", l_Body_GetPartCheckMask },
  { "isSolid", l_Body_IsPartSolid },
  { "getFriction", l_Body_GetPartFriction },
  { "getRestitution", l_Body_GetPartRestitution },
  { "getDensity", l_Body_GetPartDensity },
  { "isInside", l_Body_IsInsidePart },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_body_joint_const_m[] = {
  { "getName", l_Body_GetJointName },
  { "getReactionForce", l_Body_GetJointReactionForce },
  { "getReactionTorque", l_Body_GetJointReactionTorque },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_physics_body_const_m[] = {
  { "getPosition", l_Physics_GetPosition },
  { "getRotation", l_Physics_GetRotation },
  { "getSpeed", l_Physics_GetSpeed },
  { "getSpeedAtWorldPosition", l_Physics_GetSpeedAtWorldPosition },
  { "getAngularVelocity", l_Physics_GetAngularVelocity },
  { "getCustomGravity", l_Physics_GetCustomGravity },
  { "isFixedRotation", l_Physics_IsFixedRotation },
  { "getMass", l_Physics_GetMass },
  { "getMassCenter", l_Physics_GetMassCenter },
  { "getLinearDamping", l_Physics_GetLinearDamping },
  { "getAngularDamping", l_Physics_GetAngularDamping },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_physics_body_part_const_m[] = {
  { "getSelfFlags", l_Physics_GetPartSelfFlags },
  { "getCheckMask", l_Physics_GetPartCheckMask },
  { "isSolid", l_Physics_IsPartSolid },
  { "getFriction", l_Physics_GetPartFriction },
  { "getRestitution", l_Physics_GetPartRestitution },
  { "getDensity", l_Physics_GetPartDensity },
  { "isInside", l_Physics_IsInsidePart },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_physics_body_joint_const_m[] = {
  { "getReactionForce", l_Physics_GetJointReactionForce },
  { "getReactionTorque", l_Physics_GetJointReactionTorque },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_soundsystem_sound_const_m[] = {
  { "getVolume", l_SoundSystem_GetVolume },
  { "getPitch", l_SoundSystem_GetPitch },
  { "getTime", l_SoundSystem_GetTime },
  { "getPosition", l_SoundSystem_GetPosition },
  { "getSpatialization", l_SoundSystem_GetSpatialization },
  { "getPanning", l_SoundSystem_GetPanning },
  { "isLooping", l_SoundSystem_IsLooping },
  { "getDuration", l_SoundSystem_GetDuration },
  { "getStatus", l_SoundSystem_GetStatus },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_soundsystem_sample_const_m[] = {
  { "getInfo", l_SoundSystem_GetSampleInfo },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_const_m[] = {
  { "getVolume", l_Sound_GetVolume },
  { "getPitch", l_Sound_GetPitch },
  { "getTime", l_Sound_GetTime },
  { "getPosition", l_Sound_GetPosition },
  { "getSpatialization", l_Sound_GetSpatialization },
  { "getPanning", l_Sound_GetPanning },
  { "isLooping", l_Sound_IsLooping },
  { "getDuration", l_Sound_GetDuration },
  { "getStatus", l_Sound_GetStatus },
  { "getName", l_Sound_GetName },
  { "getBusID", l_Sound_GetBusID },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_stream_info_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_sound_stream_packet_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_soundpointer_const_m[] = {
  { "isEnabled", l_SoundPointer_IsEnabled },
  { "getLastAddedSound", l_SoundPointer_GetLastAddedSound },
  { "getCount", l_SoundPointer_GetCount },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_structure_const_m[] = {
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_spawner_const_m[] = {
  { "isEnabled", l_Spawner_IsEnabled },
  { "getTotalObjectLimit", l_Spawner_GetTotalObjectLimit },
  { "getActiveObjectLimit", l_Spawner_GetActiveObjectLimit },
  { "getTotalObjectCount", l_Spawner_GetTotalObjectCount },
  { "getActiveObjectCount", l_Spawner_GetActiveObjectCount },
  { "getWaveSize", l_Spawner_GetWaveSize },
  { "getWaveDelay", l_Spawner_GetWaveDelay },
  { "getNextWaveDelay", l_Spawner_GetNextWaveDelay },
  { "getObjectSpeed", l_Spawner_GetObjectSpeed },
  { "getFrame", l_Spawner_GetFrame },
  { "getPosition", l_Spawner_GetPosition },
  { "getWorldPosition", l_Spawner_GetWorldPosition },
  { "getRotation", l_Spawner_GetRotation },
  { "getWorldRotation", l_Spawner_GetWorldRotation },
  { "getScale", l_Spawner_GetScale },
  { "getWorldScale", l_Spawner_GetWorldScale },
  { "getParent", l_Spawner_GetParent },
  { "getName", l_Spawner_GetName },
  { "getOwner", l_Structure_GetOwner },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_frame_const_m[] = {
  { "getParent", l_Frame_GetParent },
  { "getChild", l_Frame_GetChild },
  { "getSibling", l_Frame_GetSibling },
  { "isRootChild", l_Frame_IsRootChild },
  { "getOwner", l_Structure_GetOwner },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_fxpointer_const_m[] = {
  { "isEnabled", l_FXPointer_IsEnabled },
  { "getTime", l_FXPointer_GetTime },
  { "getCount", l_FXPointer_GetCount },
  { "getFrequency", l_FXPointer_GetFrequency },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_object_const_m[] = {
  { "isEnabled", l_Object_IsEnabled },
  { "isPaused", l_Object_IsPaused },
  { "getUserData", l_Object_GetUserData },
  { "getOwner", l_Object_GetOwner },
  { "getOwnedChild", l_Object_GetOwnedChild },
  { "getOwnedSibling", l_Object_GetOwnedSibling },
  { "getClock", l_Object_GetClock },
  { "getFlip", l_Object_GetFlip },
  { "getPivot", l_Object_GetPivot },
  { "getOrigin", l_Object_GetOrigin },
  { "getSize", l_Object_GetSize },
  { "getPosition", l_Object_GetPosition },
  { "getWorldPosition", l_Object_GetWorldPosition },
  { "getRotation", l_Object_GetRotation },
  { "getWorldRotation", l_Object_GetWorldRotation },
  { "getScale", l_Object_GetScale },
  { "getWorldScale", l_Object_GetWorldScale },
  { "getParent", l_Object_GetParent },
  { "getChild", l_Object_GetChild },
  { "getSibling", l_Object_GetSibling },
  { "getNextChild", l_Object_GetNextChild },
  { "getIgnoreFlags", l_Object_GetIgnoreFlags },
  { "getLiteralIgnoreFlags", l_Object_GetLiteralIgnoreFlags },
  { "logParents", l_Object_LogParents },
  { "getAnimFrequency", l_Object_GetAnimFrequency },
  { "getCurrentAnim", l_Object_GetCurrentAnim },
  { "getTargetAnim", l_Object_GetTargetAnim },
  { "isCurrentAnim", l_Object_IsCurrentAnim },
  { "isTargetAnim", l_Object_IsTargetAnim },
  { "getSpeed", l_Object_GetSpeed },
  { "getRelativeSpeed", l_Object_GetRelativeSpeed },
  { "getAngularVelocity", l_Object_GetAngularVelocity },
  { "getCustomGravity", l_Object_GetCustomGravity },
  { "getMass", l_Object_GetMass },
  { "getMassCenter", l_Object_GetMassCenter },
  { "getBoundingBox", l_Object_GetBoundingBox },
  { "getFXFrequency", l_Object_GetFXFrequency },
  { "getLastAddedSound", l_Object_GetLastAddedSound },
  { "isShaderEnabled", l_Object_IsShaderEnabled },
  { "isTimeLineEnabled", l_Object_IsTimeLineEnabled },
  { "getName", l_Object_GetName },
  { "getSmoothing", l_Object_GetSmoothing },
  { "getWorkingTexture", l_Object_GetWorkingTexture },
  { "getWorkingGraphic", l_Object_GetWorkingGraphic },
  { "hasColor", l_Object_HasColor },
  { "getColor", l_Object_GetColor },
  { "getRepeat", l_Object_GetRepeat },
  { "hasBlendMode", l_Object_HasBlendMode },
  { "getBlendMode", l_Object_GetBlendMode },
  { "getLifeTime", l_Object_GetLifeTime },
  { "getActiveTime", l_Object_GetActiveTime },
  { "getGroupID", l_Object_GetGroupID },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_fx_const_m[] = {
  { "apply", l_FX_Apply },
  { "isEnabled", l_FX_IsEnabled },
  { "getDuration", l_FX_GetDuration },
  { "getName", l_FX_GetName },
  { "isLooping", l_FX_IsLooping },
  { "getStagger", l_FX_GetStagger },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};
static const struct luaL_Reg l_lorx_timeline_const_m[] = {
  { "isEnabled", l_TimeLine_IsEnabled },
  { "getCount", l_TimeLine_GetCount },
  { "getOwner", l_Structure_GetOwner },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "getRefCount", l_Structure_GetRefCount },
  { "getGUID", l_Structure_GetGUID },
  { "getID", l_Structure_GetID },
  { "testFlags", l_Structure_TestFlags },
  { "testAllFlags", l_Structure_TestAllFlags },
  { "getFlags", l_Structure_GetFlags },
  
  { NULL, NULL }
};

// utype registration
static void lorx_register_orx_utypes(lua_State *L)
{
  lorx_register_type(L, "lorx.orxFILE_INFO", 2, l_lorx_file_info_m, l_lorx_file_info_mm);
  lorx_register_type(L, "lorx.orxFILE_INFO#", 2, l_lorx_file_info_const_m, l_lorx_file_info_const_mm);
  lorx_register_type(L, "lorx.orxCOMMAND_VAR", 2, l_lorx_command_var_m, l_lorx_command_var_mm);
  lorx_register_type(L, "lorx.orxCOMMAND_VAR#", 2, l_lorx_command_var_const_m, l_lorx_command_var_const_mm);
  lorx_register_type(L, "lorx.orxANIM_CUSTOM_EVENT", 2, l_lorx_anim_custom_event_m, l_lorx_anim_custom_event_mm);
  lorx_register_type(L, "lorx.orxANIM_CUSTOM_EVENT#", 2, l_lorx_anim_custom_event_const_m, l_lorx_anim_custom_event_const_mm);
  lorx_register_type(L, "lorx.orxOBOX", 2, l_lorx_obox_m, l_lorx_obox_mm);
  lorx_register_type(L, "lorx.orxOBOX#", 2, l_lorx_obox_const_m, l_lorx_obox_const_mm);
  lorx_register_type(L, "lorx.orxVECTOR", 2, l_lorx_vector_m, l_lorx_vector_mm);
  lorx_register_type(L, "lorx.orxVECTOR#", 2, l_lorx_vector_const_m, l_lorx_vector_const_mm);
  lorx_register_type(L, "lorx.orxAABOX", 2, l_lorx_aabox_m, l_lorx_aabox_mm);
  lorx_register_type(L, "lorx.orxAABOX#", 2, l_lorx_aabox_const_m, l_lorx_aabox_const_mm);
  lorx_register_type(L, "lorx.orxRGBA", 2, l_lorx_rgba_m, l_lorx_rgba_mm);
  lorx_register_type(L, "lorx.orxRGBA#", 2, l_lorx_rgba_const_m, l_lorx_rgba_const_mm);
  lorx_register_type(L, "lorx.orxDISPLAY_TRANSFORM", 2, l_lorx_display_transform_m, l_lorx_display_transform_mm);
  lorx_register_type(L, "lorx.orxDISPLAY_TRANSFORM#", 2, l_lorx_display_transform_const_m, l_lorx_display_transform_const_mm);
  lorx_register_type(L, "lorx.orxDISPLAY_VIDEO_MODE", 2, l_lorx_display_video_mode_m, l_lorx_display_video_mode_mm);
  lorx_register_type(L, "lorx.orxDISPLAY_VIDEO_MODE#", 2, l_lorx_display_video_mode_const_m, l_lorx_display_video_mode_const_mm);
  lorx_register_type(L, "lorx.orxCHARACTER_GLYPH", 2, l_lorx_character_glyph_m, l_lorx_character_glyph_mm);
  lorx_register_type(L, "lorx.orxCHARACTER_GLYPH#", 2, l_lorx_character_glyph_const_m, l_lorx_character_glyph_const_mm);
  lorx_register_type(L, "lorx.orxCOLOR", 2, l_lorx_color_m, l_lorx_color_mm);
  lorx_register_type(L, "lorx.orxCOLOR#", 2, l_lorx_color_const_m, l_lorx_color_const_mm);
  lorx_register_type(L, "lorx.orxSOUND_FILTER_DATA", 2, l_lorx_sound_filter_data_m, l_lorx_sound_filter_data_mm);
  lorx_register_type(L, "lorx.orxSOUND_FILTER_DATA#", 2, l_lorx_sound_filter_data_const_m, l_lorx_sound_filter_data_const_mm);
  lorx_register_type(L, "lorx.orxFILE", 1, l_lorx_file_m);
  lorx_register_type(L, "lorx.orxFILE#", 1, l_lorx_file_const_m);
  lorx_register_type(L, "lorx.orxTHREAD_SEMAPHORE", 1, l_lorx_thread_semaphore_m);
  lorx_register_type(L, "lorx.orxTHREAD_SEMAPHORE#", 1, l_lorx_thread_semaphore_const_m);
  lorx_register_type(L, "lorx.orxCLOCK", 1, l_lorx_clock_m);
  lorx_register_type(L, "lorx.orxCLOCK#", 1, l_lorx_clock_const_m);
  lorx_register_type(L, "lorx.orxCLOCK_INFO", 2, l_lorx_clock_info_m, l_lorx_clock_info_mm);
  lorx_register_type(L, "lorx.orxCLOCK_INFO#", 2, l_lorx_clock_info_const_m, l_lorx_clock_info_const_mm);
  lorx_register_type(L, "lorx.orxANIMPOINTER", 1, l_lorx_animpointer_m);
  lorx_register_type(L, "lorx.orxANIMPOINTER#", 1, l_lorx_animpointer_const_m);
  lorx_register_type(L, "lorx.orxANIMSET", 1, l_lorx_animset_m);
  lorx_register_type(L, "lorx.orxANIMSET#", 1, l_lorx_animset_const_m);
  lorx_register_type(L, "lorx.orxANIMSET_LINK_TABLE", 1, l_lorx_animset_link_table_m);
  lorx_register_type(L, "lorx.orxANIMSET_LINK_TABLE#", 1, l_lorx_animset_link_table_const_m);
  lorx_register_type(L, "lorx.orxANIM", 1, l_lorx_anim_m);
  lorx_register_type(L, "lorx.orxANIM#", 1, l_lorx_anim_const_m);
  lorx_register_type(L, "lorx.orxSHADERPOINTER", 1, l_lorx_shaderpointer_m);
  lorx_register_type(L, "lorx.orxSHADERPOINTER#", 1, l_lorx_shaderpointer_const_m);
  lorx_register_type(L, "lorx.orxSHADER", 1, l_lorx_shader_m);
  lorx_register_type(L, "lorx.orxSHADER#", 1, l_lorx_shader_const_m);
  lorx_register_type(L, "lorx.orxVIEWPORT", 1, l_lorx_viewport_m);
  lorx_register_type(L, "lorx.orxVIEWPORT#", 1, l_lorx_viewport_const_m);
  lorx_register_type(L, "lorx.orxCAMERA", 1, l_lorx_camera_m);
  lorx_register_type(L, "lorx.orxCAMERA#", 1, l_lorx_camera_const_m);
  lorx_register_type(L, "lorx.orxBITMAP", 1, l_lorx_bitmap_m);
  lorx_register_type(L, "lorx.orxBITMAP#", 1, l_lorx_bitmap_const_m);
  lorx_register_type(L, "lorx.orxDISPLAY_MESH", 1, l_lorx_display_mesh_m);
  lorx_register_type(L, "lorx.orxDISPLAY_MESH#", 1, l_lorx_display_mesh_const_m);
  lorx_register_type(L, "lorx.orxCHARACTER_MAP", 2, l_lorx_character_map_m, l_lorx_character_map_mm);
  lorx_register_type(L, "lorx.orxCHARACTER_MAP#", 2, l_lorx_character_map_const_m, l_lorx_character_map_const_mm);
  lorx_register_type(L, "lorx.orxFONT", 1, l_lorx_font_m);
  lorx_register_type(L, "lorx.orxFONT#", 1, l_lorx_font_const_m);
  lorx_register_type(L, "lorx.orxTEXTURE", 1, l_lorx_texture_m);
  lorx_register_type(L, "lorx.orxTEXTURE#", 1, l_lorx_texture_const_m);
  lorx_register_type(L, "lorx.orxTEXT", 1, l_lorx_text_m);
  lorx_register_type(L, "lorx.orxTEXT#", 1, l_lorx_text_const_m);
  lorx_register_type(L, "lorx.orxGRAPHIC", 1, l_lorx_graphic_m);
  lorx_register_type(L, "lorx.orxGRAPHIC#", 1, l_lorx_graphic_const_m);
  lorx_register_type(L, "lorx.orxBODY", 1, l_lorx_body_m);
  lorx_register_type(L, "lorx.orxBODY#", 1, l_lorx_body_const_m);
  lorx_register_type(L, "lorx.orxBODY_PART", 1, l_lorx_body_part_m);
  lorx_register_type(L, "lorx.orxBODY_PART#", 1, l_lorx_body_part_const_m);
  lorx_register_type(L, "lorx.orxBODY_JOINT", 1, l_lorx_body_joint_m);
  lorx_register_type(L, "lorx.orxBODY_JOINT#", 1, l_lorx_body_joint_const_m);
  lorx_register_type(L, "lorx.orxPHYSICS_BODY", 1, l_lorx_physics_body_m);
  lorx_register_type(L, "lorx.orxPHYSICS_BODY#", 1, l_lorx_physics_body_const_m);
  lorx_register_type(L, "lorx.orxPHYSICS_BODY_PART", 1, l_lorx_physics_body_part_m);
  lorx_register_type(L, "lorx.orxPHYSICS_BODY_PART#", 1, l_lorx_physics_body_part_const_m);
  lorx_register_type(L, "lorx.orxPHYSICS_BODY_JOINT", 1, l_lorx_physics_body_joint_m);
  lorx_register_type(L, "lorx.orxPHYSICS_BODY_JOINT#", 1, l_lorx_physics_body_joint_const_m);
  lorx_register_type(L, "lorx.orxSOUNDSYSTEM_SOUND", 1, l_lorx_soundsystem_sound_m);
  lorx_register_type(L, "lorx.orxSOUNDSYSTEM_SOUND#", 1, l_lorx_soundsystem_sound_const_m);
  lorx_register_type(L, "lorx.orxSOUNDSYSTEM_SAMPLE", 1, l_lorx_soundsystem_sample_m);
  lorx_register_type(L, "lorx.orxSOUNDSYSTEM_SAMPLE#", 1, l_lorx_soundsystem_sample_const_m);
  lorx_register_type(L, "lorx.orxSOUND", 1, l_lorx_sound_m);
  lorx_register_type(L, "lorx.orxSOUND#", 1, l_lorx_sound_const_m);
  lorx_register_type(L, "lorx.orxSOUND_STREAM_INFO", 2, l_lorx_sound_stream_info_m, l_lorx_sound_stream_info_mm);
  lorx_register_type(L, "lorx.orxSOUND_STREAM_INFO#", 2, l_lorx_sound_stream_info_const_m, l_lorx_sound_stream_info_const_mm);
  lorx_register_type(L, "lorx.orxSOUND_STREAM_PACKET", 2, l_lorx_sound_stream_packet_m, l_lorx_sound_stream_packet_mm);
  lorx_register_type(L, "lorx.orxSOUND_STREAM_PACKET#", 2, l_lorx_sound_stream_packet_const_m, l_lorx_sound_stream_packet_const_mm);
  lorx_register_type(L, "lorx.orxSOUNDPOINTER", 1, l_lorx_soundpointer_m);
  lorx_register_type(L, "lorx.orxSOUNDPOINTER#", 1, l_lorx_soundpointer_const_m);
  lorx_register_type(L, "lorx.orxSTRUCTURE", 1, l_lorx_structure_m);
  lorx_register_type(L, "lorx.orxSTRUCTURE#", 1, l_lorx_structure_const_m);
  lorx_register_type(L, "lorx.orxSPAWNER", 1, l_lorx_spawner_m);
  lorx_register_type(L, "lorx.orxSPAWNER#", 1, l_lorx_spawner_const_m);
  lorx_register_type(L, "lorx.orxFRAME", 1, l_lorx_frame_m);
  lorx_register_type(L, "lorx.orxFRAME#", 1, l_lorx_frame_const_m);
  lorx_register_type(L, "lorx.orxFXPOINTER", 1, l_lorx_fxpointer_m);
  lorx_register_type(L, "lorx.orxFXPOINTER#", 1, l_lorx_fxpointer_const_m);
  lorx_register_type(L, "lorx.orxOBJECT", 1, l_lorx_object_m);
  lorx_register_type(L, "lorx.orxOBJECT#", 1, l_lorx_object_const_m);
  lorx_register_type(L, "lorx.orxFX", 1, l_lorx_fx_m);
  lorx_register_type(L, "lorx.orxFX#", 1, l_lorx_fx_const_m);
  lorx_register_type(L, "lorx.orxTIMELINE", 1, l_lorx_timeline_m);
  lorx_register_type(L, "lorx.orxTIMELINE#", 1, l_lorx_timeline_const_m);

}

#endif /* __LORX_UTYPES_H__ */
/*
** Lua function bindings to Orx C API
** (generated with bind.py)
*/


#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <string.h>
#include <orx.h>
#include "conbasic.h"
#include "conenum.h"
#include "conenumex.h"
#include "conutype.h"
#include "bindings.h"


LORX_API int l_Anim_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnim_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Anim_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnim_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Anim_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnim_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Anim_Create(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32KeyNumber = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32EventNumber = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIM* _retval = orxAnim_Create(_u32Flags, _u32KeyNumber, _u32EventNumber);
  
  /* post processing */
  lorx_orxANIM_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Anim_Delete(lua_State *L)
{
  /* get arguments */
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnim_Delete(_pstAnim);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Anim_AddKey(lua_State *L)
{
  /* get arguments */
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  orxSTRUCTURE* _pstData = lorx_luserdata_to_orxSTRUCTURE(L, 2);
  orxFLOAT _fTimeStamp = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnim_AddKey(_pstAnim, _pstData, _fTimeStamp);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Anim_RemoveLastKey(lua_State *L)
{
  /* get arguments */
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnim_RemoveLastKey(_pstAnim);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Anim_RemoveAllKeys(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnim_RemoveAllKeys(_pstAnim);
  
  /* post processing */
  return 0;
}


LORX_API int l_Anim_AddEvent(lua_State *L)
{
  /* get arguments */
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  const orxSTRING _zEventName = lorx_lstring_to_orxSTRING(L, 2);
  orxFLOAT _fTimeStamp = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnim_AddEvent(_pstAnim, _zEventName, _fTimeStamp, _fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Anim_RemoveLastEvent(lua_State *L)
{
  /* get arguments */
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnim_RemoveLastEvent(_pstAnim);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Anim_RemoveAllEvents(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnim_RemoveAllEvents(_pstAnim);
  
  /* post processing */
  return 0;
}


LORX_API int l_Anim_GetNextEvent(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  const orxANIM_CUSTOM_EVENT* _pstEvent = lorx_luserdata_to_orxANIM_CUSTOM_EVENT_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxANIM_CUSTOM_EVENT* _retval = orxAnim_GetNextEvent(_pstAnim, _pstEvent);
  
  /* post processing */
  lorx_orxANIM_CUSTOM_EVENT_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetEventAfter(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  orxFLOAT _fTimeStamp = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxANIM_CUSTOM_EVENT* _retval = orxAnim_GetEventAfter(_pstAnim, _fTimeStamp);
  
  /* post processing */
  lorx_orxANIM_CUSTOM_EVENT_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetKey(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  orxFLOAT _fTimeStamp = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnim_GetKey(_pstAnim, _fTimeStamp);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetKeyData(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxAnim_GetKeyData(_pstAnim, _u32Index);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetKeyStorageSize(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnim_GetKeyStorageSize(_pstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetKeyCount(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnim_GetKeyCount(_pstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetEventStorageSize(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnim_GetEventStorageSize(_pstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetEventCount(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnim_GetEventCount(_pstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetLength(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxAnim_GetLength(_pstAnim);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Anim_GetName(lua_State *L)
{
  /* get arguments */
  const orxANIM* _pstAnim = lorx_luserdata_to_orxANIM_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxAnim_GetName(_pstAnim);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimPointer_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimPointer_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimPointer_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimPointer_Create(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIMPOINTER* _retval = orxAnimPointer_Create(_pstAnimSet);
  
  /* post processing */
  lorx_orxANIMPOINTER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIMPOINTER* _retval = orxAnimPointer_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxANIMPOINTER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_Delete(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_Delete(_pstAnimPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetAnimSet(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIMSET* _retval = orxAnimPointer_GetAnimSet(_pstAnimPointer);
  
  /* post processing */
  lorx_orxANIMSET_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetCurrentAnim(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimPointer_GetCurrentAnim(_pstAnimPointer);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetTargetAnim(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimPointer_GetTargetAnim(_pstAnimPointer);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetCurrentAnimName(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxAnimPointer_GetCurrentAnimName(_pstAnimPointer);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetTargetAnimName(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxAnimPointer_GetTargetAnimName(_pstAnimPointer);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetCurrentAnimData(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxAnimPointer_GetCurrentAnimData(_pstAnimPointer);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetTime(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxAnimPointer_GetTime(_pstAnimPointer);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_GetFrequency(lua_State *L)
{
  /* get arguments */
  const orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxAnimPointer_GetFrequency(_pstAnimPointer);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_SetCurrentAnim(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  orxU32 _u32AnimID = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_SetCurrentAnim(_pstAnimPointer, _u32AnimID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_SetTargetAnim(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  orxU32 _u32AnimID = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_SetTargetAnim(_pstAnimPointer, _u32AnimID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_SetCurrentAnimFromName(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_SetCurrentAnimFromName(_pstAnimPointer, _zAnimName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_SetTargetAnimFromName(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_SetTargetAnimFromName(_pstAnimPointer, _zAnimName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_SetTime(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  orxFLOAT _fTime = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_SetTime(_pstAnimPointer, _fTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_SetFrequency(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  orxFLOAT _fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_SetFrequency(_pstAnimPointer, _fFrequency);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimPointer_Pause(lua_State *L)
{
  /* get arguments */
  orxANIMPOINTER* _pstAnimPointer = lorx_luserdata_to_orxANIMPOINTER(L, 1);
  orxBOOL _bPause = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimPointer_Pause(_pstAnimPointer, _bPause);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimSet_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimSet_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimSet_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimSet_Create(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Size = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIMSET* _retval = orxAnimSet_Create(_u32Size);
  
  /* post processing */
  lorx_orxANIMSET_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIMSET* _retval = orxAnimSet_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxANIMSET_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_Delete(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_Delete(_pstAnimSet);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_ClearCache(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_ClearCache();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_AddReference(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimSet_AddReference(_pstAnimSet);
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimSet_RemoveReference(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimSet_RemoveReference(_pstAnimSet);
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimSet_CloneLinkTable(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIMSET_LINK_TABLE* _retval = orxAnimSet_CloneLinkTable(_pstAnimSet);
  
  /* post processing */
  lorx_orxANIMSET_LINK_TABLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_DeleteLinkTable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxANIMSET_LINK_TABLE* _pstLinkTable = lorx_luserdata_to_orxANIMSET_LINK_TABLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAnimSet_DeleteLinkTable(_pstLinkTable);
  
  /* post processing */
  return 0;
}


LORX_API int l_AnimSet_AddAnim(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxANIM* _pstAnim = lorx_luserdata_to_orxANIM(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_AddAnim(_pstAnimSet, _pstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_RemoveAnim(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxU32 _u32AnimID = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_RemoveAnim(_pstAnimSet, _u32AnimID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_RemoveAllAnims(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_RemoveAllAnims(_pstAnimSet);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_AddLink(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxU32 _u32SrcAnim = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32DstAnim = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_AddLink(_pstAnimSet, _u32SrcAnim, _u32DstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_RemoveLink(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxU32 _u32LinkID = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_RemoveLink(_pstAnimSet, _u32LinkID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetLink(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  orxU32 _u32SrcAnim = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32DstAnim = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_GetLink(_pstAnimSet, _u32SrcAnim, _u32DstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_SetLinkProperty(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxU32 _u32LinkID = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32Property = lorx_linteger_to_orxU32(L, 3);
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxAnimSet_SetLinkProperty(_pstAnimSet, _u32LinkID, _u32Property, _u32Value);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetLinkProperty(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  orxU32 _u32LinkID = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32Property = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_GetLinkProperty(_pstAnimSet, _u32LinkID, _u32Property);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_ComputeAnim(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxU32 _u32SrcAnim = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32DstAnim = lorx_linteger_to_orxU32(L, 3);
  orxFLOAT _fTime = lorx_lnumber_to_orxFLOAT(L, 5);
  orxANIMSET_LINK_TABLE* _pstLinkTable = lorx_luserdata_to_orxANIMSET_LINK_TABLE(L, 5);
  orxBOOL _bCut;
  memset(&_bCut, 0, sizeof(orxBOOL));
  orxBOOL _bClearTarget;
  memset(&_bClearTarget, 0, sizeof(orxBOOL));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_ComputeAnim(_pstAnimSet, _u32SrcAnim, _u32DstAnim, &_fTime, _pstLinkTable, &_bCut, &_bClearTarget);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fTime);
  lorx_orxBOOL_to_lboolean(L, _bCut);
  lorx_orxBOOL_to_lboolean(L, _bClearTarget);
  return 4;
}


LORX_API int l_AnimSet_FindNextAnim(lua_State *L)
{
  /* get arguments */
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 1);
  orxU32 _u32SrcAnim = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32DstAnim = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_FindNextAnim(_pstAnimSet, _u32SrcAnim, _u32DstAnim);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetAnim(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  orxU32 _u32AnimID = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxANIM* _retval = orxAnimSet_GetAnim(_pstAnimSet, _u32AnimID);
  
  /* post processing */
  lorx_orxANIM_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetAnimStorageSize(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_GetAnimStorageSize(_pstAnimSet);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetAnimCount(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_GetAnimCount(_pstAnimSet);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetAnimIDFromName(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxAnimSet_GetAnimIDFromName(_pstAnimSet, _zAnimName);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_AnimSet_GetName(lua_State *L)
{
  /* get arguments */
  const orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxAnimSet_GetName(_pstAnimSet);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Module_AddDependency(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxMODULE_ID _eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 1);
  orxMODULE_ID _eDependID = lorx_lenumstr_to_orxMODULE_ID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxModule_AddDependency(_eModuleID, _eDependID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Module_AddOptionalDependency(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxMODULE_ID _eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 1);
  orxMODULE_ID _eDependID = lorx_lenumstr_to_orxMODULE_ID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxModule_AddOptionalDependency(_eModuleID, _eDependID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Module_Init(lua_State *L)
{
  /* get arguments */
  orxMODULE_ID _eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxModule_Init(_eModuleID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Module_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxMODULE_ID _eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxModule_Exit(_eModuleID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Module_IsInitialized(lua_State *L)
{
  /* get arguments */
  orxMODULE_ID _eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxModule_IsInitialized(_eModuleID);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Module_GetName(lua_State *L)
{
  /* get arguments */
  orxMODULE_ID _eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxModule_GetName(_eModuleID);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Clock_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxClock_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Clock_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxClock_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Clock_Update(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Update();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_Create(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fTickSize = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCLOCK* _retval = orxClock_Create(_fTickSize);
  
  /* post processing */
  lorx_orxCLOCK_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Clock_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCLOCK* _retval = orxClock_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxCLOCK_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Clock_Delete(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Delete(_pstClock);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_Resync(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Resync(_pstClock);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_ResyncAll(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_ResyncAll();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_Restart(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Restart(_pstClock);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_Pause(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Pause(_pstClock);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_Unpause(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_Unpause(_pstClock);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_IsPaused(lua_State *L)
{
  /* get arguments */
  const orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxClock_IsPaused(_pstClock);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Clock_GetInfo(lua_State *L)
{
  /* get arguments */
  const orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxCLOCK_INFO* _retval = orxClock_GetInfo(_pstClock);
  
  /* post processing */
  lorx_orxCLOCK_INFO_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_Clock_GetFromInfo(lua_State *L)
{
  /* get arguments */
  const orxCLOCK_INFO* _pstClockInfo = lorx_luserdata_to_orxCLOCK_INFO_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCLOCK* _retval = orxClock_GetFromInfo(_pstClockInfo);
  
  /* post processing */
  lorx_orxCLOCK_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Clock_SetModifier(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  orxCLOCK_MODIFIER _eModifier = lorx_lenumstr_to_orxCLOCK_MODIFIER(L, 2);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_SetModifier(_pstClock, _eModifier, _fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_GetModifier(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  orxCLOCK_MODIFIER _eModifier = lorx_lenumstr_to_orxCLOCK_MODIFIER(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxClock_GetModifier(_pstClock, _eModifier);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Clock_SetTickSize(lua_State *L)
{
  /* get arguments */
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  orxFLOAT _fTickSize = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxClock_SetTickSize(_pstClock, _fTickSize);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Clock_GetNext(lua_State *L)
{
  /* get arguments */
  const orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCLOCK* _retval = orxClock_GetNext(_pstClock);
  
  /* post processing */
  lorx_orxCLOCK_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Clock_Get(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCLOCK* _retval = orxClock_Get(_zName);
  
  /* post processing */
  lorx_orxCLOCK_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Clock_GetName(lua_State *L)
{
  /* get arguments */
  const orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxClock_GetName(_pstClock);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Command_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCommand_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Command_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCommand_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Command_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCommand_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Command_Unregister(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zCommand = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCommand_Unregister(_zCommand);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Command_IsRegistered(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zCommand = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxCommand_IsRegistered(_zCommand);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Command_AddAlias(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zAlias = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zCommand = lorx_lstring_to_orxSTRING(L, 2);
  const orxSTRING _zArgs = lorx_lstring_to_orxSTRING(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCommand_AddAlias(_zAlias, _zCommand, _zArgs);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Command_RemoveAlias(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zAlias = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCommand_RemoveAlias(_zAlias);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Command_IsAlias(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zAlias = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxCommand_IsAlias(_zAlias);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Command_GetPrototype(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zCommand = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxCommand_GetPrototype(_zCommand);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Command_GetNext(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zBase = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zPrevious = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32CommonLength;
  memset(&_u32CommonLength, 0, sizeof(orxU32));
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxCommand_GetNext(_zBase, _zPrevious, &_u32CommonLength);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  lorx_orxU32_to_linteger(L, _u32CommonLength);
  return 2;
}


LORX_API int l_Command_Evaluate(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zCommandLine = lorx_lstring_to_orxSTRING(L, 1);
  orxCOMMAND_VAR _stResult;
  memset(&_stResult, 0, sizeof(orxCOMMAND_VAR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOMMAND_VAR* _retval = orxCommand_Evaluate(_zCommandLine, &_stResult);
  
  /* post processing */
  lorx_orxCOMMAND_VAR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Command_EvaluateWithGUID(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zCommandLine = lorx_lstring_to_orxSTRING(L, 1);
  orxU64 _u64GUID = lorx_linteger_to_orxU64(L, 2);
  orxCOMMAND_VAR _stResult;
  memset(&_stResult, 0, sizeof(orxCOMMAND_VAR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOMMAND_VAR* _retval = orxCommand_EvaluateWithGUID(_zCommandLine, _u64GUID, &_stResult);
  
  /* post processing */
  lorx_orxCOMMAND_VAR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Command_Execute(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zCommand = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32ArgNumber = lorx_linteger_to_orxU32(L, 2);
  luaL_checktype(L, 3, LUA_TTABLE);
  orxCOMMAND_VAR _stResult;
  memset(&_stResult, 0, sizeof(orxCOMMAND_VAR));
  
  /* arguments processing & checks */
  
  orxCOMMAND_VAR* _astArgList = malloc(sizeof(orxCOMMAND_VAR)*_u32ArgNumber);
  for (size_t i = 0; i < _u32ArgNumber; i++)
  {
    lua_geti(L, 3, i+1);
    _astArgList[i] = lorx_luserdata_to_orxCOMMAND_VAR_struct(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxCOMMAND_VAR* _retval = orxCommand_Execute(_zCommand, _u32ArgNumber, _astArgList, &_stResult);
  
  /* post processing */
  lorx_orxCOMMAND_VAR_to_luserdata_struct(L, _retval);
  free(_astArgList);
  return 1;
}


LORX_API int l_Command_ParseNumericalArguments(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ArgNumber = lorx_linteger_to_orxU32(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxCOMMAND_VAR* _astOperandList = malloc(sizeof(orxCOMMAND_VAR)*_u32ArgNumber);
  memset(_astOperandList, 0, sizeof(orxCOMMAND_VAR)*_u32ArgNumber);
  
  /* arguments processing & checks */
  
  orxCOMMAND_VAR* _astArgList = malloc(sizeof(orxCOMMAND_VAR)*_u32ArgNumber);
  for (size_t i = 0; i < _u32ArgNumber; i++)
  {
    lua_geti(L, 2, i+1);
    _astArgList[i] = lorx_luserdata_to_orxCOMMAND_VAR_struct(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxCommand_ParseNumericalArguments(_u32ArgNumber, _astArgList, _astOperandList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_astArgList);
  
  if (_u32ArgNumber <= 0)
  {
    lua_pushnil(L);
  }
  else
  {
    lua_createtable(L, _u32ArgNumber, 0);
    for (size_t i = 0; i < _u32ArgNumber; i++)
    {
      lorx_orxCOMMAND_VAR_to_luserdata_struct(L, &(_astOperandList[i]));
      lua_seti(L, -2, i+1);
    }
  }
  free(_astOperandList);
  return 2;
}


LORX_API int l_Config_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxConfig_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Config_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxConfig_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Config_SetEncryptionKey(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zEncryptionKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetEncryptionKey(_zEncryptionKey);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_GetEncryptionKey(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetEncryptionKey();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_SetBaseName(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zBaseName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetBaseName(_zBaseName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_GetMainFileName(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetMainFileName();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_Load(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_Load(_zFileName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_LoadFromMemory(lua_State *L)
{
  /* get arguments */
  luaL_checktype(L, 1, LUA_TTABLE);
  orxU32 _u32BufferSize = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  orxCHAR* _acBuffer = malloc(sizeof(orxCHAR)*_u32BufferSize);
  for (size_t i = 0; i < _u32BufferSize; i++)
  {
    lua_geti(L, 1, i+1);
    _acBuffer[i] = lorx_lstring_to_orxCHAR(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_LoadFromMemory(_acBuffer, _u32BufferSize);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_acBuffer);
  return 1;
}


LORX_API int l_Config_ReloadHistory(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_ReloadHistory();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_CopyFile(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zDstFileName = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zSrcFileName = lorx_lstring_to_orxSTRING(L, 2);
  const orxSTRING _zEncryptionKey = lorx_lstring_to_orxSTRING(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_CopyFile(_zDstFileName, _zSrcFileName, _zEncryptionKey);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_MergeFiles(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zDstFileName = lorx_lstring_to_orxSTRING(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 3);
  const orxSTRING _zEncryptionKey = lorx_lstring_to_orxSTRING(L, 4);
  
  /* arguments processing & checks */
  
  const orxSTRING* _azSrcFileName = malloc(sizeof(orxSTRING)*_u32Number);
  for (size_t i = 0; i < _u32Number; i++)
  {
    lua_geti(L, 2, i+1);
    _azSrcFileName[i] = lorx_lstring_to_orxSTRING(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_MergeFiles(_zDstFileName, _azSrcFileName, _u32Number, _zEncryptionKey);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_azSrcFileName);
  return 1;
}


LORX_API int l_Config_SelectSection(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SelectSection(_zSectionName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_RenameSection(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zNewSectionName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_RenameSection(_zSectionName, _zNewSectionName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_GetOrigin(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetOrigin(_zSectionName);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_GetOriginID(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxConfig_GetOriginID(_zSectionName);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_SetParent(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zParentName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetParent(_zSectionName, _zParentName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_GetParent(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetParent(_zSectionName);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_SetDefaultParent(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetDefaultParent(_zSectionName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_GetCurrentSection(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetCurrentSection();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_PushSection(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_PushSection(_zSectionName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_PopSection(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_PopSection();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_HasSection(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_HasSection(_zSectionName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_ProtectSection(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bProtect = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_ProtectSection(_zSectionName, _bProtect);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_GetSectionCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConfig_GetSectionCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetSection(lua_State *L)
{
  /* get arguments */
  orxU32 _u32SectionIndex = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetSection(_u32SectionIndex);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_ClearSection(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSectionName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_ClearSection(_zSectionName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_ClearValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_ClearValue(_zKey);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_IsLocallyInheritedValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_IsLocallyInheritedValue(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_IsInheritedValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_IsInheritedValue(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_IsRandomValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_IsRandomValue(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_IsDynamicValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_IsDynamicValue(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_IsCommandValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_IsCommandValue(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_HasValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_HasValue(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_GetValueSource(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetValueSource(_zKey);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_GetS32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxConfig_GetS32(_zKey);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetU32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConfig_GetU32(_zKey);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetS64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxConfig_GetS64(_zKey);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetU64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU64 _retval = orxConfig_GetU64(_zKey);
  
  /* post processing */
  lorx_orxU64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetFloat(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxConfig_GetFloat(_zKey);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Config_GetString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetString(_zKey);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_GetBool(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_GetBool(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_GetVector(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxVECTOR _vVector;
  memset(&_vVector, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxConfig_GetVector(_zKey, &_vVector);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Config_DuplicateRawValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRING _retval = orxConfig_DuplicateRawValue(_zKey);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_SetS32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32Value = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetS32(_zKey, _s32Value);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetU32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetU32(_zKey, _u32Value);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetS64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS64 _s64Value = lorx_linteger_to_orxS64(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetS64(_zKey, _s64Value);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetU64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxU64 _u64Value = lorx_linteger_to_orxU64(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetU64(_zKey, _u64Value);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetFloat(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetFloat(_zKey, _fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zValue = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetString(_zKey, _zValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetStringBlock(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zValue = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetStringBlock(_zKey, _zValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetBool(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bValue = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetBool(_zKey, _bValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_SetVector(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  const orxVECTOR* _pvValue = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetVector(_zKey, _pvValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Config_IsList(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_IsList(_zKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListCount(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxConfig_GetListCount(_zKey);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListS32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxConfig_GetListS32(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListU32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConfig_GetListU32(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListS64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxConfig_GetListS64(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListU64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU64 _retval = orxConfig_GetListU64(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxU64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListFloat(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxConfig_GetListFloat(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetListString(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListBool(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConfig_GetListBool(_zKey, _s32ListIndex);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Config_GetListVector(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32ListIndex = lorx_linteger_to_orxS32(L, 2);
  orxVECTOR _vVector;
  memset(&_vVector, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxConfig_GetListVector(_zKey, _s32ListIndex, &_vVector);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Config_SetListString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  const orxSTRING* _azValue = malloc(sizeof(orxSTRING)*_u32Number);
  for (size_t i = 0; i < _u32Number; i++)
  {
    lua_geti(L, 2, i+1);
    _azValue[i] = lorx_lstring_to_orxSTRING(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_SetListString(_zKey, _azValue, _u32Number);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_azValue);
  return 1;
}


LORX_API int l_Config_AppendListString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  const orxSTRING* _azValue = malloc(sizeof(orxSTRING)*_u32Number);
  for (size_t i = 0; i < _u32Number; i++)
  {
    lua_geti(L, 2, i+1);
    _azValue[i] = lorx_lstring_to_orxSTRING(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxConfig_AppendListString(_zKey, _azValue, _u32Number);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_azValue);
  return 1;
}


LORX_API int l_Config_GetKeyCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConfig_GetKeyCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Config_GetKey(lua_State *L)
{
  /* get arguments */
  orxU32 _u32KeyIndex = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConfig_GetKey(_u32KeyIndex);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Console_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxConsole_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Console_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConsole_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Console_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxConsole_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Console_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxConsole_Enable(_bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Console_IsEnabled(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConsole_IsEnabled();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Console_IsInsertMode(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxConsole_IsInsertMode();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Console_SetToggle(lua_State *L)
{
  /* get arguments */
  orxINPUT_TYPE _eInputType = lorx_lenumstr_to_orxINPUT_TYPE(L, 1);
  orxENUM _eInputID = lorx_lenumstr_to_input_orxENUM(L, 2, _eInputType);
  orxINPUT_MODE _eInputMode = lorx_lenumstr_to_orxINPUT_MODE(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConsole_SetToggle(_eInputType, _eInputID, _eInputMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Console_Log(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zText = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConsole_Log(_zText);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Console_SetFont(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConsole_SetFont(_pstFont);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Console_GetFont(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxFONT* _retval = orxConsole_GetFont();
  
  /* post processing */
  lorx_orxFONT_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_Console_SetLogLineLength(lua_State *L)
{
  /* get arguments */
  orxU32 _u32LineLength = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxConsole_SetLogLineLength(_u32LineLength);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Console_GetLogLineLength(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConsole_GetLogLineLength();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Console_GetCompletionCount(lua_State *L)
{
  /* get arguments */
  orxU32 _u32MaxLength;
  memset(&_u32MaxLength, 0, sizeof(orxU32));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConsole_GetCompletionCount(&_u32MaxLength);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  lorx_orxU32_to_linteger(L, _u32MaxLength);
  return 2;
}


LORX_API int l_Console_GetCompletion(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 1);
  orxBOOL _bActive;
  memset(&_bActive, 0, sizeof(orxBOOL));
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConsole_GetCompletion(_u32Index, &_bActive);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  lorx_orxBOOL_to_lboolean(L, _bActive);
  return 2;
}


LORX_API int l_Console_GetTrailLogLine(lua_State *L)
{
  /* get arguments */
  orxU32 _u32TrailLineIndex = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConsole_GetTrailLogLine(_u32TrailLineIndex);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Console_GetTrailLogLineOffset(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxConsole_GetTrailLogLineOffset();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Console_GetInput(lua_State *L)
{
  /* get arguments */
  orxU32 _u32CursorIndex;
  memset(&_u32CursorIndex, 0, sizeof(orxU32));
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxConsole_GetInput(&_u32CursorIndex);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  lorx_orxU32_to_linteger(L, _u32CursorIndex);
  return 2;
}


LORX_API int l_Event_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxEvent_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Event_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxEvent_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Event_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxEvent_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Event_SendShort(lua_State *L)
{
  /* get arguments */
  orxEVENT_TYPE _eEventType = lorx_lenumstr_to_orxEVENT_TYPE(L, 1);
  orxENUM _eEventID = lorx_lenumstr_to_event_orxENUM(L, 2, _eEventType);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxEvent_SendShort(_eEventType, _eEventID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Event_IsSending(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxEvent_IsSending();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Locale_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxLocale_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Locale_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxLocale_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Locale_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxLocale_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Locale_SelectLanguage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zLanguage = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxLocale_SelectLanguage(_zLanguage, _zGroup);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Locale_GetCurrentLanguage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxLocale_GetCurrentLanguage(_zGroup);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Locale_HasLanguage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zLanguage = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxLocale_HasLanguage(_zLanguage);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Locale_GetLanguageCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxLocale_GetLanguageCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Locale_GetLanguage(lua_State *L)
{
  /* get arguments */
  orxU32 _u32LanguageIndex = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxLocale_GetLanguage(_u32LanguageIndex);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Locale_HasString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxLocale_HasString(_zKey, _zGroup);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Locale_GetString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxLocale_GetString(_zKey, _zGroup);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Locale_SetString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zKey = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zValue = lorx_lstring_to_orxSTRING(L, 2);
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxLocale_SetString(_zKey, _zValue, _zGroup);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Locale_GetKeyCount(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxLocale_GetKeyCount(_zGroup);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Locale_GetKey(lua_State *L)
{
  /* get arguments */
  orxU32 _u32KeyIndex = lorx_linteger_to_orxU32(L, 1);
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxLocale_GetKey(_u32KeyIndex, _zGroup);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxResource_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Resource_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Resource_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxResource_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Resource_GetGroupCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxResource_GetGroupCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetGroup(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_GetGroup(_u32Index);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_AddStorage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zStorage = lorx_lstring_to_orxSTRING(L, 2);
  orxBOOL _bAddFirst = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_AddStorage(_zGroup, _zStorage, _bAddFirst);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Resource_RemoveStorage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zStorage = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_RemoveStorage(_zGroup, _zStorage);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetStorageCount(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxResource_GetStorageCount(_zGroup);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetStorage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_GetStorage(_zGroup, _u32Index);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_ReloadStorage(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_ReloadStorage();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Resource_Locate(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_Locate(_zGroup, _zName);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_LocateInStorage(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zStorage = lorx_lstring_to_orxSTRING(L, 2);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_LocateInStorage(_zGroup, _zStorage, _zName);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetPath(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zLocation = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_GetPath(_zLocation);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetTime(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zLocation = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxResource_GetTime(_zLocation);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_Open(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zLocation = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bEraseMode = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxHANDLE _retval = orxResource_Open(_zLocation, _bEraseMode);
  
  /* post processing */
  lorx_orxHANDLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Resource_Close(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxHANDLE _hResource = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxResource_Close(_hResource);
  
  /* post processing */
  return 0;
}


LORX_API int l_Resource_GetLocation(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hResource = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_GetLocation(_hResource);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetSize(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hResource = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxResource_GetSize(_hResource);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_Seek(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hResource = lorx_luserdata_to_orxHANDLE(L, 1);
  orxS64 _s64Offset = lorx_linteger_to_orxS64(L, 2);
  orxSEEK_OFFSET_WHENCE _eWhence = lorx_lenumstr_to_orxSEEK_OFFSET_WHENCE(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxResource_Seek(_hResource, _s64Offset, _eWhence);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_Tell(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hResource = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxResource_Tell(_hResource);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_Delete(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zLocation = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_Delete(_zLocation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetPendingOpCount(lua_State *L)
{
  /* get arguments */
  const orxHANDLE _hResource = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxResource_GetPendingOpCount(_hResource);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetTotalPendingOpCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxResource_GetTotalPendingOpCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetTypeCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxResource_GetTypeCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Resource_GetTypeTag(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxResource_GetTypeTag(_u32Index);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Resource_Sync(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_Sync(_zGroup);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Resource_ClearCache(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zGroup = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxResource_ClearCache(_zGroup);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_System_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSystem_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_System_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSystem_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_System_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSystem_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_System_GetTime(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxSystem_GetTime();
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_System_GetRealTime(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU64 _retval = orxSystem_GetRealTime();
  
  /* post processing */
  lorx_orxU64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_System_GetSystemTime(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxSystem_GetSystemTime();
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_System_Delay(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFLOAT _fSeconds = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSystem_Delay(_fSeconds);
  
  /* post processing */
  return 0;
}


LORX_API int l_System_GetVersionString(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxSystem_GetVersionString();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_System_GetVersionFullString(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxSystem_GetVersionFullString();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_System_GetVersionNumeric(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSystem_GetVersionNumeric();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_System_GetClipboard(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxSystem_GetClipboard();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_System_SetClipboard(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zValue = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSystem_SetClipboard(_zValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxThread_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Thread_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxThread_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Thread_Join(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ThreadID = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_Join(_u32ThreadID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_JoinAll(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_JoinAll();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_GetName(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ThreadID = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxThread_GetName(_u32ThreadID);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Thread_Enable(lua_State *L)
{
  /* get arguments */
  orxU32 _u32EnableThreads = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32DisableThreads = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_Enable(_u32EnableThreads, _u32DisableThreads);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_GetCurrent(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxThread_GetCurrent();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Thread_Yield(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxThread_Yield();
  
  /* post processing */
  return 0;
}


LORX_API int l_Thread_CreateSemaphore(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTHREAD_SEMAPHORE* _retval = orxThread_CreateSemaphore(_u32Value);
  
  /* post processing */
  lorx_orxTHREAD_SEMAPHORE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Thread_DeleteSemaphore(lua_State *L)
{
  /* get arguments */
  orxTHREAD_SEMAPHORE* _pstSemaphore = lorx_luserdata_to_orxTHREAD_SEMAPHORE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_DeleteSemaphore(_pstSemaphore);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_WaitSemaphore(lua_State *L)
{
  /* get arguments */
  orxTHREAD_SEMAPHORE* _pstSemaphore = lorx_luserdata_to_orxTHREAD_SEMAPHORE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_WaitSemaphore(_pstSemaphore);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_SignalSemaphore(lua_State *L)
{
  /* get arguments */
  orxTHREAD_SEMAPHORE* _pstSemaphore = lorx_luserdata_to_orxTHREAD_SEMAPHORE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxThread_SignalSemaphore(_pstSemaphore);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Thread_GetTaskCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxThread_GetTaskCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l__orxDebug_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = _orxDebug_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l__orxDebug_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l__orxDebug_Log(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxDEBUG_LEVEL _eLevel = lorx_lenumstr_to_orxDEBUG_LEVEL(L, 1);
  const orxSTRING _zFunction = lorx_lstring_to_orxSTRING(L, 2);
  const orxSTRING _zFile = lorx_lstring_to_orxSTRING(L, 3);
  orxU32 _u32Line = lorx_linteger_to_orxU32(L, 4);
  const orxSTRING _zFormat = lorx_lstring_to_orxSTRING(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_Log(_eLevel, _zFunction, _zFile, _u32Line, _zFormat);
  
  /* post processing */
  return 0;
}


LORX_API int l__orxDebug_EnableLevel(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxDEBUG_LEVEL _eLevel = lorx_lenumstr_to_orxDEBUG_LEVEL(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_EnableLevel(_eLevel, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l__orxDebug_IsLevelEnabled(lua_State *L)
{
  /* get arguments */
  orxDEBUG_LEVEL _eLevel = lorx_lenumstr_to_orxDEBUG_LEVEL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = _orxDebug_IsLevelEnabled(_eLevel);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l__orxDebug_SetFlags(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxU32 _u32Add = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32Remove = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_SetFlags(_u32Add, _u32Remove);
  
  /* post processing */
  return 0;
}


LORX_API int l__orxDebug_GetFlags(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = _orxDebug_GetFlags();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l__orxDebug_Break(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_Break();
  
  /* post processing */
  return 0;
}


LORX_API int l__orxDebug_SetDebugFile(lua_State *L)
{
  /* get arguments */
  (void)L;
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_SetDebugFile(_zFileName);
  
  /* post processing */
  return 0;
}


LORX_API int l__orxDebug_SetLogFile(lua_State *L)
{
  /* get arguments */
  (void)L;
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  _orxDebug_SetLogFile(_zFileName);
  
  /* post processing */
  return 0;
}


LORX_API int l_FPS_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFPS_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_FPS_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFPS_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FPS_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFPS_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_FPS_IncreaseFrameCount(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFPS_IncreaseFrameCount();
  
  /* post processing */
  return 0;
}


LORX_API int l_FPS_GetFPS(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxFPS_GetFPS();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Profiler_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxProfiler_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Profiler_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_GetIDFromName(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxProfiler_GetIDFromName(_zName);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Profiler_IsMarkerIDValid(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxProfiler_IsMarkerIDValid(_s32MarkerID);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Profiler_PushMarker(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_PushMarker(_s32MarkerID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_PopMarker(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_PopMarker();
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_EnableMarkerOperations(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_EnableMarkerOperations(_bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_AreMarkerOperationsEnabled(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxProfiler_AreMarkerOperationsEnabled();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Profiler_Pause(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxBOOL _bPause = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_Pause(_bPause);
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_IsPaused(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxProfiler_IsPaused();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Profiler_ResetAllMarkers(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_ResetAllMarkers();
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_ResetAllMaxima(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxProfiler_ResetAllMaxima();
  
  /* post processing */
  return 0;
}


LORX_API int l_Profiler_GetResetTime(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxProfiler_GetResetTime();
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetMaxResetTime(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxProfiler_GetMaxResetTime();
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetMarkerCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxProfiler_GetMarkerCount();
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetNextMarkerID(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxProfiler_GetNextMarkerID(_s32MarkerID);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetNextSortedMarkerID(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxProfiler_GetNextSortedMarkerID(_s32MarkerID);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Profiler_SelectQueryFrame(lua_State *L)
{
  /* get arguments */
  orxU32 _u32QueryFrame = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32ThreadID = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxProfiler_SelectQueryFrame(_u32QueryFrame, _u32ThreadID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetMarkerTime(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxProfiler_GetMarkerTime(_s32MarkerID);
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetMarkerMaxTime(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxProfiler_GetMarkerMaxTime(_s32MarkerID);
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetMarkerName(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxProfiler_GetMarkerName(_s32MarkerID);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetMarkerPushCount(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxProfiler_GetMarkerPushCount(_s32MarkerID);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Profiler_IsUniqueMarker(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxProfiler_IsUniqueMarker(_s32MarkerID);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetUniqueMarkerStartTime(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDOUBLE _retval = orxProfiler_GetUniqueMarkerStartTime(_s32MarkerID);
  
  /* post processing */
  lorx_orxDOUBLE_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Profiler_GetUniqueMarkerDepth(lua_State *L)
{
  /* get arguments */
  orxS32 _s32MarkerID = lorx_linteger_to_orxS32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxProfiler_GetUniqueMarkerDepth(_s32MarkerID);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Display_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDisplay_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Display_GetBlendModeFromString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zBlendMode = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_BLEND_MODE _retval = orxDisplay_GetBlendModeFromString(_zBlendMode);
  
  /* post processing */
  lorx_orxDISPLAY_BLEND_MODE_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDisplay_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Display_Swap(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_Swap();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_GetScreenBitmap(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBITMAP* _retval = orxDisplay_GetScreenBitmap();
  
  /* post processing */
  lorx_orxBITMAP_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Display_GetScreenSize(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_GetScreenSize(&_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 3;
}


LORX_API int l_Display_CreateBitmap(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Width = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32Height = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBITMAP* _retval = orxDisplay_CreateBitmap(_u32Width, _u32Height);
  
  /* post processing */
  lorx_orxBITMAP_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Display_DeleteBitmap(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDisplay_DeleteBitmap(_pstBitmap);
  
  /* post processing */
  return 0;
}


LORX_API int l_Display_LoadBitmap(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBITMAP* _retval = orxDisplay_LoadBitmap(_zFileName);
  
  /* post processing */
  lorx_orxBITMAP_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Display_SaveBitmap(lua_State *L)
{
  /* get arguments */
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 1);
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SaveBitmap(_pstBitmap, _zFileName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_SetTempBitmap(lua_State *L)
{
  /* get arguments */
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetTempBitmap(_pstBitmap);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_GetTempBitmap(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxBITMAP* _retval = orxDisplay_GetTempBitmap();
  
  /* post processing */
  lorx_orxBITMAP_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_Display_SetDestinationBitmaps(lua_State *L)
{
  /* get arguments */
  luaL_checktype(L, 1, LUA_TTABLE);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  orxBITMAP** _apstBitmapList = malloc(sizeof(orxBITMAP*)*_u32Number);
  for (size_t i = 0; i < _u32Number; i++)
  {
    lua_geti(L, 1, i+1);
    _apstBitmapList[i] = lorx_luserdata_to_orxBITMAP(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetDestinationBitmaps(_apstBitmapList, _u32Number);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_apstBitmapList);
  return 1;
}


LORX_API int l_Display_ClearBitmap(lua_State *L)
{
  /* get arguments */
  orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP(L, 1);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_ClearBitmap(_pstBitmap, _stColor);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_SetBlendMode(lua_State *L)
{
  /* get arguments */
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetBlendMode(_eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_SetBitmapClipping(lua_State *L)
{
  /* get arguments */
  orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP(L, 1);
  orxU32 _u32TLX = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32TLY = lorx_linteger_to_orxU32(L, 3);
  orxU32 _u32BRX = lorx_linteger_to_orxU32(L, 4);
  orxU32 _u32BRY = lorx_linteger_to_orxU32(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetBitmapClipping(_pstBitmap, _u32TLX, _u32TLY, _u32BRX, _u32BRY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_SetBitmapData(lua_State *L)
{
  /* get arguments */
  orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32ByteNumber = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  orxU8* _au8Data = malloc(sizeof(orxU8)*_u32ByteNumber);
  for (size_t i = 0; i < _u32ByteNumber; i++)
  {
    lua_geti(L, 2, i+1);
    _au8Data[i] = lorx_linteger_to_orxU8(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetBitmapData(_pstBitmap, _au8Data, _u32ByteNumber);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_au8Data);
  return 1;
}


LORX_API int l_Display_GetBitmapData(lua_State *L)
{
  /* get arguments */
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32ByteNumber = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  orxU8* _au8Data = malloc(sizeof(orxU8)*_u32ByteNumber);
  for (size_t i = 0; i < _u32ByteNumber; i++)
  {
    lua_geti(L, 2, i+1);
    _au8Data[i] = lorx_linteger_to_orxU8(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_GetBitmapData(_pstBitmap, _au8Data, _u32ByteNumber);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_au8Data);
  return 1;
}


LORX_API int l_Display_SetPartialBitmapData(lua_State *L)
{
  /* get arguments */
  orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32X = lorx_linteger_to_orxU32(L, 3);
  orxU32 _u32Y = lorx_linteger_to_orxU32(L, 4);
  orxU32 _u32Width = lorx_linteger_to_orxU32(L, 5);
  orxU32 _u32Height = lorx_linteger_to_orxU32(L, 6);
  
  /* arguments processing & checks */
  
  lua_Integer __auto_73536371_len_ = luaL_len(L, 2);
  if (__auto_73536371_len_ <= 0)
  {
    luaL_error(L, "expect non-empty array-table!");
  }
  size_t _auto_73536371_len_ = (size_t)__auto_73536371_len_;
  orxU8* _au8Data = malloc(sizeof(orxU8)*_auto_73536371_len_);
  for (size_t i = 0; i < _auto_73536371_len_; i++)
  {
    lua_geti(L, 2, i+1);
    _au8Data[i] = lorx_linteger_to_orxU8(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetPartialBitmapData(_pstBitmap, _au8Data, _u32X, _u32Y, _u32Width, _u32Height);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_au8Data);
  return 1;
}


LORX_API int l_Display_GetBitmapSize(lua_State *L)
{
  /* get arguments */
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 1);
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_GetBitmapSize(_pstBitmap, &_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 3;
}


LORX_API int l_Display_GetBitmapID(lua_State *L)
{
  /* get arguments */
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxDisplay_GetBitmapID(_pstBitmap);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Display_TransformBitmap(lua_State *L)
{
  /* get arguments */
  const orxBITMAP* _pstSrc = lorx_luserdata_to_orxBITMAP_const(L, 1);
  const orxDISPLAY_TRANSFORM* _pstTransform = lorx_luserdata_to_orxDISPLAY_TRANSFORM_const(L, 2);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 3);
  orxDISPLAY_SMOOTHING _eSmoothing = lorx_lenumstr_to_orxDISPLAY_SMOOTHING(L, 4);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_TransformBitmap(_pstSrc, _pstTransform, _stColor, _eSmoothing, _eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_TransformText(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  const orxBITMAP* _pstFont = lorx_luserdata_to_orxBITMAP_const(L, 2);
  const orxCHARACTER_MAP* _pstMap = lorx_luserdata_to_orxCHARACTER_MAP_const(L, 3);
  const orxDISPLAY_TRANSFORM* _pstTransform = lorx_luserdata_to_orxDISPLAY_TRANSFORM_const(L, 4);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 5);
  orxDISPLAY_SMOOTHING _eSmoothing = lorx_lenumstr_to_orxDISPLAY_SMOOTHING(L, 6);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 7);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_TransformText(_zString, _pstFont, _pstMap, _pstTransform, _stColor, _eSmoothing, _eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_DrawLine(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvStart = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvEnd = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_DrawLine(_pvStart, _pvEnd, _stColor);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_DrawPolyline(lua_State *L)
{
  /* get arguments */
  luaL_checktype(L, 1, LUA_TTABLE);
  orxU32 _u32VertexNumber = lorx_linteger_to_orxU32(L, 2);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 3);
  
  /* arguments processing & checks */
  
  orxVECTOR* _avVertexList = malloc(sizeof(orxVECTOR)*_u32VertexNumber);
  for (size_t i = 0; i < _u32VertexNumber; i++)
  {
    lua_geti(L, 1, i+1);
    _avVertexList[i] = lorx_luserdata_to_orxVECTOR_struct(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_DrawPolyline(_avVertexList, _u32VertexNumber, _stColor);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_avVertexList);
  return 1;
}


LORX_API int l_Display_DrawPolygon(lua_State *L)
{
  /* get arguments */
  luaL_checktype(L, 1, LUA_TTABLE);
  orxU32 _u32VertexNumber = lorx_linteger_to_orxU32(L, 2);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 3);
  orxBOOL _bFill = lorx_lboolean_to_orxBOOL(L, 4);
  
  /* arguments processing & checks */
  
  orxVECTOR* _avVertexList = malloc(sizeof(orxVECTOR)*_u32VertexNumber);
  for (size_t i = 0; i < _u32VertexNumber; i++)
  {
    lua_geti(L, 1, i+1);
    _avVertexList[i] = lorx_luserdata_to_orxVECTOR_struct(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_DrawPolygon(_avVertexList, _u32VertexNumber, _stColor, _bFill);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_avVertexList);
  return 1;
}


LORX_API int l_Display_DrawCircle(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvCenter = lorx_luserdata_to_orxVECTOR_const(L, 1);
  orxFLOAT _fRadius = lorx_lnumber_to_orxFLOAT(L, 2);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 3);
  orxBOOL _bFill = lorx_lboolean_to_orxBOOL(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_DrawCircle(_pvCenter, _fRadius, _stColor, _bFill);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_DrawOBox(lua_State *L)
{
  /* get arguments */
  const orxOBOX* _pstBox = lorx_luserdata_to_orxOBOX_const(L, 1);
  orxRGBA _stColor = lorx_luserdata_to_orxRGBA_struct(L, 2);
  orxBOOL _bFill = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_DrawOBox(_pstBox, _stColor, _bFill);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_DrawMesh(lua_State *L)
{
  /* get arguments */
  const orxDISPLAY_MESH* _pstMesh = lorx_luserdata_to_orxDISPLAY_MESH_const(L, 1);
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 2);
  orxDISPLAY_SMOOTHING _eSmoothing = lorx_lenumstr_to_orxDISPLAY_SMOOTHING(L, 3);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_DrawMesh(_pstMesh, _pstBitmap, _eSmoothing, _eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_HasShaderSupport(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxDisplay_HasShaderSupport();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Display_DeleteShader(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDisplay_DeleteShader(_hShader);
  
  /* post processing */
  return 0;
}


LORX_API int l_Display_StartShader(lua_State *L)
{
  /* get arguments */
  const orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_StartShader(_hShader);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_StopShader(lua_State *L)
{
  /* get arguments */
  const orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_StopShader(_hShader);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_GetParameterID(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  const orxSTRING _zParam = lorx_lstring_to_orxSTRING(L, 2);
  orxS32 _s32Index = lorx_linteger_to_orxS32(L, 3);
  orxBOOL _bIsTexture = lorx_lboolean_to_orxBOOL(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxDisplay_GetParameterID(_hShader, _zParam, _s32Index, _bIsTexture);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Display_SetShaderBitmap(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  orxS32 _s32ID = lorx_linteger_to_orxS32(L, 2);
  const orxBITMAP* _pstValue = lorx_luserdata_to_orxBITMAP_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetShaderBitmap(_hShader, _s32ID, _pstValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_SetShaderFloat(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  orxS32 _s32ID = lorx_linteger_to_orxS32(L, 2);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetShaderFloat(_hShader, _s32ID, _fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_SetShaderVector(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  orxS32 _s32ID = lorx_linteger_to_orxS32(L, 2);
  const orxVECTOR* _pvValue = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetShaderVector(_hShader, _s32ID, _pvValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_GetShaderID(lua_State *L)
{
  /* get arguments */
  const orxHANDLE _hShader = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxDisplay_GetShaderID(_hShader);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Display_EnableVSync(lua_State *L)
{
  /* get arguments */
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_EnableVSync(_bEnable);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_IsVSyncEnabled(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxDisplay_IsVSyncEnabled();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Display_SetFullScreen(lua_State *L)
{
  /* get arguments */
  orxBOOL _bFullScreen = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetFullScreen(_bFullScreen);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_IsFullScreen(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxDisplay_IsFullScreen();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Display_GetVideoModeCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxDisplay_GetVideoModeCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Display_GetVideoMode(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 1);
  orxDISPLAY_VIDEO_MODE _stVideoMode;
  memset(&_stVideoMode, 0, sizeof(orxDISPLAY_VIDEO_MODE));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_VIDEO_MODE* _retval = orxDisplay_GetVideoMode(_u32Index, &_stVideoMode);
  
  /* post processing */
  lorx_orxDISPLAY_VIDEO_MODE_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Display_SetVideoMode(lua_State *L)
{
  /* get arguments */
  const orxDISPLAY_VIDEO_MODE* _pstVideoMode = lorx_luserdata_to_orxDISPLAY_VIDEO_MODE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxDisplay_SetVideoMode(_pstVideoMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Display_IsVideoModeAvailable(lua_State *L)
{
  /* get arguments */
  const orxDISPLAY_VIDEO_MODE* _pstVideoMode = lorx_luserdata_to_orxDISPLAY_VIDEO_MODE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxDisplay_IsVideoModeAvailable(_pstVideoMode);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Font_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFont_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Font_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFont_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Font_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFONT* _retval = orxFont_Create();
  
  /* post processing */
  lorx_orxFONT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Font_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFONT* _retval = orxFont_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxFONT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Font_Delete(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_Delete(_pstFont);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_GetDefaultFont(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxFONT* _retval = orxFont_GetDefaultFont();
  
  /* post processing */
  lorx_orxFONT_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_Font_SetTexture(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetTexture(_pstFont, _pstTexture);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_SetCharacterList(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  const orxSTRING _zList = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetCharacterList(_pstFont, _zList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_SetCharacterHeight(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  orxFLOAT _fCharacterHeight = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetCharacterHeight(_pstFont, _fCharacterHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_SetCharacterWidthList(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  orxU32 _u32CharacterNumber = lorx_linteger_to_orxU32(L, 2);
  luaL_checktype(L, 3, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxFLOAT* _afCharacterWidthList = malloc(sizeof(orxFLOAT)*_u32CharacterNumber);
  for (size_t i = 0; i < _u32CharacterNumber; i++)
  {
    lua_geti(L, 3, i+1);
    _afCharacterWidthList[i] = lorx_lnumber_to_orxFLOAT(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetCharacterWidthList(_pstFont, _u32CharacterNumber, _afCharacterWidthList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_afCharacterWidthList);
  return 1;
}


LORX_API int l_Font_SetCharacterSpacing(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  const orxVECTOR* _pvSpacing = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetCharacterSpacing(_pstFont, _pvSpacing);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_SetOrigin(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  const orxVECTOR* _pvOrigin = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetOrigin(_pstFont, _pvOrigin);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_SetSize(lua_State *L)
{
  /* get arguments */
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 1);
  const orxVECTOR* _pvSize = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFont_SetSize(_pstFont, _pvSize);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Font_GetTexture(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXTURE* _retval = orxFont_GetTexture(_pstFont);
  
  /* post processing */
  lorx_orxTEXTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Font_GetCharacterList(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxFont_GetCharacterList(_pstFont);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Font_GetCharacterHeight(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFont_GetCharacterHeight(_pstFont);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Font_GetCharacterWidth(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  orxU32 _u32CharacterCodePoint = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFont_GetCharacterWidth(_pstFont, _u32CharacterCodePoint);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Font_GetCharacterSpacing(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  orxVECTOR _vSpacing;
  memset(&_vSpacing, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFont_GetCharacterSpacing(_pstFont, &_vSpacing);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Font_GetOrigin(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  orxVECTOR _vOrigin;
  memset(&_vOrigin, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFont_GetOrigin(_pstFont, &_vOrigin);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Font_GetSize(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  orxVECTOR _vSize;
  memset(&_vSize, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFont_GetSize(_pstFont, &_vSize);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Font_GetMap(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxCHARACTER_MAP* _retval = orxFont_GetMap(_pstFont);
  
  /* post processing */
  lorx_orxCHARACTER_MAP_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_Font_GetName(lua_State *L)
{
  /* get arguments */
  const orxFONT* _pstFont = lorx_luserdata_to_orxFONT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxFont_GetName(_pstFont);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Graphic_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxGraphic_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Graphic_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxGraphic_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Graphic_GetAlignFlags(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zAlign = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxGraphic_GetAlignFlags(_zAlign);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Graphic_AlignVector(lua_State *L)
{
  /* get arguments */
  orxU32 _u32AlignFlags = lorx_linteger_to_orxU32(L, 1);
  const orxAABOX* _pstBox = lorx_luserdata_to_orxAABOX_const(L, 2);
  orxVECTOR _vValue;
  memset(&_vValue, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxGraphic_AlignVector(_u32AlignFlags, _pstBox, &_vValue);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Graphic_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxGRAPHIC* _retval = orxGraphic_Create();
  
  /* post processing */
  lorx_orxGRAPHIC_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Graphic_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxGRAPHIC* _retval = orxGraphic_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxGRAPHIC_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Graphic_Delete(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_Delete(_pstGraphic);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_Clone(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxGRAPHIC* _retval = orxGraphic_Clone(_pstGraphic);
  
  /* post processing */
  lorx_orxGRAPHIC_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetName(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxGraphic_GetName(_pstGraphic);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetData(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  orxSTRUCTURE* _pstData = lorx_luserdata_to_orxSTRUCTURE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetData(_pstGraphic, _pstData);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetData(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxGraphic_GetData(_pstGraphic);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetFlip(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  orxBOOL _bFlipX = lorx_lboolean_to_orxBOOL(L, 2);
  orxBOOL _bFlipY = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetFlip(_pstGraphic, _bFlipX, _bFlipY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetFlip(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  orxBOOL _bFlipX;
  memset(&_bFlipX, 0, sizeof(orxBOOL));
  orxBOOL _bFlipY;
  memset(&_bFlipY, 0, sizeof(orxBOOL));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_GetFlip(_pstGraphic, &_bFlipX, &_bFlipY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxBOOL_to_lboolean(L, _bFlipX);
  lorx_orxBOOL_to_lboolean(L, _bFlipY);
  return 3;
}


LORX_API int l_Graphic_SetPivot(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  const orxVECTOR* _pvPivot = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetPivot(_pstGraphic, _pvPivot);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetRelativePivot(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  orxU32 _u32AlignFlags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetRelativePivot(_pstGraphic, _u32AlignFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetPivot(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  orxVECTOR _vPivot;
  memset(&_vPivot, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxGraphic_GetPivot(_pstGraphic, &_vPivot);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetSize(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  const orxVECTOR* _pvSize = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetSize(_pstGraphic, _pvSize);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetSize(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  orxVECTOR _vSize;
  memset(&_vSize, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxGraphic_GetSize(_pstGraphic, &_vSize);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetColor(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  const orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetColor(_pstGraphic, _pstColor);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetRepeat(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  orxFLOAT _fRepeatX = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fRepeatY = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetRepeat(_pstGraphic, _fRepeatX, _fRepeatY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_ClearColor(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_ClearColor(_pstGraphic);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_HasColor(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxGraphic_HasColor(_pstGraphic);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetColor(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  orxCOLOR _stColor;
  memset(&_stColor, 0, sizeof(orxCOLOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxGraphic_GetColor(_pstGraphic, &_stColor);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetRepeat(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  orxFLOAT _fRepeatX;
  memset(&_fRepeatX, 0, sizeof(orxFLOAT));
  orxFLOAT _fRepeatY;
  memset(&_fRepeatY, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_GetRepeat(_pstGraphic, &_fRepeatX, &_fRepeatY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fRepeatX);
  lorx_orxFLOAT_to_lnumber(L, _fRepeatY);
  return 3;
}


LORX_API int l_Graphic_SetOrigin(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  const orxVECTOR* _pvOrigin = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetOrigin(_pstGraphic, _pvOrigin);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetOrigin(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  orxVECTOR _vOrigin;
  memset(&_vOrigin, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxGraphic_GetOrigin(_pstGraphic, &_vOrigin);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Graphic_UpdateSize(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_UpdateSize(_pstGraphic);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetSmoothing(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  orxDISPLAY_SMOOTHING _eSmoothing = lorx_lenumstr_to_orxDISPLAY_SMOOTHING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetSmoothing(_pstGraphic, _eSmoothing);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetSmoothing(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_SMOOTHING _retval = orxGraphic_GetSmoothing(_pstGraphic);
  
  /* post processing */
  lorx_orxDISPLAY_SMOOTHING_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_SetBlendMode(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_SetBlendMode(_pstGraphic, _eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_ClearBlendMode(lua_State *L)
{
  /* get arguments */
  orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxGraphic_ClearBlendMode(_pstGraphic);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Graphic_HasBlendMode(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxGraphic_HasBlendMode(_pstGraphic);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Graphic_GetBlendMode(lua_State *L)
{
  /* get arguments */
  const orxGRAPHIC* _pstGraphic = lorx_luserdata_to_orxGRAPHIC_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_BLEND_MODE _retval = orxGraphic_GetBlendMode(_pstGraphic);
  
  /* post processing */
  lorx_orxDISPLAY_BLEND_MODE_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Screenshot_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxScreenshot_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Screenshot_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxScreenshot_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Screenshot_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxScreenshot_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Screenshot_Capture(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxScreenshot_Capture();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Text_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxText_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Text_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Text_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxText_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Text_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXT* _retval = orxText_Create();
  
  /* post processing */
  lorx_orxTEXT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Text_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXT* _retval = orxText_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxTEXT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Text_Delete(lua_State *L)
{
  /* get arguments */
  orxTEXT* _pstText = lorx_luserdata_to_orxTEXT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_Delete(_pstText);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Text_GetName(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxText_GetName(_pstText);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Text_GetLineCount(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxText_GetLineCount(_pstText);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Text_GetLineSize(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  orxU32 _u32Line = lorx_linteger_to_orxU32(L, 2);
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_GetLineSize(_pstText, _u32Line, &_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 3;
}


LORX_API int l_Text_IsFixedSize(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxText_IsFixedSize(_pstText);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Text_GetSize(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_GetSize(_pstText, &_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 3;
}


LORX_API int l_Text_GetString(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxText_GetString(_pstText);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Text_GetFont(lua_State *L)
{
  /* get arguments */
  const orxTEXT* _pstText = lorx_luserdata_to_orxTEXT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFONT* _retval = orxText_GetFont(_pstText);
  
  /* post processing */
  lorx_orxFONT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Text_SetSize(lua_State *L)
{
  /* get arguments */
  orxTEXT* _pstText = lorx_luserdata_to_orxTEXT(L, 1);
  orxFLOAT _fWidth = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fHeight = lorx_lnumber_to_orxFLOAT(L, 3);
  const orxSTRING _zExtra;
  memset(&_zExtra, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_SetSize(_pstText, _fWidth, _fHeight, &_zExtra);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxSTRING_to_lstring(L, _zExtra);
  return 2;
}


LORX_API int l_Text_SetString(lua_State *L)
{
  /* get arguments */
  orxTEXT* _pstText = lorx_luserdata_to_orxTEXT(L, 1);
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_SetString(_pstText, _zString);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Text_SetFont(lua_State *L)
{
  /* get arguments */
  orxTEXT* _pstText = lorx_luserdata_to_orxTEXT(L, 1);
  orxFONT* _pstFont = lorx_luserdata_to_orxFONT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxText_SetFont(_pstText, _pstFont);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Texture_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTexture_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Texture_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTexture_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Texture_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTexture_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Texture_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXTURE* _retval = orxTexture_Create();
  
  /* post processing */
  lorx_orxTEXTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Texture_CreateFromFile(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bKeepInCache = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXTURE* _retval = orxTexture_CreateFromFile(_zFileName, _bKeepInCache);
  
  /* post processing */
  lorx_orxTEXTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Texture_Delete(lua_State *L)
{
  /* get arguments */
  orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTexture_Delete(_pstTexture);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Texture_ClearCache(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTexture_ClearCache();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Texture_LinkBitmap(lua_State *L)
{
  /* get arguments */
  orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE(L, 1);
  const orxBITMAP* _pstBitmap = lorx_luserdata_to_orxBITMAP_const(L, 2);
  const orxSTRING _zDataName = lorx_lstring_to_orxSTRING(L, 3);
  orxBOOL _bTransferOwnership = lorx_lboolean_to_orxBOOL(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTexture_LinkBitmap(_pstTexture, _pstBitmap, _zDataName, _bTransferOwnership);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Texture_UnlinkBitmap(lua_State *L)
{
  /* get arguments */
  orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTexture_UnlinkBitmap(_pstTexture);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Texture_GetBitmap(lua_State *L)
{
  /* get arguments */
  const orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBITMAP* _retval = orxTexture_GetBitmap(_pstTexture);
  
  /* post processing */
  lorx_orxBITMAP_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Texture_GetSize(lua_State *L)
{
  /* get arguments */
  const orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE_const(L, 1);
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTexture_GetSize(_pstTexture, &_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 3;
}


LORX_API int l_Texture_Get(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXTURE* _retval = orxTexture_Get(_zName);
  
  /* post processing */
  lorx_orxTEXTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Texture_GetName(lua_State *L)
{
  /* get arguments */
  const orxTEXTURE* _pstTexture = lorx_luserdata_to_orxTEXTURE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxTexture_GetName(_pstTexture);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Texture_GetScreenTexture(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXTURE* _retval = orxTexture_GetScreenTexture();
  
  /* post processing */
  lorx_orxTEXTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Texture_GetLoadCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxTexture_GetLoadCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFile_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_File_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_File_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFile_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_File_GetHomeDirectory(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSubPath = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxFile_GetHomeDirectory(_zSubPath);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_File_GetApplicationSaveDirectory(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSubPath = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxFile_GetApplicationSaveDirectory(_zSubPath);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_File_Exists(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxFile_Exists(_zFileName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_File_FindFirst(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSearchPattern = lorx_lstring_to_orxSTRING(L, 1);
  orxFILE_INFO _stFileInfo;
  memset(&_stFileInfo, 0, sizeof(orxFILE_INFO));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_FindFirst(_zSearchPattern, &_stFileInfo);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFILE_INFO_to_luserdata_struct(L, &_stFileInfo);
  return 2;
}


LORX_API int l_File_FindNext(lua_State *L)
{
  /* get arguments */
  orxFILE_INFO* _pstFileInfo = lorx_luserdata_to_orxFILE_INFO(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_FindNext(_pstFileInfo);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_File_FindClose(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFILE_INFO* _pstFileInfo = lorx_luserdata_to_orxFILE_INFO(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFile_FindClose(_pstFileInfo);
  
  /* post processing */
  return 0;
}


LORX_API int l_File_GetInfo(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  orxFILE_INFO _stFileInfo;
  memset(&_stFileInfo, 0, sizeof(orxFILE_INFO));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_GetInfo(_zFileName, &_stFileInfo);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFILE_INFO_to_luserdata_struct(L, &_stFileInfo);
  return 2;
}


LORX_API int l_File_Remove(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_Remove(_zFileName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_File_MakeDirectory(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_MakeDirectory(_zName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_File_Open(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32OpenFlags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFILE* _retval = orxFile_Open(_zFileName, _u32OpenFlags);
  
  /* post processing */
  lorx_orxFILE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_File_Read(lua_State *L)
{
  /* get arguments */
  void* _pReadData = lorx_luserdata_to_void_ptr(L, 1);
  orxS64 _s64ElemSize = lorx_linteger_to_orxS64(L, 2);
  orxS64 _s64NbElem = lorx_linteger_to_orxS64(L, 3);
  orxFILE* _pstFile = lorx_luserdata_to_orxFILE(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxFile_Read(_pReadData, _s64ElemSize, _s64NbElem, _pstFile);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_Write(lua_State *L)
{
  /* get arguments */
  const void* _pDataToWrite = lorx_luserdata_to_void_ptr_const(L, 1);
  orxS64 _s64ElemSize = lorx_linteger_to_orxS64(L, 2);
  orxS64 _s64NbElem = lorx_linteger_to_orxS64(L, 3);
  orxFILE* _pstFile = lorx_luserdata_to_orxFILE(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxFile_Write(_pDataToWrite, _s64ElemSize, _s64NbElem, _pstFile);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_Delete(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_Delete(_zFileName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_File_Seek(lua_State *L)
{
  /* get arguments */
  orxFILE* _pstFile = lorx_luserdata_to_orxFILE(L, 1);
  orxS64 _s64Position = lorx_linteger_to_orxS64(L, 2);
  orxSEEK_OFFSET_WHENCE _eWhence = lorx_lenumstr_to_orxSEEK_OFFSET_WHENCE(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxFile_Seek(_pstFile, _s64Position, _eWhence);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_Tell(lua_State *L)
{
  /* get arguments */
  const orxFILE* _pstFile = lorx_luserdata_to_orxFILE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxFile_Tell(_pstFile);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_GetSize(lua_State *L)
{
  /* get arguments */
  const orxFILE* _pstFile = lorx_luserdata_to_orxFILE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxFile_GetSize(_pstFile);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_GetTime(lua_State *L)
{
  /* get arguments */
  const orxFILE* _pstFile = lorx_luserdata_to_orxFILE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxFile_GetTime(_pstFile);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_Print(lua_State *L)
{
  /* get arguments */
  orxFILE* _pstFile = lorx_luserdata_to_orxFILE(L, 1);
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxFile_Print(_pstFile, _zString);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_File_Close(lua_State *L)
{
  /* get arguments */
  orxFILE* _pstFile = lorx_luserdata_to_orxFILE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFile_Close(_pstFile);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxInput_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Input_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxInput_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Input_Load(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_Load(_zFileName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_Save(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_Save(_zFileName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_SelectSet(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSetName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SelectSet(_zSetName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_GetCurrentSet(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxInput_GetCurrentSet();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Input_RemoveSet(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSetName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_RemoveSet(_zSetName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_EnableSet(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSetName = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_EnableSet(_zSetName, _bEnable);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_IsSetEnabled(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSetName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxInput_IsSetEnabled(_zSetName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Input_SetTypeFlags(lua_State *L)
{
  /* get arguments */
  orxU32 _u32AddTypeFlags = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32RemoveTypeFlags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SetTypeFlags(_u32AddTypeFlags, _u32RemoveTypeFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_IsActive(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxInput_IsActive(_zInputName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Input_HasBeenActivated(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxInput_HasBeenActivated(_zInputName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Input_HasBeenDeactivated(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxInput_HasBeenDeactivated(_zInputName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Input_HasNewStatus(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxInput_HasNewStatus(_zInputName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Input_GetValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxInput_GetValue(_zInputName);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Input_SetValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SetValue(_zInputName, _fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_SetPermanentValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SetPermanentValue(_zInputName, _fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_ResetValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_ResetValue(_zInputName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_GetThreshold(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxInput_GetThreshold(_zInputName);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Input_SetThreshold(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  orxFLOAT _fThreshold = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SetThreshold(_zInputName, _fThreshold);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_GetMultiplier(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxInput_GetMultiplier(_zInputName);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Input_SetMultiplier(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zInputName = lorx_lstring_to_orxSTRING(L, 1);
  orxFLOAT _fMultiplier = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SetMultiplier(_zInputName, _fMultiplier);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_SetCombineMode(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bCombine = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_SetCombineMode(_zName, _bCombine);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_IsInCombineMode(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxInput_IsInCombineMode(_zName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Input_Bind(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxINPUT_TYPE _eType = lorx_lenumstr_to_orxINPUT_TYPE(L, 2);
  orxENUM _eID = lorx_lenumstr_to_input_orxENUM(L, 3, _eType);
  orxINPUT_MODE _eMode = lorx_lenumstr_to_orxINPUT_MODE(L, 4);
  orxS32 _s32BindingIndex = lorx_linteger_to_orxS32(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_Bind(_zName, _eType, _eID, _eMode, _s32BindingIndex);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_Unbind(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32BindingIndex = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_Unbind(_zName, _s32BindingIndex);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Input_GetBoundInputCount(lua_State *L)
{
  /* get arguments */
  orxINPUT_TYPE _eType = lorx_lenumstr_to_orxINPUT_TYPE(L, 1);
  orxENUM _eID = lorx_lenumstr_to_input_orxENUM(L, 2, _eType);
  orxINPUT_MODE _eMode = lorx_lenumstr_to_orxINPUT_MODE(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxInput_GetBoundInputCount(_eType, _eID, _eMode);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Input_GetBoundInput(lua_State *L)
{
  /* get arguments */
  orxINPUT_TYPE _eType = lorx_lenumstr_to_orxINPUT_TYPE(L, 1);
  orxENUM _eID = lorx_lenumstr_to_input_orxENUM(L, 2, _eType);
  orxINPUT_MODE _eMode = lorx_lenumstr_to_orxINPUT_MODE(L, 3);
  orxU32 _u32InputIndex = lorx_linteger_to_orxU32(L, 4);
  const orxSTRING _zName;
  memset(&_zName, 0, sizeof(orxSTRING));
  orxU32 _u32BindingIndex;
  memset(&_u32BindingIndex, 0, sizeof(orxU32));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_GetBoundInput(_eType, _eID, _eMode, _u32InputIndex, &_zName, &_u32BindingIndex);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxSTRING_to_lstring(L, _zName);
  lorx_orxU32_to_linteger(L, _u32BindingIndex);
  return 3;
}


LORX_API int l_Input_GetBinding(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32BindingIndex = lorx_linteger_to_orxU32(L, 2);
  orxINPUT_TYPE _eType;
  memset(&_eType, 0, sizeof(orxINPUT_TYPE));
  orxENUM _eID;
  memset(&_eID, 0, sizeof(orxENUM));
  orxINPUT_MODE _eMode;
  memset(&_eMode, 0, sizeof(orxINPUT_MODE));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_GetBinding(_zName, _u32BindingIndex, &_eType, &_eID, &_eMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxINPUT_TYPE_to_lenumstr(L, _eType);
  lorx_orxENUM_to_linteger(L, _eID);
  lorx_orxINPUT_MODE_to_lenumstr(L, _eMode);
  return 4;
}


LORX_API int l_Input_GetBindingList(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxINPUT_TYPE* _aeTypeList = malloc(sizeof(orxINPUT_TYPE)*orxINPUT_KU32_BINDING_NUMBER);
  memset(_aeTypeList, 0, sizeof(orxINPUT_TYPE)*orxINPUT_KU32_BINDING_NUMBER);
  orxENUM* _aeIDList = malloc(sizeof(orxENUM)*orxINPUT_KU32_BINDING_NUMBER);
  memset(_aeIDList, 0, sizeof(orxENUM)*orxINPUT_KU32_BINDING_NUMBER);
  orxINPUT_MODE* _aeModeList = malloc(sizeof(orxINPUT_MODE)*orxINPUT_KU32_BINDING_NUMBER);
  memset(_aeModeList, 0, sizeof(orxINPUT_MODE)*orxINPUT_KU32_BINDING_NUMBER);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_GetBindingList(_zName, _aeTypeList, _aeIDList, _aeModeList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  
  if (orxINPUT_KU32_BINDING_NUMBER <= 0)
  {
    lua_pushnil(L);
  }
  else
  {
    lua_createtable(L, orxINPUT_KU32_BINDING_NUMBER, 0);
    for (size_t i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
    {
      lorx_orxINPUT_TYPE_to_lenumstr(L, _aeTypeList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  free(_aeTypeList);
  
  if (orxINPUT_KU32_BINDING_NUMBER <= 0)
  {
    lua_pushnil(L);
  }
  else
  {
    lua_createtable(L, orxINPUT_KU32_BINDING_NUMBER, 0);
    for (size_t i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
    {
      lorx_orxENUM_to_linteger(L, _aeIDList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  free(_aeIDList);
  
  if (orxINPUT_KU32_BINDING_NUMBER <= 0)
  {
    lua_pushnil(L);
  }
  else
  {
    lua_createtable(L, orxINPUT_KU32_BINDING_NUMBER, 0);
    for (size_t i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
    {
      lorx_orxINPUT_MODE_to_lenumstr(L, _aeModeList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  free(_aeModeList);
  return 4;
}


LORX_API int l_Input_GetBindingName(lua_State *L)
{
  /* get arguments */
  orxINPUT_TYPE _eType = lorx_lenumstr_to_orxINPUT_TYPE(L, 1);
  orxENUM _eID = lorx_lenumstr_to_input_orxENUM(L, 2, _eType);
  orxINPUT_MODE _eMode = lorx_lenumstr_to_orxINPUT_MODE(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxInput_GetBindingName(_eType, _eID, _eMode);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Input_GetBindingType(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxINPUT_TYPE _eType;
  memset(&_eType, 0, sizeof(orxINPUT_TYPE));
  orxENUM _eID;
  memset(&_eID, 0, sizeof(orxENUM));
  orxINPUT_MODE _eMode;
  memset(&_eMode, 0, sizeof(orxINPUT_MODE));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_GetBindingType(_zName, &_eType, &_eID, &_eMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxINPUT_TYPE_to_lenumstr(L, _eType);
  lorx_orxENUM_to_linteger(L, _eID);
  lorx_orxINPUT_MODE_to_lenumstr(L, _eMode);
  return 4;
}


LORX_API int l_Input_GetActiveBinding(lua_State *L)
{
  /* get arguments */
  orxINPUT_TYPE _eType;
  memset(&_eType, 0, sizeof(orxINPUT_TYPE));
  orxENUM _eID;
  memset(&_eID, 0, sizeof(orxENUM));
  orxFLOAT _fValue;
  memset(&_fValue, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxInput_GetActiveBinding(&_eType, &_eID, &_fValue);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxINPUT_TYPE_to_lenumstr(L, _eType);
  lorx_orxENUM_to_linteger(L, _eID);
  lorx_orxFLOAT_to_lnumber(L, _fValue);
  return 4;
}


LORX_API int l_Joystick_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxJoystick_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Joystick_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxJoystick_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Joystick_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxJoystick_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Joystick_GetAxisValue(lua_State *L)
{
  /* get arguments */
  orxJOYSTICK_AXIS _eAxis = lorx_lenumstr_to_orxJOYSTICK_AXIS(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxJoystick_GetAxisValue(_eAxis);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Joystick_IsButtonPressed(lua_State *L)
{
  /* get arguments */
  orxJOYSTICK_BUTTON _eButton = lorx_lenumstr_to_orxJOYSTICK_BUTTON(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxJoystick_IsButtonPressed(_eButton);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Joystick_GetButtonName(lua_State *L)
{
  /* get arguments */
  orxJOYSTICK_BUTTON _eButton = lorx_lenumstr_to_orxJOYSTICK_BUTTON(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxJoystick_GetButtonName(_eButton);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Joystick_GetAxisName(lua_State *L)
{
  /* get arguments */
  orxJOYSTICK_AXIS _eAxis = lorx_lenumstr_to_orxJOYSTICK_AXIS(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxJoystick_GetAxisName(_eAxis);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Joystick_IsConnected(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ID = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxJoystick_IsConnected(_u32ID);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxKeyboard_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Keyboard_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxKeyboard_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxKeyboard_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Keyboard_IsKeyPressed(lua_State *L)
{
  /* get arguments */
  orxKEYBOARD_KEY _eKey = lorx_lenumstr_to_orxKEYBOARD_KEY(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxKeyboard_IsKeyPressed(_eKey);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_GetKeyDisplayName(lua_State *L)
{
  /* get arguments */
  orxKEYBOARD_KEY _eKey = lorx_lenumstr_to_orxKEYBOARD_KEY(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxKeyboard_GetKeyDisplayName(_eKey);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_ReadKey(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxKEYBOARD_KEY _retval = orxKeyboard_ReadKey();
  
  /* post processing */
  lorx_orxKEYBOARD_KEY_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_ReadString(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxKeyboard_ReadString();
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_ClearBuffer(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxKeyboard_ClearBuffer();
  
  /* post processing */
  return 0;
}


LORX_API int l_Keyboard_GetKeyName(lua_State *L)
{
  /* get arguments */
  orxKEYBOARD_KEY _eKey = lorx_lenumstr_to_orxKEYBOARD_KEY(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxKeyboard_GetKeyName(_eKey);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Keyboard_Show(lua_State *L)
{
  /* get arguments */
  orxBOOL _bShow = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxKeyboard_Show(_bShow);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Mouse_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxMouse_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Mouse_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxMouse_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Mouse_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxMouse_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Mouse_SetPosition(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxMouse_SetPosition(_pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Mouse_GetPosition(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxMouse_GetPosition(&_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Mouse_IsButtonPressed(lua_State *L)
{
  /* get arguments */
  orxMOUSE_BUTTON _eButton = lorx_lenumstr_to_orxMOUSE_BUTTON(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxMouse_IsButtonPressed(_eButton);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Mouse_GetMoveDelta(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vMoveDelta;
  memset(&_vMoveDelta, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxMouse_GetMoveDelta(&_vMoveDelta);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Mouse_GetWheelDelta(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMouse_GetWheelDelta();
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Mouse_ShowCursor(lua_State *L)
{
  /* get arguments */
  orxBOOL _bShow = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxMouse_ShowCursor(_bShow);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Mouse_Grab(lua_State *L)
{
  /* get arguments */
  orxBOOL _bGrab = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxMouse_Grab(_bGrab);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Mouse_SetCursor(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  const orxVECTOR* _pvPivot = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxMouse_SetCursor(_zName, _pvPivot);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Mouse_GetButtonName(lua_State *L)
{
  /* get arguments */
  orxMOUSE_BUTTON _eButton = lorx_lenumstr_to_orxMOUSE_BUTTON(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxMouse_GetButtonName(_eButton);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Mouse_GetAxisName(lua_State *L)
{
  /* get arguments */
  orxMOUSE_AXIS _eAxis = lorx_lenumstr_to_orxMOUSE_AXIS(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxMouse_GetAxisName(_eAxis);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Math_InitRandom(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxU32 _u32Seed = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxMath_InitRandom(_u32Seed);
  
  /* post processing */
  return 0;
}


LORX_API int l_Math_GetRandomFloat(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fMin = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fMax = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_GetRandomFloat(_fMin, _fMax);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_GetSteppedRandomFloat(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fMin = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fMax = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fStep = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_GetSteppedRandomFloat(_fMin, _fMax, _fStep);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_GetRandomU32(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Min = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32Max = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxMath_GetRandomU32(_u32Min, _u32Max);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetSteppedRandomU32(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Min = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32Max = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32Step = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxMath_GetSteppedRandomU32(_u32Min, _u32Max, _u32Step);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetRandomS32(lua_State *L)
{
  /* get arguments */
  orxS32 _s32Min = lorx_linteger_to_orxS32(L, 1);
  orxS32 _s32Max = lorx_linteger_to_orxS32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxMath_GetRandomS32(_s32Min, _s32Max);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetSteppedRandomS32(lua_State *L)
{
  /* get arguments */
  orxS32 _s32Min = lorx_linteger_to_orxS32(L, 1);
  orxS32 _s32Max = lorx_linteger_to_orxS32(L, 2);
  orxS32 _s32Step = lorx_linteger_to_orxS32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxMath_GetSteppedRandomS32(_s32Min, _s32Max, _s32Step);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetRandomU64(lua_State *L)
{
  /* get arguments */
  orxU64 _u64Min = lorx_linteger_to_orxU64(L, 1);
  orxU64 _u64Max = lorx_linteger_to_orxU64(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU64 _retval = orxMath_GetRandomU64(_u64Min, _u64Max);
  
  /* post processing */
  lorx_orxU64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetSteppedRandomU64(lua_State *L)
{
  /* get arguments */
  orxU64 _u64Min = lorx_linteger_to_orxU64(L, 1);
  orxU64 _u64Max = lorx_linteger_to_orxU64(L, 2);
  orxU64 _u64Step = lorx_linteger_to_orxU64(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU64 _retval = orxMath_GetSteppedRandomU64(_u64Min, _u64Max, _u64Step);
  
  /* post processing */
  lorx_orxU64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetRandomS64(lua_State *L)
{
  /* get arguments */
  orxS64 _s64Min = lorx_linteger_to_orxS64(L, 1);
  orxS64 _s64Max = lorx_linteger_to_orxS64(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxMath_GetRandomS64(_s64Min, _s64Max);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetSteppedRandomS64(lua_State *L)
{
  /* get arguments */
  orxS64 _s64Min = lorx_linteger_to_orxS64(L, 1);
  orxS64 _s64Max = lorx_linteger_to_orxS64(L, 2);
  orxS64 _s64Step = lorx_linteger_to_orxS64(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS64 _retval = orxMath_GetSteppedRandomS64(_s64Min, _s64Max, _s64Step);
  
  /* post processing */
  lorx_orxS64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetRandomSeeds(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxU32* _au32Seeds = malloc(sizeof(orxU32)*4);
  memset(_au32Seeds, 0, sizeof(orxU32)*4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxMath_GetRandomSeeds(_au32Seeds);
  
  /* post processing */
  
  if (4 <= 0)
  {
    lua_pushnil(L);
  }
  else
  {
    lua_createtable(L, 4, 0);
    for (size_t i = 0; i < 4; i++)
    {
      lorx_orxU32_to_linteger(L, _au32Seeds[i]);
      lua_seti(L, -2, i+1);
    }
  }
  free(_au32Seeds);
  return 1;
}


LORX_API int l_Math_SetRandomSeeds(lua_State *L)
{
  /* get arguments */
  (void)L;
  luaL_checktype(L, 1, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxU32* _au32Seeds = malloc(sizeof(orxU32)*4);
  for (size_t i = 0; i < 4; i++)
  {
    lua_geti(L, 1, i+1);
    _au32Seeds[i] = lorx_linteger_to_orxU32(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxMath_SetRandomSeeds(_au32Seeds);
  
  /* post processing */
  free(_au32Seeds);
  return 0;
}


LORX_API int l_Vector_Bezier(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvPoint1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvPoint2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint3 = lorx_luserdata_to_orxVECTOR_const(L, 3);
  const orxVECTOR* _pvPoint4 = lorx_luserdata_to_orxVECTOR_const(L, 4);
  orxFLOAT _fT = lorx_lnumber_to_orxFLOAT(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Bezier(&_vRes, _pvPoint1, _pvPoint2, _pvPoint3, _pvPoint4, _fT);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_CatmullRom(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvPoint1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvPoint2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint3 = lorx_luserdata_to_orxVECTOR_const(L, 3);
  const orxVECTOR* _pvPoint4 = lorx_luserdata_to_orxVECTOR_const(L, 4);
  orxFLOAT _fT = lorx_lnumber_to_orxFLOAT(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_CatmullRom(&_vRes, _pvPoint1, _pvPoint2, _pvPoint3, _pvPoint4, _fT);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Frame_GetIgnoreFlagValues(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFlags = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxFrame_GetIgnoreFlagValues(_zFlags);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Frame_GetIgnoreFlagNames(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxFrame_GetIgnoreFlagNames(_u32Flags);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Frame_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFrame_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Frame_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFrame_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Frame_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFrame_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Frame_Create(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFRAME* _retval = orxFrame_Create(_u32Flags);
  
  /* post processing */
  lorx_orxFRAME_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Frame_Delete(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFrame_Delete(_pstFrame);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Frame_SetParent(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME* _pstParent = lorx_luserdata_to_orxFRAME(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFrame_SetParent(_pstFrame, _pstParent);
  
  /* post processing */
  return 0;
}


LORX_API int l_Frame_GetParent(lua_State *L)
{
  /* get arguments */
  const orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFRAME* _retval = orxFrame_GetParent(_pstFrame);
  
  /* post processing */
  lorx_orxFRAME_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Frame_GetChild(lua_State *L)
{
  /* get arguments */
  const orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFRAME* _retval = orxFrame_GetChild(_pstFrame);
  
  /* post processing */
  lorx_orxFRAME_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Frame_GetSibling(lua_State *L)
{
  /* get arguments */
  const orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFRAME* _retval = orxFrame_GetSibling(_pstFrame);
  
  /* post processing */
  lorx_orxFRAME_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Frame_IsRootChild(lua_State *L)
{
  /* get arguments */
  const orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxFrame_IsRootChild(_pstFrame);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Frame_SetPosition(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  const orxVECTOR* _pvPos = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFrame_SetPosition(_pstFrame, _eSpace, _pvPos);
  
  /* post processing */
  return 0;
}


LORX_API int l_Frame_SetRotation(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFrame_SetRotation(_pstFrame, _eSpace, _fRotation);
  
  /* post processing */
  return 0;
}


LORX_API int l_Frame_SetScale(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  const orxVECTOR* _pvScale = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFrame_SetScale(_pstFrame, _eSpace, _pvScale);
  
  /* post processing */
  return 0;
}


LORX_API int l_Frame_GetPosition(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  orxVECTOR _vPos;
  memset(&_vPos, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFrame_GetPosition(_pstFrame, _eSpace, &_vPos);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Frame_GetRotation(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFrame_GetRotation(_pstFrame, _eSpace);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Frame_GetScale(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  orxVECTOR _vScale;
  memset(&_vScale, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFrame_GetScale(_pstFrame, _eSpace, &_vScale);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Frame_TransformPosition(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  orxVECTOR _vPos;
  memset(&_vPos, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFrame_TransformPosition(_pstFrame, _eSpace, &_vPos);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Frame_TransformRotation(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFrame_TransformRotation(_pstFrame, _eSpace, _fRotation);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Frame_TransformScale(lua_State *L)
{
  /* get arguments */
  orxFRAME* _pstFrame = lorx_luserdata_to_orxFRAME(L, 1);
  orxFRAME_SPACE _eSpace = lorx_lenumstr_to_orxFRAME_SPACE(L, 2);
  orxVECTOR _vScale;
  memset(&_vScale, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxFrame_TransformScale(_pstFrame, _eSpace, &_vScale);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_FX_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFX_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_FX_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFX_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_FX_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFX* _retval = orxFX_Create();
  
  /* post processing */
  lorx_orxFX_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_FX_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFX* _retval = orxFX_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxFX_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_FX_Delete(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_Delete(_pstFX);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_ClearCache(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_ClearCache();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_Apply(lua_State *L)
{
  /* get arguments */
  const orxFX* _pstFX = lorx_luserdata_to_orxFX_const(L, 1);
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 2);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_Apply(_pstFX, _pstObject, _fStartTime, _fEndTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFX_Enable(_pstFX, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_FX_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxFX* _pstFX = lorx_luserdata_to_orxFX_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxFX_IsEnabled(_pstFX);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_FX_AddAlpha(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxFLOAT _fStartAlpha = lorx_lnumber_to_orxFLOAT(L, 8);
  orxFLOAT _fEndAlpha = lorx_lnumber_to_orxFLOAT(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddAlpha(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _fStartAlpha, _fEndAlpha, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddRGB(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxVECTOR* _pvStartColor = lorx_luserdata_to_orxVECTOR(L, 8);
  orxVECTOR* _pvEndColor = lorx_luserdata_to_orxVECTOR(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddRGB(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _pvStartColor, _pvEndColor, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddHSL(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxVECTOR* _pvStartColor = lorx_luserdata_to_orxVECTOR(L, 8);
  orxVECTOR* _pvEndColor = lorx_luserdata_to_orxVECTOR(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddHSL(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _pvStartColor, _pvEndColor, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddHSV(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxVECTOR* _pvStartColor = lorx_luserdata_to_orxVECTOR(L, 8);
  orxVECTOR* _pvEndColor = lorx_luserdata_to_orxVECTOR(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddHSV(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _pvStartColor, _pvEndColor, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddRotation(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxFLOAT _fStartRotation = lorx_lnumber_to_orxFLOAT(L, 8);
  orxFLOAT _fEndRotation = lorx_lnumber_to_orxFLOAT(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddRotation(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _fStartRotation, _fEndRotation, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddScale(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  const orxVECTOR* _pvStartScale = lorx_luserdata_to_orxVECTOR_const(L, 8);
  const orxVECTOR* _pvEndScale = lorx_luserdata_to_orxVECTOR_const(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddScale(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _pvStartScale, _pvEndScale, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddPosition(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  const orxVECTOR* _pvStartTranslation = lorx_luserdata_to_orxVECTOR_const(L, 8);
  const orxVECTOR* _pvEndTranslation = lorx_luserdata_to_orxVECTOR_const(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddPosition(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _pvStartTranslation, _pvEndTranslation, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddSpeed(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  const orxVECTOR* _pvStartSpeed = lorx_luserdata_to_orxVECTOR_const(L, 8);
  const orxVECTOR* _pvEndSpeed = lorx_luserdata_to_orxVECTOR_const(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddSpeed(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _pvStartSpeed, _pvEndSpeed, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddVolume(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxFLOAT _fStartVolume = lorx_lnumber_to_orxFLOAT(L, 8);
  orxFLOAT _fEndVolume = lorx_lnumber_to_orxFLOAT(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddVolume(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _fStartVolume, _fEndVolume, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddPitch(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxFLOAT _fStartTime = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fEndTime = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fCyclePeriod = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fCyclePhase = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fAmplification = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT _fAcceleration = lorx_lnumber_to_orxFLOAT(L, 7);
  orxFLOAT _fStartPitch = lorx_lnumber_to_orxFLOAT(L, 8);
  orxFLOAT _fEndPitch = lorx_lnumber_to_orxFLOAT(L, 9);
  orxFX_CURVE _eCurve = lorx_lenumstr_to_orxFX_CURVE(L, 10);
  orxFLOAT _fPow = lorx_lnumber_to_orxFLOAT(L, 11);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 12);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddPitch(_pstFX, _fStartTime, _fEndTime, _fCyclePeriod, _fCyclePhase, _fAmplification, _fAcceleration, _fStartPitch, _fEndPitch, _eCurve, _fPow, _u32Flags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_AddSlotFromConfig(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  const orxSTRING _zSlotID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_AddSlotFromConfig(_pstFX, _zSlotID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_GetDuration(lua_State *L)
{
  /* get arguments */
  const orxFX* _pstFX = lorx_luserdata_to_orxFX_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFX_GetDuration(_pstFX);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_FX_GetName(lua_State *L)
{
  /* get arguments */
  const orxFX* _pstFX = lorx_luserdata_to_orxFX_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxFX_GetName(_pstFX);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_FX_Loop(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxBOOL _bLoop = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_Loop(_pstFX, _bLoop);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_IsLooping(lua_State *L)
{
  /* get arguments */
  const orxFX* _pstFX = lorx_luserdata_to_orxFX_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxFX_IsLooping(_pstFX);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_FX_SetStagger(lua_State *L)
{
  /* get arguments */
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 1);
  orxBOOL _bStagger = lorx_lboolean_to_orxBOOL(L, 2);
  orxFLOAT _fOffset = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFX_SetStagger(_pstFX, _bStagger, _fOffset);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FX_GetStagger(lua_State *L)
{
  /* get arguments */
  const orxFX* _pstFX = lorx_luserdata_to_orxFX_const(L, 1);
  orxFLOAT _fOffset;
  memset(&_fOffset, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxFX_GetStagger(_pstFX, &_fOffset);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fOffset);
  return 2;
}


LORX_API int l_FXPointer_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFXPointer_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_FXPointer_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFXPointer_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_FXPointer_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFXPOINTER* _retval = orxFXPointer_Create();
  
  /* post processing */
  lorx_orxFXPOINTER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_Delete(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_Delete(_pstFXPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFXPointer_Enable(_pstFXPointer, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_FXPointer_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxFXPointer_IsEnabled(_pstFXPointer);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_AddFX(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_AddFX(_pstFXPointer, _pstFX);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_AddDelayedFX(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 2);
  orxFLOAT _fDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_AddDelayedFX(_pstFXPointer, _pstFX, _fDelay);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_RemoveFX(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  orxFX* _pstFX = lorx_luserdata_to_orxFX(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_RemoveFX(_pstFXPointer, _pstFX);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_RemoveAllFXs(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_RemoveAllFXs(_pstFXPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_AddFXFromConfig(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_AddFXFromConfig(_pstFXPointer, _zFXConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_AddUniqueFXFromConfig(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_AddUniqueFXFromConfig(_pstFXPointer, _zFXConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_AddDelayedFXFromConfig(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  orxFLOAT _fDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_AddDelayedFXFromConfig(_pstFXPointer, _zFXConfigID, _fDelay);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_AddUniqueDelayedFXFromConfig(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  orxFLOAT _fDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_AddUniqueDelayedFXFromConfig(_pstFXPointer, _zFXConfigID, _fDelay);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_RemoveFXFromConfig(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_RemoveFXFromConfig(_pstFXPointer, _zFXConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_Synchronize(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  const orxFXPOINTER* _pstModel = lorx_luserdata_to_orxFXPOINTER_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_Synchronize(_pstFXPointer, _pstModel);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_GetTime(lua_State *L)
{
  /* get arguments */
  const orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFXPointer_GetTime(_pstFXPointer);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_GetCount(lua_State *L)
{
  /* get arguments */
  const orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxFXPointer_GetCount(_pstFXPointer);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_GetFrequency(lua_State *L)
{
  /* get arguments */
  const orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxFXPointer_GetFrequency(_pstFXPointer);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_SetTime(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  orxFLOAT _fTime = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_SetTime(_pstFXPointer, _fTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_FXPointer_SetFrequency(lua_State *L)
{
  /* get arguments */
  orxFXPOINTER* _pstFXPointer = lorx_luserdata_to_orxFXPOINTER(L, 1);
  orxFLOAT _fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxFXPointer_SetFrequency(_pstFXPointer, _fFrequency);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_Create();
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_Delete(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Delete(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Update(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxCLOCK_INFO* _pstClockInfo = lorx_luserdata_to_orxCLOCK_INFO_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Update(_pstObject, _pstClockInfo);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_Enable(_pstObject, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_EnableRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_EnableRecursive(_pstObject, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_IsEnabled(_pstObject);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_Pause(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bPause = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_Pause(_pstObject, _bPause);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_PauseRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bPause = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_PauseRecursive(_pstObject, _bPause);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_IsPaused(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_IsPaused(_pstObject);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_SetUserData(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  void* _pUserData = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetUserData(_pstObject, _pUserData);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetUserData(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  void* _retval = orxObject_GetUserData(_pstObject);
  
  /* post processing */
  lorx_void_ptr_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_SetOwner(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  void* _pOwner = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetOwner(_pstObject, _pOwner);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetOwner(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxObject_GetOwner(_pstObject);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetOwnedChild(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_GetOwnedChild(_pstObject);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetOwnedSibling(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_GetOwnedSibling(_pstObject);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_SetClock(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetClock(_pstObject, _pstClock);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetClockRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxCLOCK* _pstClock = lorx_luserdata_to_orxCLOCK(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetClockRecursive(_pstObject, _pstClock);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetClock(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCLOCK* _retval = orxObject_GetClock(_pstObject);
  
  /* post processing */
  lorx_orxCLOCK_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_LinkStructure(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxSTRUCTURE* _pstStructure = lorx_luserdata_to_orxSTRUCTURE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_LinkStructure(_pstObject, _pstStructure);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_UnlinkStructure(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_UnlinkStructure(_pstObject, _eStructureID);
  
  /* post processing */
  return 0;
}


LORX_API int l__orxObject_GetStructure(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = _orxObject_GetStructure(_pstObject, _eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_SetFlip(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bFlipX = lorx_lboolean_to_orxBOOL(L, 2);
  orxBOOL _bFlipY = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetFlip(_pstObject, _bFlipX, _bFlipY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetFlip(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxBOOL _bFlipX;
  memset(&_bFlipX, 0, sizeof(orxBOOL));
  orxBOOL _bFlipY;
  memset(&_bFlipY, 0, sizeof(orxBOOL));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_GetFlip(_pstObject, &_bFlipX, &_bFlipY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxBOOL_to_lboolean(L, _bFlipX);
  lorx_orxBOOL_to_lboolean(L, _bFlipY);
  return 3;
}


LORX_API int l_Object_SetPivot(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvPivot = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetPivot(_pstObject, _pvPivot);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetOrigin(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvOrigin = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetOrigin(_pstObject, _pvOrigin);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetSize(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvSize = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetSize(_pstObject, _pvSize);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetPivot(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vPivot;
  memset(&_vPivot, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetPivot(_pstObject, &_vPivot);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetOrigin(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vOrigin;
  memset(&_vOrigin, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetOrigin(_pstObject, &_vOrigin);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetSize(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vSize;
  memset(&_vSize, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetSize(_pstObject, &_vSize);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_SetPosition(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetPosition(_pstObject, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetWorldPosition(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetWorldPosition(_pstObject, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetRotation(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetRotation(_pstObject, _fRotation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetWorldRotation(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetWorldRotation(_pstObject, _fRotation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetScale(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvScale = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetScale(_pstObject, _pvScale);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetWorldScale(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvScale = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetWorldScale(_pstObject, _pvScale);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetPosition(_pstObject, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetWorldPosition(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetWorldPosition(_pstObject, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetRotation(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetRotation(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_GetWorldRotation(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetWorldRotation(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_GetScale(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vScale;
  memset(&_vScale, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetScale(_pstObject, &_vScale);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetWorldScale(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vScale;
  memset(&_vScale, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetWorldScale(_pstObject, &_vScale);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_SetParent(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  void* _pParent = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetParent(_pstObject, _pParent);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetParent(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxObject_GetParent(_pstObject);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetChild(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_GetChild(_pstObject);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetSibling(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_GetSibling(_pstObject);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetNextChild(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  void* _pChild = lorx_luserdata_to_void_ptr(L, 2);
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxObject_GetNextChild(_pstObject, _pChild, _eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_Attach(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  void* _pParent = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Attach(_pstObject, _pParent);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Detach(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Detach(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetIgnoreFlags(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxU32 _u32IgnoreFlags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetIgnoreFlags(_pstObject, _u32IgnoreFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetLiteralIgnoreFlags(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zIgnoreFlags = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetLiteralIgnoreFlags(_pstObject, _zIgnoreFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetIgnoreFlags(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxObject_GetIgnoreFlags(_pstObject);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Object_GetLiteralIgnoreFlags(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxObject_GetLiteralIgnoreFlags(_pstObject);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Object_LogParents(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_LogParents(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetAnimSet(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxANIMSET* _pstAnimSet = lorx_luserdata_to_orxANIMSET(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetAnimSet(_pstObject, _pstAnimSet);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetAnimFrequency(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetAnimFrequency(_pstObject, _fFrequency);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetAnimFrequencyRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetAnimFrequencyRecursive(_pstObject, _fFrequency);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetAnimFrequency(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetAnimFrequency(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_SetCurrentAnim(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetCurrentAnim(_pstObject, _zAnimName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetCurrentAnimRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetCurrentAnimRecursive(_pstObject, _zAnimName);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_SetTargetAnim(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetTargetAnim(_pstObject, _zAnimName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetTargetAnimRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetTargetAnimRecursive(_pstObject, _zAnimName);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetCurrentAnim(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxObject_GetCurrentAnim(_pstObject);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Object_GetTargetAnim(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxObject_GetTargetAnim(_pstObject);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Object_IsCurrentAnim(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_IsCurrentAnim(_pstObject, _zAnimName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_IsTargetAnim(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  const orxSTRING _zAnimName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_IsTargetAnim(_pstObject, _zAnimName);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_SetSpeed(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvSpeed = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetSpeed(_pstObject, _pvSpeed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetRelativeSpeed(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvRelativeSpeed = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetRelativeSpeed(_pstObject, _pvRelativeSpeed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetAngularVelocity(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fVelocity = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetAngularVelocity(_pstObject, _fVelocity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetCustomGravity(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvCustomGravity = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetCustomGravity(_pstObject, _pvCustomGravity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetSpeed(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vSpeed;
  memset(&_vSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetSpeed(_pstObject, &_vSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetRelativeSpeed(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vRelativeSpeed;
  memset(&_vRelativeSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetRelativeSpeed(_pstObject, &_vRelativeSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetAngularVelocity(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetAngularVelocity(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_GetCustomGravity(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vCustomGravity;
  memset(&_vCustomGravity, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetCustomGravity(_pstObject, &_vCustomGravity);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_GetMass(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetMass(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_GetMassCenter(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxVECTOR _vMassCenter;
  memset(&_vMassCenter, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxObject_GetMassCenter(_pstObject, &_vMassCenter);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_ApplyTorque(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fTorque = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_ApplyTorque(_pstObject, _fTorque);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_ApplyForce(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvForce = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_ApplyForce(_pstObject, _pvForce, _pvPoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_ApplyImpulse(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvImpulse = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_ApplyImpulse(_pstObject, _pvImpulse, _pvPoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Raycast(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvBegin = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvEnd = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 3);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 4);
  orxBOOL _bEarlyExit = lorx_lboolean_to_orxBOOL(L, 5);
  orxVECTOR* _pvContact = lorx_luserdata_to_orxVECTOR(L, 6);
  orxVECTOR* _pvNormal = lorx_luserdata_to_orxVECTOR(L, 7);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_Raycast(_pvBegin, _pvEnd, _u16SelfFlags, _u16CheckMask, _bEarlyExit, _pvContact, _pvNormal);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_SetTextString(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetTextString(_pstObject, _zString);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetTextString(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxObject_GetTextString(_pstObject);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Object_GetBoundingBox(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxOBOX _stBoundingBox;
  memset(&_stBoundingBox, 0, sizeof(orxOBOX));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBOX* _retval = orxObject_GetBoundingBox(_pstObject, &_stBoundingBox);
  
  /* post processing */
  lorx_orxOBOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_AddFX(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_AddFX(_pstObject, _zFXConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddFXRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  orxFLOAT _fPropagationDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_AddFXRecursive(_pstObject, _zFXConfigID, _fPropagationDelay);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_AddUniqueFX(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_AddUniqueFX(_pstObject, _zFXConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddUniqueFXRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  orxFLOAT _fPropagationDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_AddUniqueFXRecursive(_pstObject, _zFXConfigID, _fPropagationDelay);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_RemoveFX(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveFX(_pstObject, _zFXConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveFXRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFXConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_RemoveFXRecursive(_pstObject, _zFXConfigID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_RemoveAllFXs(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveAllFXs(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveAllFXsRecursive(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveAllFXsRecursive(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetFXFrequency(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetFXFrequency(_pstObject, _fFrequency);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetFXFrequencyRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetFXFrequencyRecursive(_pstObject, _fFrequency);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetFXFrequency(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetFXFrequency(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_SynchronizeFX(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxOBJECT* _pstModel = lorx_luserdata_to_orxOBJECT_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SynchronizeFX(_pstObject, _pstModel);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddSound(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zSoundConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_AddSound(_pstObject, _zSoundConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveSound(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zSoundConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveSound(_pstObject, _zSoundConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetLastAddedSound(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND* _retval = orxObject_GetLastAddedSound(_pstObject);
  
  /* post processing */
  lorx_orxSOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_SetVolume(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fVolume = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetVolume(_pstObject, _fVolume);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetPitch(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fPitch = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetPitch(_pstObject, _fPitch);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetPanning(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fPanning = lorx_lnumber_to_orxFLOAT(L, 2);
  orxBOOL _bMix = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetPanning(_pstObject, _fPanning, _bMix);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Play(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Play(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_Stop(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_Stop(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddFilter(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zFilterConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_AddFilter(_pstObject, _zFilterConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveLastFilter(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveLastFilter(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveAllFilters(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveAllFilters(_pstObject);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddShader(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_AddShader(_pstObject, _zShaderConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddShaderRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_AddShaderRecursive(_pstObject, _zShaderConfigID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_RemoveShader(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveShader(_pstObject, _zShaderConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveShaderRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_RemoveShaderRecursive(_pstObject, _zShaderConfigID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_EnableShader(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_EnableShader(_pstObject, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_IsShaderEnabled(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_IsShaderEnabled(_pstObject);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_AddTimeLineTrack(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zTrackConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_AddTimeLineTrack(_pstObject, _zTrackConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_AddTimeLineTrackRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zTrackConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_AddTimeLineTrackRecursive(_pstObject, _zTrackConfigID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_RemoveTimeLineTrack(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zTrackConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_RemoveTimeLineTrack(_pstObject, _zTrackConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_RemoveTimeLineTrackRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zTrackConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_RemoveTimeLineTrackRecursive(_pstObject, _zTrackConfigID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_EnableTimeLine(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_EnableTimeLine(_pstObject, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_IsTimeLineEnabled(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_IsTimeLineEnabled(_pstObject);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_GetName(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxObject_GetName(_pstObject);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Object_SetSmoothing(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxDISPLAY_SMOOTHING _eSmoothing = lorx_lenumstr_to_orxDISPLAY_SMOOTHING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetSmoothing(_pstObject, _eSmoothing);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetSmoothingRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxDISPLAY_SMOOTHING _eSmoothing = lorx_lenumstr_to_orxDISPLAY_SMOOTHING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetSmoothingRecursive(_pstObject, _eSmoothing);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetSmoothing(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_SMOOTHING _retval = orxObject_GetSmoothing(_pstObject);
  
  /* post processing */
  lorx_orxDISPLAY_SMOOTHING_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetWorkingTexture(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTEXTURE* _retval = orxObject_GetWorkingTexture(_pstObject);
  
  /* post processing */
  lorx_orxTEXTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetWorkingGraphic(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxGRAPHIC* _retval = orxObject_GetWorkingGraphic(_pstObject);
  
  /* post processing */
  lorx_orxGRAPHIC_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_SetColor(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetColor(_pstObject, _pstColor);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetColorRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetColorRecursive(_pstObject, _pstColor);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_HasColor(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_HasColor(_pstObject);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_GetColor(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxCOLOR _stColor;
  memset(&_stColor, 0, sizeof(orxCOLOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxObject_GetColor(_pstObject, &_stColor);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Object_SetRGB(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvRGB = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetRGB(_pstObject, _pvRGB);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetRGBRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxVECTOR* _pvRGB = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetRGBRecursive(_pstObject, _pvRGB);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_SetAlpha(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fAlpha = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetAlpha(_pstObject, _fAlpha);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetAlphaRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fAlpha = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetAlphaRecursive(_pstObject, _fAlpha);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_SetRepeat(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fRepeatX = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fRepeatY = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetRepeat(_pstObject, _fRepeatX, _fRepeatY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetRepeat(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxFLOAT _fRepeatX;
  memset(&_fRepeatX, 0, sizeof(orxFLOAT));
  orxFLOAT _fRepeatY;
  memset(&_fRepeatY, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_GetRepeat(_pstObject, &_fRepeatX, &_fRepeatY);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fRepeatX);
  lorx_orxFLOAT_to_lnumber(L, _fRepeatY);
  return 3;
}


LORX_API int l_Object_SetBlendMode(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetBlendMode(_pstObject, _eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetBlendModeRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetBlendModeRecursive(_pstObject, _eBlendMode);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_HasBlendMode(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxObject_HasBlendMode(_pstObject);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Object_GetBlendMode(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_BLEND_MODE _retval = orxObject_GetBlendMode(_pstObject);
  
  /* post processing */
  lorx_orxDISPLAY_BLEND_MODE_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetLiteralLifeTime(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  const orxSTRING _zLifeTime = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetLiteralLifeTime(_pstObject, _zLifeTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetLifeTime(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxFLOAT _fLifeTime = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetLifeTime(_pstObject, _fLifeTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_GetLifeTime(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetLifeTime(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_GetActiveTime(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxObject_GetActiveTime(_pstObject);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Object_GetDefaultGroupID(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxObject_GetDefaultGroupID();
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Object_GetGroupID(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxObject_GetGroupID(_pstObject);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Object_SetGroupID(lua_State *L)
{
  /* get arguments */
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxObject_SetGroupID(_pstObject, _stGroupID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Object_SetGroupIDRecursive(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxObject_SetGroupIDRecursive(_pstObject, _stGroupID);
  
  /* post processing */
  return 0;
}


LORX_API int l_Object_GetNext(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_GetNext(_pstObject, _stGroupID);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_GetNextEnabled(lua_State *L)
{
  /* get arguments */
  const orxOBJECT* _pstObject = lorx_luserdata_to_orxOBJECT_const(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_GetNextEnabled(_pstObject, _stGroupID);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_Pick(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_Pick(_pvPosition, _stGroupID);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Object_BoxPick(lua_State *L)
{
  /* get arguments */
  const orxOBOX* _pstBox = lorx_luserdata_to_orxOBOX_const(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBJECT* _retval = orxObject_BoxPick(_pstBox, _stGroupID);
  
  /* post processing */
  lorx_orxOBJECT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Spawner_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSpawner_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Spawner_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSpawner_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Spawner_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSPAWNER* _retval = orxSpawner_Create();
  
  /* post processing */
  lorx_orxSPAWNER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Spawner_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSPAWNER* _retval = orxSpawner_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxSPAWNER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Spawner_Delete(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_Delete(_pstSpawner);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSpawner_Enable(_pstSpawner, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Spawner_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSpawner_IsEnabled(_pstSpawner);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Spawner_Reset(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSpawner_Reset(_pstSpawner);
  
  /* post processing */
  return 0;
}


LORX_API int l_Spawner_SetTotalObjectLimit(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxU32 _u32TotalObjectLimit = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetTotalObjectLimit(_pstSpawner, _u32TotalObjectLimit);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetActiveObjectLimit(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxU32 _u32ActiveObjectLimit = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetActiveObjectLimit(_pstSpawner, _u32ActiveObjectLimit);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetTotalObjectLimit(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSpawner_GetTotalObjectLimit(_pstSpawner);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetActiveObjectLimit(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSpawner_GetActiveObjectLimit(_pstSpawner);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetTotalObjectCount(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSpawner_GetTotalObjectCount(_pstSpawner);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetActiveObjectCount(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSpawner_GetActiveObjectCount(_pstSpawner);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetWaveSize(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxU32 _u32WaveSize = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetWaveSize(_pstSpawner, _u32WaveSize);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetWaveDelay(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxFLOAT _fWaveDelay = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetWaveDelay(_pstSpawner, _fWaveDelay);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetNextWaveDelay(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxFLOAT _fWaveDelay = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetNextWaveDelay(_pstSpawner, _fWaveDelay);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetWaveSize(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSpawner_GetWaveSize(_pstSpawner);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetWaveDelay(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSpawner_GetWaveDelay(_pstSpawner);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetNextWaveDelay(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSpawner_GetNextWaveDelay(_pstSpawner);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetObjectSpeed(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  const orxVECTOR* _pvObjectSpeed = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetObjectSpeed(_pstSpawner, _pvObjectSpeed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetObjectSpeed(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  orxVECTOR _vObjectSpeed;
  memset(&_vObjectSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSpawner_GetObjectSpeed(_pstSpawner, &_vObjectSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Spawner_Spawn(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSpawner_Spawn(_pstSpawner, _u32Number);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetFrame(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFRAME* _retval = orxSpawner_GetFrame(_pstSpawner);
  
  /* post processing */
  lorx_orxFRAME_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetPosition(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetPosition(_pstSpawner, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetRotation(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetRotation(_pstSpawner, _fRotation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetScale(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  const orxVECTOR* _pvScale = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetScale(_pstSpawner, _pvScale);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSpawner_GetPosition(_pstSpawner, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetWorldPosition(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSpawner_GetWorldPosition(_pstSpawner, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetRotation(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSpawner_GetRotation(_pstSpawner);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetWorldRotation(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSpawner_GetWorldRotation(_pstSpawner);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetScale(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  orxVECTOR _vScale;
  memset(&_vScale, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSpawner_GetScale(_pstSpawner, &_vScale);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetWorldScale(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  orxVECTOR _vScale;
  memset(&_vScale, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSpawner_GetWorldScale(_pstSpawner, &_vScale);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Spawner_SetParent(lua_State *L)
{
  /* get arguments */
  orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER(L, 1);
  void* _pParent = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSpawner_SetParent(_pstSpawner, _pParent);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetParent(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxSpawner_GetParent(_pstSpawner);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Spawner_GetName(lua_State *L)
{
  /* get arguments */
  const orxSPAWNER* _pstSpawner = lorx_luserdata_to_orxSPAWNER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxSpawner_GetName(_pstSpawner);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Structure_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxStructure_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Structure_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxStructure_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Structure_Unregister(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_Unregister(_eStructureID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_Create(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_Create(_eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_Delete(lua_State *L)
{
  /* get arguments */
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_Delete(_pStructure);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetStorageType(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE_STORAGE_TYPE _retval = orxStructure_GetStorageType(_eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_STORAGE_TYPE_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetCount(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxStructure_GetCount(_eStructureID);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Structure_Update(lua_State *L)
{
  /* get arguments */
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  const void* _phCaller = lorx_luserdata_to_void_ptr_const(L, 2);
  const orxCLOCK_INFO* _pstClockInfo = lorx_luserdata_to_orxCLOCK_INFO_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_Update(_pStructure, _phCaller, _pstClockInfo);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_Get(lua_State *L)
{
  /* get arguments */
  orxU64 _u64GUID = lorx_linteger_to_orxU64(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_Get(_u64GUID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetOwner(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetOwner(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_SetOwner(lua_State *L)
{
  /* get arguments */
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  void* _pOwner = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_SetOwner(_pStructure, _pOwner);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetFirst(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetFirst(_eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetLast(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetLast(_eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetParent(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetParent(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetChild(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetChild(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetSibling(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetSibling(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetPrevious(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetPrevious(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetNext(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxStructure_GetNext(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_SetParent(lua_State *L)
{
  /* get arguments */
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  void* _phParent = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_SetParent(_pStructure, _phParent);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_LogAll(lua_State *L)
{
  /* get arguments */
  orxBOOL _bPrivate = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxStructure_LogAll(_bPrivate);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTimeLine_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_TimeLine_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTimeLine_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTimeLine_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_TimeLine_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTIMELINE* _retval = orxTimeLine_Create();
  
  /* post processing */
  lorx_orxTIMELINE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_Delete(lua_State *L)
{
  /* get arguments */
  orxTIMELINE* _pstTimeLine = lorx_luserdata_to_orxTIMELINE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTimeLine_Delete(_pstTimeLine);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_ClearCache(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTimeLine_ClearCache();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxTIMELINE* _pstTimeLine = lorx_luserdata_to_orxTIMELINE(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxTimeLine_Enable(_pstTimeLine, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_TimeLine_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxTIMELINE* _pstTimeLine = lorx_luserdata_to_orxTIMELINE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxTimeLine_IsEnabled(_pstTimeLine);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_AddTrackFromConfig(lua_State *L)
{
  /* get arguments */
  orxTIMELINE* _pstTimeLine = lorx_luserdata_to_orxTIMELINE(L, 1);
  const orxSTRING _zTrackID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTimeLine_AddTrackFromConfig(_pstTimeLine, _zTrackID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_RemoveTrackFromConfig(lua_State *L)
{
  /* get arguments */
  orxTIMELINE* _pstTimeLine = lorx_luserdata_to_orxTIMELINE(L, 1);
  const orxSTRING _zTrackID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxTimeLine_RemoveTrackFromConfig(_pstTimeLine, _zTrackID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_GetCount(lua_State *L)
{
  /* get arguments */
  const orxTIMELINE* _pstTimeLine = lorx_luserdata_to_orxTIMELINE_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxTimeLine_GetCount(_pstTimeLine);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_TimeLine_GetTrackDuration(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zTrackID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxTimeLine_GetTrackDuration(_zTrackID);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBody_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Body_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBody_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Body_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRUCTURE* _pstOwner = lorx_luserdata_to_orxSTRUCTURE_const(L, 1);
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY* _retval = orxBody_CreateFromConfig(_pstOwner, _zConfigID);
  
  /* post processing */
  lorx_orxBODY_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_Delete(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_Delete(_pstBody);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetName(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxBody_GetName(_pstBody);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Body_TestDefFlags(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_TestDefFlags(_pstBody, _u32Flags);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_TestAllDefFlags(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_TestAllDefFlags(_pstBody, _u32Flags);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_GetDefFlags(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxU32 _u32Mask = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxBody_GetDefFlags(_pstBody, _u32Mask);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Body_AddPartFromConfig(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY_PART* _retval = orxBody_AddPartFromConfig(_pstBody, _zConfigID);
  
  /* post processing */
  lorx_orxBODY_PART_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_RemovePartFromConfig(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_RemovePartFromConfig(_pstBody, _zConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetNextPart(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY_PART* _retval = orxBody_GetNextPart(_pstBody, _pstBodyPart);
  
  /* post processing */
  lorx_orxBODY_PART_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartName(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxBody_GetPartName(_pstBodyPart);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartBody(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY* _retval = orxBody_GetPartBody(_pstBodyPart);
  
  /* post processing */
  lorx_orxBODY_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_RemovePart(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_RemovePart(_pstBodyPart);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_AddJointFromConfig(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstSrcBody = lorx_luserdata_to_orxBODY(L, 1);
  orxBODY* _pstDstBody = lorx_luserdata_to_orxBODY(L, 2);
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY_JOINT* _retval = orxBody_AddJointFromConfig(_pstSrcBody, _pstDstBody, _zConfigID);
  
  /* post processing */
  lorx_orxBODY_JOINT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_GetNextJoint(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  const orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY_JOINT* _retval = orxBody_GetNextJoint(_pstBody, _pstBodyJoint);
  
  /* post processing */
  lorx_orxBODY_JOINT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_GetJointName(lua_State *L)
{
  /* get arguments */
  const orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxBody_GetJointName(_pstBodyJoint);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Body_RemoveJoint(lua_State *L)
{
  /* get arguments */
  orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_RemoveJoint(_pstBodyJoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPosition(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPosition(_pstBody, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetRotation(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetRotation(_pstBody, _fRotation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetScale(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxVECTOR* _pvScale = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetScale(_pstBody, _pvScale);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetSpeed(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxVECTOR* _pvSpeed = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetSpeed(_pstBody, _pvSpeed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetAngularVelocity(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxFLOAT _fVelocity = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetAngularVelocity(_pstBody, _fVelocity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetCustomGravity(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxVECTOR* _pvCustomGravity = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetCustomGravity(_pstBody, _pvCustomGravity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetFixedRotation(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxBOOL _bFixed = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetFixedRotation(_pstBody, _bFixed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetDynamic(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxBOOL _bDynamic = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetDynamic(_pstBody, _bDynamic);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetAllowMoving(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxBOOL _bAllowMoving = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetAllowMoving(_pstBody, _bAllowMoving);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxBody_GetPosition(_pstBody, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Body_GetRotation(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetRotation(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_GetSpeed(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxVECTOR _vSpeed;
  memset(&_vSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxBody_GetSpeed(_pstBody, &_vSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Body_GetSpeedAtWorldPosition(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxVECTOR _vSpeed;
  memset(&_vSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxBody_GetSpeedAtWorldPosition(_pstBody, _pvPosition, &_vSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Body_GetAngularVelocity(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetAngularVelocity(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_GetCustomGravity(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxVECTOR _vCustomGravity;
  memset(&_vCustomGravity, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxBody_GetCustomGravity(_pstBody, &_vCustomGravity);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Body_IsFixedRotation(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_IsFixedRotation(_pstBody);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_IsDynamic(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_IsDynamic(_pstBody);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_GetAllowMoving(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_GetAllowMoving(_pstBody);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_GetMass(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetMass(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_GetMassCenter(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  orxVECTOR _vMassCenter;
  memset(&_vMassCenter, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxBody_GetMassCenter(_pstBody, &_vMassCenter);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Body_SetLinearDamping(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxFLOAT _fDamping = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetLinearDamping(_pstBody, _fDamping);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetAngularDamping(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxFLOAT _fDamping = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetAngularDamping(_pstBody, _fDamping);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetLinearDamping(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetLinearDamping(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_GetAngularDamping(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetAngularDamping(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_IsInside(lua_State *L)
{
  /* get arguments */
  const orxBODY* _pstBody = lorx_luserdata_to_orxBODY_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_IsInside(_pstBody, _pvPosition);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_ApplyTorque(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  orxFLOAT _fTorque = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_ApplyTorque(_pstBody, _fTorque);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_ApplyForce(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxVECTOR* _pvForce = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_ApplyForce(_pstBody, _pvForce, _pvPoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_ApplyImpulse(lua_State *L)
{
  /* get arguments */
  orxBODY* _pstBody = lorx_luserdata_to_orxBODY(L, 1);
  const orxVECTOR* _pvImpulse = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_ApplyImpulse(_pstBody, _pvImpulse, _pvPoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPartSelfFlags(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPartSelfFlags(_pstBodyPart, _u16SelfFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPartCheckMask(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPartCheckMask(_pstBodyPart, _u16CheckMask);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartSelfFlags(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU16 _retval = orxBody_GetPartSelfFlags(_pstBodyPart);
  
  /* post processing */
  lorx_orxU16_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartCheckMask(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU16 _retval = orxBody_GetPartCheckMask(_pstBodyPart);
  
  /* post processing */
  lorx_orxU16_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPartSolid(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  orxBOOL _bSolid = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPartSolid(_pstBodyPart, _bSolid);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_IsPartSolid(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_IsPartSolid(_pstBodyPart);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPartFriction(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  orxFLOAT _fFriction = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPartFriction(_pstBodyPart, _fFriction);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartFriction(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetPartFriction(_pstBodyPart);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPartRestitution(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  orxFLOAT _fRestitution = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPartRestitution(_pstBodyPart, _fRestitution);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartRestitution(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetPartRestitution(_pstBodyPart);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_SetPartDensity(lua_State *L)
{
  /* get arguments */
  orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART(L, 1);
  orxFLOAT _fDensity = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetPartDensity(_pstBodyPart, _fDensity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetPartDensity(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetPartDensity(_pstBodyPart);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_IsInsidePart(lua_State *L)
{
  /* get arguments */
  const orxBODY_PART* _pstBodyPart = lorx_luserdata_to_orxBODY_PART_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxBody_IsInsidePart(_pstBodyPart, _pvPosition);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Body_EnableMotor(lua_State *L)
{
  /* get arguments */
  orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_EnableMotor(_pstBodyJoint, _bEnable);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetJointMotorSpeed(lua_State *L)
{
  /* get arguments */
  orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT(L, 1);
  orxFLOAT _fSpeed = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetJointMotorSpeed(_pstBodyJoint, _fSpeed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_SetJointMaxMotorTorque(lua_State *L)
{
  /* get arguments */
  orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT(L, 1);
  orxFLOAT _fMaxTorque = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxBody_SetJointMaxMotorTorque(_pstBodyJoint, _fMaxTorque);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Body_GetJointReactionForce(lua_State *L)
{
  /* get arguments */
  const orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT_const(L, 1);
  orxVECTOR _vForce;
  memset(&_vForce, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxBody_GetJointReactionForce(_pstBodyJoint, &_vForce);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Body_GetJointReactionTorque(lua_State *L)
{
  /* get arguments */
  const orxBODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxBODY_JOINT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxBody_GetJointReactionTorque(_pstBodyJoint);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Body_Raycast(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvBegin = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvEnd = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 3);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 4);
  orxBOOL _bEarlyExit = lorx_lboolean_to_orxBOOL(L, 5);
  orxVECTOR* _pvContact = lorx_luserdata_to_orxVECTOR(L, 6);
  orxVECTOR* _pvNormal = lorx_luserdata_to_orxVECTOR(L, 7);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBODY* _retval = orxBody_Raycast(_pvBegin, _pvEnd, _u16SelfFlags, _u16CheckMask, _bEarlyExit, _pvContact, _pvNormal);
  
  /* post processing */
  lorx_orxBODY_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Body_BoxPick(lua_State *L)
{
  /* get arguments */
  const orxAABOX* _pstBox = lorx_luserdata_to_orxAABOX_const(L, 1);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 2);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 5);
  
  /* arguments processing & checks */
  
  orxBODY** _apstBodyList = malloc(sizeof(orxBODY*)*_u32Number);
  for (size_t i = 0; i < _u32Number; i++)
  {
    lua_geti(L, 4, i+1);
    _apstBodyList[i] = lorx_luserdata_to_orxBODY(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxU32 _retval = orxBody_BoxPick(_pstBox, _u16SelfFlags, _u16CheckMask, _apstBodyList, _u32Number);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  free(_apstBodyList);
  return 1;
}


LORX_API int l_Physics_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_GetCollisionFlagName(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Flag = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxPhysics_GetCollisionFlagName(_u32Flag);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetCollisionFlagValue(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFlag = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxPhysics_GetCollisionFlagValue(_zFlag);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Physics_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_SetGravity(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvGravity = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetGravity(_pvGravity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetGravity(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vGravity;
  memset(&_vGravity, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetGravity(&_vGravity);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_DeleteBody(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_DeleteBody(_pstBody);
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_DeletePart(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_DeletePart(_pstBodyPart);
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_DeleteJoint(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxPHYSICS_BODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxPHYSICS_BODY_JOINT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_DeleteJoint(_pstBodyJoint);
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_SetPosition(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPosition(_pstBody, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetRotation(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetRotation(_pstBody, _fRotation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetSpeed(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  const orxVECTOR* _pvSpeed = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetSpeed(_pstBody, _pvSpeed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetAngularVelocity(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxFLOAT _fVelocity = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetAngularVelocity(_pstBody, _fVelocity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetCustomGravity(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  const orxVECTOR* _pvCustomGravity = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetCustomGravity(_pstBody, _pvCustomGravity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetFixedRotation(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxBOOL _bFixed = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetFixedRotation(_pstBody, _bFixed);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetDynamic(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxBOOL _bDynamic = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetDynamic(_pstBody, _bDynamic);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetAllowMoving(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxBOOL _bAllowMoving = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetAllowMoving(_pstBody, _bAllowMoving);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetPosition(_pstBody, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetRotation(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetRotation(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetSpeed(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  orxVECTOR _vSpeed;
  memset(&_vSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetSpeed(_pstBody, &_vSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetSpeedAtWorldPosition(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxVECTOR _vSpeed;
  memset(&_vSpeed, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetSpeedAtWorldPosition(_pstBody, _pvPosition, &_vSpeed);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetAngularVelocity(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetAngularVelocity(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetCustomGravity(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  orxVECTOR _vCustomGravity;
  memset(&_vCustomGravity, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetCustomGravity(_pstBody, &_vCustomGravity);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_IsFixedRotation(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxPhysics_IsFixedRotation(_pstBody);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetMass(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetMass(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetMassCenter(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  orxVECTOR _vMassCenter;
  memset(&_vMassCenter, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetMassCenter(_pstBody, &_vMassCenter);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetLinearDamping(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxFLOAT _fDamping = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetLinearDamping(_pstBody, _fDamping);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetAngularDamping(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxFLOAT _fDamping = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetAngularDamping(_pstBody, _fDamping);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetLinearDamping(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetLinearDamping(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetAngularDamping(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetAngularDamping(_pstBody);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_ApplyTorque(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  orxFLOAT _fTorque = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_ApplyTorque(_pstBody, _fTorque);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_ApplyForce(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  const orxVECTOR* _pvForce = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_ApplyForce(_pstBody, _pvForce, _pvPoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_ApplyImpulse(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY* _pstBody = lorx_luserdata_to_orxPHYSICS_BODY(L, 1);
  const orxVECTOR* _pvImpulse = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPoint = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_ApplyImpulse(_pstBody, _pvImpulse, _pvPoint);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetPartSelfFlags(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPartSelfFlags(_pstBodyPart, _u16SelfFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetPartCheckMask(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPartCheckMask(_pstBodyPart, _u16CheckMask);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetPartSelfFlags(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU16 _retval = orxPhysics_GetPartSelfFlags(_pstBodyPart);
  
  /* post processing */
  lorx_orxU16_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetPartCheckMask(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU16 _retval = orxPhysics_GetPartCheckMask(_pstBodyPart);
  
  /* post processing */
  lorx_orxU16_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetPartSolid(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  orxBOOL _bSolid = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPartSolid(_pstBodyPart, _bSolid);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_IsPartSolid(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxPhysics_IsPartSolid(_pstBodyPart);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetPartFriction(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  orxFLOAT _fFriction = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPartFriction(_pstBodyPart, _fFriction);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetPartFriction(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetPartFriction(_pstBodyPart);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetPartRestitution(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  orxFLOAT _fRestitution = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPartRestitution(_pstBodyPart, _fRestitution);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetPartRestitution(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetPartRestitution(_pstBodyPart);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_SetPartDensity(lua_State *L)
{
  /* get arguments */
  orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART(L, 1);
  orxFLOAT _fDensity = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxPhysics_SetPartDensity(_pstBodyPart, _fDensity);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetPartDensity(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetPartDensity(_pstBodyPart);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_IsInsidePart(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_PART* _pstBodyPart = lorx_luserdata_to_orxPHYSICS_BODY_PART_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxPhysics_IsInsidePart(_pstBodyPart, _pvPosition);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Physics_EnableMotor(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxPHYSICS_BODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxPHYSICS_BODY_JOINT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_EnableMotor(_pstBodyJoint, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_SetJointMotorSpeed(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxPHYSICS_BODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxPHYSICS_BODY_JOINT(L, 1);
  orxFLOAT _fSpeed = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_SetJointMotorSpeed(_pstBodyJoint, _fSpeed);
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_SetJointMaxMotorTorque(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxPHYSICS_BODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxPHYSICS_BODY_JOINT(L, 1);
  orxFLOAT _fMaxTorque = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_SetJointMaxMotorTorque(_pstBodyJoint, _fMaxTorque);
  
  /* post processing */
  return 0;
}


LORX_API int l_Physics_GetJointReactionForce(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxPHYSICS_BODY_JOINT_const(L, 1);
  orxVECTOR _vForce;
  memset(&_vForce, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxPhysics_GetJointReactionForce(_pstBodyJoint, &_vForce);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Physics_GetJointReactionTorque(lua_State *L)
{
  /* get arguments */
  const orxPHYSICS_BODY_JOINT* _pstBodyJoint = lorx_luserdata_to_orxPHYSICS_BODY_JOINT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxPhysics_GetJointReactionTorque(_pstBodyJoint);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Physics_Raycast(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvBegin = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvEnd = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 3);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 4);
  orxBOOL _bEarlyExit = lorx_lboolean_to_orxBOOL(L, 5);
  orxVECTOR* _pvContact = lorx_luserdata_to_orxVECTOR(L, 6);
  orxVECTOR* _pvNormal = lorx_luserdata_to_orxVECTOR(L, 7);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxHANDLE _retval = orxPhysics_Raycast(_pvBegin, _pvEnd, _u16SelfFlags, _u16CheckMask, _bEarlyExit, _pvContact, _pvNormal);
  
  /* post processing */
  lorx_orxHANDLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Physics_BoxPick(lua_State *L)
{
  /* get arguments */
  const orxAABOX* _pstBox = lorx_luserdata_to_orxAABOX_const(L, 1);
  orxU16 _u16SelfFlags = lorx_linteger_to_orxU16(L, 2);
  orxU16 _u16CheckMask = lorx_linteger_to_orxU16(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  orxU32 _u32Number = lorx_linteger_to_orxU32(L, 5);
  
  /* arguments processing & checks */
  
  orxHANDLE* _ahUserDataList = malloc(sizeof(orxHANDLE)*_u32Number);
  for (size_t i = 0; i < _u32Number; i++)
  {
    lua_geti(L, 4, i+1);
    _ahUserDataList[i] = lorx_luserdata_to_orxHANDLE(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxU32 _retval = orxPhysics_BoxPick(_pstBox, _u16SelfFlags, _u16CheckMask, _ahUserDataList, _u32Number);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  free(_ahUserDataList);
  return 1;
}


LORX_API int l_Physics_EnableSimulation(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxPhysics_EnableSimulation(_bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Camera_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCamera_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Camera_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCamera_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Camera_Create(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCAMERA* _retval = orxCamera_Create(_u32Flags);
  
  /* post processing */
  lorx_orxCAMERA_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Camera_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCAMERA* _retval = orxCamera_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxCAMERA_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Camera_Delete(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_Delete(_pstCamera);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_AddGroupID(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  orxBOOL _bAddFirst = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_AddGroupID(_pstCamera, _stGroupID, _bAddFirst);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_RemoveGroupID(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  orxSTRINGID _stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_RemoveGroupID(_pstCamera, _stGroupID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetGroupIDCount(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxCamera_GetGroupIDCount(_pstCamera);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetGroupID(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxCamera_GetGroupID(_pstCamera, _u32Index);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Camera_SetFrustum(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  orxFLOAT _fWidth = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fHeight = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fNear = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fFar = lorx_lnumber_to_orxFLOAT(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_SetFrustum(_pstCamera, _fWidth, _fHeight, _fNear, _fFar);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_SetPosition(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_SetPosition(_pstCamera, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_SetRotation(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  orxFLOAT _fRotation = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_SetRotation(_pstCamera, _fRotation);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_SetZoom(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  orxFLOAT _fZoom = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_SetZoom(_pstCamera, _fZoom);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetFrustum(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  orxAABOX _stFrustum;
  memset(&_stFrustum, 0, sizeof(orxAABOX));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAABOX* _retval = orxCamera_GetFrustum(_pstCamera, &_stFrustum);
  
  /* post processing */
  lorx_orxAABOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxCamera_GetPosition(_pstCamera, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetRotation(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxCamera_GetRotation(_pstCamera);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetZoom(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxCamera_GetZoom(_pstCamera);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetName(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxCamera_GetName(_pstCamera);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Camera_Get(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCAMERA* _retval = orxCamera_Get(_zName);
  
  /* post processing */
  lorx_orxCAMERA_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetFrame(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFRAME* _retval = orxCamera_GetFrame(_pstCamera);
  
  /* post processing */
  lorx_orxFRAME_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Camera_SetParent(lua_State *L)
{
  /* get arguments */
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 1);
  void* _pParent = lorx_luserdata_to_void_ptr(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxCamera_SetParent(_pstCamera, _pParent);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Camera_GetParent(lua_State *L)
{
  /* get arguments */
  const orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = orxCamera_GetParent(_pstCamera);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Render_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxRender_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Render_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxRender_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Render_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxRender_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Render_GetWorldPosition(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvScreenPosition = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 2);
  orxVECTOR _vWorldPosition;
  memset(&_vWorldPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxRender_GetWorldPosition(_pvScreenPosition, _pstViewport, &_vWorldPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Render_GetScreenPosition(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvWorldPosition = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 2);
  orxVECTOR _vScreenPosition;
  memset(&_vScreenPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxRender_GetScreenPosition(_pvWorldPosition, _pstViewport, &_vScreenPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Shader_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxShader_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Shader_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShader_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Shader_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxShader_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Shader_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSHADER* _retval = orxShader_Create();
  
  /* post processing */
  lorx_orxSHADER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Shader_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSHADER* _retval = orxShader_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxSHADER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Shader_Delete(lua_State *L)
{
  /* get arguments */
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShader_Delete(_pstShader);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Shader_ClearCache(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShader_ClearCache();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Shader_Start(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  const orxSTRUCTURE* _pstOwner = lorx_luserdata_to_orxSTRUCTURE_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShader_Start(_pstShader, _pstOwner);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Shader_Stop(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShader_Stop(_pstShader);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Shader_AddFloatParam(lua_State *L)
{
  /* get arguments */
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32ArraySize = lorx_linteger_to_orxU32(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxFLOAT* _afValueList = malloc(sizeof(orxFLOAT)*_u32ArraySize);
  for (size_t i = 0; i < _u32ArraySize; i++)
  {
    lua_geti(L, 4, i+1);
    _afValueList[i] = lorx_lnumber_to_orxFLOAT(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_AddFloatParam(_pstShader, _zName, _u32ArraySize, _afValueList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_afValueList);
  return 1;
}


LORX_API int l_Shader_AddTextureParam(lua_State *L)
{
  /* get arguments */
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32ArraySize = lorx_linteger_to_orxU32(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  const orxTEXTURE** _apstValueList = malloc(sizeof(orxTEXTURE*)*_u32ArraySize);
  for (size_t i = 0; i < _u32ArraySize; i++)
  {
    lua_geti(L, 4, i+1);
    _apstValueList[i] = lorx_luserdata_to_orxTEXTURE(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_AddTextureParam(_pstShader, _zName, _u32ArraySize, _apstValueList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_apstValueList);
  return 1;
}


LORX_API int l_Shader_AddVectorParam(lua_State *L)
{
  /* get arguments */
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32ArraySize = lorx_linteger_to_orxU32(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxVECTOR* _avValueList = malloc(sizeof(orxVECTOR)*_u32ArraySize);
  for (size_t i = 0; i < _u32ArraySize; i++)
  {
    lua_geti(L, 4, i+1);
    _avValueList[i] = lorx_luserdata_to_orxVECTOR_struct(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_AddVectorParam(_pstShader, _zName, _u32ArraySize, _avValueList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_avValueList);
  return 1;
}


LORX_API int l_Shader_AddTimeParam(lua_State *L)
{
  /* get arguments */
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShader_AddTimeParam(_pstShader, _zName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Shader_SetFloatParam(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32ArraySize = lorx_linteger_to_orxU32(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxFLOAT* _afValueList = malloc(sizeof(orxFLOAT)*_u32ArraySize);
  for (size_t i = 0; i < _u32ArraySize; i++)
  {
    lua_geti(L, 4, i+1);
    _afValueList[i] = lorx_lnumber_to_orxFLOAT(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_SetFloatParam(_pstShader, _zName, _u32ArraySize, _afValueList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_afValueList);
  return 1;
}


LORX_API int l_Shader_SetTextureParam(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32ArraySize = lorx_linteger_to_orxU32(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  const orxTEXTURE** _apstValueList = malloc(sizeof(orxTEXTURE*)*_u32ArraySize);
  for (size_t i = 0; i < _u32ArraySize; i++)
  {
    lua_geti(L, 4, i+1);
    _apstValueList[i] = lorx_luserdata_to_orxTEXTURE(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_SetTextureParam(_pstShader, _zName, _u32ArraySize, _apstValueList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_apstValueList);
  return 1;
}


LORX_API int l_Shader_SetVectorParam(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32ArraySize = lorx_linteger_to_orxU32(L, 3);
  luaL_checktype(L, 4, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxVECTOR* _avValueList = malloc(sizeof(orxVECTOR)*_u32ArraySize);
  for (size_t i = 0; i < _u32ArraySize; i++)
  {
    lua_geti(L, 4, i+1);
    _avValueList[i] = lorx_luserdata_to_orxVECTOR_struct(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_SetVectorParam(_pstShader, _zName, _u32ArraySize, _avValueList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_avValueList);
  return 1;
}


LORX_API int l_Shader_CompileCode(lua_State *L)
{
  /* get arguments */
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32Size = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  const orxSTRING* _azCodeList = malloc(sizeof(orxSTRING)*_u32Size);
  for (size_t i = 0; i < _u32Size; i++)
  {
    lua_geti(L, 2, i+1);
    _azCodeList[i] = lorx_lstring_to_orxSTRING(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxShader_CompileCode(_pstShader, _azCodeList, _u32Size);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_azCodeList);
  return 1;
}


LORX_API int l_Shader_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxShader_Enable(_pstShader, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Shader_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxShader_IsEnabled(_pstShader);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Shader_GetName(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxShader_GetName(_pstShader);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Shader_GetID(lua_State *L)
{
  /* get arguments */
  const orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxShader_GetID(_pstShader);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxShaderPointer_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_ShaderPointer_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxShaderPointer_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_ShaderPointer_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSHADERPOINTER* _retval = orxShaderPointer_Create();
  
  /* post processing */
  lorx_orxSHADERPOINTER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_Delete(lua_State *L)
{
  /* get arguments */
  orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_Delete(_pstShaderPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_Start(lua_State *L)
{
  /* get arguments */
  const orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_Start(_pstShaderPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_Stop(lua_State *L)
{
  /* get arguments */
  const orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_Stop(_pstShaderPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxShaderPointer_Enable(_pstShaderPointer, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_ShaderPointer_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxShaderPointer_IsEnabled(_pstShaderPointer);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_AddShader(lua_State *L)
{
  /* get arguments */
  orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER(L, 1);
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_AddShader(_pstShaderPointer, _pstShader);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_RemoveShader(lua_State *L)
{
  /* get arguments */
  orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER(L, 1);
  orxSHADER* _pstShader = lorx_luserdata_to_orxSHADER(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_RemoveShader(_pstShaderPointer, _pstShader);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_GetShader(lua_State *L)
{
  /* get arguments */
  const orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER_const(L, 1);
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSHADER* _retval = orxShaderPointer_GetShader(_pstShaderPointer, _u32Index);
  
  /* post processing */
  lorx_orxSHADER_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_AddShaderFromConfig(lua_State *L)
{
  /* get arguments */
  orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_AddShaderFromConfig(_pstShaderPointer, _zShaderConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_ShaderPointer_RemoveShaderFromConfig(lua_State *L)
{
  /* get arguments */
  orxSHADERPOINTER* _pstShaderPointer = lorx_luserdata_to_orxSHADERPOINTER(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxShaderPointer_RemoveShaderFromConfig(_pstShaderPointer, _zShaderConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVIEWPORT* _retval = orxViewport_Create();
  
  /* post processing */
  lorx_orxVIEWPORT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Viewport_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVIEWPORT* _retval = orxViewport_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxVIEWPORT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Viewport_Delete(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_Delete(_pstViewport);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_SetTextureList(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxU32 _u32TextureNumber = lorx_linteger_to_orxU32(L, 2);
  luaL_checktype(L, 3, LUA_TTABLE);
  
  /* arguments processing & checks */
  
  orxTEXTURE** _apstTextureList = malloc(sizeof(orxTEXTURE*)*_u32TextureNumber);
  for (size_t i = 0; i < _u32TextureNumber; i++)
  {
    lua_geti(L, 3, i+1);
    _apstTextureList[i] = lorx_luserdata_to_orxTEXTURE(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxViewport_SetTextureList(_pstViewport, _u32TextureNumber, _apstTextureList);
  
  /* post processing */
  free(_apstTextureList);
  return 0;
}


LORX_API int l_Viewport_GetTextureList(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  orxU32 _u32TextureNumber = lorx_linteger_to_orxU32(L, 2);
  orxTEXTURE** _apstTextureList = malloc(sizeof(orxTEXTURE*)*_u32TextureNumber);
  memset(_apstTextureList, 0, sizeof(orxTEXTURE*)*_u32TextureNumber);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_GetTextureList(_pstViewport, _u32TextureNumber, _apstTextureList);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  
  if (_u32TextureNumber <= 0)
  {
    lua_pushnil(L);
  }
  else
  {
    lua_createtable(L, _u32TextureNumber, 0);
    for (size_t i = 0; i < _u32TextureNumber; i++)
    {
      lorx_orxTEXTURE_to_luserdata(L, _apstTextureList[i]);
      lua_seti(L, -2, i+1);
    }
  }
  free(_apstTextureList);
  return 2;
}


LORX_API int l_Viewport_GetTextureCount(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxViewport_GetTextureCount(_pstViewport);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Viewport_SetBackgroundColor(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  const orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_SetBackgroundColor(_pstViewport, _pstColor);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_ClearBackgroundColor(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_ClearBackgroundColor(_pstViewport);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_HasBackgroundColor(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxViewport_HasBackgroundColor(_pstViewport);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetBackgroundColor(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  orxCOLOR _stColor;
  memset(&_stColor, 0, sizeof(orxCOLOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxViewport_GetBackgroundColor(_pstViewport, &_stColor);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Viewport_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_Enable(_pstViewport, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxViewport_IsEnabled(_pstViewport);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Viewport_SetCamera(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxCAMERA* _pstCamera = lorx_luserdata_to_orxCAMERA(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_SetCamera(_pstViewport, _pstCamera);
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_GetCamera(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCAMERA* _retval = orxViewport_GetCamera(_pstViewport);
  
  /* post processing */
  lorx_orxCAMERA_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Viewport_AddShader(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_AddShader(_pstViewport, _zShaderConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_RemoveShader(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  const orxSTRING _zShaderConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_RemoveShader(_pstViewport, _zShaderConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_EnableShader(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_EnableShader(_pstViewport, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_IsShaderEnabled(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxViewport_IsShaderEnabled(_pstViewport);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetShaderPointer(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSHADERPOINTER* _retval = orxViewport_GetShaderPointer(_pstViewport);
  
  /* post processing */
  lorx_orxSHADERPOINTER_to_luserdata_const(L, _retval);
  return 1;
}


LORX_API int l_Viewport_SetBlendMode(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxDISPLAY_BLEND_MODE _eBlendMode = lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_SetBlendMode(_pstViewport, _eBlendMode);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetBlendMode(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxDISPLAY_BLEND_MODE _retval = orxViewport_GetBlendMode(_pstViewport);
  
  /* post processing */
  lorx_orxDISPLAY_BLEND_MODE_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_SetPosition(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxFLOAT _fX = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fY = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_SetPosition(_pstViewport, _fX, _fY);
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_SetRelativePosition(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxU32 _u32AlignFlags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_SetRelativePosition(_pstViewport, _u32AlignFlags);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetPosition(lua_State *L)
{
  /* get arguments */
  (void)L;
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  orxFLOAT _fX;
  memset(&_fX, 0, sizeof(orxFLOAT));
  orxFLOAT _fY;
  memset(&_fY, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_GetPosition(_pstViewport, &_fX, &_fY);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _fX);
  lorx_orxFLOAT_to_lnumber(L, _fY);
  return 2;
}


LORX_API int l_Viewport_SetSize(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxFLOAT _fWidth = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fHeight = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_SetSize(_pstViewport, _fWidth, _fHeight);
  
  /* post processing */
  return 0;
}


LORX_API int l_Viewport_SetRelativeSize(lua_State *L)
{
  /* get arguments */
  orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT(L, 1);
  orxFLOAT _fWidth = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fHeight = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxViewport_SetRelativeSize(_pstViewport, _fWidth, _fHeight);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetSize(lua_State *L)
{
  /* get arguments */
  (void)L;
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_GetSize(_pstViewport, &_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 2;
}


LORX_API int l_Viewport_GetRelativeSize(lua_State *L)
{
  /* get arguments */
  (void)L;
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  orxFLOAT _fWidth;
  memset(&_fWidth, 0, sizeof(orxFLOAT));
  orxFLOAT _fHeight;
  memset(&_fHeight, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxViewport_GetRelativeSize(_pstViewport, &_fWidth, &_fHeight);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _fWidth);
  lorx_orxFLOAT_to_lnumber(L, _fHeight);
  return 2;
}


LORX_API int l_Viewport_GetBox(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  orxAABOX _stBox;
  memset(&_stBox, 0, sizeof(orxAABOX));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAABOX* _retval = orxViewport_GetBox(_pstViewport, &_stBox);
  
  /* post processing */
  lorx_orxAABOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetCorrectionRatio(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxViewport_GetCorrectionRatio(_pstViewport);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Viewport_GetName(lua_State *L)
{
  /* get arguments */
  const orxVIEWPORT* _pstViewport = lorx_luserdata_to_orxVIEWPORT_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxViewport_GetName(_pstViewport);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Viewport_Get(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVIEWPORT* _retval = orxViewport_Get(_zName);
  
  /* post processing */
  lorx_orxVIEWPORT_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSound_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_Sound_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSound_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_Sound_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND* _retval = orxSound_Create();
  
  /* post processing */
  lorx_orxSOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_CreateFromConfig(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zConfigID = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND* _retval = orxSound_CreateFromConfig(_zConfigID);
  
  /* post processing */
  lorx_orxSOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_CreateWithEmptyStream(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ChannelNumber = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32SampleRate = lorx_linteger_to_orxU32(L, 2);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND* _retval = orxSound_CreateWithEmptyStream(_u32ChannelNumber, _u32SampleRate, _zName);
  
  /* post processing */
  lorx_orxSOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_Delete(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_Delete(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_ClearCache(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_ClearCache();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_CreateSample(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ChannelNumber = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32FrameNumber = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32SampleRate = lorx_linteger_to_orxU32(L, 3);
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SAMPLE* _retval = orxSound_CreateSample(_u32ChannelNumber, _u32FrameNumber, _u32SampleRate, _zName);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SAMPLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetSample(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SAMPLE* _retval = orxSound_GetSample(_zName);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SAMPLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_DeleteSample(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_DeleteSample(_zName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_LinkSample(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  const orxSTRING _zSampleName = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_LinkSample(_pstSound, _zSampleName);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_UnlinkSample(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_UnlinkSample(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_IsStream(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSound_IsStream(_pstSound);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Sound_Play(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_Play(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_Pause(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_Pause(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_Stop(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_Stop(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_AddFilter(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  const orxSOUND_FILTER_DATA* _pstFilterData = lorx_luserdata_to_orxSOUND_FILTER_DATA_const(L, 2);
  orxBOOL _bUseCustomParam = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_AddFilter(_pstSound, _pstFilterData, _bUseCustomParam);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_RemoveLastFilter(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_RemoveLastFilter(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_RemoveAllFilters(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_RemoveAllFilters(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_AddFilterFromConfig(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  const orxSTRING _zFilterConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_AddFilterFromConfig(_pstSound, _zFilterConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_StartRecording(lua_State *L)
{
  /* get arguments */
  const orxCHAR* _zName = lorx_lstring_to_orxCHAR_ptr(L, 1);
  orxBOOL _bWriteToFile = lorx_lboolean_to_orxBOOL(L, 2);
  orxU32 _u32SampleRate = lorx_linteger_to_orxU32(L, 3);
  orxU32 _u32ChannelNumber = lorx_linteger_to_orxU32(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_StartRecording(_zName, _bWriteToFile, _u32SampleRate, _u32ChannelNumber);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_StopRecording(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_StopRecording();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_HasRecordingSupport(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSound_HasRecordingSupport();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetVolume(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxFLOAT _fVolume = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetVolume(_pstSound, _fVolume);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetPitch(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxFLOAT _fPitch = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetPitch(_pstSound, _fPitch);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetTime(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxFLOAT _fTime = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetTime(_pstSound, _fTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetPosition(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetPosition(_pstSound, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetSpatialization(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxFLOAT _fMinDistance = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fMaxDistance = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fMinGain = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fMaxGain = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fRollOff = lorx_lnumber_to_orxFLOAT(L, 6);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetSpatialization(_pstSound, _fMinDistance, _fMaxDistance, _fMinGain, _fMaxGain, _fRollOff);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetPanning(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxFLOAT _fPanning = lorx_lnumber_to_orxFLOAT(L, 2);
  orxBOOL _bMix = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetPanning(_pstSound, _fPanning, _bMix);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_Loop(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxBOOL _bLoop = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_Loop(_pstSound, _bLoop);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetVolume(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetVolume(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetPitch(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetPitch(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetTime(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetTime(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSound_GetPosition(_pstSound, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetSpatialization(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  orxFLOAT _fMinDistance;
  memset(&_fMinDistance, 0, sizeof(orxFLOAT));
  orxFLOAT _fMaxDistance;
  memset(&_fMaxDistance, 0, sizeof(orxFLOAT));
  orxFLOAT _fMinGain;
  memset(&_fMinGain, 0, sizeof(orxFLOAT));
  orxFLOAT _fMaxGain;
  memset(&_fMaxGain, 0, sizeof(orxFLOAT));
  orxFLOAT _fRollOff;
  memset(&_fRollOff, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_GetSpatialization(_pstSound, &_fMinDistance, &_fMaxDistance, &_fMinGain, &_fMaxGain, &_fRollOff);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fMinDistance);
  lorx_orxFLOAT_to_lnumber(L, _fMaxDistance);
  lorx_orxFLOAT_to_lnumber(L, _fMinGain);
  lorx_orxFLOAT_to_lnumber(L, _fMaxGain);
  lorx_orxFLOAT_to_lnumber(L, _fRollOff);
  return 6;
}


LORX_API int l_Sound_GetPanning(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  orxFLOAT _fPanning;
  memset(&_fPanning, 0, sizeof(orxFLOAT));
  orxBOOL _bMix;
  memset(&_bMix, 0, sizeof(orxBOOL));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_GetPanning(_pstSound, &_fPanning, &_bMix);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fPanning);
  lorx_orxBOOL_to_lboolean(L, _bMix);
  return 3;
}


LORX_API int l_Sound_IsLooping(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSound_IsLooping(_pstSound);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetDuration(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetDuration(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetStatus(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND_STATUS _retval = orxSound_GetStatus(_pstSound);
  
  /* post processing */
  lorx_orxSOUND_STATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetName(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxSound_GetName(_pstSound);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetMasterBusID(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxSound_GetMasterBusID();
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusID(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxSound_GetBusID(_pstSound);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetBusID(lua_State *L)
{
  /* get arguments */
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 1);
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetBusID(_pstSound, _stBusID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetNext(lua_State *L)
{
  /* get arguments */
  const orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND_const(L, 1);
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND* _retval = orxSound_GetNext(_pstSound, _stBusID);
  
  /* post processing */
  lorx_orxSOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusParent(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxSound_GetBusParent(_stBusID);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusChild(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxSound_GetBusChild(_stBusID);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusSibling(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxSound_GetBusSibling(_stBusID);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetBusParent(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxSTRINGID _stParentBusID = lorx_linteger_to_orxSTRINGID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetBusParent(_stBusID, _stParentBusID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusVolume(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetBusVolume(_stBusID);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusPitch(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetBusPitch(_stBusID);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetBusVolume(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT _fVolume = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetBusVolume(_stBusID, _fVolume);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_SetBusPitch(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT _fPitch = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_SetBusPitch(_stBusID, _fPitch);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusGlobalVolume(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetBusGlobalVolume(_stBusID);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_GetBusGlobalPitch(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSound_GetBusGlobalPitch(_stBusID);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Sound_AddBusFilter(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  const orxSOUND_FILTER_DATA* _pstFilterData = lorx_luserdata_to_orxSOUND_FILTER_DATA_const(L, 2);
  orxBOOL _bUseCustomParam = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_AddBusFilter(_stBusID, _pstFilterData, _bUseCustomParam);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_RemoveLastBusFilter(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_RemoveLastBusFilter(_stBusID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_RemoveAllBusFilters(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_RemoveAllBusFilters(_stBusID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Sound_AddBusFilterFromConfig(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  const orxSTRING _zFilterConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSound_AddBusFilterFromConfig(_stBusID, _zFilterConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSoundPointer_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_SoundPointer_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSoundPointer_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_SoundPointer_Create(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDPOINTER* _retval = orxSoundPointer_Create();
  
  /* post processing */
  lorx_orxSOUNDPOINTER_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Delete(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_Delete(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Enable(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSoundPointer_Enable(_pstSoundPointer, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_SoundPointer_IsEnabled(lua_State *L)
{
  /* get arguments */
  const orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSoundPointer_IsEnabled(_pstSoundPointer);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_SetVolume(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  orxFLOAT _fVolume = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_SetVolume(_pstSoundPointer, _fVolume);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_SetPitch(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  orxFLOAT _fPitch = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_SetPitch(_pstSoundPointer, _fPitch);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_SetPanning(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  orxFLOAT _fPanning = lorx_lnumber_to_orxFLOAT(L, 2);
  orxBOOL _bMix = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_SetPanning(_pstSoundPointer, _fPanning, _bMix);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Play(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_Play(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Pause(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_Pause(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_Stop(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_Stop(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_AddSound(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_AddSound(_pstSoundPointer, _pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_RemoveSound(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  orxSOUND* _pstSound = lorx_luserdata_to_orxSOUND(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_RemoveSound(_pstSoundPointer, _pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_RemoveAllSounds(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_RemoveAllSounds(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_AddSoundFromConfig(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  const orxSTRING _zSoundConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_AddSoundFromConfig(_pstSoundPointer, _zSoundConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_RemoveSoundFromConfig(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  const orxSTRING _zSoundConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_RemoveSoundFromConfig(_pstSoundPointer, _zSoundConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_GetLastAddedSound(lua_State *L)
{
  /* get arguments */
  const orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUND* _retval = orxSoundPointer_GetLastAddedSound(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_AddFilter(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  const orxSOUND_FILTER_DATA* _pstFilterData = lorx_luserdata_to_orxSOUND_FILTER_DATA_const(L, 2);
  orxBOOL _bUseCustomParam = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_AddFilter(_pstSoundPointer, _pstFilterData, _bUseCustomParam);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_RemoveLastFilter(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_RemoveLastFilter(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_RemoveAllFilters(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_RemoveAllFilters(_pstSoundPointer);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_AddFilterFromConfig(lua_State *L)
{
  /* get arguments */
  orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER(L, 1);
  const orxSTRING _zFilterConfigID = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundPointer_AddFilterFromConfig(_pstSoundPointer, _zFilterConfigID);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundPointer_GetCount(lua_State *L)
{
  /* get arguments */
  const orxSOUNDPOINTER* _pstSoundPointer = lorx_luserdata_to_orxSOUNDPOINTER_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSoundPointer_GetCount(_pstSoundPointer);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSoundSystem_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_SoundSystem_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSoundSystem_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_SoundSystem_CreateSample(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ChannelNumber = lorx_linteger_to_orxU32(L, 1);
  orxU32 _u32FrameNumber = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32SampleRate = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SAMPLE* _retval = orxSoundSystem_CreateSample(_u32ChannelNumber, _u32FrameNumber, _u32SampleRate);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SAMPLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_LoadSample(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFilename = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SAMPLE* _retval = orxSoundSystem_LoadSample(_zFilename);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SAMPLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_DeleteSample(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SAMPLE* _pstSample = lorx_luserdata_to_orxSOUNDSYSTEM_SAMPLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_DeleteSample(_pstSample);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetSampleInfo(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SAMPLE* _pstSample = lorx_luserdata_to_orxSOUNDSYSTEM_SAMPLE_const(L, 1);
  orxU32 _u32ChannelNumber;
  memset(&_u32ChannelNumber, 0, sizeof(orxU32));
  orxU32 _u32FrameNumber;
  memset(&_u32FrameNumber, 0, sizeof(orxU32));
  orxU32 _u32SampleRate;
  memset(&_u32SampleRate, 0, sizeof(orxU32));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_GetSampleInfo(_pstSample, &_u32ChannelNumber, &_u32FrameNumber, &_u32SampleRate);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxU32_to_linteger(L, _u32ChannelNumber);
  lorx_orxU32_to_linteger(L, _u32FrameNumber);
  lorx_orxU32_to_linteger(L, _u32SampleRate);
  return 4;
}


LORX_API int l_SoundSystem_SetSampleData(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SAMPLE* _pstSample = lorx_luserdata_to_orxSOUNDSYSTEM_SAMPLE(L, 1);
  luaL_checktype(L, 2, LUA_TTABLE);
  orxU32 _u32SampleNumber = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  orxFLOAT* _afData = malloc(sizeof(orxFLOAT)*_u32SampleNumber);
  for (size_t i = 0; i < _u32SampleNumber; i++)
  {
    lua_geti(L, 2, i+1);
    _afData[i] = lorx_lnumber_to_orxFLOAT(L, -1);
    lua_pop(L, 1);
  }
  
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetSampleData(_pstSample, _afData, _u32SampleNumber);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  free(_afData);
  return 1;
}


LORX_API int l_SoundSystem_CreateFromSample(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hUserData = lorx_luserdata_to_orxHANDLE(L, 1);
  const orxSOUNDSYSTEM_SAMPLE* _pstSample = lorx_luserdata_to_orxSOUNDSYSTEM_SAMPLE_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SOUND* _retval = orxSoundSystem_CreateFromSample(_hUserData, _pstSample);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_CreateStream(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hUserData = lorx_luserdata_to_orxHANDLE(L, 1);
  orxU32 _u32ChannelNumber = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32SampleRate = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SOUND* _retval = orxSoundSystem_CreateStream(_hUserData, _u32ChannelNumber, _u32SampleRate);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_CreateStreamFromFile(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hUserData = lorx_luserdata_to_orxHANDLE(L, 1);
  const orxSTRING _zFilename = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_SOUND* _retval = orxSoundSystem_CreateStreamFromFile(_hUserData, _zFilename);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_SOUND_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Delete(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_Delete(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Play(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_Play(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Pause(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_Pause(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Stop(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_Stop(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_AddFilter(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  const orxSOUND_FILTER_DATA* _pstFilterData = lorx_luserdata_to_orxSOUND_FILTER_DATA_const(L, 2);
  orxBOOL _bUseCustomParam = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_AddFilter(_pstSound, _pstFilterData, _bUseCustomParam);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_RemoveLastFilter(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_RemoveLastFilter(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_RemoveAllFilters(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_RemoveAllFilters(_pstSound);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_CreateBus(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stBusID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxHANDLE _retval = orxSoundSystem_CreateBus(_stBusID);
  
  /* post processing */
  lorx_orxHANDLE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_DeleteBus(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hBus = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_DeleteBus(_hBus);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetBus(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxHANDLE _hBus = lorx_luserdata_to_orxHANDLE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetBus(_pstSound, _hBus);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetBusParent(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hBus = lorx_luserdata_to_orxHANDLE(L, 1);
  orxHANDLE _hParentBus = lorx_luserdata_to_orxHANDLE(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetBusParent(_hBus, _hParentBus);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_AddBusFilter(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hBus = lorx_luserdata_to_orxHANDLE(L, 1);
  const orxSOUND_FILTER_DATA* _pstFilterData = lorx_luserdata_to_orxSOUND_FILTER_DATA_const(L, 2);
  orxBOOL _bUseCustomParam = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_AddBusFilter(_hBus, _pstFilterData, _bUseCustomParam);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_RemoveLastBusFilter(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hBus = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_RemoveLastBusFilter(_hBus);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_RemoveAllBusFilters(lua_State *L)
{
  /* get arguments */
  orxHANDLE _hBus = lorx_luserdata_to_orxHANDLE(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_RemoveAllBusFilters(_hBus);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_StartRecording(lua_State *L)
{
  /* get arguments */
  const orxCHAR* _zName = lorx_lstring_to_orxCHAR_ptr(L, 1);
  orxBOOL _bWriteToFile = lorx_lboolean_to_orxBOOL(L, 2);
  orxU32 _u32SampleRate = lorx_linteger_to_orxU32(L, 3);
  orxU32 _u32ChannelNumber = lorx_linteger_to_orxU32(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_StartRecording(_zName, _bWriteToFile, _u32SampleRate, _u32ChannelNumber);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_StopRecording(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_StopRecording();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_HasRecordingSupport(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSoundSystem_HasRecordingSupport();
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetVolume(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxFLOAT _fVolume = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetVolume(_pstSound, _fVolume);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetPitch(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxFLOAT _fPitch = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetPitch(_pstSound, _fPitch);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetTime(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxFLOAT _fTime = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetTime(_pstSound, _fTime);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetPosition(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetPosition(_pstSound, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetSpatialization(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxFLOAT _fMinDistance = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fMaxDistance = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fMinGain = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT _fMaxGain = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT _fRollOff = lorx_lnumber_to_orxFLOAT(L, 6);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetSpatialization(_pstSound, _fMinDistance, _fMaxDistance, _fMinGain, _fMaxGain, _fRollOff);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetPanning(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxFLOAT _fPanning = lorx_lnumber_to_orxFLOAT(L, 2);
  orxBOOL _bMix = lorx_lboolean_to_orxBOOL(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetPanning(_pstSound, _fPanning, _bMix);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_Loop(lua_State *L)
{
  /* get arguments */
  orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND(L, 1);
  orxBOOL _bLoop = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_Loop(_pstSound, _bLoop);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetVolume(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSoundSystem_GetVolume(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetPitch(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSoundSystem_GetPitch(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetTime(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSoundSystem_GetTime(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetPosition(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSoundSystem_GetPosition(_pstSound, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetSpatialization(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  orxFLOAT _fMinDistance;
  memset(&_fMinDistance, 0, sizeof(orxFLOAT));
  orxFLOAT _fMaxDistance;
  memset(&_fMaxDistance, 0, sizeof(orxFLOAT));
  orxFLOAT _fMinGain;
  memset(&_fMinGain, 0, sizeof(orxFLOAT));
  orxFLOAT _fMaxGain;
  memset(&_fMaxGain, 0, sizeof(orxFLOAT));
  orxFLOAT _fRollOff;
  memset(&_fRollOff, 0, sizeof(orxFLOAT));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_GetSpatialization(_pstSound, &_fMinDistance, &_fMaxDistance, &_fMinGain, &_fMaxGain, &_fRollOff);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fMinDistance);
  lorx_orxFLOAT_to_lnumber(L, _fMaxDistance);
  lorx_orxFLOAT_to_lnumber(L, _fMinGain);
  lorx_orxFLOAT_to_lnumber(L, _fMaxGain);
  lorx_orxFLOAT_to_lnumber(L, _fRollOff);
  return 6;
}


LORX_API int l_SoundSystem_GetPanning(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  orxFLOAT _fPanning;
  memset(&_fPanning, 0, sizeof(orxFLOAT));
  orxBOOL _bMix;
  memset(&_bMix, 0, sizeof(orxBOOL));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_GetPanning(_pstSound, &_fPanning, &_bMix);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fPanning);
  lorx_orxBOOL_to_lboolean(L, _bMix);
  return 3;
}


LORX_API int l_SoundSystem_IsLooping(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSoundSystem_IsLooping(_pstSound);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetDuration(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSoundSystem_GetDuration(_pstSound);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetStatus(lua_State *L)
{
  /* get arguments */
  const orxSOUNDSYSTEM_SOUND* _pstSound = lorx_luserdata_to_orxSOUNDSYSTEM_SOUND_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSOUNDSYSTEM_STATUS _retval = orxSoundSystem_GetStatus(_pstSound);
  
  /* post processing */
  lorx_orxSOUNDSYSTEM_STATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetGlobalVolume(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fGlobalVolume = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetGlobalVolume(_fGlobalVolume);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetGlobalVolume(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxSoundSystem_GetGlobalVolume();
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetListenerCount(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxSoundSystem_GetListenerCount();
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_EnableListener(lua_State *L)
{
  /* get arguments */
  (void)L;
  orxU32 _u32ListenerIndex = lorx_linteger_to_orxU32(L, 1);
  orxBOOL _bEnable = lorx_lboolean_to_orxBOOL(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSoundSystem_EnableListener(_u32ListenerIndex, _bEnable);
  
  /* post processing */
  return 0;
}


LORX_API int l_SoundSystem_IsListenerEnabled(lua_State *L)
{
  /* get arguments */
  orxU32 _u32ListenerIndex = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxSoundSystem_IsListenerEnabled(_u32ListenerIndex);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_SetListenerPosition(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxSoundSystem_SetListenerPosition(_u32Index, _pvPosition);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_SoundSystem_GetListenerPosition(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Index = lorx_linteger_to_orxU32(L, 1);
  orxVECTOR _vPosition;
  memset(&_vPosition, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxSoundSystem_GetListenerPosition(_u32Index, &_vPosition);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_String_Setup(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxString_Setup();
  
  /* post processing */
  return 0;
}


LORX_API int l_String_Init(lua_State *L)
{
  /* get arguments */
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_Init();
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_String_Exit(lua_State *L)
{
  /* get arguments */
  (void)L;
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxString_Exit();
  
  /* post processing */
  return 0;
}


LORX_API int l_String_NHash(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32CharNumber = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxString_NHash(_zString, _u32CharNumber);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_Hash(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxString_Hash(_zString);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_GetID(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRINGID _retval = orxString_GetID(_zString);
  
  /* post processing */
  lorx_orxSTRINGID_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_GetFromID(lua_State *L)
{
  /* get arguments */
  orxSTRINGID _stID = lorx_linteger_to_orxSTRINGID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_GetFromID(_stID);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_String_Store(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_Store(_zString);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_RGBA_Set(lua_State *L)
{
  /* get arguments */
  orxU8 _u8R = lorx_linteger_to_orxU8(L, 1);
  orxU8 _u8G = lorx_linteger_to_orxU8(L, 2);
  orxU8 _u8B = lorx_linteger_to_orxU8(L, 3);
  orxU8 _u8A = lorx_linteger_to_orxU8(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxRGBA _retval = orxRGBA_Set(_u8R, _u8G, _u8B, _u8A);
  
  /* post processing */
  lorx_orxRGBA_to_luserdata_struct(L, &_retval);
  return 1;
}


LORX_API int l_Color_SetRGBA(lua_State *L)
{
  /* get arguments */
  orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR(L, 1);
  orxRGBA _stRGBA = lorx_luserdata_to_orxRGBA_struct(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_SetRGBA(_pstColor, _stRGBA);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_Set(lua_State *L)
{
  /* get arguments */
  orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR(L, 1);
  const orxVECTOR* _pvRGB = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxFLOAT _fAlpha = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_Set(_pstColor, _pvRGB, _fAlpha);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_SetRGB(lua_State *L)
{
  /* get arguments */
  orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR(L, 1);
  const orxVECTOR* _pvRGB = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_SetRGB(_pstColor, _pvRGB);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_SetAlpha(lua_State *L)
{
  /* get arguments */
  orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR(L, 1);
  orxFLOAT _fAlpha = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_SetAlpha(_pstColor, _fAlpha);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_ToRGBA(lua_State *L)
{
  /* get arguments */
  const orxCOLOR* _pstColor = lorx_luserdata_to_orxCOLOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxRGBA _retval = orxColor_ToRGBA(_pstColor);
  
  /* post processing */
  lorx_orxRGBA_to_luserdata_struct(L, &_retval);
  return 1;
}


LORX_API int l_Color_Copy(lua_State *L)
{
  /* get arguments */
  orxCOLOR _stDst;
  memset(&_stDst, 0, sizeof(orxCOLOR));
  const orxCOLOR* _pstSrc = lorx_luserdata_to_orxCOLOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_Copy(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_FromRGBToHSL(lua_State *L)
{
  /* get arguments */
  orxCOLOR _stDst;
  memset(&_stDst, 0, sizeof(orxCOLOR));
  const orxCOLOR* _pstSrc = lorx_luserdata_to_orxCOLOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_FromRGBToHSL(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_FromHSLToRGB(lua_State *L)
{
  /* get arguments */
  orxCOLOR _stDst;
  memset(&_stDst, 0, sizeof(orxCOLOR));
  const orxCOLOR* _pstSrc = lorx_luserdata_to_orxCOLOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_FromHSLToRGB(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_FromRGBToHSV(lua_State *L)
{
  /* get arguments */
  orxCOLOR _stDst;
  memset(&_stDst, 0, sizeof(orxCOLOR));
  const orxCOLOR* _pstSrc = lorx_luserdata_to_orxCOLOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_FromRGBToHSV(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Color_FromHSVToRGB(lua_State *L)
{
  /* get arguments */
  orxCOLOR _stDst;
  memset(&_stDst, 0, sizeof(orxCOLOR));
  const orxCOLOR* _pstSrc = lorx_luserdata_to_orxCOLOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxCOLOR* _retval = orxColor_FromHSVToRGB(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxCOLOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_AABox_Reorder(lua_State *L)
{
  /* get arguments */
  orxAABOX* _pstBox = lorx_luserdata_to_orxAABOX(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAABOX* _retval = orxAABox_Reorder(_pstBox);
  
  /* post processing */
  lorx_orxAABOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_AABox_Set(lua_State *L)
{
  /* get arguments */
  orxAABOX* _pstRes = lorx_luserdata_to_orxAABOX(L, 1);
  const orxVECTOR* _pvTL = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvBR = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAABOX* _retval = orxAABox_Set(_pstRes, _pvTL, _pvBR);
  
  /* post processing */
  lorx_orxAABOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_AABox_IsInside(lua_State *L)
{
  /* get arguments */
  const orxAABOX* _pstBox = lorx_luserdata_to_orxAABOX_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxAABox_IsInside(_pstBox, _pvPosition);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_AABox_TestIntersection(lua_State *L)
{
  /* get arguments */
  const orxAABOX* _pstBox1 = lorx_luserdata_to_orxAABOX_const(L, 1);
  const orxAABOX* _pstBox2 = lorx_luserdata_to_orxAABOX_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxAABox_TestIntersection(_pstBox1, _pstBox2);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_AABox_Test2DIntersection(lua_State *L)
{
  /* get arguments */
  const orxAABOX* _pstBox1 = lorx_luserdata_to_orxAABOX_const(L, 1);
  const orxAABOX* _pstBox2 = lorx_luserdata_to_orxAABOX_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxAABox_Test2DIntersection(_pstBox1, _pstBox2);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_AABox_Copy(lua_State *L)
{
  /* get arguments */
  orxAABOX _stDst;
  memset(&_stDst, 0, sizeof(orxAABOX));
  const orxAABOX* _pstSrc = lorx_luserdata_to_orxAABOX_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAABOX* _retval = orxAABox_Copy(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxAABOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_AABox_Move(lua_State *L)
{
  /* get arguments */
  orxAABOX _stRes;
  memset(&_stRes, 0, sizeof(orxAABOX));
  const orxAABOX* _pstOp = lorx_luserdata_to_orxAABOX_const(L, 1);
  const orxVECTOR* _pvMove = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxAABOX* _retval = orxAABox_Move(&_stRes, _pstOp, _pvMove);
  
  /* post processing */
  lorx_orxAABOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_AABox_GetCenter(lua_State *L)
{
  /* get arguments */
  const orxAABOX* _pstOp = lorx_luserdata_to_orxAABOX_const(L, 1);
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxAABox_GetCenter(_pstOp, &_vRes);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Math_GetBitCount(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxMath_GetBitCount(_u32Value);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetTrailingZeroCount(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxMath_GetTrailingZeroCount(_u32Value);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_GetTrailingZeroCount64(lua_State *L)
{
  /* get arguments */
  orxU64 _u64Value = lorx_linteger_to_orxU64(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxMath_GetTrailingZeroCount64(_u64Value);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_IsPowerOfTwo(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxMath_IsPowerOfTwo(_u32Value);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Math_GetNextPowerOfTwo(lua_State *L)
{
  /* get arguments */
  orxU32 _u32Value = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxMath_GetNextPowerOfTwo(_u32Value);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Math_SmoothStep(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fMin = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fMax = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_SmoothStep(_fMin, _fMax, _fValue);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_SmootherStep(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fMin = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fMax = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_SmootherStep(_fMin, _fMax, _fValue);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Sin(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Sin(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Cos(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Cos(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Tan(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Tan(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_ACos(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_ACos(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_ASin(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_ASin(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_ATan(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp1 = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fOp2 = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_ATan(_fOp1, _fOp2);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Sqrt(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Sqrt(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Floor(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Floor(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Ceil(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Ceil(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Round(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Round(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Mod(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp1 = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fOp2 = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Mod(_fOp1, _fOp2);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Pow(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  orxFLOAT _fExp = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Pow(_fOp, _fExp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Math_Abs(lua_State *L)
{
  /* get arguments */
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxMath_Abs(_fOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_OBox_2DSet(lua_State *L)
{
  /* get arguments */
  orxOBOX* _pstRes = lorx_luserdata_to_orxOBOX(L, 1);
  const orxVECTOR* _pvWorldPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvPivot = lorx_luserdata_to_orxVECTOR_const(L, 3);
  const orxVECTOR* _pvSize = lorx_luserdata_to_orxVECTOR_const(L, 4);
  orxFLOAT _fAngle = lorx_lnumber_to_orxFLOAT(L, 5);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBOX* _retval = orxOBox_2DSet(_pstRes, _pvWorldPosition, _pvPivot, _pvSize, _fAngle);
  
  /* post processing */
  lorx_orxOBOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_OBox_Copy(lua_State *L)
{
  /* get arguments */
  orxOBOX _stDst;
  memset(&_stDst, 0, sizeof(orxOBOX));
  const orxOBOX* _pstSrc = lorx_luserdata_to_orxOBOX_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBOX* _retval = orxOBox_Copy(&_stDst, _pstSrc);
  
  /* post processing */
  lorx_orxOBOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_OBox_GetCenter(lua_State *L)
{
  /* get arguments */
  const orxOBOX* _pstOp = lorx_luserdata_to_orxOBOX_const(L, 1);
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxOBox_GetCenter(_pstOp, &_vRes);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_OBox_Move(lua_State *L)
{
  /* get arguments */
  orxOBOX _stRes;
  memset(&_stRes, 0, sizeof(orxOBOX));
  const orxOBOX* _pstOp = lorx_luserdata_to_orxOBOX_const(L, 1);
  const orxVECTOR* _pvMove = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBOX* _retval = orxOBox_Move(&_stRes, _pstOp, _pvMove);
  
  /* post processing */
  lorx_orxOBOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_OBox_2DRotate(lua_State *L)
{
  /* get arguments */
  orxOBOX _stRes;
  memset(&_stRes, 0, sizeof(orxOBOX));
  const orxOBOX* _pstOp = lorx_luserdata_to_orxOBOX_const(L, 1);
  orxFLOAT _fAngle = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxOBOX* _retval = orxOBox_2DRotate(&_stRes, _pstOp, _fAngle);
  
  /* post processing */
  lorx_orxOBOX_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_OBox_IsInside(lua_State *L)
{
  /* get arguments */
  const orxOBOX* _pstBox = lorx_luserdata_to_orxOBOX_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxOBox_IsInside(_pstBox, _pvPosition);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_OBox_2DIsInside(lua_State *L)
{
  /* get arguments */
  const orxOBOX* _pstBox = lorx_luserdata_to_orxOBOX_const(L, 1);
  const orxVECTOR* _pvPosition = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxOBox_2DIsInside(_pstBox, _pvPosition);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_OBox_ZAlignedTestIntersection(lua_State *L)
{
  /* get arguments */
  const orxOBOX* _pstBox1 = lorx_luserdata_to_orxOBOX_const(L, 1);
  const orxOBOX* _pstBox2 = lorx_luserdata_to_orxOBOX_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxOBox_ZAlignedTestIntersection(_pstBox1, _pstBox2);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Vector_Set(lua_State *L)
{
  /* get arguments */
  orxVECTOR* _pvVec = lorx_luserdata_to_orxVECTOR(L, 1);
  orxFLOAT _fX = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT _fY = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT _fZ = lorx_lnumber_to_orxFLOAT(L, 4);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Set(_pvVec, _fX, _fY, _fZ);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_SetAll(lua_State *L)
{
  /* get arguments */
  orxVECTOR* _pvVec = lorx_luserdata_to_orxVECTOR(L, 1);
  orxFLOAT _fValue = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_SetAll(_pvVec, _fValue);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Copy(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vDst;
  memset(&_vDst, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvSrc = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Copy(&_vDst, _pvSrc);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Add(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Add(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Sub(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Sub(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Mulf(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  orxFLOAT _fOp2 = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Mulf(&_vRes, _pvOp1, _fOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Mul(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Mul(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Divf(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  orxFLOAT _fOp2 = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Divf(&_vRes, _pvOp1, _fOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Div(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Div(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Lerp(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  orxFLOAT _fOp = lorx_lnumber_to_orxFLOAT(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Lerp(&_vRes, _pvOp1, _pvOp2, _fOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Min(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Min(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Max(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Max(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Clamp(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvMin = lorx_luserdata_to_orxVECTOR_const(L, 2);
  const orxVECTOR* _pvMax = lorx_luserdata_to_orxVECTOR_const(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Clamp(&_vRes, _pvOp, _pvMin, _pvMax);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Neg(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Neg(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Rec(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Rec(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Floor(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Floor(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Round(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Round(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_GetSquareSize(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxVector_GetSquareSize(_pvOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Vector_GetSize(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxVector_GetSize(_pvOp);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Vector_GetSquareDistance(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxVector_GetSquareDistance(_pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Vector_GetDistance(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxVector_GetDistance(_pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Vector_Normalize(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Normalize(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_2DRotate(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  orxFLOAT _fAngle = lorx_lnumber_to_orxFLOAT(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_2DRotate(&_vRes, _pvOp, _fAngle);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_IsNull(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxVector_IsNull(_pvOp);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Vector_AreEqual(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxVector_AreEqual(_pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Vector_FromCartesianToSpherical(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_FromCartesianToSpherical(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_FromSphericalToCartesian(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp = lorx_luserdata_to_orxVECTOR_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_FromSphericalToCartesian(&_vRes, _pvOp);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l_Vector_Dot(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxVector_Dot(_pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Vector_2DDot(lua_State *L)
{
  /* get arguments */
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxFLOAT _retval = orxVector_2DDot(_pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxFLOAT_to_lnumber(L, _retval);
  return 1;
}


LORX_API int l_Vector_Cross(lua_State *L)
{
  /* get arguments */
  orxVECTOR _vRes;
  memset(&_vRes, 0, sizeof(orxVECTOR));
  const orxVECTOR* _pvOp1 = lorx_luserdata_to_orxVECTOR_const(L, 1);
  const orxVECTOR* _pvOp2 = lorx_luserdata_to_orxVECTOR_const(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxVECTOR* _retval = orxVector_Cross(&_vRes, _pvOp1, _pvOp2);
  
  /* post processing */
  lorx_orxVECTOR_to_luserdata_struct(L, _retval);
  return 1;
}


LORX_API int l__orxStructure_GetPointer(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  orxSTRUCTURE_ID _eStructureID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE* _retval = _orxStructure_GetPointer(_pStructure, _eStructureID);
  
  /* post processing */
  lorx_orxSTRUCTURE_to_luserdata(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetIDString(lua_State *L)
{
  /* get arguments */
  orxSTRUCTURE_ID _eID = lorx_lenumstr_to_orxSTRUCTURE_ID(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxStructure_GetIDString(_eID);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_Structure_IncreaseCount(lua_State *L)
{
  /* get arguments */
  (void)L;
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxStructure_IncreaseCount(_pStructure);
  
  /* post processing */
  return 0;
}


LORX_API int l_Structure_DecreaseCount(lua_State *L)
{
  /* get arguments */
  (void)L;
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxStructure_DecreaseCount(_pStructure);
  
  /* post processing */
  return 0;
}


LORX_API int l_Structure_GetRefCount(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxStructure_GetRefCount(_pStructure);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetGUID(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU64 _retval = orxStructure_GetGUID(_pStructure);
  
  /* post processing */
  lorx_orxU64_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetID(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRUCTURE_ID _retval = orxStructure_GetID(_pStructure);
  
  /* post processing */
  lorx_orxSTRUCTURE_ID_to_lenumstr(L, _retval);
  return 1;
}


LORX_API int l_Structure_TestFlags(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxStructure_TestFlags(_pStructure, _u32Flags);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Structure_TestAllFlags(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  orxU32 _u32Flags = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxStructure_TestAllFlags(_pStructure, _u32Flags);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_Structure_GetFlags(lua_State *L)
{
  /* get arguments */
  const void* _pStructure = lorx_luserdata_to_void_ptr_const(L, 1);
  orxU32 _u32Mask = lorx_linteger_to_orxU32(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxStructure_GetFlags(_pStructure, _u32Mask);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_Structure_SetFlags(lua_State *L)
{
  /* get arguments */
  (void)L;
  void* _pStructure = lorx_luserdata_to_void_ptr(L, 1);
  orxU32 _u32AddFlags = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32RemoveFlags = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxStructure_SetFlags(_pStructure, _u32AddFlags, _u32RemoveFlags);
  
  /* post processing */
  return 0;
}


LORX_API int l_String_SkipWhiteSpaces(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_SkipWhiteSpaces(_zString);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_String_SkipPath(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_SkipPath(_zString);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_String_GetLength(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxString_GetLength(_zString);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_IsCharacterASCII(lua_State *L)
{
  /* get arguments */
  orxU32 _u32CharacterCodePoint = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxString_IsCharacterASCII(_u32CharacterCodePoint);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_String_IsCharacterAlphaNumeric(lua_State *L)
{
  /* get arguments */
  orxU32 _u32CharacterCodePoint = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxBOOL _retval = orxString_IsCharacterAlphaNumeric(_u32CharacterCodePoint);
  
  /* post processing */
  lorx_orxBOOL_to_lboolean(L, _retval);
  return 1;
}


LORX_API int l_String_GetUTF8CharacterLength(lua_State *L)
{
  /* get arguments */
  orxU32 _u32CharacterCodePoint = lorx_linteger_to_orxU32(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxString_GetUTF8CharacterLength(_u32CharacterCodePoint);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_GetFirstCharacterCodePoint(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxString_GetFirstCharacterCodePoint(_zString, &_zRemaining);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 2;
}


LORX_API int l_String_GetCharacterCount(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxString_GetCharacterCount(_zString);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_Duplicate(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zSrcString = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTRING _retval = orxString_Duplicate(_zSrcString);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_String_Compare(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString1 = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zString2 = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxString_Compare(_zString1, _zString2);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_NCompare(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString1 = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zString2 = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32CharNumber = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxString_NCompare(_zString1, _zString2, _u32CharNumber);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_ICompare(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString1 = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zString2 = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxString_ICompare(_zString1, _zString2);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_NICompare(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString1 = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zString2 = lorx_lstring_to_orxSTRING(L, 2);
  orxU32 _u32CharNumber = lorx_linteger_to_orxU32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxString_NICompare(_zString1, _zString2, _u32CharNumber);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_ExtractBase(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxU32 _retval = orxString_ExtractBase(_zString, &_zRemaining);
  
  /* post processing */
  lorx_orxU32_to_linteger(L, _retval);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 2;
}


LORX_API int l_String_ToS32Base(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32Base = lorx_linteger_to_orxU32(L, 2);
  orxS32 _s32OutValue;
  memset(&_s32OutValue, 0, sizeof(orxS32));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToS32Base(_zString, _u32Base, &_s32OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxS32_to_linteger(L, _s32OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToS32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxS32 _s32OutValue;
  memset(&_s32OutValue, 0, sizeof(orxS32));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToS32(_zString, &_s32OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxS32_to_linteger(L, _s32OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToU32Base(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32Base = lorx_linteger_to_orxU32(L, 2);
  orxU32 _u32OutValue;
  memset(&_u32OutValue, 0, sizeof(orxU32));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToU32Base(_zString, _u32Base, &_u32OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxU32_to_linteger(L, _u32OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToU32(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32OutValue;
  memset(&_u32OutValue, 0, sizeof(orxU32));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToU32(_zString, &_u32OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxU32_to_linteger(L, _u32OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToS64Base(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32Base = lorx_linteger_to_orxU32(L, 2);
  orxS64 _s64OutValue;
  memset(&_s64OutValue, 0, sizeof(orxS64));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToS64Base(_zString, _u32Base, &_s64OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxS64_to_linteger(L, _s64OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToS64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxS64 _s64OutValue;
  memset(&_s64OutValue, 0, sizeof(orxS64));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToS64(_zString, &_s64OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxS64_to_linteger(L, _s64OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToU64Base(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU32 _u32Base = lorx_linteger_to_orxU32(L, 2);
  orxU64 _u64OutValue;
  memset(&_u64OutValue, 0, sizeof(orxU64));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToU64Base(_zString, _u32Base, &_u64OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxU64_to_linteger(L, _u64OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToU64(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxU64 _u64OutValue;
  memset(&_u64OutValue, 0, sizeof(orxU64));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToU64(_zString, &_u64OutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxU64_to_linteger(L, _u64OutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToFloat(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxFLOAT _fOutValue;
  memset(&_fOutValue, 0, sizeof(orxFLOAT));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToFloat(_zString, &_fOutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxFLOAT_to_lnumber(L, _fOutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToVector(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxVECTOR _vOutValue;
  memset(&_vOutValue, 0, sizeof(orxVECTOR));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToVector(_zString, &_vOutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxVECTOR_to_luserdata_struct(L, &_vOutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_ToBool(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL _bOutValue;
  memset(&_bOutValue, 0, sizeof(orxBOOL));
  const orxSTRING _zRemaining;
  memset(&_zRemaining, 0, sizeof(orxSTRING));
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxSTATUS _retval = orxString_ToBool(_zString, &_bOutValue, &_zRemaining);
  
  /* post processing */
  lorx_orxSTATUS_to_lenumstr(L, _retval);
  lorx_orxBOOL_to_lboolean(L, _bOutValue);
  lorx_orxSTRING_to_lstring(L, _zRemaining);
  return 3;
}


LORX_API int l_String_SearchString(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString1 = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zString2 = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_SearchString(_zString1, _zString2);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_String_SearchChar(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxCHAR _cChar = lorx_lstring_to_orxCHAR(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_SearchChar(_zString, _cChar);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


LORX_API int l_String_SearchCharIndex(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  orxCHAR _cChar = lorx_lstring_to_orxCHAR(L, 2);
  orxS32 _s32Position = lorx_linteger_to_orxS32(L, 3);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxString_SearchCharIndex(_zString, _cChar, _s32Position);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_Scan(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zString = lorx_lstring_to_orxSTRING(L, 1);
  const orxSTRING _zFormat = lorx_lstring_to_orxSTRING(L, 2);
  
  /* arguments processing & checks */
  
  /* call orx function */
  orxS32 _retval = orxString_Scan(_zString, _zFormat);
  
  /* post processing */
  lorx_orxS32_to_linteger(L, _retval);
  return 1;
}


LORX_API int l_String_GetExtension(lua_State *L)
{
  /* get arguments */
  const orxSTRING _zFileName = lorx_lstring_to_orxSTRING(L, 1);
  
  /* arguments processing & checks */
  
  /* call orx function */
  const orxSTRING _retval = orxString_GetExtension(_zFileName);
  
  /* post processing */
  lorx_orxSTRING_to_lstring(L, _retval);
  return 1;
}


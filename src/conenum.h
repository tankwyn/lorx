/*
** Strictly-typed Orx enums conversion functions
** (generated with conversion.py)
*/


#ifndef __LORX_CONENUM_H__
#define __LORX_CONENUM_H__

#include <lua.h>
#include <orx.h>
#include "helpers.h"

LORX_API orxANIM_EVENT lorx_lenumstr_to_orxANIM_EVENT(lua_State *L, int i);
LORX_API int lorx_orxANIM_EVENT_to_lenumstr(lua_State *L, orxANIM_EVENT src);
LORX_API orxCLOCK_EVENT lorx_lenumstr_to_orxCLOCK_EVENT(lua_State *L, int i);
LORX_API int lorx_orxCLOCK_EVENT_to_lenumstr(lua_State *L, orxCLOCK_EVENT src);
LORX_API orxCLOCK_MODIFIER lorx_lenumstr_to_orxCLOCK_MODIFIER(lua_State *L, int i);
LORX_API int lorx_orxCLOCK_MODIFIER_to_lenumstr(lua_State *L, orxCLOCK_MODIFIER src);
LORX_API orxCLOCK_PRIORITY lorx_lenumstr_to_orxCLOCK_PRIORITY(lua_State *L, int i);
LORX_API int lorx_orxCLOCK_PRIORITY_to_lenumstr(lua_State *L, orxCLOCK_PRIORITY src);
LORX_API orxCOMMAND_VAR_TYPE lorx_lenumstr_to_orxCOMMAND_VAR_TYPE(lua_State *L, int i);
LORX_API int lorx_orxCOMMAND_VAR_TYPE_to_lenumstr(lua_State *L, orxCOMMAND_VAR_TYPE src);
LORX_API orxCONFIG_EVENT lorx_lenumstr_to_orxCONFIG_EVENT(lua_State *L, int i);
LORX_API int lorx_orxCONFIG_EVENT_to_lenumstr(lua_State *L, orxCONFIG_EVENT src);
LORX_API orxDEBUG_LEVEL lorx_lenumstr_to_orxDEBUG_LEVEL(lua_State *L, int i);
LORX_API int lorx_orxDEBUG_LEVEL_to_lenumstr(lua_State *L, orxDEBUG_LEVEL src);
LORX_API orxDISPLAY_BLEND_MODE lorx_lenumstr_to_orxDISPLAY_BLEND_MODE(lua_State *L, int i);
LORX_API int lorx_orxDISPLAY_BLEND_MODE_to_lenumstr(lua_State *L, orxDISPLAY_BLEND_MODE src);
LORX_API orxDISPLAY_EVENT lorx_lenumstr_to_orxDISPLAY_EVENT(lua_State *L, int i);
LORX_API int lorx_orxDISPLAY_EVENT_to_lenumstr(lua_State *L, orxDISPLAY_EVENT src);
LORX_API orxDISPLAY_PRIMITIVE lorx_lenumstr_to_orxDISPLAY_PRIMITIVE(lua_State *L, int i);
LORX_API int lorx_orxDISPLAY_PRIMITIVE_to_lenumstr(lua_State *L, orxDISPLAY_PRIMITIVE src);
LORX_API orxDISPLAY_SMOOTHING lorx_lenumstr_to_orxDISPLAY_SMOOTHING(lua_State *L, int i);
LORX_API int lorx_orxDISPLAY_SMOOTHING_to_lenumstr(lua_State *L, orxDISPLAY_SMOOTHING src);
LORX_API orxEVENT_TYPE lorx_lenumstr_to_orxEVENT_TYPE(lua_State *L, int i);
LORX_API int lorx_orxEVENT_TYPE_to_lenumstr(lua_State *L, orxEVENT_TYPE src);
LORX_API orxFRAME_SPACE lorx_lenumstr_to_orxFRAME_SPACE(lua_State *L, int i);
LORX_API int lorx_orxFRAME_SPACE_to_lenumstr(lua_State *L, orxFRAME_SPACE src);
LORX_API orxFX_CURVE lorx_lenumstr_to_orxFX_CURVE(lua_State *L, int i);
LORX_API int lorx_orxFX_CURVE_to_lenumstr(lua_State *L, orxFX_CURVE src);
LORX_API orxFX_EVENT lorx_lenumstr_to_orxFX_EVENT(lua_State *L, int i);
LORX_API int lorx_orxFX_EVENT_to_lenumstr(lua_State *L, orxFX_EVENT src);
LORX_API orxINPUT_EVENT lorx_lenumstr_to_orxINPUT_EVENT(lua_State *L, int i);
LORX_API int lorx_orxINPUT_EVENT_to_lenumstr(lua_State *L, orxINPUT_EVENT src);
LORX_API orxINPUT_MODE lorx_lenumstr_to_orxINPUT_MODE(lua_State *L, int i);
LORX_API int lorx_orxINPUT_MODE_to_lenumstr(lua_State *L, orxINPUT_MODE src);
LORX_API orxINPUT_TYPE lorx_lenumstr_to_orxINPUT_TYPE(lua_State *L, int i);
LORX_API int lorx_orxINPUT_TYPE_to_lenumstr(lua_State *L, orxINPUT_TYPE src);
LORX_API orxJOYSTICK_AXIS lorx_lenumstr_to_orxJOYSTICK_AXIS(lua_State *L, int i);
LORX_API int lorx_orxJOYSTICK_AXIS_to_lenumstr(lua_State *L, orxJOYSTICK_AXIS src);
LORX_API orxJOYSTICK_BUTTON lorx_lenumstr_to_orxJOYSTICK_BUTTON(lua_State *L, int i);
LORX_API int lorx_orxJOYSTICK_BUTTON_to_lenumstr(lua_State *L, orxJOYSTICK_BUTTON src);
LORX_API orxKEYBOARD_KEY lorx_lenumstr_to_orxKEYBOARD_KEY(lua_State *L, int i);
LORX_API int lorx_orxKEYBOARD_KEY_to_lenumstr(lua_State *L, orxKEYBOARD_KEY src);
LORX_API orxLOCALE_EVENT lorx_lenumstr_to_orxLOCALE_EVENT(lua_State *L, int i);
LORX_API int lorx_orxLOCALE_EVENT_to_lenumstr(lua_State *L, orxLOCALE_EVENT src);
LORX_API orxMODULE_ID lorx_lenumstr_to_orxMODULE_ID(lua_State *L, int i);
LORX_API int lorx_orxMODULE_ID_to_lenumstr(lua_State *L, orxMODULE_ID src);
LORX_API orxMOUSE_AXIS lorx_lenumstr_to_orxMOUSE_AXIS(lua_State *L, int i);
LORX_API int lorx_orxMOUSE_AXIS_to_lenumstr(lua_State *L, orxMOUSE_AXIS src);
LORX_API orxMOUSE_BUTTON lorx_lenumstr_to_orxMOUSE_BUTTON(lua_State *L, int i);
LORX_API int lorx_orxMOUSE_BUTTON_to_lenumstr(lua_State *L, orxMOUSE_BUTTON src);
LORX_API orxOBJECT_EVENT lorx_lenumstr_to_orxOBJECT_EVENT(lua_State *L, int i);
LORX_API int lorx_orxOBJECT_EVENT_to_lenumstr(lua_State *L, orxOBJECT_EVENT src);
LORX_API orxPHYSICS_EVENT lorx_lenumstr_to_orxPHYSICS_EVENT(lua_State *L, int i);
LORX_API int lorx_orxPHYSICS_EVENT_to_lenumstr(lua_State *L, orxPHYSICS_EVENT src);
LORX_API orxRENDER_EVENT lorx_lenumstr_to_orxRENDER_EVENT(lua_State *L, int i);
LORX_API int lorx_orxRENDER_EVENT_to_lenumstr(lua_State *L, orxRENDER_EVENT src);
LORX_API orxRESOURCE_EVENT lorx_lenumstr_to_orxRESOURCE_EVENT(lua_State *L, int i);
LORX_API int lorx_orxRESOURCE_EVENT_to_lenumstr(lua_State *L, orxRESOURCE_EVENT src);
LORX_API orxSEEK_OFFSET_WHENCE lorx_lenumstr_to_orxSEEK_OFFSET_WHENCE(lua_State *L, int i);
LORX_API int lorx_orxSEEK_OFFSET_WHENCE_to_lenumstr(lua_State *L, orxSEEK_OFFSET_WHENCE src);
LORX_API orxSHADER_EVENT lorx_lenumstr_to_orxSHADER_EVENT(lua_State *L, int i);
LORX_API int lorx_orxSHADER_EVENT_to_lenumstr(lua_State *L, orxSHADER_EVENT src);
LORX_API orxSHADER_PARAM_TYPE lorx_lenumstr_to_orxSHADER_PARAM_TYPE(lua_State *L, int i);
LORX_API int lorx_orxSHADER_PARAM_TYPE_to_lenumstr(lua_State *L, orxSHADER_PARAM_TYPE src);
LORX_API orxSOUNDSYSTEM_STATUS lorx_lenumstr_to_orxSOUNDSYSTEM_STATUS(lua_State *L, int i);
LORX_API int lorx_orxSOUNDSYSTEM_STATUS_to_lenumstr(lua_State *L, orxSOUNDSYSTEM_STATUS src);
LORX_API orxSOUND_EVENT lorx_lenumstr_to_orxSOUND_EVENT(lua_State *L, int i);
LORX_API int lorx_orxSOUND_EVENT_to_lenumstr(lua_State *L, orxSOUND_EVENT src);
LORX_API orxSOUND_FILTER_TYPE lorx_lenumstr_to_orxSOUND_FILTER_TYPE(lua_State *L, int i);
LORX_API int lorx_orxSOUND_FILTER_TYPE_to_lenumstr(lua_State *L, orxSOUND_FILTER_TYPE src);
LORX_API orxSOUND_STATUS lorx_lenumstr_to_orxSOUND_STATUS(lua_State *L, int i);
LORX_API int lorx_orxSOUND_STATUS_to_lenumstr(lua_State *L, orxSOUND_STATUS src);
LORX_API orxSPAWNER_EVENT lorx_lenumstr_to_orxSPAWNER_EVENT(lua_State *L, int i);
LORX_API int lorx_orxSPAWNER_EVENT_to_lenumstr(lua_State *L, orxSPAWNER_EVENT src);
LORX_API orxSTATUS lorx_lenumstr_to_orxSTATUS(lua_State *L, int i);
LORX_API int lorx_orxSTATUS_to_lenumstr(lua_State *L, orxSTATUS src);
LORX_API orxSTRUCTURE_ID lorx_lenumstr_to_orxSTRUCTURE_ID(lua_State *L, int i);
LORX_API int lorx_orxSTRUCTURE_ID_to_lenumstr(lua_State *L, orxSTRUCTURE_ID src);
LORX_API orxSTRUCTURE_STORAGE_TYPE lorx_lenumstr_to_orxSTRUCTURE_STORAGE_TYPE(lua_State *L, int i);
LORX_API int lorx_orxSTRUCTURE_STORAGE_TYPE_to_lenumstr(lua_State *L, orxSTRUCTURE_STORAGE_TYPE src);
LORX_API orxSYSTEM_EVENT lorx_lenumstr_to_orxSYSTEM_EVENT(lua_State *L, int i);
LORX_API int lorx_orxSYSTEM_EVENT_to_lenumstr(lua_State *L, orxSYSTEM_EVENT src);
LORX_API orxTEXTURE_EVENT lorx_lenumstr_to_orxTEXTURE_EVENT(lua_State *L, int i);
LORX_API int lorx_orxTEXTURE_EVENT_to_lenumstr(lua_State *L, orxTEXTURE_EVENT src);
LORX_API orxTIMELINE_EVENT lorx_lenumstr_to_orxTIMELINE_EVENT(lua_State *L, int i);
LORX_API int lorx_orxTIMELINE_EVENT_to_lenumstr(lua_State *L, orxTIMELINE_EVENT src);
LORX_API orxVIEWPORT_EVENT lorx_lenumstr_to_orxVIEWPORT_EVENT(lua_State *L, int i);
LORX_API int lorx_orxVIEWPORT_EVENT_to_lenumstr(lua_State *L, orxVIEWPORT_EVENT src);

#endif /* __LORX_CONENUM_H__ */
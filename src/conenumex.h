#ifndef __LORX_CONV_ENUM_EXT_H__
#define __LORX_CONV_ENUM_EXT_H__


#include <stdio.h>
#include <orx.h>
#include <lua.h>
#include "helpers.h"
#include "conenum.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////
// These functions are for orx APIs that take orxENUM as params.
// The orxENUMs will be converted to strictly typed enums and to a lua enum string, eventually
////////////////////////////////////////////////////////////////////////////////////////////////////////////


static orxENUM lorx_lenumstr_to_input_orxENUM(lua_State *L, int i, orxINPUT_TYPE _eType)
{
  orxENUM ret = orxENUM_NONE;
  if (_eType == orxINPUT_TYPE_KEYBOARD_KEY)
  {
    ret = lorx_lenumstr_to_orxKEYBOARD_KEY(L, i);
  }
  else if (_eType == orxINPUT_TYPE_MOUSE_BUTTON)
  {
    ret = lorx_lenumstr_to_orxMOUSE_BUTTON(L, i);
  }
  else if (_eType == orxINPUT_TYPE_MOUSE_AXIS)
  {
    ret = lorx_lenumstr_to_orxMOUSE_BUTTON(L, i);
  }
  else if (_eType == orxINPUT_TYPE_JOYSTICK_BUTTON)
  {
    ret = lorx_lenumstr_to_orxJOYSTICK_BUTTON(L, i);
  }
  else if (_eType == orxINPUT_TYPE_JOYSTICK_AXIS)
  {
    ret = lorx_lenumstr_to_orxJOYSTICK_AXIS(L, i);
  }
  else if (_eType == orxINPUT_TYPE_EXTERNAL)
  {
    ret = orxENUM_NONE;
  }
  else if (_eType == orxINPUT_TYPE_NONE)
  {
    ret = orxENUM_NONE;
  }
  else
  {
    LORX_ERROR("unexpected input type: %u!\n", _eType);
  }
  return ret;
}

static int lorx_input_orxENUM_to_lenumstr(lua_State *L, orxINPUT_TYPE _eType, orxENUM _eID)
{
  if (_eType == orxINPUT_TYPE_KEYBOARD_KEY)
  {
    lorx_orxKEYBOARD_KEY_to_lenumstr(L, _eID);
  }
  else if (_eType == orxINPUT_TYPE_MOUSE_BUTTON)
  {
    lorx_orxMOUSE_BUTTON_to_lenumstr(L, _eID);
  }
  else if (_eType == orxINPUT_TYPE_MOUSE_AXIS)
  {
    lorx_orxMOUSE_AXIS_to_lenumstr(L, _eID);
  }
  else if (_eType == orxINPUT_TYPE_JOYSTICK_BUTTON)
  {
    lorx_orxJOYSTICK_BUTTON_to_lenumstr(L, _eID);
  }
  else if (_eType == orxINPUT_TYPE_JOYSTICK_AXIS)
  {
    lorx_orxJOYSTICK_AXIS_to_lenumstr(L, _eID);
  }
  else if (_eType == orxINPUT_TYPE_EXTERNAL)
  {
    lua_pushstring(L, "none");
  }
  else if (_eType == orxINPUT_TYPE_NONE)
  {
    lua_pushstring(L, "none");
  }
  else
  {
    LORX_ERROR("unexpected input type: %u!\n", _eType);
  }
  return 1;
}

static orxENUM lorx_lenumstr_to_event_orxENUM(lua_State *L, int i, orxEVENT_TYPE _eType)
{
  orxENUM ret = orxENUM_NONE;
  if (_eType == orxEVENT_TYPE_ANIM)
  {
    ret = lorx_lenumstr_to_orxANIM_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_OBJECT)
  {
    ret = lorx_lenumstr_to_orxOBJECT_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_TIMELINE)
  {
    ret = lorx_lenumstr_to_orxTIMELINE_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_DISPLAY)
  {
    ret = lorx_lenumstr_to_orxDISPLAY_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_CLOCK)
  {
    ret = lorx_lenumstr_to_orxCLOCK_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_INPUT)
  {
    ret = lorx_lenumstr_to_orxINPUT_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_CONFIG)
  {
    ret = lorx_lenumstr_to_orxCONFIG_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_FX)
  {
    ret = lorx_lenumstr_to_orxFX_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_LOCALE)
  {
    ret = lorx_lenumstr_to_orxLOCALE_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_PHYSICS)
  {
    ret = lorx_lenumstr_to_orxPHYSICS_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_RENDER)
  {
    ret = lorx_lenumstr_to_orxRENDER_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_RESOURCE)
  {
    ret = lorx_lenumstr_to_orxRESOURCE_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_SOUND)
  {
    ret = lorx_lenumstr_to_orxSOUND_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_SPAWNER)
  {
    ret = lorx_lenumstr_to_orxSPAWNER_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_SYSTEM)
  {
    ret = lorx_lenumstr_to_orxSYSTEM_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_TEXTURE)
  {
    ret = lorx_lenumstr_to_orxTEXTURE_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_VIEWPORT)
  {
    ret = lorx_lenumstr_to_orxVIEWPORT_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_SHADER)
  {
    ret = lorx_lenumstr_to_orxSHADER_EVENT(L, i);
  }
  else if (_eType == orxEVENT_TYPE_NONE)
  {
    ret = orxENUM_NONE;
  }
  else
  {
    LORX_ERROR("unexpected input type: %u!\n", _eType);
  }
  return ret;
}

static int lorx_event_orxENUM_to_lenumstr(lua_State *L, orxEVENT_TYPE _eType, orxENUM _eID)
{
  if (_eType == orxEVENT_TYPE_ANIM)
  {
    lorx_orxANIM_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_OBJECT)
  {
    lorx_orxOBJECT_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_TIMELINE)
  {
    lorx_orxTIMELINE_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_DISPLAY)
  {
    lorx_orxDISPLAY_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_CLOCK)
  {
    lorx_orxCLOCK_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_INPUT)
  {
    lorx_orxINPUT_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_CONFIG)
  {
    lorx_orxCONFIG_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_FX)
  {
    lorx_orxFX_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_LOCALE)
  {
    lorx_orxLOCALE_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_PHYSICS)
  {
    lorx_orxPHYSICS_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_RENDER)
  {
    lorx_orxRENDER_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_RESOURCE)
  {
    lorx_orxRESOURCE_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_SOUND)
  {
    lorx_orxSOUND_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_SPAWNER)
  {
    lorx_orxSPAWNER_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_SYSTEM)
  {
    lorx_orxSYSTEM_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_TEXTURE)
  {
    lorx_orxTEXTURE_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_VIEWPORT)
  {
    lorx_orxVIEWPORT_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_SHADER)
  {
    lorx_orxSHADER_EVENT_to_lenumstr(L, _eID);
  }
  else if (_eType == orxEVENT_TYPE_NONE)
  {
    lua_pushstring(L, "none");
  }
  else
  {
    LORX_ERROR("unexpected input type: %u!\n", _eType);
  }
  return 1;
}

#endif /* __LORX_CONV_ENUM_EXT_H__ */
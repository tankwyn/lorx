/*
** Lorx sub-modules (generated with modules.py)
*/


#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <orx.h>
#include "helpers.h"
#include "bindings.h"
#include "constructors.h"
#include "modules.h"

LORX_API int luaopen_lorx_constants(lua_State *L)
{
  lorx_insistglobal(L, "lorx");
  lua_newtable(L);
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_INFO_NORMAL");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_INFO_READONLY");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_INFO_HIDDEN");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_INFO_DIRECTORY");
  lorx_orxU32_to_linteger(L, 0x10000000);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_OPEN_READ");
  lorx_orxU32_to_linteger(L, 0x20000000);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_OPEN_WRITE");
  lorx_orxU32_to_linteger(L, 0x40000000);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_OPEN_APPEND");
  lorx_orxU32_to_linteger(L, 0x80000000);
  lua_setfield(L, -2, "orxFILE_KU32_FLAG_OPEN_BINARY");
  lorx_orxSTRING_to_lstring(L, "Mouse");
  lua_setfield(L, -2, "orxMOUSE_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "ShowCursor");
  lua_setfield(L, -2, "orxMOUSE_KZ_CONFIG_SHOW_CURSOR");
  lorx_orxSTRING_to_lstring(L, "Grab");
  lua_setfield(L, -2, "orxMOUSE_KZ_CONFIG_GRAB");
  lorx_orxU32_to_linteger(L, 1);
  lua_setfield(L, -2, "orxJOYSTICK_KU32_MIN_ID");
  lorx_orxU32_to_linteger(L, (orxJOYSTICK_BUTTON_NUMBER / orxJOYSTICK_BUTTON_SINGLE_NUMBER));
  lua_setfield(L, -2, "orxJOYSTICK_KU32_MAX_ID");
  lorx_orxSTRING_to_lstring(L, "Input");
  lua_setfield(L, -2, "orxINPUT_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "DefaultThreshold");
  lua_setfield(L, -2, "orxINPUT_KZ_CONFIG_DEFAULT_THRESHOLD");
  lorx_orxSTRING_to_lstring(L, "DefaultMultiplier");
  lua_setfield(L, -2, "orxINPUT_KZ_CONFIG_DEFAULT_MULTIPLIER");
  lorx_orxSTRING_to_lstring(L, "CombineList");
  lua_setfield(L, -2, "orxINPUT_KZ_CONFIG_COMBINE_LIST");
  lorx_orxSTRING_to_lstring(L, "JoyIDList");
  lua_setfield(L, -2, "orxINPUT_KZ_CONFIG_JOYSTICK_ID_LIST");
  lorx_orxU32_to_linteger(L, 16);
  lua_setfield(L, -2, "orxINPUT_KU32_BINDING_NUMBER");
  lorx_orxSTRING_to_lstring(L, "-=");
  lua_setfield(L, -2, "orxINPUT_KZ_INTERNAL_SET_PREFIX");
  lorx_orxCHAR_to_lstring(L, '+');
  lua_setfield(L, -2, "orxINPUT_KC_MODE_PREFIX_POSITIVE");
  lorx_orxCHAR_to_lstring(L, '-');
  lua_setfield(L, -2, "orxINPUT_KC_MODE_PREFIX_NEGATIVE");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxINPUT_KU32_FLAG_TYPE_NONE");
  lorx_orxU32_to_linteger(L, 0x0000FFFF);
  lua_setfield(L, -2, "orxINPUT_KU32_MASK_TYPE_ALL");
  lorx_orxU32_to_linteger(L, 2);
  lua_setfield(L, -2, "orxPROFILER_KU32_HISTORY_LENGTH");
  lorx_orxS32_to_linteger(L, -1);
  lua_setfield(L, -2, "orxPROFILER_KS32_MARKER_ID_NONE");
  lorx_orxSTRING_to_lstring(L, "fps");
  lua_setfield(L, -2, "orxFPS_KZ_CLOCK_NAME");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_TIMESTAMP");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_FULL_TIMESTAMP");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_TYPE");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_TAGGED");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_FILE");
  lorx_orxU32_to_linteger(L, 0x00000020);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_TERMINAL");
  lorx_orxU32_to_linteger(L, 0x00000040);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_CONSOLE");
  lorx_orxU32_to_linteger(L, 0x00000080);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_FLAG_CALLBACK");
  lorx_orxU32_to_linteger(L, 0x000000F5);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_MASK_DEFAULT");
  lorx_orxU32_to_linteger(L, 0x000000BD);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_MASK_DEBUG");
  lorx_orxU32_to_linteger(L, 0x0FFFFFFF);
  lua_setfield(L, -2, "orxDEBUG_KU32_STATIC_MASK_USER_ALL");
  lorx_orxSTRING_to_lstring(L, "orx-debug.log");
  lua_setfield(L, -2, "orxDEBUG_KZ_DEFAULT_DEBUG_FILE");
  lorx_orxSTRING_to_lstring(L, "orx.log");
  lua_setfield(L, -2, "orxDEBUG_KZ_DEFAULT_LOG_FILE");
  lorx_orxSTRING_to_lstring(L, ".log");
  lua_setfield(L, -2, "orxDEBUG_KZ_DEFAULT_LOG_SUFFIX");
  lorx_orxSTRING_to_lstring(L, "-debug.log");
  lua_setfield(L, -2, "orxDEBUG_KZ_DEFAULT_DEBUG_SUFFIX");
  lorx_orxS32_to_linteger(L, 2048);
  lua_setfield(L, -2, "orxDEBUG_KS32_BUFFER_OUTPUT_SIZE");
  lorx_orxCHAR_to_lstring(L, '"');
  lua_setfield(L, -2, "orxCOMMAND_KC_BLOCK_MARKER");
  lorx_orxCHAR_to_lstring(L, '>');
  lua_setfield(L, -2, "orxCOMMAND_KC_PUSH_MARKER");
  lorx_orxCHAR_to_lstring(L, '<');
  lua_setfield(L, -2, "orxCOMMAND_KC_POP_MARKER");
  lorx_orxCHAR_to_lstring(L, '^');
  lua_setfield(L, -2, "orxCOMMAND_KC_GUID_MARKER");
  lorx_orxCHAR_to_lstring(L, ',');
  lua_setfield(L, -2, "orxCOMMAND_KC_SEPARATOR");
  lorx_orxU32_to_linteger(L, 0);
  lua_setfield(L, -2, "orxTHREAD_KU32_MAIN_THREAD_ID");
  lorx_orxU32_to_linteger(L, 16);
  lua_setfield(L, -2, "orxTHREAD_KU32_MAX_THREAD_NUMBER");
  lorx_orxU32_to_linteger(L, 0);
  lua_setfield(L, -2, "orxTHREAD_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, (((1 << orxTHREAD_KU32_MAX_THREAD_NUMBER) - 1) & ~(1 << orxTHREAD_KU32_MAIN_THREAD_ID)));
  lua_setfield(L, -2, "orxTHREAD_KU32_MASK_ALL");
  lorx_orxSTRING_to_lstring(L, "Config");
  lua_setfield(L, -2, "orxCONFIG_KZ_RESOURCE_GROUP");
  lorx_orxU32_to_linteger(L, 16);
  lua_setfield(L, -2, "orxCLOCK_KU32_CLOCK_BANK_SIZE");
  lorx_orxU32_to_linteger(L, 32);
  lua_setfield(L, -2, "orxCLOCK_KU32_TIMER_BANK_SIZE");
  lorx_orxU32_to_linteger(L, 16);
  lua_setfield(L, -2, "orxCLOCK_KU32_FUNCTION_BANK_SIZE");
  lorx_orxSTRING_to_lstring(L, "Frequency");
  lua_setfield(L, -2, "orxCLOCK_KZ_CONFIG_FREQUENCY");
  lorx_orxSTRING_to_lstring(L, "ModifierList");
  lua_setfield(L, -2, "orxCLOCK_KZ_CONFIG_MODIFIER_LIST");
  lorx_orxSTRING_to_lstring(L, "core");
  lua_setfield(L, -2, "orxCLOCK_KZ_CORE");
  lorx_orxCHAR_to_lstring(L, ':');
  lua_setfield(L, -2, "orxRESOURCE_KC_LOCATION_SEPARATOR");
  lorx_orxSTRING_to_lstring(L, ".");
  lua_setfield(L, -2, "orxRESOURCE_KZ_DEFAULT_STORAGE");
  lorx_orxSTRING_to_lstring(L, "file");
  lua_setfield(L, -2, "orxRESOURCE_KZ_TYPE_TAG_FILE");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxEVENT_KU32_FLAG_ID_NONE");
  lorx_orxU32_to_linteger(L, 0xFFFFFFFF);
  lua_setfield(L, -2, "orxEVENT_KU32_MASK_ID_ALL");
  lorx_orxSTRING_to_lstring(L, "-=ConsoleSet=-");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_SET");
  lorx_orxSTRING_to_lstring(L, "Toggle");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_TOGGLE");
  lorx_orxSTRING_to_lstring(L, "AutoComplete");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_AUTOCOMPLETE");
  lorx_orxSTRING_to_lstring(L, "Delete");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_DELETE");
  lorx_orxSTRING_to_lstring(L, "DeleteAfter");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_DELETE_AFTER");
  lorx_orxSTRING_to_lstring(L, "ToggleMode");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_TOGGLE_MODE");
  lorx_orxSTRING_to_lstring(L, "Enter");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_ENTER");
  lorx_orxSTRING_to_lstring(L, "Previous");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_PREVIOUS");
  lorx_orxSTRING_to_lstring(L, "Next");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_NEXT");
  lorx_orxSTRING_to_lstring(L, "Left");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_LEFT");
  lorx_orxSTRING_to_lstring(L, "Right");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_RIGHT");
  lorx_orxSTRING_to_lstring(L, "Start");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_START");
  lorx_orxSTRING_to_lstring(L, "End");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_END");
  lorx_orxSTRING_to_lstring(L, "Paste");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_PASTE");
  lorx_orxSTRING_to_lstring(L, "ScrollDown");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_SCROLL_DOWN");
  lorx_orxSTRING_to_lstring(L, "ScrollUp");
  lua_setfield(L, -2, "orxCONSOLE_KZ_INPUT_SCROLL_UP");
  lorx_orxSTRING_to_lstring(L, "cih");
  lua_setfield(L, -2, "orxCONSOLE_KZ_CONFIG_HISTORY_FILE_EXTENSION");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxANIMSET_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00100000);
  lua_setfield(L, -2, "orxANIMSET_KU32_FLAG_REFERENCE_LOCK");
  lorx_orxU32_to_linteger(L, 0x00200000);
  lua_setfield(L, -2, "orxANIMSET_KU32_FLAG_LINK_STATIC");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxANIMSET_KU32_LINK_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x10000000);
  lua_setfield(L, -2, "orxANIMSET_KU32_LINK_FLAG_LOOP_COUNT");
  lorx_orxU32_to_linteger(L, 0x20000000);
  lua_setfield(L, -2, "orxANIMSET_KU32_LINK_FLAG_PRIORITY");
  lorx_orxU32_to_linteger(L, 0x40000000);
  lua_setfield(L, -2, "orxANIMSET_KU32_LINK_FLAG_IMMEDIATE_CUT");
  lorx_orxU32_to_linteger(L, 0x80000000);
  lua_setfield(L, -2, "orxANIMSET_KU32_LINK_FLAG_CLEAR_TARGET");
  lorx_orxU32_to_linteger(L, 128);
  lua_setfield(L, -2, "orxANIMSET_KU32_MAX_ANIM_NUMBER");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxANIM_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxANIM_KU32_FLAG_2D");
  lorx_orxU32_to_linteger(L, 0x0000000F);
  lua_setfield(L, -2, "orxANIM_KU32_MASK_USER_ALL");
  lorx_orxU32_to_linteger(L, 0xFFFFFFFF);
  lua_setfield(L, -2, "orxANIM_KU32_MASK_ALL");
  lorx_orxU32_to_linteger(L, 65535);
  lua_setfield(L, -2, "orxANIM_KU32_KEY_MAX_NUMBER");
  lorx_orxU32_to_linteger(L, 65535);
  lua_setfield(L, -2, "orxANIM_KU32_EVENT_MAX_NUMBER");
  lorx_orxU32_to_linteger(L, 4);
  lua_setfield(L, -2, "orxSHADERPOINTER_KU32_SHADER_NUMBER");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_FLAG_ALIGN_CENTER");
  lorx_orxU32_to_linteger(L, 0x10000000);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_FLAG_ALIGN_LEFT");
  lorx_orxU32_to_linteger(L, 0x20000000);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_FLAG_ALIGN_RIGHT");
  lorx_orxU32_to_linteger(L, 0x40000000);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_FLAG_ALIGN_TOP");
  lorx_orxU32_to_linteger(L, 0x80000000);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_FLAG_ALIGN_BOTTOM");
  lorx_orxU32_to_linteger(L, 0x01000000);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_FLAG_NO_DEBUG");
  lorx_orxU32_to_linteger(L, 8);
  lua_setfield(L, -2, "orxVIEWPORT_KU32_MAX_TEXTURE_NUMBER");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxCAMERA_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxCAMERA_KU32_FLAG_2D");
  lorx_orxU32_to_linteger(L, 0x000000FF);
  lua_setfield(L, -2, "orxCAMERA_KU32_MASK_USER_ALL");
  lorx_orxU32_to_linteger(L, 16);
  lua_setfield(L, -2, "orxCAMERA_KU32_GROUP_ID_NUMBER");
  lorx_orxSTRING_to_lstring(L, "Render");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "ShowFPS");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_SHOW_FPS");
  lorx_orxSTRING_to_lstring(L, "ShowProfiler");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_SHOW_PROFILER");
  lorx_orxSTRING_to_lstring(L, "MinFrequency");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_MIN_FREQUENCY");
  lorx_orxSTRING_to_lstring(L, "ProfilerOrientation");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_PROFILER_ORIENTATION");
  lorx_orxSTRING_to_lstring(L, "ConsoleColor");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_COLOR");
  lorx_orxSTRING_to_lstring(L, "ConsoleAlpha");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_ALPHA");
  lorx_orxSTRING_to_lstring(L, "ConsoleBackgroundColor");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_BACKGROUND_COLOR");
  lorx_orxSTRING_to_lstring(L, "ConsoleBackgroundAlpha");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_BACKGROUND_ALPHA");
  lorx_orxSTRING_to_lstring(L, "ConsoleSeparatorColor");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_SEPARATOR_COLOR");
  lorx_orxSTRING_to_lstring(L, "ConsoleSeparatorAlpha");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_SEPARATOR_ALPHA");
  lorx_orxSTRING_to_lstring(L, "ConsoleInputColor");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_INPUT_COLOR");
  lorx_orxSTRING_to_lstring(L, "ConsoleInputAlpha");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_INPUT_ALPHA");
  lorx_orxSTRING_to_lstring(L, "ConsoleCompletionColor");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_COMPLETION_COLOR");
  lorx_orxSTRING_to_lstring(L, "ConsoleCompletionAlpha");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_COMPLETION_ALPHA");
  lorx_orxSTRING_to_lstring(L, "ConsoleLogColor");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_LOG_COLOR");
  lorx_orxSTRING_to_lstring(L, "ConsoleLogAlpha");
  lua_setfield(L, -2, "orxRENDER_KZ_CONFIG_CONSOLE_LOG_ALPHA");
  lorx_orxSTRING_to_lstring(L, "-=RenderSet=-");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_SET");
  lorx_orxSTRING_to_lstring(L, "ProfilerToggleHistory");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_TOGGLE_HISTORY");
  lorx_orxSTRING_to_lstring(L, "ProfilerPause");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_PAUSE");
  lorx_orxSTRING_to_lstring(L, "ProfilerPreviousFrame");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_PREVIOUS_FRAME");
  lorx_orxSTRING_to_lstring(L, "ProfilerNextFrame");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_NEXT_FRAME");
  lorx_orxSTRING_to_lstring(L, "ProfilerPreviousDepth");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_PREVIOUS_DEPTH");
  lorx_orxSTRING_to_lstring(L, "ProfilerNextDepth");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_NEXT_DEPTH");
  lorx_orxSTRING_to_lstring(L, "ProfilerPreviousThread");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_PREVIOUS_THREAD");
  lorx_orxSTRING_to_lstring(L, "ProfilerNextThread");
  lua_setfield(L, -2, "orxRENDER_KZ_INPUT_PROFILER_NEXT_THREAD");
  lorx_orxFLOAT_to_lnumber(L, orx2F(1.414213562f));
  lua_setfield(L, -2, "orxMATH_KF_SQRT_2");
  lorx_orxFLOAT_to_lnumber(L, orx2F(0.0001f));
  lua_setfield(L, -2, "orxMATH_KF_EPSILON");
  lorx_orxFLOAT_to_lnumber(L, orx2F(1.0e-037f));
  lua_setfield(L, -2, "orxMATH_KF_TINY_EPSILON");
  lorx_orxFLOAT_to_lnumber(L, orx2F(3.402823466e+38F));
  lua_setfield(L, -2, "orxMATH_KF_MAX");
  lorx_orxFLOAT_to_lnumber(L, orx2F(6.283185307f));
  lua_setfield(L, -2, "orxMATH_KF_2_PI");
  lorx_orxFLOAT_to_lnumber(L, orx2F(3.141592654f));
  lua_setfield(L, -2, "orxMATH_KF_PI");
  lorx_orxFLOAT_to_lnumber(L, orx2F(1.570796327f));
  lua_setfield(L, -2, "orxMATH_KF_PI_BY_2");
  lorx_orxFLOAT_to_lnumber(L, orx2F(0.785398163f));
  lua_setfield(L, -2, "orxMATH_KF_PI_BY_4");
  lorx_orxFLOAT_to_lnumber(L, orx2F(3.141592654f / 180.0f));
  lua_setfield(L, -2, "orxMATH_KF_DEG_TO_RAD");
  lorx_orxFLOAT_to_lnumber(L, orx2F(180.0f / 3.141592654f));
  lua_setfield(L, -2, "orxMATH_KF_RAD_TO_DEG");
  lorx_orxSTRING_to_lstring(L, "Display");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "ScreenWidth");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_WIDTH");
  lorx_orxSTRING_to_lstring(L, "ScreenHeight");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_HEIGHT");
  lorx_orxSTRING_to_lstring(L, "ScreenDepth");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_DEPTH");
  lorx_orxSTRING_to_lstring(L, "ScreenPosition");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_POSITION");
  lorx_orxSTRING_to_lstring(L, "RefreshRate");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_REFRESH_RATE");
  lorx_orxSTRING_to_lstring(L, "FullScreen");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_FULLSCREEN");
  lorx_orxSTRING_to_lstring(L, "AllowResize");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_ALLOW_RESIZE");
  lorx_orxSTRING_to_lstring(L, "Decoration");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_DECORATION");
  lorx_orxSTRING_to_lstring(L, "Title");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_TITLE");
  lorx_orxSTRING_to_lstring(L, "Smoothing");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_SMOOTH");
  lorx_orxSTRING_to_lstring(L, "VSync");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_VSYNC");
  lorx_orxSTRING_to_lstring(L, "DepthBuffer");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_DEPTHBUFFER");
  lorx_orxSTRING_to_lstring(L, "ShaderVersion");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_SHADER_VERSION");
  lorx_orxSTRING_to_lstring(L, "ShaderExtensionList");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_SHADER_EXTENSION_LIST");
  lorx_orxSTRING_to_lstring(L, "Monitor");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_MONITOR");
  lorx_orxSTRING_to_lstring(L, "Cursor");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_CURSOR");
  lorx_orxSTRING_to_lstring(L, "IconList");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_ICON_LIST");
  lorx_orxSTRING_to_lstring(L, "FramebufferSize");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_FRAMEBUFFER_SIZE");
  lorx_orxSTRING_to_lstring(L, "TextureUnitNumber");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_TEXTURE_UNIT_NUMBER");
  lorx_orxSTRING_to_lstring(L, "DrawBufferNumber");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_DRAW_BUFFER_NUMBER");
  lorx_orxSTRING_to_lstring(L, "MaxTextureSize");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_MAX_TEXTURE_SIZE");
  lorx_orxSTRING_to_lstring(L, "DebugOutput");
  lua_setfield(L, -2, "orxDISPLAY_KZ_CONFIG_DEBUG_OUTPUT");
  lorx_orxSTRING_to_lstring(L, "Color");
  lua_setfield(L, -2, "orxCOLOR_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "_top");
  lua_setfield(L, -2, "orxDISPLAY_KZ_SHADER_SUFFIX_TOP");
  lorx_orxSTRING_to_lstring(L, "_left");
  lua_setfield(L, -2, "orxDISPLAY_KZ_SHADER_SUFFIX_LEFT");
  lorx_orxSTRING_to_lstring(L, "_bottom");
  lua_setfield(L, -2, "orxDISPLAY_KZ_SHADER_SUFFIX_BOTTOM");
  lorx_orxSTRING_to_lstring(L, "_right");
  lua_setfield(L, -2, "orxDISPLAY_KZ_SHADER_SUFFIX_RIGHT");
  lorx_orxCHAR_to_lstring(L, '+');
  lua_setfield(L, -2, "orxDISPLAY_KC_SHADER_EXTENSION_ADD");
  lorx_orxCHAR_to_lstring(L, '-');
  lua_setfield(L, -2, "orxDISPLAY_KC_SHADER_EXTENSION_REMOVE");
  lorx_orxSTRING_to_lstring(L, ".");
  lua_setfield(L, -2, "orxSCREENSHOT_KZ_DEFAULT_DIRECTORY_NAME");
  lorx_orxSTRING_to_lstring(L, "screenshot-");
  lua_setfield(L, -2, "orxSCREENSHOT_KZ_DEFAULT_BASE_NAME");
  lorx_orxSTRING_to_lstring(L, "tga");
  lua_setfield(L, -2, "orxSCREENSHOT_KZ_DEFAULT_EXTENSION");
  lorx_orxU32_to_linteger(L, 4);
  lua_setfield(L, -2, "orxSCREENSHOT_KU32_DEFAULT_DIGITS");
  lorx_orxSTRING_to_lstring(L, "default");
  lua_setfield(L, -2, "orxFONT_KZ_DEFAULT_FONT_NAME");
  lorx_orxSTRING_to_lstring(L, "Texture");
  lua_setfield(L, -2, "orxTEXTURE_KZ_RESOURCE_GROUP");
  lorx_orxSTRING_to_lstring(L, "Texture");
  lua_setfield(L, -2, "orxTEXTURE_KZ_LOCALE_GROUP");
  lorx_orxSTRING_to_lstring(L, "screen");
  lua_setfield(L, -2, "orxTEXTURE_KZ_SCREEN");
  lorx_orxSTRING_to_lstring(L, "pixel");
  lua_setfield(L, -2, "orxTEXTURE_KZ_PIXEL");
  lorx_orxSTRING_to_lstring(L, "Text");
  lua_setfield(L, -2, "orxTEXT_KZ_LOCALE_GROUP");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_2D");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_TEXT");
  lorx_orxU32_to_linteger(L, 0x00000003);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_MASK_TYPE");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_FLIP_X");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_FLIP_Y");
  lorx_orxU32_to_linteger(L, 0x0000000C);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_MASK_FLIP_BOTH");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_CENTER");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_LEFT");
  lorx_orxU32_to_linteger(L, 0x00000020);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_RIGHT");
  lorx_orxU32_to_linteger(L, 0x00000040);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_TOP");
  lorx_orxU32_to_linteger(L, 0x00000080);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_BOTTOM");
  lorx_orxU32_to_linteger(L, 0x00000100);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_TRUNCATE");
  lorx_orxU32_to_linteger(L, 0x00000200);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_FLAG_ALIGN_ROUND");
  lorx_orxU32_to_linteger(L, 0x000003F0);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_MASK_ALIGN");
  lorx_orxU32_to_linteger(L, 0x00000FFF);
  lua_setfield(L, -2, "orxGRAPHIC_KU32_MASK_USER_ALL");
  lorx_orxSTRING_to_lstring(L, "Texture");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_TEXTURE_NAME");
  lorx_orxSTRING_to_lstring(L, "TextureOrigin");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_TEXTURE_ORIGIN");
  lorx_orxSTRING_to_lstring(L, "TextureSize");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_TEXTURE_SIZE");
  lorx_orxSTRING_to_lstring(L, "Text");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_TEXT_NAME");
  lorx_orxSTRING_to_lstring(L, "Pivot");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_PIVOT");
  lorx_orxSTRING_to_lstring(L, "Color");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_COLOR");
  lorx_orxSTRING_to_lstring(L, "Alpha");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_ALPHA");
  lorx_orxSTRING_to_lstring(L, "RGB");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_RGB");
  lorx_orxSTRING_to_lstring(L, "HSL");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_HSL");
  lorx_orxSTRING_to_lstring(L, "HSV");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_HSV");
  lorx_orxSTRING_to_lstring(L, "Flip");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_FLIP");
  lorx_orxSTRING_to_lstring(L, "Repeat");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_REPEAT");
  lorx_orxSTRING_to_lstring(L, "Smoothing");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_SMOOTHING");
  lorx_orxSTRING_to_lstring(L, "BlendMode");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_BLEND_MODE");
  lorx_orxSTRING_to_lstring(L, "KeepInCache");
  lua_setfield(L, -2, "orxGRAPHIC_KZ_CONFIG_KEEP_IN_CACHE");
  lorx_orxCHAR_to_lstring(L, '\x1b');
  lua_setfield(L, -2, "orxANSI_KC_MARKER");
  lorx_orxSTRING_to_lstring(L, "\x1b[0m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_RESET");
  lorx_orxSTRING_to_lstring(L, "\x1b[1m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BOLD_ON");
  lorx_orxSTRING_to_lstring(L, "\x1b[3m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_ITALICS_ON");
  lorx_orxSTRING_to_lstring(L, "\x1b[4m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_UNDERLINE_ON");
  lorx_orxSTRING_to_lstring(L, "\x1b[5m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BLINK_ON");
  lorx_orxSTRING_to_lstring(L, "\x1b[7m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_INVERSE_ON");
  lorx_orxSTRING_to_lstring(L, "\x1b[9m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_STRIKETHROUGH_ON");
  lorx_orxSTRING_to_lstring(L, "\x1b[22m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BOLD_OFF");
  lorx_orxSTRING_to_lstring(L, "\x1b[23m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_ITALICS_OFF");
  lorx_orxSTRING_to_lstring(L, "\x1b[24m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_UNDERLINE_OFF");
  lorx_orxSTRING_to_lstring(L, "\x1b[25m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BLINK_OFF");
  lorx_orxSTRING_to_lstring(L, "\x1b[27m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_INVERSE_OFF");
  lorx_orxSTRING_to_lstring(L, "\x1b[29m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_STRIKETHROUGH_OFF");
  lorx_orxSTRING_to_lstring(L, "\x1b[30m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_BLACK");
  lorx_orxSTRING_to_lstring(L, "\x1b[31m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_RED");
  lorx_orxSTRING_to_lstring(L, "\x1b[32m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_GREEN");
  lorx_orxSTRING_to_lstring(L, "\x1b[33m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_YELLOW");
  lorx_orxSTRING_to_lstring(L, "\x1b[34m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_BLUE");
  lorx_orxSTRING_to_lstring(L, "\x1b[35m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_MAGENTA");
  lorx_orxSTRING_to_lstring(L, "\x1b[36m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_CYAN");
  lorx_orxSTRING_to_lstring(L, "\x1b[37m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_WHITE");
  lorx_orxSTRING_to_lstring(L, "\x1b[39m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_FG_DEFAULT");
  lorx_orxSTRING_to_lstring(L, "\x1b[40m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_BLACK");
  lorx_orxSTRING_to_lstring(L, "\x1b[41m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_RED");
  lorx_orxSTRING_to_lstring(L, "\x1b[42m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_GREEN");
  lorx_orxSTRING_to_lstring(L, "\x1b[43m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_YELLOW");
  lorx_orxSTRING_to_lstring(L, "\x1b[44m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_BLUE");
  lorx_orxSTRING_to_lstring(L, "\x1b[45m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_MAGENTA");
  lorx_orxSTRING_to_lstring(L, "\x1b[46m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_CYAN");
  lorx_orxSTRING_to_lstring(L, "\x1b[47m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_WHITE");
  lorx_orxSTRING_to_lstring(L, "\x1b[49m");
  lua_setfield(L, -2, "orxANSI_KZ_COLOR_BG_DEFAULT");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_2D");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_DYNAMIC");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_HIGH_SPEED");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_FIXED_ROTATION");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_CAN_MOVE");
  lorx_orxU32_to_linteger(L, 0x00000020);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_FLAG_ALLOW_SLEEP");
  lorx_orxU32_to_linteger(L, 0xFFFFFFFF);
  lua_setfield(L, -2, "orxBODY_DEF_KU32_MASK_ALL");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_SPHERE");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_BOX");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_MESH");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_EDGE");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_CHAIN");
  lorx_orxU32_to_linteger(L, 0x0000001F);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_MASK_TYPE");
  lorx_orxU32_to_linteger(L, 0x10000000);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_FLAG_SOLID");
  lorx_orxU32_to_linteger(L, 0xFFFFFFFF);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_MASK_ALL");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_REVOLUTE");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_PRISMATIC");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_SPRING");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_ROPE");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_PULLEY");
  lorx_orxU32_to_linteger(L, 0x00000020);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_SUSPENSION");
  lorx_orxU32_to_linteger(L, 0x00000040);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_WELD");
  lorx_orxU32_to_linteger(L, 0x00000080);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_FRICTION");
  lorx_orxU32_to_linteger(L, 0x00000100);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_GEAR");
  lorx_orxU32_to_linteger(L, 0x00000FFF);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_MASK_TYPE");
  lorx_orxU32_to_linteger(L, 0x10000000);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_COLLIDE");
  lorx_orxU32_to_linteger(L, 0x20000000);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_ROTATION_LIMIT");
  lorx_orxU32_to_linteger(L, 0x40000000);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_MOTOR");
  lorx_orxU32_to_linteger(L, 0x80000000);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_FLAG_TRANSLATION_LIMIT");
  lorx_orxU32_to_linteger(L, 0xFFFFFFFF);
  lua_setfield(L, -2, "orxBODY_JOINT_DEF_KU32_MASK_ALL");
  lorx_orxU32_to_linteger(L, 8);
  lua_setfield(L, -2, "orxBODY_PART_DEF_KU32_MESH_VERTEX_NUMBER");
  lorx_orxSTRING_to_lstring(L, "Physics");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "Gravity");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_GRAVITY");
  lorx_orxSTRING_to_lstring(L, "AllowSleep");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_ALLOW_SLEEP");
  lorx_orxSTRING_to_lstring(L, "IterationsPerStep");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_ITERATIONS");
  lorx_orxSTRING_to_lstring(L, "DimensionRatio");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_RATIO");
  lorx_orxSTRING_to_lstring(L, "StepFrequency");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_STEP_FREQUENCY");
  lorx_orxSTRING_to_lstring(L, "ShowDebug");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_SHOW_DEBUG");
  lorx_orxSTRING_to_lstring(L, "CollisionFlagList");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_COLLISION_FLAG_LIST");
  lorx_orxSTRING_to_lstring(L, "Interpolate");
  lua_setfield(L, -2, "orxPHYSICS_KZ_CONFIG_INTERPOLATE");
  lorx_orxCHAR_to_lstring(L, '(');
  lua_setfield(L, -2, "orxSTRING_KC_VECTOR_START");
  lorx_orxCHAR_to_lstring(L, '{');
  lua_setfield(L, -2, "orxSTRING_KC_VECTOR_START_ALT");
  lorx_orxCHAR_to_lstring(L, ',');
  lua_setfield(L, -2, "orxSTRING_KC_VECTOR_SEPARATOR");
  lorx_orxCHAR_to_lstring(L, ')');
  lua_setfield(L, -2, "orxSTRING_KC_VECTOR_END");
  lorx_orxCHAR_to_lstring(L, '}');
  lua_setfield(L, -2, "orxSTRING_KC_VECTOR_END_ALT");
  lorx_orxSTRING_to_lstring(L, "SoundSystem");
  lua_setfield(L, -2, "orxSOUNDSYSTEM_KZ_CONFIG_SECTION");
  lorx_orxSTRING_to_lstring(L, "DimensionRatio");
  lua_setfield(L, -2, "orxSOUNDSYSTEM_KZ_CONFIG_RATIO");
  lorx_orxSTRING_to_lstring(L, "MuteInBackground");
  lua_setfield(L, -2, "orxSOUNDSYSTEM_KZ_CONFIG_MUTE_IN_BACKGROUND");
  lorx_orxSTRING_to_lstring(L, "Listeners");
  lua_setfield(L, -2, "orxSOUNDSYSTEM_KZ_CONFIG_LISTENERS");
  lorx_orxSTRING_to_lstring(L, "Sound");
  lua_setfield(L, -2, "orxSOUND_KZ_RESOURCE_GROUP");
  lorx_orxSTRING_to_lstring(L, "Sound");
  lua_setfield(L, -2, "orxSOUND_KZ_LOCALE_GROUP");
  lorx_orxSTRING_to_lstring(L, "master");
  lua_setfield(L, -2, "orxSOUND_KZ_MASTER_BUS");
  lorx_orxU32_to_linteger(L, 4);
  lua_setfield(L, -2, "orxSOUNDPOINTER_KU32_SOUND_NUMBER");
  lorx_orxU64_to_linteger(L, 0xDEFACED0DEADC0DEULL);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_MAGIC_TAG_DELETED");
  lorx_orxU64_to_linteger(L, 0x00000000000000FFULL);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_MASK_STRUCTURE_ID");
  lorx_orxU64_to_linteger(L, 0);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_SHIFT_STRUCTURE_ID");
  lorx_orxU64_to_linteger(L, 0x00000000FFFFFF00ULL);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_MASK_ITEM_ID");
  lorx_orxU64_to_linteger(L, 8);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_SHIFT_ITEM_ID");
  lorx_orxU64_to_linteger(L, 0xFFFFFFFF00000000ULL);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_MASK_INSTANCE_ID");
  lorx_orxU64_to_linteger(L, 32);
  lua_setfield(L, -2, "orxSTRUCTURE_GUID_SHIFT_INSTANCE_ID");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_AUTO_DELETE");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_AUTO_RESET");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_ALPHA");
  lorx_orxU32_to_linteger(L, 0x00000008);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_COLOR");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_ROTATION");
  lorx_orxU32_to_linteger(L, 0x00000020);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_SCALE");
  lorx_orxU32_to_linteger(L, 0x00000040);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_RELATIVE_SPEED_OBJECT");
  lorx_orxU32_to_linteger(L, 0x00000080);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_RELATIVE_SPEED_SPAWNER");
  lorx_orxU32_to_linteger(L, 0x000000C0);
  lua_setfield(L, -2, "orxSPAWNER_KU32_MASK_USE_RELATIVE_SPEED");
  lorx_orxU32_to_linteger(L, 0x00000100);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_USE_SELF_AS_PARENT");
  lorx_orxU32_to_linteger(L, 0x00000200);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_CLEAN_ON_DELETE");
  lorx_orxU32_to_linteger(L, 0x00000400);
  lua_setfield(L, -2, "orxSPAWNER_KU32_FLAG_INTERPOLATE");
  lorx_orxU32_to_linteger(L, 0x000004FF);
  lua_setfield(L, -2, "orxSPAWNER_KU32_MASK_USER_ALL");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_NONE");
  lorx_orxU32_to_linteger(L, 0x00000001);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_SCROLL_X");
  lorx_orxU32_to_linteger(L, 0x00000002);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_SCROLL_Y");
  lorx_orxU32_to_linteger(L, 0x00000003);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_SCROLL_BOTH");
  lorx_orxU32_to_linteger(L, 0x00000004);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_DEPTH_SCALE");
  lorx_orxU32_to_linteger(L, 0x00000010);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_FLIP_X");
  lorx_orxU32_to_linteger(L, 0x00000020);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_FLIP_Y");
  lorx_orxU32_to_linteger(L, 0x00000030);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_FLIP_BOTH");
  lorx_orxU32_to_linteger(L, 0x00000000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_NONE");
  lorx_orxU32_to_linteger(L, 0x00000100);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_ROTATION");
  lorx_orxU32_to_linteger(L, 0x00000200);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_SCALE_X");
  lorx_orxU32_to_linteger(L, 0x00000400);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_SCALE_Y");
  lorx_orxU32_to_linteger(L, 0x00000800);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_SCALE_Z");
  lorx_orxU32_to_linteger(L, 0x00000E00);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_IGNORE_SCALE");
  lorx_orxU32_to_linteger(L, 0x00001000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_ROTATION");
  lorx_orxU32_to_linteger(L, 0x00002000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_SCALE_X");
  lorx_orxU32_to_linteger(L, 0x00004000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_SCALE_Y");
  lorx_orxU32_to_linteger(L, 0x00008000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_SCALE_Z");
  lorx_orxU32_to_linteger(L, 0x0000E000);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_IGNORE_POSITION_SCALE");
  lorx_orxU32_to_linteger(L, 0x00010000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_POSITION_X");
  lorx_orxU32_to_linteger(L, 0x00020000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_POSITION_Y");
  lorx_orxU32_to_linteger(L, 0x00040000);
  lua_setfield(L, -2, "orxFRAME_KU32_FLAG_IGNORE_POSITION_POSITION_Z");
  lorx_orxU32_to_linteger(L, 0x00070000);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_IGNORE_POSITION_POSITION");
  lorx_orxU32_to_linteger(L, 0x0007F000);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_IGNORE_POSITION");
  lorx_orxU32_to_linteger(L, 0x0007FF00);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_IGNORE_ALL");
  lorx_orxU32_to_linteger(L, 0x0007FFFF);
  lua_setfield(L, -2, "orxFRAME_KU32_MASK_USER_ALL");
  lorx_orxU32_to_linteger(L, 8);
  lua_setfield(L, -2, "orxFXPOINTER_KU32_FX_NUMBER");
  lorx_orxSTRING_to_lstring(L, "default");
  lua_setfield(L, -2, "orxOBJECT_KZ_DEFAULT_GROUP");
  lorx_orxU32_to_linteger(L, 0x00000100);
  lua_setfield(L, -2, "orxFX_SLOT_KU32_FLAG_ABSOLUTE");
  lorx_orxU32_to_linteger(L, 0x00000200);
  lua_setfield(L, -2, "orxFX_SLOT_KU32_FLAG_USE_ROTATION");
  lorx_orxU32_to_linteger(L, 0x00000400);
  lua_setfield(L, -2, "orxFX_SLOT_KU32_FLAG_USE_SCALE");
  lorx_orxU64_to_linteger(L, (orxU64)(-1));
  lua_setfield(L, -2, "orxU64_UNDEFINED");
  lorx_orxU32_to_linteger(L, (orxU32)(-1));
  lua_setfield(L, -2, "orxU32_UNDEFINED");
  lorx_orxU16_to_linteger(L, (orxU16)(-1));
  lua_setfield(L, -2, "orxU16_UNDEFINED");
  lorx_orxU8_to_linteger(L, (orxU8)(-1));
  lua_setfield(L, -2, "orxU8_UNDEFINED");
  lorx_orxHANDLE_to_luserdata(L, (orxHANDLE)(-1));
  lua_setfield(L, -2, "orxHANDLE_UNDEFINED");
  lorx_orxSTRINGID_to_linteger(L, (orxSTRINGID)(-1));
  lua_setfield(L, -2, "orxSTRINGID_UNDEFINED");

  lua_pushvalue(L, -1);
  lua_setfield(L, -3, "constants");
  lua_remove(L, -2);

  return 1;
}



// Sub-module: file
static const struct luaL_Reg l_lorx_file[] = {
  { "setup", l_File_Setup },
  { "init", l_File_Init },
  { "exit", l_File_Exit },
  { "getHomeDirectory", l_File_GetHomeDirectory },
  { "getApplicationSaveDirectory", l_File_GetApplicationSaveDirectory },
  { "exists", l_File_Exists },
  { "findFirst", l_File_FindFirst },
  { "getInfo", l_File_GetInfo },
  { "remove", l_File_Remove },
  { "makeDirectory", l_File_MakeDirectory },
  { "open", l_File_Open },
  { "read", l_File_Read },
  { "write", l_File_Write },
  { "delete", l_File_Delete },
  { "fileInfo", l_lorx_orxFILE_INFO_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_file(lua_State *L)
{
  return lorx_register_submodule(L, "file", l_lorx_file);
}


// Sub-module: mouse
static const struct luaL_Reg l_lorx_mouse[] = {
  { "setup", l_Mouse_Setup },
  { "init", l_Mouse_Init },
  { "exit", l_Mouse_Exit },
  { "setPosition", l_Mouse_SetPosition },
  { "getPosition", l_Mouse_GetPosition },
  { "isButtonPressed", l_Mouse_IsButtonPressed },
  { "getMoveDelta", l_Mouse_GetMoveDelta },
  { "getWheelDelta", l_Mouse_GetWheelDelta },
  { "showCursor", l_Mouse_ShowCursor },
  { "grab", l_Mouse_Grab },
  { "setCursor", l_Mouse_SetCursor },
  { "getButtonName", l_Mouse_GetButtonName },
  { "getAxisName", l_Mouse_GetAxisName },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_mouse(lua_State *L)
{
  return lorx_register_submodule(L, "mouse", l_lorx_mouse);
}


// Sub-module: joystick
static const struct luaL_Reg l_lorx_joystick[] = {
  { "setup", l_Joystick_Setup },
  { "init", l_Joystick_Init },
  { "exit", l_Joystick_Exit },
  { "getAxisValue", l_Joystick_GetAxisValue },
  { "isButtonPressed", l_Joystick_IsButtonPressed },
  { "getButtonName", l_Joystick_GetButtonName },
  { "getAxisName", l_Joystick_GetAxisName },
  { "isConnected", l_Joystick_IsConnected },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_joystick(lua_State *L)
{
  return lorx_register_submodule(L, "joystick", l_lorx_joystick);
}


// Sub-module: keyboard
static const struct luaL_Reg l_lorx_keyboard[] = {
  { "setup", l_Keyboard_Setup },
  { "init", l_Keyboard_Init },
  { "exit", l_Keyboard_Exit },
  { "isKeyPressed", l_Keyboard_IsKeyPressed },
  { "getKeyDisplayName", l_Keyboard_GetKeyDisplayName },
  { "readKey", l_Keyboard_ReadKey },
  { "readString", l_Keyboard_ReadString },
  { "clearBuffer", l_Keyboard_ClearBuffer },
  { "getKeyName", l_Keyboard_GetKeyName },
  { "show", l_Keyboard_Show },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_keyboard(lua_State *L)
{
  return lorx_register_submodule(L, "keyboard", l_lorx_keyboard);
}


// Sub-module: input
static const struct luaL_Reg l_lorx_input[] = {
  { "setup", l_Input_Setup },
  { "init", l_Input_Init },
  { "exit", l_Input_Exit },
  { "load", l_Input_Load },
  { "save", l_Input_Save },
  { "selectSet", l_Input_SelectSet },
  { "getCurrentSet", l_Input_GetCurrentSet },
  { "removeSet", l_Input_RemoveSet },
  { "enableSet", l_Input_EnableSet },
  { "isSetEnabled", l_Input_IsSetEnabled },
  { "setTypeFlags", l_Input_SetTypeFlags },
  { "isActive", l_Input_IsActive },
  { "hasBeenActivated", l_Input_HasBeenActivated },
  { "hasBeenDeactivated", l_Input_HasBeenDeactivated },
  { "hasNewStatus", l_Input_HasNewStatus },
  { "getValue", l_Input_GetValue },
  { "setValue", l_Input_SetValue },
  { "setPermanentValue", l_Input_SetPermanentValue },
  { "resetValue", l_Input_ResetValue },
  { "getThreshold", l_Input_GetThreshold },
  { "setThreshold", l_Input_SetThreshold },
  { "getMultiplier", l_Input_GetMultiplier },
  { "setMultiplier", l_Input_SetMultiplier },
  { "setCombineMode", l_Input_SetCombineMode },
  { "isInCombineMode", l_Input_IsInCombineMode },
  { "bind", l_Input_Bind },
  { "unbind", l_Input_Unbind },
  { "getBoundInputCount", l_Input_GetBoundInputCount },
  { "getBoundInput", l_Input_GetBoundInput },
  { "getBinding", l_Input_GetBinding },
  { "getBindingList", l_Input_GetBindingList },
  { "getBindingName", l_Input_GetBindingName },
  { "getBindingType", l_Input_GetBindingType },
  { "getActiveBinding", l_Input_GetActiveBinding },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_input(lua_State *L)
{
  return lorx_register_submodule(L, "input", l_lorx_input);
}


// Sub-module: profiler
static const struct luaL_Reg l_lorx_profiler[] = {
  { "setup", l_Profiler_Setup },
  { "init", l_Profiler_Init },
  { "exit", l_Profiler_Exit },
  { "getIDFromName", l_Profiler_GetIDFromName },
  { "isMarkerIDValid", l_Profiler_IsMarkerIDValid },
  { "pushMarker", l_Profiler_PushMarker },
  { "popMarker", l_Profiler_PopMarker },
  { "enableMarkerOperations", l_Profiler_EnableMarkerOperations },
  { "areMarkerOperationsEnabled", l_Profiler_AreMarkerOperationsEnabled },
  { "pause", l_Profiler_Pause },
  { "isPaused", l_Profiler_IsPaused },
  { "resetAllMarkers", l_Profiler_ResetAllMarkers },
  { "resetAllMaxima", l_Profiler_ResetAllMaxima },
  { "getResetTime", l_Profiler_GetResetTime },
  { "getMaxResetTime", l_Profiler_GetMaxResetTime },
  { "getMarkerCount", l_Profiler_GetMarkerCount },
  { "getNextMarkerID", l_Profiler_GetNextMarkerID },
  { "getNextSortedMarkerID", l_Profiler_GetNextSortedMarkerID },
  { "selectQueryFrame", l_Profiler_SelectQueryFrame },
  { "getMarkerTime", l_Profiler_GetMarkerTime },
  { "getMarkerMaxTime", l_Profiler_GetMarkerMaxTime },
  { "getMarkerName", l_Profiler_GetMarkerName },
  { "getMarkerPushCount", l_Profiler_GetMarkerPushCount },
  { "isUniqueMarker", l_Profiler_IsUniqueMarker },
  { "getUniqueMarkerStartTime", l_Profiler_GetUniqueMarkerStartTime },
  { "getUniqueMarkerDepth", l_Profiler_GetUniqueMarkerDepth },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_profiler(lua_State *L)
{
  return lorx_register_submodule(L, "profiler", l_lorx_profiler);
}


// Sub-module: fps
static const struct luaL_Reg l_lorx_fps[] = {
  { "setup", l_FPS_Setup },
  { "init", l_FPS_Init },
  { "exit", l_FPS_Exit },
  { "increaseFrameCount", l_FPS_IncreaseFrameCount },
  { "getFPS", l_FPS_GetFPS },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_fps(lua_State *L)
{
  return lorx_register_submodule(L, "fps", l_lorx_fps);
}


// Sub-module: debug
static const struct luaL_Reg l_lorx_debug[] = {
  { "init", l__orxDebug_Init },
  { "exit", l__orxDebug_Exit },
  { "log", l__orxDebug_Log },
  { "enableLevel", l__orxDebug_EnableLevel },
  { "isLevelEnabled", l__orxDebug_IsLevelEnabled },
  { "setFlags", l__orxDebug_SetFlags },
  { "getFlags", l__orxDebug_GetFlags },
  { "_break", l__orxDebug_Break },
  { "setDebugFile", l__orxDebug_SetDebugFile },
  { "setLogFile", l__orxDebug_SetLogFile },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_debug(lua_State *L)
{
  return lorx_register_submodule(L, "debug", l_lorx_debug);
}


// Sub-module: command
static const struct luaL_Reg l_lorx_command[] = {
  { "setup", l_Command_Setup },
  { "init", l_Command_Init },
  { "exit", l_Command_Exit },
  { "unregister", l_Command_Unregister },
  { "isRegistered", l_Command_IsRegistered },
  { "addAlias", l_Command_AddAlias },
  { "removeAlias", l_Command_RemoveAlias },
  { "isAlias", l_Command_IsAlias },
  { "getPrototype", l_Command_GetPrototype },
  { "getNext", l_Command_GetNext },
  { "evaluate", l_Command_Evaluate },
  { "evaluateWithGUID", l_Command_EvaluateWithGUID },
  { "execute", l_Command_Execute },
  { "parseNumericalArguments", l_Command_ParseNumericalArguments },
  { "commandVar", l_lorx_orxCOMMAND_VAR_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_command(lua_State *L)
{
  return lorx_register_submodule(L, "command", l_lorx_command);
}


// Sub-module: thread
static const struct luaL_Reg l_lorx_thread[] = {
  { "setup", l_Thread_Setup },
  { "init", l_Thread_Init },
  { "exit", l_Thread_Exit },
  { "join", l_Thread_Join },
  { "joinAll", l_Thread_JoinAll },
  { "getName", l_Thread_GetName },
  { "enable", l_Thread_Enable },
  { "getCurrent", l_Thread_GetCurrent },
  { "yield", l_Thread_Yield },
  { "createSemaphore", l_Thread_CreateSemaphore },
  { "getTaskCount", l_Thread_GetTaskCount },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_thread(lua_State *L)
{
  return lorx_register_submodule(L, "thread", l_lorx_thread);
}


// Sub-module: system
static const struct luaL_Reg l_lorx_system[] = {
  { "setup", l_System_Setup },
  { "init", l_System_Init },
  { "exit", l_System_Exit },
  { "getTime", l_System_GetTime },
  { "getRealTime", l_System_GetRealTime },
  { "getSystemTime", l_System_GetSystemTime },
  { "delay", l_System_Delay },
  { "getVersionString", l_System_GetVersionString },
  { "getVersionFullString", l_System_GetVersionFullString },
  { "getVersionNumeric", l_System_GetVersionNumeric },
  { "getClipboard", l_System_GetClipboard },
  { "setClipboard", l_System_SetClipboard },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_system(lua_State *L)
{
  return lorx_register_submodule(L, "system", l_lorx_system);
}


// Sub-module: locale
static const struct luaL_Reg l_lorx_locale[] = {
  { "setup", l_Locale_Setup },
  { "init", l_Locale_Init },
  { "exit", l_Locale_Exit },
  { "selectLanguage", l_Locale_SelectLanguage },
  { "getCurrentLanguage", l_Locale_GetCurrentLanguage },
  { "hasLanguage", l_Locale_HasLanguage },
  { "getLanguageCount", l_Locale_GetLanguageCount },
  { "getLanguage", l_Locale_GetLanguage },
  { "hasString", l_Locale_HasString },
  { "getString", l_Locale_GetString },
  { "setString", l_Locale_SetString },
  { "getKeyCount", l_Locale_GetKeyCount },
  { "getKey", l_Locale_GetKey },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_locale(lua_State *L)
{
  return lorx_register_submodule(L, "locale", l_lorx_locale);
}


// Sub-module: config
static const struct luaL_Reg l_lorx_config[] = {
  { "setup", l_Config_Setup },
  { "init", l_Config_Init },
  { "exit", l_Config_Exit },
  { "setEncryptionKey", l_Config_SetEncryptionKey },
  { "getEncryptionKey", l_Config_GetEncryptionKey },
  { "setBaseName", l_Config_SetBaseName },
  { "getMainFileName", l_Config_GetMainFileName },
  { "load", l_Config_Load },
  { "loadFromMemory", l_Config_LoadFromMemory },
  { "reloadHistory", l_Config_ReloadHistory },
  { "copyFile", l_Config_CopyFile },
  { "mergeFiles", l_Config_MergeFiles },
  { "selectSection", l_Config_SelectSection },
  { "renameSection", l_Config_RenameSection },
  { "getOrigin", l_Config_GetOrigin },
  { "getOriginID", l_Config_GetOriginID },
  { "setParent", l_Config_SetParent },
  { "getParent", l_Config_GetParent },
  { "setDefaultParent", l_Config_SetDefaultParent },
  { "getCurrentSection", l_Config_GetCurrentSection },
  { "pushSection", l_Config_PushSection },
  { "popSection", l_Config_PopSection },
  { "hasSection", l_Config_HasSection },
  { "protectSection", l_Config_ProtectSection },
  { "getSectionCount", l_Config_GetSectionCount },
  { "getSection", l_Config_GetSection },
  { "clearSection", l_Config_ClearSection },
  { "clearValue", l_Config_ClearValue },
  { "isLocallyInheritedValue", l_Config_IsLocallyInheritedValue },
  { "isInheritedValue", l_Config_IsInheritedValue },
  { "isRandomValue", l_Config_IsRandomValue },
  { "isDynamicValue", l_Config_IsDynamicValue },
  { "isCommandValue", l_Config_IsCommandValue },
  { "hasValue", l_Config_HasValue },
  { "getValueSource", l_Config_GetValueSource },
  { "getS32", l_Config_GetS32 },
  { "getU32", l_Config_GetU32 },
  { "getS64", l_Config_GetS64 },
  { "getU64", l_Config_GetU64 },
  { "getFloat", l_Config_GetFloat },
  { "getString", l_Config_GetString },
  { "getBool", l_Config_GetBool },
  { "getVector", l_Config_GetVector },
  { "duplicateRawValue", l_Config_DuplicateRawValue },
  { "setS32", l_Config_SetS32 },
  { "setU32", l_Config_SetU32 },
  { "setS64", l_Config_SetS64 },
  { "setU64", l_Config_SetU64 },
  { "setFloat", l_Config_SetFloat },
  { "setString", l_Config_SetString },
  { "setStringBlock", l_Config_SetStringBlock },
  { "setBool", l_Config_SetBool },
  { "setVector", l_Config_SetVector },
  { "isList", l_Config_IsList },
  { "getListCount", l_Config_GetListCount },
  { "getListS32", l_Config_GetListS32 },
  { "getListU32", l_Config_GetListU32 },
  { "getListS64", l_Config_GetListS64 },
  { "getListU64", l_Config_GetListU64 },
  { "getListFloat", l_Config_GetListFloat },
  { "getListString", l_Config_GetListString },
  { "getListBool", l_Config_GetListBool },
  { "getListVector", l_Config_GetListVector },
  { "setListString", l_Config_SetListString },
  { "appendListString", l_Config_AppendListString },
  { "getKeyCount", l_Config_GetKeyCount },
  { "getKey", l_Config_GetKey },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_config(lua_State *L)
{
  return lorx_register_submodule(L, "config", l_lorx_config);
}


// Sub-module: clock
static const struct luaL_Reg l_lorx_clock[] = {
  { "setup", l_Clock_Setup },
  { "init", l_Clock_Init },
  { "exit", l_Clock_Exit },
  { "update", l_Clock_Update },
  { "create", l_Clock_Create },
  { "createFromConfig", l_Clock_CreateFromConfig },
  { "resyncAll", l_Clock_ResyncAll },
  { "getFromInfo", l_Clock_GetFromInfo },
  { "get", l_Clock_Get },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_clock(lua_State *L)
{
  return lorx_register_submodule(L, "clock", l_lorx_clock);
}


// Sub-module: resource
static const struct luaL_Reg l_lorx_resource[] = {
  { "setup", l_Resource_Setup },
  { "init", l_Resource_Init },
  { "exit", l_Resource_Exit },
  { "getGroupCount", l_Resource_GetGroupCount },
  { "getGroup", l_Resource_GetGroup },
  { "addStorage", l_Resource_AddStorage },
  { "removeStorage", l_Resource_RemoveStorage },
  { "getStorageCount", l_Resource_GetStorageCount },
  { "getStorage", l_Resource_GetStorage },
  { "reloadStorage", l_Resource_ReloadStorage },
  { "locate", l_Resource_Locate },
  { "locateInStorage", l_Resource_LocateInStorage },
  { "getPath", l_Resource_GetPath },
  { "getTime", l_Resource_GetTime },
  { "open", l_Resource_Open },
  { "close", l_Resource_Close },
  { "getLocation", l_Resource_GetLocation },
  { "getSize", l_Resource_GetSize },
  { "seek", l_Resource_Seek },
  { "tell", l_Resource_Tell },
  { "delete", l_Resource_Delete },
  { "getPendingOpCount", l_Resource_GetPendingOpCount },
  { "getTotalPendingOpCount", l_Resource_GetTotalPendingOpCount },
  { "getTypeCount", l_Resource_GetTypeCount },
  { "getTypeTag", l_Resource_GetTypeTag },
  { "sync", l_Resource_Sync },
  { "clearCache", l_Resource_ClearCache },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_resource(lua_State *L)
{
  return lorx_register_submodule(L, "resource", l_lorx_resource);
}


// Sub-module: event
static const struct luaL_Reg l_lorx_event[] = {
  { "setup", l_Event_Setup },
  { "init", l_Event_Init },
  { "exit", l_Event_Exit },
  { "sendShort", l_Event_SendShort },
  { "isSending", l_Event_IsSending },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_event(lua_State *L)
{
  return lorx_register_submodule(L, "event", l_lorx_event);
}


// Sub-module: console
static const struct luaL_Reg l_lorx_console[] = {
  { "setup", l_Console_Setup },
  { "init", l_Console_Init },
  { "exit", l_Console_Exit },
  { "enable", l_Console_Enable },
  { "isEnabled", l_Console_IsEnabled },
  { "isInsertMode", l_Console_IsInsertMode },
  { "setToggle", l_Console_SetToggle },
  { "log", l_Console_Log },
  { "setFont", l_Console_SetFont },
  { "getFontConst", l_Console_GetFont },
  { "setLogLineLength", l_Console_SetLogLineLength },
  { "getLogLineLength", l_Console_GetLogLineLength },
  { "getCompletionCount", l_Console_GetCompletionCount },
  { "getCompletion", l_Console_GetCompletion },
  { "getTrailLogLine", l_Console_GetTrailLogLine },
  { "getTrailLogLineOffset", l_Console_GetTrailLogLineOffset },
  { "getInput", l_Console_GetInput },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_console(lua_State *L)
{
  return lorx_register_submodule(L, "console", l_lorx_console);
}


// Sub-module: animpointer
static const struct luaL_Reg l_lorx_animpointer[] = {
  { "setup", l_AnimPointer_Setup },
  { "init", l_AnimPointer_Init },
  { "exit", l_AnimPointer_Exit },
  { "create", l_AnimPointer_Create },
  { "createFromConfig", l_AnimPointer_CreateFromConfig },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_animpointer(lua_State *L)
{
  return lorx_register_submodule(L, "animpointer", l_lorx_animpointer);
}


// Sub-module: animset
static const struct luaL_Reg l_lorx_animset[] = {
  { "setup", l_AnimSet_Setup },
  { "init", l_AnimSet_Init },
  { "exit", l_AnimSet_Exit },
  { "create", l_AnimSet_Create },
  { "createFromConfig", l_AnimSet_CreateFromConfig },
  { "clearCache", l_AnimSet_ClearCache },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_animset(lua_State *L)
{
  return lorx_register_submodule(L, "animset", l_lorx_animset);
}


// Sub-module: anim
static const struct luaL_Reg l_lorx_anim[] = {
  { "setup", l_Anim_Setup },
  { "init", l_Anim_Init },
  { "exit", l_Anim_Exit },
  { "create", l_Anim_Create },
  { "animCustomEvent", l_lorx_orxANIM_CUSTOM_EVENT_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_anim(lua_State *L)
{
  return lorx_register_submodule(L, "anim", l_lorx_anim);
}


// Sub-module: shaderpointer
static const struct luaL_Reg l_lorx_shaderpointer[] = {
  { "setup", l_ShaderPointer_Setup },
  { "init", l_ShaderPointer_Init },
  { "exit", l_ShaderPointer_Exit },
  { "create", l_ShaderPointer_Create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_shaderpointer(lua_State *L)
{
  return lorx_register_submodule(L, "shaderpointer", l_lorx_shaderpointer);
}


// Sub-module: shader
static const struct luaL_Reg l_lorx_shader[] = {
  { "setup", l_Shader_Setup },
  { "init", l_Shader_Init },
  { "exit", l_Shader_Exit },
  { "create", l_Shader_Create },
  { "createFromConfig", l_Shader_CreateFromConfig },
  { "clearCache", l_Shader_ClearCache },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_shader(lua_State *L)
{
  return lorx_register_submodule(L, "shader", l_lorx_shader);
}


// Sub-module: viewport
static const struct luaL_Reg l_lorx_viewport[] = {
  { "setup", l_Viewport_Setup },
  { "init", l_Viewport_Init },
  { "exit", l_Viewport_Exit },
  { "create", l_Viewport_Create },
  { "createFromConfig", l_Viewport_CreateFromConfig },
  { "get", l_Viewport_Get },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_viewport(lua_State *L)
{
  return lorx_register_submodule(L, "viewport", l_lorx_viewport);
}


// Sub-module: camera
static const struct luaL_Reg l_lorx_camera[] = {
  { "setup", l_Camera_Setup },
  { "init", l_Camera_Init },
  { "exit", l_Camera_Exit },
  { "create", l_Camera_Create },
  { "createFromConfig", l_Camera_CreateFromConfig },
  { "get", l_Camera_Get },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_camera(lua_State *L)
{
  return lorx_register_submodule(L, "camera", l_lorx_camera);
}


// Sub-module: render
static const struct luaL_Reg l_lorx_render[] = {
  { "setup", l_Render_Setup },
  { "init", l_Render_Init },
  { "exit", l_Render_Exit },
  { "getWorldPosition", l_Render_GetWorldPosition },
  { "getScreenPosition", l_Render_GetScreenPosition },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_render(lua_State *L)
{
  return lorx_register_submodule(L, "render", l_lorx_render);
}


// Sub-module: math
static const struct luaL_Reg l_lorx_math[] = {
  { "initRandom", l_Math_InitRandom },
  { "getRandomFloat", l_Math_GetRandomFloat },
  { "getSteppedRandomFloat", l_Math_GetSteppedRandomFloat },
  { "getRandomU32", l_Math_GetRandomU32 },
  { "getSteppedRandomU32", l_Math_GetSteppedRandomU32 },
  { "getRandomS32", l_Math_GetRandomS32 },
  { "getSteppedRandomS32", l_Math_GetSteppedRandomS32 },
  { "getRandomU64", l_Math_GetRandomU64 },
  { "getSteppedRandomU64", l_Math_GetSteppedRandomU64 },
  { "getRandomS64", l_Math_GetRandomS64 },
  { "getSteppedRandomS64", l_Math_GetSteppedRandomS64 },
  { "getRandomSeeds", l_Math_GetRandomSeeds },
  { "setRandomSeeds", l_Math_SetRandomSeeds },
  { "getBitCount", l_Math_GetBitCount },
  { "getTrailingZeroCount", l_Math_GetTrailingZeroCount },
  { "getTrailingZeroCount64", l_Math_GetTrailingZeroCount64 },
  { "isPowerOfTwo", l_Math_IsPowerOfTwo },
  { "getNextPowerOfTwo", l_Math_GetNextPowerOfTwo },
  { "smoothStep", l_Math_SmoothStep },
  { "smootherStep", l_Math_SmootherStep },
  { "sin", l_Math_Sin },
  { "cos", l_Math_Cos },
  { "tan", l_Math_Tan },
  { "aCos", l_Math_ACos },
  { "aSin", l_Math_ASin },
  { "aTan", l_Math_ATan },
  { "sqrt", l_Math_Sqrt },
  { "floor", l_Math_Floor },
  { "ceil", l_Math_Ceil },
  { "round", l_Math_Round },
  { "mod", l_Math_Mod },
  { "pow", l_Math_Pow },
  { "abs", l_Math_Abs },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_math(lua_State *L)
{
  return lorx_register_submodule(L, "math", l_lorx_math);
}


// Sub-module: display
static const struct luaL_Reg l_lorx_display[] = {
  { "setup", l_Display_Setup },
  { "getBlendModeFromString", l_Display_GetBlendModeFromString },
  { "init", l_Display_Init },
  { "exit", l_Display_Exit },
  { "swap", l_Display_Swap },
  { "getScreenBitmap", l_Display_GetScreenBitmap },
  { "getScreenSize", l_Display_GetScreenSize },
  { "createBitmap", l_Display_CreateBitmap },
  { "loadBitmap", l_Display_LoadBitmap },
  { "setTempBitmap", l_Display_SetTempBitmap },
  { "getTempBitmapConst", l_Display_GetTempBitmap },
  { "setDestinationBitmaps", l_Display_SetDestinationBitmaps },
  { "clearBitmap", l_Display_ClearBitmap },
  { "setBlendMode", l_Display_SetBlendMode },
  { "setBitmapClipping", l_Display_SetBitmapClipping },
  { "transformBitmap", l_Display_TransformBitmap },
  { "transformText", l_Display_TransformText },
  { "drawLine", l_Display_DrawLine },
  { "drawPolyline", l_Display_DrawPolyline },
  { "drawPolygon", l_Display_DrawPolygon },
  { "drawCircle", l_Display_DrawCircle },
  { "drawOBox", l_Display_DrawOBox },
  { "drawMesh", l_Display_DrawMesh },
  { "hasShaderSupport", l_Display_HasShaderSupport },
  { "deleteShader", l_Display_DeleteShader },
  { "startShader", l_Display_StartShader },
  { "stopShader", l_Display_StopShader },
  { "getParameterID", l_Display_GetParameterID },
  { "setShaderBitmap", l_Display_SetShaderBitmap },
  { "setShaderFloat", l_Display_SetShaderFloat },
  { "setShaderVector", l_Display_SetShaderVector },
  { "getShaderID", l_Display_GetShaderID },
  { "enableVSync", l_Display_EnableVSync },
  { "isVSyncEnabled", l_Display_IsVSyncEnabled },
  { "setFullScreen", l_Display_SetFullScreen },
  { "isFullScreen", l_Display_IsFullScreen },
  { "getVideoModeCount", l_Display_GetVideoModeCount },
  { "getVideoMode", l_Display_GetVideoMode },
  { "setVideoMode", l_Display_SetVideoMode },
  { "isVideoModeAvailable", l_Display_IsVideoModeAvailable },
  { "rgbaSet", l_RGBA_Set },
  { "rgba", l_lorx_orxRGBA_create },
  { "displayTransform", l_lorx_orxDISPLAY_TRANSFORM_create },
  { "displayVideoMode", l_lorx_orxDISPLAY_VIDEO_MODE_create },
  { "characterGlyph", l_lorx_orxCHARACTER_GLYPH_create },
  { "color", l_lorx_orxCOLOR_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_display(lua_State *L)
{
  return lorx_register_submodule(L, "display", l_lorx_display);
}


// Sub-module: screenshot
static const struct luaL_Reg l_lorx_screenshot[] = {
  { "setup", l_Screenshot_Setup },
  { "init", l_Screenshot_Init },
  { "exit", l_Screenshot_Exit },
  { "capture", l_Screenshot_Capture },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_screenshot(lua_State *L)
{
  return lorx_register_submodule(L, "screenshot", l_lorx_screenshot);
}


// Sub-module: font
static const struct luaL_Reg l_lorx_font[] = {
  { "setup", l_Font_Setup },
  { "init", l_Font_Init },
  { "exit", l_Font_Exit },
  { "create", l_Font_Create },
  { "createFromConfig", l_Font_CreateFromConfig },
  { "getDefaultFontConst", l_Font_GetDefaultFont },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_font(lua_State *L)
{
  return lorx_register_submodule(L, "font", l_lorx_font);
}


// Sub-module: texture
static const struct luaL_Reg l_lorx_texture[] = {
  { "setup", l_Texture_Setup },
  { "init", l_Texture_Init },
  { "exit", l_Texture_Exit },
  { "create", l_Texture_Create },
  { "createFromFile", l_Texture_CreateFromFile },
  { "clearCache", l_Texture_ClearCache },
  { "get", l_Texture_Get },
  { "getScreenTexture", l_Texture_GetScreenTexture },
  { "getLoadCount", l_Texture_GetLoadCount },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_texture(lua_State *L)
{
  return lorx_register_submodule(L, "texture", l_lorx_texture);
}


// Sub-module: text
static const struct luaL_Reg l_lorx_text[] = {
  { "setup", l_Text_Setup },
  { "init", l_Text_Init },
  { "exit", l_Text_Exit },
  { "create", l_Text_Create },
  { "createFromConfig", l_Text_CreateFromConfig },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_text(lua_State *L)
{
  return lorx_register_submodule(L, "text", l_lorx_text);
}


// Sub-module: graphic
static const struct luaL_Reg l_lorx_graphic[] = {
  { "setup", l_Graphic_Setup },
  { "init", l_Graphic_Init },
  { "exit", l_Graphic_Exit },
  { "getAlignFlags", l_Graphic_GetAlignFlags },
  { "alignVector", l_Graphic_AlignVector },
  { "create", l_Graphic_Create },
  { "createFromConfig", l_Graphic_CreateFromConfig },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_graphic(lua_State *L)
{
  return lorx_register_submodule(L, "graphic", l_lorx_graphic);
}


// Sub-module: module
static const struct luaL_Reg l_lorx_module[] = {
  { "addDependency", l_Module_AddDependency },
  { "addOptionalDependency", l_Module_AddOptionalDependency },
  { "init", l_Module_Init },
  { "exit", l_Module_Exit },
  { "isInitialized", l_Module_IsInitialized },
  { "getName", l_Module_GetName },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_module(lua_State *L)
{
  return lorx_register_submodule(L, "module", l_lorx_module);
}


// Sub-module: body
static const struct luaL_Reg l_lorx_body[] = {
  { "setup", l_Body_Setup },
  { "init", l_Body_Init },
  { "exit", l_Body_Exit },
  { "createFromConfig", l_Body_CreateFromConfig },
  { "raycast", l_Body_Raycast },
  { "boxPick", l_Body_BoxPick },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_body(lua_State *L)
{
  return lorx_register_submodule(L, "body", l_lorx_body);
}


// Sub-module: physics
static const struct luaL_Reg l_lorx_physics[] = {
  { "setup", l_Physics_Setup },
  { "getCollisionFlagName", l_Physics_GetCollisionFlagName },
  { "getCollisionFlagValue", l_Physics_GetCollisionFlagValue },
  { "init", l_Physics_Init },
  { "exit", l_Physics_Exit },
  { "setGravity", l_Physics_SetGravity },
  { "getGravity", l_Physics_GetGravity },
  { "raycast", l_Physics_Raycast },
  { "boxPick", l_Physics_BoxPick },
  { "enableSimulation", l_Physics_EnableSimulation },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_physics(lua_State *L)
{
  return lorx_register_submodule(L, "physics", l_lorx_physics);
}


// Sub-module: string
static const struct luaL_Reg l_lorx_string[] = {
  { "setup", l_String_Setup },
  { "init", l_String_Init },
  { "exit", l_String_Exit },
  { "nHash", l_String_NHash },
  { "hash", l_String_Hash },
  { "getID", l_String_GetID },
  { "getFromID", l_String_GetFromID },
  { "store", l_String_Store },
  { "skipWhiteSpaces", l_String_SkipWhiteSpaces },
  { "skipPath", l_String_SkipPath },
  { "getLength", l_String_GetLength },
  { "isCharacterASCII", l_String_IsCharacterASCII },
  { "isCharacterAlphaNumeric", l_String_IsCharacterAlphaNumeric },
  { "getUTF8CharacterLength", l_String_GetUTF8CharacterLength },
  { "getFirstCharacterCodePoint", l_String_GetFirstCharacterCodePoint },
  { "getCharacterCount", l_String_GetCharacterCount },
  { "duplicate", l_String_Duplicate },
  { "compare", l_String_Compare },
  { "nCompare", l_String_NCompare },
  { "iCompare", l_String_ICompare },
  { "nICompare", l_String_NICompare },
  { "extractBase", l_String_ExtractBase },
  { "toS32Base", l_String_ToS32Base },
  { "toS32", l_String_ToS32 },
  { "toU32Base", l_String_ToU32Base },
  { "toU32", l_String_ToU32 },
  { "toS64Base", l_String_ToS64Base },
  { "toS64", l_String_ToS64 },
  { "toU64Base", l_String_ToU64Base },
  { "toU64", l_String_ToU64 },
  { "toFloat", l_String_ToFloat },
  { "toVector", l_String_ToVector },
  { "toBool", l_String_ToBool },
  { "searchString", l_String_SearchString },
  { "searchChar", l_String_SearchChar },
  { "searchCharIndex", l_String_SearchCharIndex },
  { "scan", l_String_Scan },
  { "getExtension", l_String_GetExtension },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_string(lua_State *L)
{
  return lorx_register_submodule(L, "string", l_lorx_string);
}


// Sub-module: soundsystem
static const struct luaL_Reg l_lorx_soundsystem[] = {
  { "setup", l_SoundSystem_Setup },
  { "init", l_SoundSystem_Init },
  { "exit", l_SoundSystem_Exit },
  { "createSample", l_SoundSystem_CreateSample },
  { "loadSample", l_SoundSystem_LoadSample },
  { "createFromSample", l_SoundSystem_CreateFromSample },
  { "createStream", l_SoundSystem_CreateStream },
  { "createStreamFromFile", l_SoundSystem_CreateStreamFromFile },
  { "createBus", l_SoundSystem_CreateBus },
  { "deleteBus", l_SoundSystem_DeleteBus },
  { "setBusParent", l_SoundSystem_SetBusParent },
  { "addBusFilter", l_SoundSystem_AddBusFilter },
  { "removeLastBusFilter", l_SoundSystem_RemoveLastBusFilter },
  { "removeAllBusFilters", l_SoundSystem_RemoveAllBusFilters },
  { "startRecording", l_SoundSystem_StartRecording },
  { "stopRecording", l_SoundSystem_StopRecording },
  { "hasRecordingSupport", l_SoundSystem_HasRecordingSupport },
  { "setGlobalVolume", l_SoundSystem_SetGlobalVolume },
  { "getGlobalVolume", l_SoundSystem_GetGlobalVolume },
  { "getListenerCount", l_SoundSystem_GetListenerCount },
  { "enableListener", l_SoundSystem_EnableListener },
  { "isListenerEnabled", l_SoundSystem_IsListenerEnabled },
  { "setListenerPosition", l_SoundSystem_SetListenerPosition },
  { "getListenerPosition", l_SoundSystem_GetListenerPosition },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_soundsystem(lua_State *L)
{
  return lorx_register_submodule(L, "soundsystem", l_lorx_soundsystem);
}


// Sub-module: sound
static const struct luaL_Reg l_lorx_sound[] = {
  { "setup", l_Sound_Setup },
  { "init", l_Sound_Init },
  { "exit", l_Sound_Exit },
  { "create", l_Sound_Create },
  { "createFromConfig", l_Sound_CreateFromConfig },
  { "createWithEmptyStream", l_Sound_CreateWithEmptyStream },
  { "clearCache", l_Sound_ClearCache },
  { "createSample", l_Sound_CreateSample },
  { "getSample", l_Sound_GetSample },
  { "deleteSample", l_Sound_DeleteSample },
  { "startRecording", l_Sound_StartRecording },
  { "stopRecording", l_Sound_StopRecording },
  { "hasRecordingSupport", l_Sound_HasRecordingSupport },
  { "getMasterBusID", l_Sound_GetMasterBusID },
  { "getNext", l_Sound_GetNext },
  { "getBusParent", l_Sound_GetBusParent },
  { "getBusChild", l_Sound_GetBusChild },
  { "getBusSibling", l_Sound_GetBusSibling },
  { "setBusParent", l_Sound_SetBusParent },
  { "getBusVolume", l_Sound_GetBusVolume },
  { "getBusPitch", l_Sound_GetBusPitch },
  { "setBusVolume", l_Sound_SetBusVolume },
  { "setBusPitch", l_Sound_SetBusPitch },
  { "getBusGlobalVolume", l_Sound_GetBusGlobalVolume },
  { "getBusGlobalPitch", l_Sound_GetBusGlobalPitch },
  { "addBusFilter", l_Sound_AddBusFilter },
  { "removeLastBusFilter", l_Sound_RemoveLastBusFilter },
  { "removeAllBusFilters", l_Sound_RemoveAllBusFilters },
  { "addBusFilterFromConfig", l_Sound_AddBusFilterFromConfig },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_sound(lua_State *L)
{
  return lorx_register_submodule(L, "sound", l_lorx_sound);
}


// Sub-module: soundpointer
static const struct luaL_Reg l_lorx_soundpointer[] = {
  { "setup", l_SoundPointer_Setup },
  { "init", l_SoundPointer_Init },
  { "exit", l_SoundPointer_Exit },
  { "create", l_SoundPointer_Create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_soundpointer(lua_State *L)
{
  return lorx_register_submodule(L, "soundpointer", l_lorx_soundpointer);
}


// Sub-module: structure
static const struct luaL_Reg l_lorx_structure[] = {
  { "setup", l_Structure_Setup },
  { "init", l_Structure_Init },
  { "exit", l_Structure_Exit },
  { "unregister", l_Structure_Unregister },
  { "create", l_Structure_Create },
  { "delete", l_Structure_Delete },
  { "getStorageType", l_Structure_GetStorageType },
  { "getCount", l_Structure_GetCount },
  { "update", l_Structure_Update },
  { "get", l_Structure_Get },
  { "getOwner", l_Structure_GetOwner },
  { "setOwner", l_Structure_SetOwner },
  { "getFirst", l_Structure_GetFirst },
  { "getLast", l_Structure_GetLast },
  { "getParent", l_Structure_GetParent },
  { "getChild", l_Structure_GetChild },
  { "getSibling", l_Structure_GetSibling },
  { "getPrevious", l_Structure_GetPrevious },
  { "getNext", l_Structure_GetNext },
  { "setParent", l_Structure_SetParent },
  { "logAll", l_Structure_LogAll },
  { "getPointer", l__orxStructure_GetPointer },
  { "getIDString", l_Structure_GetIDString },
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

LORX_API int luaopen_lorx_structure(lua_State *L)
{
  return lorx_register_submodule(L, "structure", l_lorx_structure);
}


// Sub-module: spawner
static const struct luaL_Reg l_lorx_spawner[] = {
  { "setup", l_Spawner_Setup },
  { "init", l_Spawner_Init },
  { "exit", l_Spawner_Exit },
  { "create", l_Spawner_Create },
  { "createFromConfig", l_Spawner_CreateFromConfig },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_spawner(lua_State *L)
{
  return lorx_register_submodule(L, "spawner", l_lorx_spawner);
}


// Sub-module: frame
static const struct luaL_Reg l_lorx_frame[] = {
  { "getIgnoreFlagValues", l_Frame_GetIgnoreFlagValues },
  { "getIgnoreFlagNames", l_Frame_GetIgnoreFlagNames },
  { "setup", l_Frame_Setup },
  { "init", l_Frame_Init },
  { "exit", l_Frame_Exit },
  { "create", l_Frame_Create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_frame(lua_State *L)
{
  return lorx_register_submodule(L, "frame", l_lorx_frame);
}


// Sub-module: fxpointer
static const struct luaL_Reg l_lorx_fxpointer[] = {
  { "setup", l_FXPointer_Setup },
  { "init", l_FXPointer_Init },
  { "exit", l_FXPointer_Exit },
  { "create", l_FXPointer_Create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_fxpointer(lua_State *L)
{
  return lorx_register_submodule(L, "fxpointer", l_lorx_fxpointer);
}


// Sub-module: object
static const struct luaL_Reg l_lorx_object[] = {
  { "setup", l_Object_Setup },
  { "init", l_Object_Init },
  { "exit", l_Object_Exit },
  { "create", l_Object_Create },
  { "createFromConfig", l_Object_CreateFromConfig },
  { "getStructure", l__orxObject_GetStructure },
  { "raycast", l_Object_Raycast },
  { "getDefaultGroupID", l_Object_GetDefaultGroupID },
  { "getNext", l_Object_GetNext },
  { "getNextEnabled", l_Object_GetNextEnabled },
  { "pick", l_Object_Pick },
  { "boxPick", l_Object_BoxPick },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_object(lua_State *L)
{
  return lorx_register_submodule(L, "object", l_lorx_object);
}


// Sub-module: fx
static const struct luaL_Reg l_lorx_fx[] = {
  { "setup", l_FX_Setup },
  { "init", l_FX_Init },
  { "exit", l_FX_Exit },
  { "create", l_FX_Create },
  { "createFromConfig", l_FX_CreateFromConfig },
  { "clearCache", l_FX_ClearCache },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_fx(lua_State *L)
{
  return lorx_register_submodule(L, "fx", l_lorx_fx);
}


// Sub-module: timeline
static const struct luaL_Reg l_lorx_timeline[] = {
  { "setup", l_TimeLine_Setup },
  { "init", l_TimeLine_Init },
  { "exit", l_TimeLine_Exit },
  { "create", l_TimeLine_Create },
  { "clearCache", l_TimeLine_ClearCache },
  { "getTrackDuration", l_TimeLine_GetTrackDuration },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_timeline(lua_State *L)
{
  return lorx_register_submodule(L, "timeline", l_lorx_timeline);
}


// Sub-module: vector
static const struct luaL_Reg l_lorx_vector[] = {
  { "add", l_Vector_Add },
  { "sub", l_Vector_Sub },
  { "mulf", l_Vector_Mulf },
  { "mul", l_Vector_Mul },
  { "divf", l_Vector_Divf },
  { "div", l_Vector_Div },
  { "lerp", l_Vector_Lerp },
  { "min", l_Vector_Min },
  { "max", l_Vector_Max },
  { "getSquareDistance", l_Vector_GetSquareDistance },
  { "getDistance", l_Vector_GetDistance },
  { "areEqual", l_Vector_AreEqual },
  { "dot", l_Vector_Dot },
  { "_2DDot", l_Vector_2DDot },
  { "cross", l_Vector_Cross },
  { "vector", l_lorx_orxVECTOR_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_vector(lua_State *L)
{
  return lorx_register_submodule(L, "vector", l_lorx_vector);
}


// Sub-module: obox
static const struct luaL_Reg l_lorx_obox[] = {
  { "obox", l_lorx_orxOBOX_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_obox(lua_State *L)
{
  return lorx_register_submodule(L, "obox", l_lorx_obox);
}


// Sub-module: aabox
static const struct luaL_Reg l_lorx_aabox[] = {
  { "aabox", l_lorx_orxAABOX_create },
  { NULL, NULL }
};

LORX_API int luaopen_lorx_aabox(lua_State *L)
{
  return lorx_register_submodule(L, "aabox", l_lorx_aabox);
}

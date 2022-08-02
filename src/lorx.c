#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <orx.h>
#include "helpers.h"
#include "utypes.h"
#include "modules.h"
#include "conenum.h"
#include "conenumex.h"
#include "conutype.h"
#include "conbasic.h"
#include "orxver.h"
#include "lorx.h"


#define LORX_SUBCMDHELP_MAX_LEN 4096

#define LORX_SUBCMD_ARGNUM 64

typedef struct _LorxCMDReg
{
  const orxSTRING name;
  int luacb;
  orxU32 reqargs;
  orxU32 optargs;
  orxCOMMAND_VAR_DEF resdef;
  orxCOMMAND_VAR_DEF argdefs[LORX_SUBCMD_ARGNUM];
  const char* description;
} LorxCMDReg;


static lua_State *L0 = NULL;
static int lorx_orx_running = 0;
static int luacb_init = LUA_REFNIL, luacb_update = LUA_REFNIL, luacb_exit = LUA_REFNIL, luacb_log = LUA_REFNIL, luacb_cfgsave = LUA_REFNIL, luacb_cfgclear = LUA_REFNIL;
static int luatb_timercbs = LUA_REFNIL;
static orxHASHTABLE *rctable = orxNULL;
static orxHASHTABLE *cmdtable = orxNULL;



/////////////////////////////////////////////////////////////
//// Command
/////////////////////////////////////////////////////////////

/*
** agent function of the 'Lorx' commands. It is responsible for executing all lorx sub-commands registered in lua.
*/
static void orxFASTCALL lorx_lorx_command(orxU32 _u32ArgNumber, const orxCOMMAND_VAR* _astArgList, orxCOMMAND_VAR* _pstResult)
{
  // check args (must all be string)
  for (orxU32 i = 0; i < _u32ArgNumber; i++)
  {
    if (_astArgList[i].eType != orxCOMMAND_VAR_TYPE_STRING)
      luaL_error(L0, "The #%I arg of the Lorx command is not a string!", i);
  }

  // must have at least one arg
  if (_u32ArgNumber < 1)
    luaL_error(L0, "The Lorx command requires the name of a sub-command!");

  // sub-command name
  const orxSTRING zSubCmdName = _astArgList[0].zValue;
  if (orxString_GetLength(zSubCmdName) < 1)
    luaL_error(L0, "Lorx sub-command name cannot be empty!");
  
  // retrieve registration info
  LorxCMDReg* lcreg = orxHashTable_Get(cmdtable, orxString_Hash(zSubCmdName));

  if (lcreg)
  {
    // check if recieving sufficient args
    if ((_u32ArgNumber-1) < lcreg->reqargs)
      luaL_error(L0, "Insufficient args for Lorx sub-command %s!(requires %I, got %I)", zSubCmdName, lcreg->reqargs, _u32ArgNumber-1);
    
    // push lua callback to stack
    lua_rawgeti(L0, LUA_REGISTRYINDEX, lcreg->luacb);
    // command arg count
    orxU32 n = orxMIN(lcreg->optargs+lcreg->reqargs, _u32ArgNumber);
    // parse & push args to stack
    for (orxU32 i = 0; i < n; i++)
    {
      // registered arg type
      orxCOMMAND_VAR_TYPE eType = lcreg->argdefs[i].eType;
      // arg variable
      orxCOMMAND_VAR stVar;
      switch (eType)
      {
        case orxCOMMAND_VAR_TYPE_BOOL:
          if (orxString_ToBool(_astArgList[i+1].zValue, &stVar.bValue, orxNULL) != orxSTATUS_FAILURE)
            lorx_orxBOOL_to_lboolean(L0, stVar.bValue);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to bool!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_NUMERIC:
          if (orxCommand_ParseNumericalArguments(1, _astArgList +i + 1, &stVar) != orxSTATUS_FAILURE)
          {
            switch(stVar.eType)
            {
              case orxCOMMAND_VAR_TYPE_U64:
                lorx_orxU64_to_linteger(L0, stVar.u64Value);
                break;
              case orxCOMMAND_VAR_TYPE_U32:
                lorx_orxU32_to_linteger(L0, stVar.u32Value);
                break;
              case orxCOMMAND_VAR_TYPE_S64:
                lorx_orxS64_to_linteger(L0, stVar.s64Value);
                break;
              case orxCOMMAND_VAR_TYPE_S32:
                lorx_orxS32_to_linteger(L0, stVar.s32Value);
                break;
              case orxCOMMAND_VAR_TYPE_FLOAT:
                lorx_orxFLOAT_to_lnumber(L0, stVar.fValue);
                break;
              default:
                LORX_ERROR("unexpected numeric command var type %u!\n", stVar.eType);
            }
          }
          else
          {
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to numeric type!", i+1, zSubCmdName);
          }
          break;
        case orxCOMMAND_VAR_TYPE_FLOAT:
          if (orxString_ToFloat(_astArgList[i+1].zValue, &stVar.fValue, orxNULL))
            lorx_orxFLOAT_to_lnumber(L0, stVar.fValue);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to float!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_U64:
          if (orxString_ToU64(_astArgList[i+1].zValue, &stVar.u64Value, orxNULL))
            lorx_orxU64_to_linteger(L0, stVar.u64Value);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to u64!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_U32:
          if (orxString_ToU32(_astArgList[i+1].zValue, &stVar.u32Value, orxNULL))
            lorx_orxU32_to_linteger(L0, stVar.u32Value);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to u32!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_S64:
          if (orxString_ToS64(_astArgList[i+1].zValue, &stVar.s64Value, orxNULL))
            lorx_orxS64_to_linteger(L0, stVar.s64Value);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to s64!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_S32:
          if (orxString_ToS32(_astArgList[i+1].zValue, &stVar.s32Value, orxNULL))
            lorx_orxS32_to_linteger(L0, stVar.s32Value);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to s32!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_STRING:
          lua_pushstring(L0, stVar.zValue);
          break;
        case orxCOMMAND_VAR_TYPE_VECTOR:
          if (orxString_ToVector(_astArgList[i+1].zValue, &stVar.vValue, orxNULL))
            lorx_orxVECTOR_to_luserdata_struct(L0, &stVar.vValue);
          else
            luaL_error(L0, "Cannot convert the #%I arg of Lorx sub-command %s to vector!", i+1, zSubCmdName);
          break;
        case orxCOMMAND_VAR_TYPE_NONE:
          lua_pushnil(L0);
          break;
        default:
          LORX_ERROR("unexpected orxCOMMAND_VAR_TYPE: %u!\n", eType);
      }
    }
    // has returning value?
    int r = lcreg->resdef.eType == orxCOMMAND_VAR_TYPE_NONE ? 0 : 1;
    // call the callback
    lua_call(L0, n, r);

    // write results to orx
    _pstResult->eType = lcreg->resdef.eType;
    switch (_pstResult->eType)
    {
      case orxCOMMAND_VAR_TYPE_BOOL:
        _pstResult->bValue = lorx_lboolean_to_orxBOOL(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_FLOAT:
        _pstResult->fValue = lorx_lnumber_to_orxFLOAT(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_STRING:
        _pstResult->zValue = lorx_lstring_to_orxSTRING(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_NUMERIC:
        LORX_ERROR("result type cannot be numberic!\n");
        break;
      case orxCOMMAND_VAR_TYPE_U64:
        _pstResult->u64Value = lorx_linteger_to_orxU64(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_U32:
        _pstResult->u32Value = lorx_linteger_to_orxU32(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_S64:
        _pstResult->s64Value = lorx_linteger_to_orxS64(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_S32:
        _pstResult->s32Value = lorx_linteger_to_orxS32(L0, -1);
        break;
      case orxCOMMAND_VAR_TYPE_VECTOR:
        _pstResult->vValue = lorx_luserdata_to_orxVECTOR_struct(L0, -1);
        break;
      default:
        LORX_ERROR("unexpected orxCOMMAND_VAR_TYPE: %u\n", _pstResult->eType);
    }
    // pop out returnings
    if (r > 0)
      lua_pop(L0, r);
  }
  else
  {
    luaL_error(L0, "Lorx sub-command %s is not yet registered!", zSubCmdName);
  }

}

/*
** LorxHelp command function
*/
static void orxFASTCALL lorx_lorxhelp_command(orxU32 _u32ArgNumber, const orxCOMMAND_VAR* _astArgList, orxCOMMAND_VAR* _pstResult)
{
  if (_u32ArgNumber != 1 || _astArgList[0].eType != orxCOMMAND_VAR_TYPE_STRING)
    luaL_error(L0, "LorxHelp command can only take one arg and it must be the name of a Lorx sub-command!");
  
  const char* scmd = _astArgList[0].zValue;
  orxU64 key = orxString_Hash(scmd);
  LorxCMDReg *reg = NULL;
  if ((reg = orxHashTable_Get(cmdtable, key)))
  {
    char buf[LORX_SUBCMDHELP_MAX_LEN];
    int n = LORX_SUBCMDHELP_MAX_LEN;
    n -= snprintf(buf, n, "%s", reg->name);
    orxU32 i;
    for (i = 0; i < reg->reqargs && n > 0; i++)
    {
      const char* arg = reg->argdefs[i].zName;
      n -= snprintf(buf + strlen(buf), n, " %s", arg);
    }
    for (; i < reg->optargs && n > 0; i++)
    {
      const char* arg = reg->argdefs[i].zName;
      n -= snprintf(buf + strlen(buf), n, " [%s]", arg);
    }
    if (n > 0)
      n -= snprintf(buf + strlen(buf), n, " -> %s", reg->resdef.zName);
    if (n > 0 && reg->description)
      n -= snprintf(buf + strlen(buf), n, " (%s)", reg->description);
    _pstResult->eType = orxCOMMAND_VAR_TYPE_STRING;
    _pstResult->zValue = orxString_Store(buf);
  }
  else
  {
    luaL_error(L0, "trying to comment a Lorx sub-command that is not yet registered!");
  }
}

/*
** register Lorx sub-commands
*/
static int l_lorx_command_sregister(lua_State *L)
{
  LorxCMDReg *lcreg = malloc(sizeof(LorxCMDReg));
  memset(lcreg, 0, sizeof(LorxCMDReg));

  luaL_checktype(L, 1, LUA_TFUNCTION);
  lua_pushvalue(L, 1);
  lcreg->luacb = luaL_ref(L, LUA_REGISTRYINDEX);

  // sub-command name
  lcreg->name = lorx_lstring_to_char_ptr(L, 2);
  if (strlen(lcreg->name) < 1)
    luaL_error(L, "sub-command signature cannot be empty!");

  // returning type
  lcreg->resdef.zName = luaL_checkstring(L, 3);
  lcreg->resdef.eType = lorx_lenumstr_to_orxCOMMAND_VAR_TYPE(L, 3);
  if (lcreg->resdef.eType == orxCOMMAND_VAR_TYPE_NUMERIC)
    luaL_error(L, "sub-command cannot have 'numeric' as its returning type!");

  // number of required args
  lua_Integer reqargs = luaL_checkinteger(L, 4);
  if (reqargs < 0)
    luaL_error(L, "number of required args cannot be negative!");

  // number of optional args
  lua_Integer optargs = luaL_checkinteger(L, 5);
  if (optargs < 0)
    luaL_error(L, "number of optional args cannot be negative!");

  if (reqargs + optargs > LORX_SUBCMD_ARGNUM)
    luaL_error(L, "total number of args (%u) exceeds limit (%u)!", reqargs+optargs, LORX_SUBCMD_ARGNUM);

  lcreg->reqargs = reqargs;
  lcreg->optargs = optargs;

  // args
  orxU32 totalargs = lcreg->reqargs + lcreg->optargs;
  if (totalargs > 0)
  {
    orxU32 i = 0;
    for (; i < totalargs && !lua_isnil(L, 6+i); i++)
    {
      lcreg->argdefs[i].zName = luaL_checkstring(L, 6+i);
      lcreg->argdefs[i].eType = lorx_lenumstr_to_orxCOMMAND_VAR_TYPE(L, 6+i);
    }
    if (i < totalargs)
      luaL_error(L, "Insufficient arg definitions, expect %u, got only %u!", totalargs, i);
  }
  
  // register in cmdtable
  orxU64 key = orxString_Hash(lcreg->name);
  if (orxHashTable_Get(cmdtable, key))
  {
    lua_pushboolean(L, 0);
  }
  else
  {
    orxHashTable_Add(cmdtable, key, lcreg);
    lua_pushboolean(L, 1);
  }

  return 1;
}

/*
** unregister Lorx sub-command
*/
static int l_lorx_command_sunregister(lua_State *L)
{
  const char* scmd = lorx_lstring_to_char_ptr(L, 1);
  orxU64 key = orxString_Hash(scmd);
  LorxCMDReg *reg = NULL;
  if ((reg = orxHashTable_Get(cmdtable, key)))
  {
    if (reg->luacb != LUA_REFNIL)
      luaL_unref(L, LUA_REGISTRYINDEX, reg->luacb);
    orxHashTable_Remove(cmdtable, key);
    free(reg);
    lua_pushboolean(L, 1);
  }
  else
  {
    lua_pushboolean(L, 0);
  }
  return 1;
}

/*
** query if a Lorx sub-command is registered or not
*/
static int l_lorx_command_sisregistered(lua_State *L)
{
  const char* scmd = lorx_lstring_to_char_ptr(L, 1);
  orxU64 key = orxString_Hash(scmd);
  if (orxHashTable_Get(cmdtable, key))
  {
    lua_pushboolean(L, 1);
  }
  else
  {
    lua_pushboolean(L, 0);
  }
  return 1;
}

/*
** comment a Lorx sub-command
*/
static int l_lorx_command_scomment(lua_State *L)
{
  const char* scmd = lorx_lstring_to_char_ptr(L, 1);
  orxU64 key = orxString_Hash(scmd);
  LorxCMDReg *reg = NULL;
  if ((reg = orxHashTable_Get(cmdtable, key)))
  {
    reg->description = luaL_checkstring(L, 2);
    reg->resdef.zName = luaL_checkstring(L, 3);
    orxU32 i;
    for (i = 0; i < reg->reqargs + reg->optargs; i++)
    {
      reg->argdefs[i].zName = luaL_checkstring(L, 4+i);
    }
    lua_pushboolean(L, 1);
  }
  else
  {
    lua_pushboolean(L, 0);
  }
  return 1;
}


/////////////////////////////////////////////////////////////
//// Event
/////////////////////////////////////////////////////////////

#define EHANDLER_LUACB(e) luacb_##e##_handler
#define DECLARE_EHANDLER_LUACB(e) static int EHANDLER_LUACB(e) = LUA_REFNIL
#define EHANDLER_REGISTER_FUNCNAME(e) l_lorx_register_##e##_handler
#define EHANDLER_UNREGISTER_FUNCNAME(e) l_lorx_unregister_##e##_handler
#define DEFINE_EHANDLER_REGISTER(e) \
static int EHANDLER_REGISTER_FUNCNAME(e)(lua_State *L) \
{ \
  luaL_checktype(L, 1, LUA_TFUNCTION); \
  if (EHANDLER_LUACB(e) != LUA_REFNIL) \
  { \
    luaL_unref(L, LUA_REGISTRYINDEX, EHANDLER_LUACB(e)); \
  } \
  lua_pushvalue(L, 1); \
  EHANDLER_LUACB(e) = luaL_ref(L, LUA_REGISTRYINDEX); \
  return 0; \
}
#define DEFINE_EHANDLER_UNREGISTER(e) \
static int EHANDLER_UNREGISTER_FUNCNAME(e)(lua_State *L) \
{ \
  if (EHANDLER_LUACB(e) != LUA_REFNIL) \
  { \
    luaL_unref(L, LUA_REGISTRYINDEX, EHANDLER_LUACB(e)); \
    EHANDLER_LUACB(e) = LUA_REFNIL; \
    lua_pushboolean(L, 1); \
  } \
  else \
  { \
    lua_pushboolean(L, 0); \
  } \
  return 1; \
}

// declare lua callback reference for all orx event types
DECLARE_EHANDLER_LUACB(system);
DECLARE_EHANDLER_LUACB(physics);
DECLARE_EHANDLER_LUACB(resource);
DECLARE_EHANDLER_LUACB(spawner);
DECLARE_EHANDLER_LUACB(shader);
DECLARE_EHANDLER_LUACB(texture);
DECLARE_EHANDLER_LUACB(timeline);
DECLARE_EHANDLER_LUACB(viewport);
DECLARE_EHANDLER_LUACB(render);
DECLARE_EHANDLER_LUACB(object);
DECLARE_EHANDLER_LUACB(locale);
DECLARE_EHANDLER_LUACB(input);
DECLARE_EHANDLER_LUACB(fx);
DECLARE_EHANDLER_LUACB(display);
DECLARE_EHANDLER_LUACB(config);
DECLARE_EHANDLER_LUACB(clock);
DECLARE_EHANDLER_LUACB(anim);
DECLARE_EHANDLER_LUACB(sound);

// define event lua callback register/unregister functions
DEFINE_EHANDLER_REGISTER(system)
DEFINE_EHANDLER_UNREGISTER(system)
DEFINE_EHANDLER_REGISTER(physics)
DEFINE_EHANDLER_UNREGISTER(physics)
DEFINE_EHANDLER_REGISTER(resource)
DEFINE_EHANDLER_UNREGISTER(resource)
DEFINE_EHANDLER_REGISTER(spawner)
DEFINE_EHANDLER_UNREGISTER(spawner)
DEFINE_EHANDLER_REGISTER(shader)
DEFINE_EHANDLER_UNREGISTER(shader)
DEFINE_EHANDLER_REGISTER(texture)
DEFINE_EHANDLER_UNREGISTER(texture)
DEFINE_EHANDLER_REGISTER(timeline)
DEFINE_EHANDLER_UNREGISTER(timeline)
DEFINE_EHANDLER_REGISTER(viewport)
DEFINE_EHANDLER_UNREGISTER(viewport)
DEFINE_EHANDLER_REGISTER(render)
DEFINE_EHANDLER_UNREGISTER(render)
DEFINE_EHANDLER_REGISTER(object)
DEFINE_EHANDLER_UNREGISTER(object)
DEFINE_EHANDLER_REGISTER(locale)
DEFINE_EHANDLER_UNREGISTER(locale)
DEFINE_EHANDLER_REGISTER(input)
DEFINE_EHANDLER_UNREGISTER(input)
DEFINE_EHANDLER_REGISTER(fx)
DEFINE_EHANDLER_UNREGISTER(fx)
DEFINE_EHANDLER_REGISTER(display)
DEFINE_EHANDLER_UNREGISTER(display)
DEFINE_EHANDLER_REGISTER(config)
DEFINE_EHANDLER_UNREGISTER(config)
DEFINE_EHANDLER_REGISTER(clock)
DEFINE_EHANDLER_UNREGISTER(clock)
DEFINE_EHANDLER_REGISTER(anim)
DEFINE_EHANDLER_UNREGISTER(anim)
DEFINE_EHANDLER_REGISTER(sound)
DEFINE_EHANDLER_UNREGISTER(sound)


/*
** get an orxSTATUS from the top of the stack, nil defaults to orxSTATUS_SUCCESS
*/
static orxSTATUS get_status(const char* msg)
{
  orxSTATUS ret = orxSTATUS_SUCCESS;
  if (!lua_isnil(L0, -1))
  {
    if (lua_isstring(L0, -1))
      ret = lorx_lenumstr_to_orxSTATUS(L0, -1);
    else
      luaL_error(L0, "%s: expect orxSTATUS! got %s", msg, luaL_typename(L0, -1));
  }
  
  return ret;
}

/*
** sound event agent handler
*/
static orxSTATUS orxFASTCALL lorx_sound_event_handler(const orxEVENT *_pstEvent)
{
  // this event can be sent from worker thread, don't do anything with orx and lua!
  if (_pstEvent->eID == orxSOUND_EVENT_PACKET)
  {
    return orxSTATUS_SUCCESS;
  }

  if (EHANDLER_LUACB(sound) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(sound));

    lua_createtable(L0, 0, 15);

    lorx_orxSOUND_EVENT_to_lenumstr(L0, (orxSOUND_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    if (_pstEvent->eID == orxSOUND_EVENT_PACKET)
    {
      lorx_orxHANDLE_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");
    }
    else if (_pstEvent->eID == orxSOUND_EVENT_START || _pstEvent->eID == orxSOUND_EVENT_STOP || _pstEvent->eID == orxSOUND_EVENT_ADD || _pstEvent->eID == orxSOUND_EVENT_REMOVE)
    {
      lorx_orxOBJECT_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_orxOBJECT_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");
    }
    else if (_pstEvent->eID == orxSOUND_EVENT_SET_FILTER_PARAM)
    {
      lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");
    }
    else
    {
      lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");
    }

    orxSOUND_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxSOUND_to_luserdata(L0, payload->pstSound); /* can be NULL */
    lua_setfield(L0, -2, "sound");

    if (_pstEvent->eID == orxSOUND_EVENT_PACKET || _pstEvent->eID == orxSOUND_EVENT_RECORDING_PACKET || _pstEvent->eID == orxSOUND_EVENT_RECORDING_START || _pstEvent->eID == orxSOUND_EVENT_RECORDING_STOP)
    {
      lorx_orxSOUND_STREAM_INFO_to_luserdata(L0, &(payload->stStream.stInfo));
      lua_setfield(L0, -2, "streaminfo");
      lorx_orxSOUND_STREAM_PACKET_to_luserdata(L0, &(payload->stStream.stPacket));
      lua_setfield(L0, -2, "streampacket");
    }
    else if (_pstEvent->eID == orxSOUND_EVENT_SET_FILTER_PARAM)
    {
      lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L0, &(payload->stFilter.stData));
      lua_setfield(L0, -2, "filterdata");
      lorx_orxSTRINGID_to_linteger(L0, payload->stFilter.stBusID);
      lua_setfield(L0, -2, "filterbusid");
    }

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from sound handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** anim event agent handler
*/
static orxSTATUS orxFASTCALL lorx_anim_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(anim) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(anim));
    lua_createtable(L0, 0, 9);

    lorx_orxANIM_EVENT_to_lenumstr(L0, (orxANIM_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    // sender should be an orxSTRUCTURE
    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    // recipient should be an orxSTRUCTURE
    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxANIM_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxANIM_to_luserdata(L0, payload->pstAnim);
    lua_setfield(L0, -2, "anim");

    lorx_orxSTRING_to_lstring(L0, payload->zAnimName);
    lua_setfield(L0, -2, "animname");

    if (_pstEvent->eID == orxANIM_EVENT_LOOP)
    {
      lorx_orxU32_to_linteger(L0, payload->stLoop.u32Count);
      lua_setfield(L0, -2, "count");
    }
    else if (_pstEvent->eID == orxANIM_EVENT_CUT)
    {
      lorx_orxFLOAT_to_lnumber(L0, payload->stCut.fTime);
      lua_setfield(L0, -2, "time");
    }
    else if (_pstEvent->eID == orxANIM_EVENT_CUSTOM_EVENT)
    {
      lorx_orxSTRING_to_lstring(L0, payload->stCustom.zName);
      lua_setfield(L0, -2, "name");
      lorx_orxFLOAT_to_lnumber(L0, payload->stCustom.fTime);
      lua_setfield(L0, -2, "time");
      lorx_orxFLOAT_to_lnumber(L0, payload->stCustom.fValue);
      lua_setfield(L0, -2, "value");
    }

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from anim handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** clock event agent handler
*/
static orxSTATUS orxFASTCALL lorx_clock_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(clock) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(clock));
    lua_createtable(L0, 0, 4);

    lorx_orxCLOCK_EVENT_to_lenumstr(L0, (orxCLOCK_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    // sender should be an orxCLOCK
    lorx_orxCLOCK_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from clock handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** config event agent handler
*/
static orxSTATUS orxFASTCALL lorx_config_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(config) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(config));
    lua_createtable(L0, 0, 4);

    lorx_orxCONFIG_EVENT_to_lenumstr(L0, (orxCONFIG_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from config handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** display event agent handler
*/
static orxSTATUS orxFASTCALL lorx_display_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(display) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(display));
    lua_createtable(L0, 0, 13);

    lorx_orxDISPLAY_EVENT_to_lenumstr(L0, (orxDISPLAY_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    orxDISPLAY_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    if (_pstEvent->eID == orxDISPLAY_EVENT_SET_VIDEO_MODE)
    {
      lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32Width);
      lua_setfield(L0, -2, "width");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32Height);
      lua_setfield(L0, -2, "height");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32Depth);
      lua_setfield(L0, -2, "depth");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32RefreshRate);
      lua_setfield(L0, -2, "refreshrate");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32PreviousWidth);
      lua_setfield(L0, -2, "previouswidth");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32PreviousHeight);
      lua_setfield(L0, -2, "previousheight");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32PreviousDepth);
      lua_setfield(L0, -2, "previousdepth");

      lorx_orxU32_to_linteger(L0, payload->stVideoMode.u32PreviousRefreshRate);
      lua_setfield(L0, -2, "previousrefreshrate");

      lorx_orxBOOL_to_lboolean(L0, payload->stVideoMode.bFullScreen);
      lua_setfield(L0, -2, "fullscreen");
    }
    else /* orxDISPLAY_EVENT_LOAD_BITMAP */
    {
      // sender is orxBITMAP
      lorx_orxBITMAP_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      // recipient is orxBITMAP
      lorx_orxBITMAP_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");

      lorx_orxSTRING_to_lstring(L0, payload->stBitmap.zLocation);
      lua_setfield(L0, -2, "location");

      lorx_orxSTRINGID_to_linteger(L0, payload->stBitmap.stFilenameID);
      lua_setfield(L0, -2, "filenameid");

      lorx_orxU32_to_linteger(L0, payload->stBitmap.u32ID);
      lua_setfield(L0, -2, "bitmapid");
    }

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from display handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** fx event agent handler
*/
static orxSTATUS orxFASTCALL lorx_fx_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(fx) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(fx));
    lua_createtable(L0, 0, 6);

    lorx_orxFX_EVENT_to_lenumstr(L0, (orxFX_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    // sender should be an orxSTRUCTURE
    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    // recipient should be an orxSTRUCTURE
    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxFX_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxFX_to_luserdata(L0, payload->pstFX);
    lua_setfield(L0, -2, "fx");

    lorx_orxSTRING_to_lstring(L0, payload->zFXName);
    lua_setfield(L0, -2, "fxname");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from fx handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** input event agent handler
*/
static orxSTATUS orxFASTCALL lorx_input_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(input) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(input));
    lua_createtable(L0, 0, 11);

    lorx_orxINPUT_EVENT_to_lenumstr(L0, (orxINPUT_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxINPUT_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxSTRING_to_lstring(L0, payload->zSetName);
    lua_setfield(L0, -2, "setname");

    lorx_orxSTRING_to_lstring(L0, payload->zInputName);
    lua_setfield(L0, -2, "inputname");

    if (_pstEvent->eID == orxINPUT_EVENT_ON || _pstEvent->eID == orxINPUT_EVENT_OFF)
    {
      lua_createtable(L0, orxINPUT_KU32_BINDING_NUMBER, 0);
      for (orxU32 i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
      {
        lorx_orxINPUT_TYPE_to_lenumstr(L0, payload->aeType[i]);
        lua_seti(L0, -2, i+1);
      }
      lua_setfield(L0, -2, "typelist");

      lua_createtable(L0, orxINPUT_KU32_BINDING_NUMBER, 0);
      for (orxU32 i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
      {
        switch (payload->aeType[i])
        {
          case orxINPUT_TYPE_MOUSE_AXIS:
            lorx_orxMOUSE_AXIS_to_lenumstr(L0, payload->aeID[i]);
            break;
          case orxINPUT_TYPE_MOUSE_BUTTON:
            lorx_orxMOUSE_BUTTON_to_lenumstr(L0, payload->aeID[i]);
            break;
          case orxINPUT_TYPE_KEYBOARD_KEY:
            lorx_orxKEYBOARD_KEY_to_lenumstr(L0, payload->aeID[i]);
            break;
          case orxINPUT_TYPE_JOYSTICK_AXIS:
            lorx_orxJOYSTICK_AXIS_to_lenumstr(L0, payload->aeID[i]);
            break;
          case orxINPUT_TYPE_JOYSTICK_BUTTON:
            lorx_orxJOYSTICK_BUTTON_to_lenumstr(L0, payload->aeID[i]);
            break;
          case orxINPUT_TYPE_EXTERNAL:
            lorx_orxENUM_to_linteger(L0, payload->aeID[i]);
            break;
          case orxINPUT_TYPE_NONE:
            lua_pushstring(L0, "none");
            break;
          default:
            LORX_ERROR("unexpected orxINPUT_TYPE: %u\n", payload->aeID[i]);
        }
        lua_seti(L0, -2, i+1);
      }
      lua_setfield(L0, -2, "idlist");

      lua_createtable(L0, orxINPUT_KU32_BINDING_NUMBER, 0);
      for (orxU32 i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
      {
        lorx_orxINPUT_MODE_to_lenumstr(L0, payload->aeMode[i]);
        lua_seti(L0, -2, i+1);
      }
      lua_setfield(L0, -2, "modelist");

      lua_createtable(L0, orxINPUT_KU32_BINDING_NUMBER, 0);
      for (orxU32 i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
      {
        lorx_orxFLOAT_to_lnumber(L0, payload->afValue[i]);
        lua_seti(L0, -2, i+1);
      }
      lua_setfield(L0, -2, "valuelist");
    }

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from input handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** locale event agent handler
*/
static orxSTATUS orxFASTCALL lorx_locale_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(locale) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(locale));
    lua_createtable(L0, 0, 8);

    lorx_orxLOCALE_EVENT_to_lenumstr(L0, (orxLOCALE_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxLOCALE_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxSTRING_to_lstring(L0, payload->zLanguage);
    lua_setfield(L0, -2, "language");

    lorx_orxSTRING_to_lstring(L0, payload->zGroup);
    lua_setfield(L0, -2, "group");

    lorx_orxSTRING_to_lstring(L0, payload->zStringKey);
    lua_setfield(L0, -2, "stringkey");

    lorx_orxSTRING_to_lstring(L0, payload->zStringValue);
    lua_setfield(L0, -2, "stringvalue");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from locale handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** object event agent handler
*/
static orxSTATUS orxFASTCALL lorx_object_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(object) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(object));
    lua_createtable(L0, 0, 4);

    lorx_orxOBJECT_EVENT_to_lenumstr(L0, (orxOBJECT_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_orxOBJECT_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from object handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** render event agent handler
*/
static orxSTATUS orxFASTCALL lorx_render_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(render) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(render));
    lua_createtable(L0, 0, 5);

    lorx_orxRENDER_EVENT_to_lenumstr(L0, (orxRENDER_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    if (_pstEvent->eID == orxRENDER_EVENT_VIEWPORT_START || _pstEvent->eID == orxRENDER_EVENT_VIEWPORT_STOP)
    {
      lorx_orxVIEWPORT_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_orxVIEWPORT_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");
    }
    else if (_pstEvent->eID == orxRENDER_EVENT_OBJECT_START || _pstEvent->eID == orxRENDER_EVENT_OBJECT_STOP)
    {
      lorx_orxOBJECT_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_orxOBJECT_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");

      orxRENDER_EVENT_PAYLOAD* payload = _pstEvent->pstPayload;
      assert(payload && payload->stObject.pstTransform);
      lorx_orxDISPLAY_TRANSFORM_to_luserdata_struct(L0, payload->stObject.pstTransform);
      lua_setfield(L0, -2, "transform");
    }
    else
    {
      lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
      lua_setfield(L0, -2, "sender");

      lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
      lua_setfield(L0, -2, "recipient");
    }

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from render handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** viewport event agent handler
*/
static orxSTATUS orxFASTCALL lorx_viewport_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(viewport) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(viewport));
    lua_createtable(L0, 0, 4);

    lorx_orxVIEWPORT_EVENT_to_lenumstr(L0, (orxVIEWPORT_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_orxVIEWPORT_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_orxVIEWPORT_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from viewport handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** timeline event agent handler
*/
static orxSTATUS orxFASTCALL lorx_timeline_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(timeline) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(timeline));
    lua_createtable(L0, 0, 8);

    lorx_orxTIMELINE_EVENT_to_lenumstr(L0, (orxTIMELINE_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxTIMELINE_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxTIMELINE_to_luserdata(L0, payload->pstTimeLine);
    lua_setfield(L0, -2, "timeline");

    lorx_orxSTRING_to_lstring(L0, payload->zTrackName);
    lua_setfield(L0, -2, "trackname");

    lorx_orxSTRING_to_lstring(L0, payload->zEvent);
    lua_setfield(L0, -2, "event");

    lorx_orxFLOAT_to_lnumber(L0, payload->fTimeStamp);
    lua_setfield(L0, -2, "timestamp");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from timeline handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** texture event agent handler
*/
static orxSTATUS orxFASTCALL lorx_texture_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(texture) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(texture));
    lua_createtable(L0, 0, 3);

    lorx_orxTEXTURE_EVENT_to_lenumstr(L0, (orxTEXTURE_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_orxTEXTURE_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    // recipient should be NULL
    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from texture handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** system event agent handler
*/
static orxSTATUS orxFASTCALL lorx_system_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(system) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(system));
    lua_createtable(L0, 0, 9);

    lorx_orxSYSTEM_EVENT_to_lenumstr(L0, (orxSYSTEM_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    // sender should be NULL
    lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    // recipient should be NULL
    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxSYSTEM_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    if (_pstEvent->eID == orxSYSTEM_EVENT_TOUCH_BEGIN || _pstEvent->eID == orxSYSTEM_EVENT_TOUCH_END || _pstEvent->eID == orxSYSTEM_EVENT_TOUCH_MOVE)
    {
      lorx_orxDOUBLE_to_lnumber(L0, payload->stTouch.dTime);
      lua_setfield(L0, -2, "time");

      lorx_orxU32_to_linteger(L0, payload->stTouch.u32ID);
      lua_setfield(L0, -2, "touchid");

      lorx_orxFLOAT_to_lnumber(L0, payload->stTouch.fPressure);
      lua_setfield(L0, -2, "pressure");

      lorx_orxFLOAT_to_lnumber(L0, payload->stTouch.fX);
      lua_setfield(L0, -2, "x");

      lorx_orxFLOAT_to_lnumber(L0, payload->stTouch.fY);
      lua_setfield(L0, -2, "y");
    }
    else if (_pstEvent->eID == orxSYSTEM_EVENT_ACCELERATE)
    {
      lorx_orxDOUBLE_to_lnumber(L0, payload->stAccelerometer.dTime);
      lua_setfield(L0, -2, "time");

      lorx_orxVECTOR_to_luserdata_struct(L0, &(payload->stAccelerometer.vAcceleration));
      lua_setfield(L0, -2, "acceleration");
    }
    else if (_pstEvent->eID == orxSYSTEM_EVENT_DROP)
    {
      lua_createtable(L0, payload->stDrop.u32Number, 0);
      for (orxU32 i = 0; i < payload->stDrop.u32Number; i++)
      {
        lorx_orxSTRING_to_lstring(L0, payload->stDrop.azValueList[i]);
        lua_seti(L0, -2, i+1);
      }
      lua_setfield(L0, -2, "valuelist");
    }
    else if (_pstEvent->eID == orxSYSTEM_EVENT_CLIPBOARD)
    {
      lorx_orxSTRING_to_lstring(L0, payload->stClipboard.zValue);
      lua_setfield(L0, -2, "value");
    }
    else if (_pstEvent->eID == orxSYSTEM_EVENT_GAME_LOOP_START || _pstEvent->eID == orxSYSTEM_EVENT_GAME_LOOP_STOP)
    {
      lorx_orxU32_to_linteger(L0, payload->u32FrameCount);
      lua_setfield(L0, -2, "framecount");
    }

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from system handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** shader event agent handler
*/
static orxSTATUS orxFASTCALL lorx_shader_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(shader) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(shader));
    lua_createtable(L0, 0, 10);

    lorx_orxSHADER_EVENT_to_lenumstr(L0, (orxSHADER_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    // sender should be an orxSTRUCTURE
    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    // recipient should be an orxSTRUCTURE
    lorx_orxSTRUCTURE_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    orxSHADER_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxSHADER_to_luserdata_const(L0, payload->pstShader);
    lua_setfield(L0, -2, "shader");

    lorx_orxSTRING_to_lstring(L0, payload->zShaderName);
    lua_setfield(L0, -2, "shadername");

    lorx_orxSTRING_to_lstring(L0, payload->zParamName);
    lua_setfield(L0, -2, "paramname");

    lorx_orxSHADER_PARAM_TYPE_to_lenumstr(L0, payload->eParamType);
    lua_setfield(L0, -2, "paramtype");

    lorx_orxS32_to_linteger(L0, payload->s32ParamIndex);
    lua_setfield(L0, -2, "paramindex");

    if (payload->eParamType == orxSHADER_PARAM_TYPE_FLOAT)
      lorx_orxFLOAT_to_lnumber(L0, payload->fValue);
    else if (payload->eParamType == orxSHADER_PARAM_TYPE_TEXTURE)
      lorx_orxTEXTURE_to_luserdata_const(L0, payload->pstValue);
    else /* orxSHADER_PARAM_TYPE_VECTOR */
      lorx_orxVECTOR_to_luserdata_struct(L0, &(payload->vValue));
    lua_setfield(L0, -2, "value");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from shader handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** spawner event agent handler
*/
static orxSTATUS orxFASTCALL lorx_spawner_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(spawner) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(spawner));
    lua_createtable(L0, 0, 4);

    lorx_orxSPAWNER_EVENT_to_lenumstr(L0, (orxSPAWNER_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    // sender is always a spawner
    lorx_orxSPAWNER_to_luserdata(L0, orxSPAWNER(_pstEvent->hSender));
    lua_setfield(L0, -2, "sender");

    // recipient is object or null
    lorx_orxOBJECT_to_luserdata(L0, orxOBJECT(_pstEvent->hRecipient));
    lua_setfield(L0, -2, "recipient");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from spawner handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** resource event agent handler
*/
static orxSTATUS orxFASTCALL lorx_resource_event_handler(const orxEVENT *_pstEvent)
{
  if (EHANDLER_LUACB(resource) != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, EHANDLER_LUACB(resource));
    lua_createtable(L0, 0, 9);

    orxRESOURCE_EVENT_PAYLOAD *payload = _pstEvent->pstPayload;

    lorx_orxRESOURCE_EVENT_to_lenumstr(L0, (orxRESOURCE_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hSender);
    lua_setfield(L0, -2, "sender");

    lorx_void_ptr_to_luserdata(L0, _pstEvent->hRecipient);
    lua_setfield(L0, -2, "recipient");

    lorx_orxS64_to_linteger(L0, payload->s64Time);
    lua_setfield(L0, -2, "time");

    lorx_orxSTRING_to_lstring(L0, payload->zLocation);
    lua_setfield(L0, -2, "location");

    lorx_orxSTRINGID_to_linteger(L0, payload->stGroupID);
    lua_setfield(L0, -2, "groupid");

    lorx_orxSTRINGID_to_linteger(L0, payload->stNameID);
    lua_setfield(L0, -2, "nameid");

    lorx_orxSTRING_to_lstring(L0, payload->pstTypeInfo->zTag);
    lua_setfield(L0, -2, "typetag");

    // note: function callbacks are not transferred!

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from resource handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}

/*
** physics event agent handler
*/
static orxSTATUS orxFASTCALL lorx_physics_event_handler(const orxEVENT *_pstEvent)
{
  if (luacb_physics_handler != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_physics_handler);
    lua_createtable(L0, 0, 6);

    orxOBJECT *sender = orxOBJECT(_pstEvent->hSender);
    orxOBJECT *recipient = orxOBJECT(_pstEvent->hRecipient);
    orxPHYSICS_EVENT_PAYLOAD* payload = (orxPHYSICS_EVENT_PAYLOAD*)(_pstEvent->pstPayload);

    lorx_orxPHYSICS_EVENT_to_lenumstr(L0, (orxPHYSICS_EVENT)(_pstEvent->eID));
    lua_setfield(L0, -2, "id");

    lorx_orxOBJECT_to_luserdata(L0, sender);
    lua_setfield(L0, -2, "sender");

    lorx_orxOBJECT_to_luserdata(L0, recipient);
    lua_setfield(L0, -2, "recipient");

    lorx_orxVECTOR_to_luserdata_struct(L0, &(payload->vPosition));
    lua_setfield(L0, -2, "position");

    lorx_orxVECTOR_to_luserdata_struct(L0, &(payload->vNormal));
    lua_setfield(L0, -2, "normal");

    lorx_void_ptr_to_luserdata_const(L0, _pstEvent);
    lua_setfield(L0, -2, "raw");

    lua_call(L0, 1, 1);
    orxSTATUS ret = get_status("return from physics handler");
    lua_pop(L0, 1);

    return ret;
  }

  return orxSTATUS_SUCCESS;
}


////////////////////////////////////////////////////////////
//// extra module functions
////////////////////////////////////////////////////////////


/*
** agent callback for debug log callbacks
*/
static orxSTATUS orxFASTCALL lorx_debug_callback(orxDEBUG_LEVEL _eLevel, const orxSTRING _zFunction, const orxSTRING _zFile, orxU32 _u32Line, const orxSTRING _zLog)
{
  orxSTATUS ret = orxSTATUS_SUCCESS;
  if (luacb_log != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_log);
    if (!lua_isnil(L0, -1))
    {
      lorx_orxDEBUG_LEVEL_to_lenumstr(L0, _eLevel);
      lorx_orxSTRING_to_lstring(L0, _zFunction);
      lorx_orxSTRING_to_lstring(L0, _zFile);
      lorx_orxU32_to_linteger(L0, _u32Line);
      lorx_orxSTRING_to_lstring(L0, _zLog);
      lua_call(L0, 5, 1);
      ret = get_status("return from log callback!");
      lua_pop(L0, 1);
    }
  }
  return ret;
}

/*
** binding to _orxDebug_setLogCallback
*/
static int l_lorx_debug_setLogCallback(lua_State *L)
{
  // un-set previous lua callback
  if (luacb_log != LUA_REFNIL)
  {
    luaL_unref(L, LUA_REGISTRYINDEX, luacb_log);
    luacb_log = LUA_REFNIL;
  }
  // set lua callback
  if (!lua_isnil(L, 1))
  {
    luaL_checktype(L, 1, LUA_TFUNCTION);
    lua_pushvalue(L, 1);
    luacb_log = luaL_ref(L, LUA_REGISTRYINDEX);
  }
  
  return 0;
}

/*
** agent callback for orxConfig_Save
*/
static orxBOOL orxFASTCALL lorx_config_save_callback(const orxSTRING _zSectionName, const orxSTRING _zKeyName, const orxSTRING _zFileName, orxBOOL _bUseEncryption)
{
  orxBOOL ret = orxTRUE;
  if (luacb_cfgsave != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_cfgsave);
    if (!lua_isnil(L0, -1))
    {
      lorx_orxSTRING_to_lstring(L0, _zSectionName);
      lorx_orxSTRING_to_lstring(L0, _zKeyName);
      lorx_orxSTRING_to_lstring(L0, _zFileName);
      lorx_orxBOOL_to_lboolean(L0, _bUseEncryption);
      lua_call(L0, 4, 1);
      ret = lorx_lboolean_to_orxBOOL(L0, -1);
      lua_pop(L0, 1); // pop ret
    }
  }
  return ret;
}

/*
** agent callback for orxConfig_Clear
*/
static orxBOOL orxFASTCALL lorx_config_clear_callback(const orxSTRING _zSectionName, const orxSTRING _zKeyName)
{
  orxBOOL ret = orxTRUE;
  if (luacb_cfgclear != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_cfgclear);
    if (lua_isnil(L0, -1))
    {
      lorx_orxSTRING_to_lstring(L0, _zSectionName);
      lorx_orxSTRING_to_lstring(L0, _zKeyName);
      lua_call(L0, 2, 1);
      ret = lorx_lboolean_to_orxBOOL(L0, -1); // push ret
      lua_pop(L0, 1); // pop ret
    }
  }
  return ret;
}

/*
** binding to orxConfig_Save
*/
static int l_lorx_config_save(lua_State *L)
{
  const orxSTRING zFileName = lorx_lstring_to_orxSTRING(L, 1);
  orxBOOL bUseEncryption = lorx_lboolean_to_orxBOOL(L, 2);
  if (!lua_isnil(L, 3))
  {
    luaL_checktype(L, 3, LUA_TFUNCTION);
    lua_pushvalue(L, 3);
    luacb_cfgsave = luaL_ref(L, LUA_REGISTRYINDEX);
  }

  orxSTATUS ret = orxConfig_Save(zFileName, bUseEncryption, lorx_config_save_callback);
  lorx_orxSTATUS_to_lenumstr(L, ret);

  // reset the callback
  luaL_unref(L0, LUA_REGISTRYINDEX, luacb_cfgsave);
  luacb_cfgsave = LUA_REFNIL;

  return 1;
}

/*
** binding to orxConfig_Clear
*/
static int l_lorx_config_clear(lua_State *L)
{
  if (!lua_isnil(L, 1))
  {
    luaL_checktype(L, 1, LUA_TFUNCTION);
    lua_pushvalue(L, 1);
    luacb_cfgclear = luaL_ref(L, LUA_REGISTRYINDEX);
  }

  orxSTATUS ret = orxConfig_Clear(lorx_config_clear_callback);
  lorx_orxSTATUS_to_lenumstr(L, ret);

  // reset the callback
  luaL_unref(L0, LUA_REGISTRYINDEX, luacb_cfgclear);
  luacb_cfgclear = LUA_REFNIL;

  return 1;
}

/*
** binding to orxObject_CreateNeighborList and orxObject_DeleteNeighborList
*/
static int l_lorx_object_getNeighborList(lua_State *L)
{
  const orxOBOX *pstBox = lorx_luserdata_to_orxOBOX_const(L, 1);
  orxSTRINGID stGroupID = lorx_linteger_to_orxSTRINGID(L, 2);
  orxBANK *pstBank = orxObject_CreateNeighborList(pstBox, stGroupID);

  // pull every object out from the bank and put them in the table to be returned
  lua_newtable(L);
  for(orxU32 i=0; i < orxBank_GetCount(pstBank); ++i)
  {
    orxOBJECT * pstObject = *((orxOBJECT **) orxBank_GetAtIndex(pstBank, i));
    lorx_orxOBJECT_to_luserdata(L, pstObject);
    lua_rawseti(L, -2, i+1);
  }
  orxObject_DeleteNeighborList(pstBank);

  return 1;
}

/*
** binding to orxInput_GetBindingList (override the auto-generated one)
*/
static int l_lorx_input_getBindingList(lua_State *L)
{
  const orxSTRING _zName = lorx_lstring_to_orxSTRING(L, 1);
  orxINPUT_TYPE *_aeTypeList = malloc(sizeof(orxINPUT_TYPE)*orxINPUT_KU32_BINDING_NUMBER);
  orxENUM *_aeIDList = malloc(sizeof(orxENUM)*orxINPUT_KU32_BINDING_NUMBER);
  orxINPUT_MODE *_aeModeList = malloc(sizeof(orxINPUT_MODE)*orxINPUT_KU32_BINDING_NUMBER);

  orxSTATUS retval = orxInput_GetBindingList(_zName, _aeTypeList, _aeIDList, _aeModeList);

  lorx_orxSTATUS_to_lenumstr(L, retval);
  lua_createtable(L, orxINPUT_KU32_BINDING_NUMBER, 0);
  lua_createtable(L, orxINPUT_KU32_BINDING_NUMBER, 0);
  lua_createtable(L, orxINPUT_KU32_BINDING_NUMBER, 0);
  for (orxU32 i = 0; i < orxINPUT_KU32_BINDING_NUMBER; i++)
  {
    lorx_orxINPUT_TYPE_to_lenumstr(L, _aeTypeList[i]);
    lua_rawseti(L, -4, i+1);
    lorx_input_orxENUM_to_lenumstr(L, _aeTypeList[i], _aeIDList[i]);
    lua_rawseti(L, -3, i+1);
    lorx_orxINPUT_MODE_to_lenumstr(L, _aeModeList[i]);
    lua_rawseti(L, -2, i+1);
  }

  free(_aeTypeList);
  free(_aeIDList);
  free(_aeModeList);

  return 4;
}


static int l_lorx_sound_filterDataBiquad(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_BIQUAD;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fA0 = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT fA1 = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT fA2 = lorx_lnumber_to_orxFLOAT(L, 4);
  orxFLOAT fB0 = lorx_lnumber_to_orxFLOAT(L, 5);
  orxFLOAT fB1 = lorx_lnumber_to_orxFLOAT(L, 6);
  orxFLOAT fB2 = lorx_lnumber_to_orxFLOAT(L, 7);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stBiquad.fA0 = fA0;
  stData.stBiquad.fA1 = fA1;
  stData.stBiquad.fA2 = fA2;
  stData.stBiquad.fB0 = fB0;
  stData.stBiquad.fB1 = fB1;
  stData.stBiquad.fB2 = fB2;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataLowPass(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_LOW_PASS;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxU32 u32Order = lorx_linteger_to_orxU32(L, 3);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stLowPass.fFrequency = fFrequency;
  stData.stLowPass.u32Order = u32Order;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataHighPass(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_HIGH_PASS;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxU32 u32Order = lorx_linteger_to_orxU32(L, 3);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stHighPass.fFrequency = fFrequency;
  stData.stHighPass.u32Order = u32Order;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataBandPass(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_BAND_PASS;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxU32 u32Order = lorx_linteger_to_orxU32(L, 3);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stBandPass.fFrequency = fFrequency;
  stData.stBandPass.u32Order = u32Order;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataLowShelf(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_LOW_SHELF;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT fQ = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT fGain = lorx_lnumber_to_orxFLOAT(L, 4);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stLowShelf.fFrequency = fFrequency;
  stData.stLowShelf.fQ = fQ;
  stData.stLowShelf.fGain = fGain;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataNotch(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_NOTCH;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT fQ = lorx_lnumber_to_orxFLOAT(L, 3);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stNotch.fFrequency = fFrequency;
  stData.stNotch.fQ = fQ;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataDelay(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_DELAY;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fDelay = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT fDecay = lorx_lnumber_to_orxFLOAT(L, 3);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stDelay.fDelay = fDelay;
  stData.stDelay.fDecay = fDecay;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataHighShelf(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_HIGH_SHELF;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT fQ = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT fGain = lorx_lnumber_to_orxFLOAT(L, 4);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stHighShelf.fFrequency = fFrequency;
  stData.stHighShelf.fQ = fQ;
  stData.stHighShelf.fGain = fGain;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}

static int l_lorx_sound_filterDataPeaking(lua_State *L)
{
  orxSOUND_FILTER_TYPE eType = orxSOUND_FILTER_TYPE_PEAKING;
  orxSTRINGID stNameID = lorx_linteger_to_orxSTRINGID(L, 1);
  orxFLOAT fFrequency = lorx_lnumber_to_orxFLOAT(L, 2);
  orxFLOAT fQ = lorx_lnumber_to_orxFLOAT(L, 3);
  orxFLOAT fGain = lorx_lnumber_to_orxFLOAT(L, 4);
  orxSOUND_FILTER_DATA stData;
  stData.eType = eType;
  stData.stNameID = stNameID;
  stData.stPeaking.fFrequency = fFrequency;
  stData.stPeaking.fQ = fQ;
  stData.stPeaking.fGain = fGain;
  lorx_orxSOUND_FILTER_DATA_to_luserdata_struct(L, &stData);
  return 1;
}


/*
** retrive timer callback reference from the ref table if it exists, or reference the callback function and put it in the ref table.
** (this way we will have the same reference for the same function, making it possible to unregister callbacks by comparing the reference values) 
*/
static int get_timercbref(lua_State *L, int i)
{
  int ref;

  // check the i-th object is a function
  if (!lua_isfunction(L, i))
    LORX_ERROR("the lua object at the given index is not a function!\n");

  // get the ref table
  lua_rawgeti(L, LUA_REGISTRYINDEX, luatb_timercbs);

  // check if the function is already referenced
  lua_pushvalue(L, i);
  lua_rawget(L, -2);
  if (lua_isnil(L, -1))
  {
    // pop out nil
    lua_pop(L, 1);
    // push in the function
    lua_pushvalue(L, i);
    // make new reference
    ref = luaL_ref(L, LUA_REGISTRYINDEX);
    // store func:ref in ref table
    lua_pushvalue(L, i);
    lua_pushinteger(L, ref);
    lua_rawset(L, -3);
  }
  else
  {
    // get ref
    ref = lua_tointeger(L, -1);
    // pop out ref
    lua_pop(L, 1);
  }

  // pop out ref table
  lua_pop(L, 1);

  return ref;
}

static int increase_timercb_refcount(int tcbref)
{
  int rc = -1;
  void* value = orxHashTable_Get(rctable, (orxU64)tcbref);
  if (value)
  {
    rc = (uintptr_t)value + 1;
    orxHashTable_Set(rctable, (orxU64)tcbref, (void*)((uintptr_t)rc));
  }
  else
  {
    rc = 1;
    orxHashTable_Add(rctable, (orxU64)tcbref, (void*)((uintptr_t)1));
  }
  return rc;
}

static int decrease_timercb_refcount(int tcbref)
{
  int rc = -1;
  void* value = orxHashTable_Get(rctable, (orxU64)tcbref);
  if (value)
  {
    rc = (uintptr_t)value;
    rc--;
    if (rc <= 0)
    {
      // remove ref table entry
      lua_rawgeti(L0, LUA_REGISTRYINDEX, luatb_timercbs);
      lua_rawgeti(L0, LUA_REGISTRYINDEX, tcbref);
      lua_pushnil(L0);
      lua_rawset(L0, -3);
      lua_pop(L0, 1);
      // unref the callback
      luaL_unref(L0, LUA_REGISTRYINDEX, tcbref);
      // remove ref count table entry
      orxHashTable_Remove(rctable, (orxU64)tcbref);
    }
    else
    {
      // update ref count
      orxHashTable_Set(rctable, (orxU64)tcbref, (void*)((uintptr_t)rc));
    }
  }
  else
  {
    LORX_ERROR("trying to decrease the ref count of a timer callback that is not yet registered!\n");
  }
  return rc;
}


/*
** clock callback function
*/
static void orxFASTCALL lorx_clock_callback(const orxCLOCK_INFO *_pstClockInfo, void *_pContext)
{
  // context is just a lua callback reference
  int cbref = (int)((uintptr_t)_pContext);
  if (cbref != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, cbref);
    lorx_orxCLOCK_INFO_to_luserdata_const(L0, _pstClockInfo);
    lua_call(L0, 1, 0);
  }
}

/*
** binding to orxClock_AddGlobalTimer
*/
static int l_lorx_clock_addGlobalTimer(lua_State *L)
{
  luaL_checktype(L, 1, LUA_TFUNCTION);
  int cbref = get_timercbref(L, 1);
  orxFLOAT fDelay = lorx_lnumber_to_orxFLOAT(L, 2);
  orxS32 s32Repetition = lorx_linteger_to_orxS32(L, 3);
  // unique lua callback ref as context
  void *pContext = (void*)((uintptr_t)cbref);
  orxSTATUS ret = orxClock_AddGlobalTimer(lorx_clock_callback, fDelay, s32Repetition, pContext);
  lorx_orxSTATUS_to_lenumstr(L, ret);
  increase_timercb_refcount(cbref);
  return 1;
}

/*
** binding to orxClock_RemoveGlobalTimer
*/
static int l_lorx_clock_removeGlobalTimer(lua_State *L)
{
  luaL_checktype(L, 1, LUA_TFUNCTION);
  int cbref = get_timercbref(L, 1);
  orxFLOAT fDelay = lorx_lnumber_to_orxFLOAT(L, 2);
  // unique lua callback ref as context
  void *pContext = (void*)((uintptr_t)cbref);
  orxSTATUS ret = orxClock_RemoveGlobalTimer(lorx_clock_callback, fDelay, pContext);
  lorx_orxSTATUS_to_lenumstr(L, ret);
  decrease_timercb_refcount(cbref);
  return 1;
}

/*
** register all extra sub-module functions
** (called after all sub-modules are loaded)
*/
static void lorx_register_extra_submod_funcs(lua_State *L)
{
  assert(lua_getglobal(L, "lorx") == LUA_TTABLE);

  assert(lua_getfield(L, -1, "config") == LUA_TTABLE);
  // lorx.config.save
  assert(lua_getfield(L, -1, "save") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_config_save);
  lua_setfield(L, -2, "save");
  // lorx.config.clear
  assert(lua_getfield(L, -1, "clear") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_config_clear);
  lua_setfield(L, -2, "clear");
  lua_pop(L, 1); // lorx.config

  assert(lua_getfield(L, -1, "object") == LUA_TTABLE);
  // lorx.object.getNeighborList
  assert(lua_getfield(L, -1, "getNeighborList") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_object_getNeighborList);
  lua_setfield(L, -2, "getNeighborList");
  lua_pop(L, 1); // lorx.object

  assert(lua_getfield(L, -1, "input") == LUA_TTABLE);
  // lorx.input.getBindingList (override!)
  // assert(lua_getfield(L, -1, "getBindingList") == LUA_TNIL);
  // lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_input_getBindingList);
  lua_setfield(L, -2, "getBindingList");
  lua_pop(L, 1); // lorx.input

  assert(lua_getfield(L, -1, "sound") == LUA_TTABLE);
  assert(lua_getfield(L, -1, "filterDataBiquad") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataBiquad);
  lua_setfield(L, -2, "filterDataBiquad");
  assert(lua_getfield(L, -1, "filterDataLowPass") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataLowPass);
  lua_setfield(L, -2, "filterDataLowPass");
  assert(lua_getfield(L, -1, "filterDataHighPass") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataHighPass);
  lua_setfield(L, -2, "filterDataHighPass");
  assert(lua_getfield(L, -1, "filterDataLowShelf") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataLowShelf);
  lua_setfield(L, -2, "filterDataLowShelf");
  assert(lua_getfield(L, -1, "filterDataHighShelf") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataHighShelf);
  lua_setfield(L, -2, "filterDataHighShelf");
  assert(lua_getfield(L, -1, "filterDataNotch") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataNotch);
  lua_setfield(L, -2, "filterDataNotch");
  assert(lua_getfield(L, -1, "filterDataPeaking") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataPeaking);
  lua_setfield(L, -2, "filterDataPeaking");
  assert(lua_getfield(L, -1, "filterDataDelay") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_sound_filterDataDelay);
  lua_setfield(L, -2, "filterDataDelay");
  lua_pop(L, 1); // lorx.sound

  assert(lua_getfield(L, -1, "clock") == LUA_TTABLE);
  assert(lua_getfield(L, -1, "addGlobalTimer") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_clock_addGlobalTimer);
  lua_setfield(L, -2, "addGlobalTimer");
  assert(lua_getfield(L, -1, "removeGlobalTimer") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_clock_removeGlobalTimer);
  lua_setfield(L, -2, "removeGlobalTimer");
  lua_pop(L, 1); // lorx.clock

  assert(lua_getfield(L, -1, "command") == LUA_TTABLE);
  assert(lua_getfield(L, -1, "sRegister") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_command_sregister);
  lua_setfield(L, -2, "sRegister");
  assert(lua_getfield(L, -1, "sUnregister") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_command_sunregister);
  lua_setfield(L, -2, "sUnregister");
  assert(lua_getfield(L, -1, "sIsRegistered") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_command_sisregistered);
  lua_setfield(L, -2, "sIsRegistered");
  assert(lua_getfield(L, -1, "sComment") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_command_scomment);
  lua_setfield(L, -2, "sComment");
  lua_pop(L, 1); // lorx.command

  assert(lua_getfield(L, -1, "debug") == LUA_TTABLE);
  assert(lua_getfield(L, -1, "setLogCallback") == LUA_TNIL);
  lua_pop(L, 1);
  lua_pushcfunction(L, l_lorx_debug_setLogCallback);
  lua_setfield(L, -2, "setLogCallback");
  lua_pop(L, 1); // lorx.debug

  lua_pop(L, 1); // lorx
}


//////////////////////////////////////////////////////////////////
//// extra methods, meta-functions and properties
//////////////////////////////////////////////////////////////////

#define STRUCTURE_CASTOR(TYPE) orx##TYPE
#define STRUCTURE_CAST_FUNCNAME(TYPE) l_lorx_orxSTRUCTURE_to_##TYPE
#define STRUCTURE_CAST_CONST_FUNCNAME(TYPE) l_lorx_orxSTRUCTURE_to_##TYPE##_const

#define DEFINE_STRUCTURE_CAST_FUNC(TYPE) \
static int STRUCTURE_CAST_FUNCNAME(TYPE)(lua_State *L) \
{ \
  orxSTRUCTURE *s = lorx_luserdata_to_orxSTRUCTURE(L, 1); \
  orx##TYPE *o = STRUCTURE_CASTOR(TYPE)(s); \
  lorx_##orx##TYPE##_to_luserdata(L, o); \
  return 1; \
}

#define DEFINE_STRUCTURE_CAST_CONST_FUNC(TYPE) \
static int STRUCTURE_CAST_CONST_FUNCNAME(TYPE)(lua_State *L) \
{ \
  const orxSTRUCTURE *s = lorx_luserdata_to_orxSTRUCTURE_const(L, 1); \
  const orx##TYPE *o = STRUCTURE_CASTOR(TYPE)(s); \
  lorx_##orx##TYPE##_to_luserdata_const(L, o); \
  return 1; \
}

DEFINE_STRUCTURE_CAST_FUNC(ANIM)
DEFINE_STRUCTURE_CAST_FUNC(ANIMPOINTER)
DEFINE_STRUCTURE_CAST_FUNC(ANIMSET)
DEFINE_STRUCTURE_CAST_FUNC(BODY)
DEFINE_STRUCTURE_CAST_FUNC(CAMERA)
DEFINE_STRUCTURE_CAST_FUNC(CLOCK)
DEFINE_STRUCTURE_CAST_FUNC(FONT)
DEFINE_STRUCTURE_CAST_FUNC(FRAME)
DEFINE_STRUCTURE_CAST_FUNC(FX)
DEFINE_STRUCTURE_CAST_FUNC(FXPOINTER)
DEFINE_STRUCTURE_CAST_FUNC(GRAPHIC)
DEFINE_STRUCTURE_CAST_FUNC(OBJECT)
DEFINE_STRUCTURE_CAST_FUNC(SOUND)
DEFINE_STRUCTURE_CAST_FUNC(SOUNDPOINTER)
DEFINE_STRUCTURE_CAST_FUNC(SHADER)
DEFINE_STRUCTURE_CAST_FUNC(SHADERPOINTER)
DEFINE_STRUCTURE_CAST_FUNC(SPAWNER)
DEFINE_STRUCTURE_CAST_FUNC(TEXT)
DEFINE_STRUCTURE_CAST_FUNC(TEXTURE)
DEFINE_STRUCTURE_CAST_FUNC(TIMELINE)
DEFINE_STRUCTURE_CAST_FUNC(VIEWPORT)

DEFINE_STRUCTURE_CAST_CONST_FUNC(ANIM)
DEFINE_STRUCTURE_CAST_CONST_FUNC(ANIMPOINTER)
DEFINE_STRUCTURE_CAST_CONST_FUNC(ANIMSET)
DEFINE_STRUCTURE_CAST_CONST_FUNC(BODY)
DEFINE_STRUCTURE_CAST_CONST_FUNC(CAMERA)
DEFINE_STRUCTURE_CAST_CONST_FUNC(CLOCK)
DEFINE_STRUCTURE_CAST_CONST_FUNC(FONT)
DEFINE_STRUCTURE_CAST_CONST_FUNC(FRAME)
DEFINE_STRUCTURE_CAST_CONST_FUNC(FX)
DEFINE_STRUCTURE_CAST_CONST_FUNC(FXPOINTER)
DEFINE_STRUCTURE_CAST_CONST_FUNC(GRAPHIC)
DEFINE_STRUCTURE_CAST_CONST_FUNC(OBJECT)
DEFINE_STRUCTURE_CAST_CONST_FUNC(SOUND)
DEFINE_STRUCTURE_CAST_CONST_FUNC(SOUNDPOINTER)
DEFINE_STRUCTURE_CAST_CONST_FUNC(SHADER)
DEFINE_STRUCTURE_CAST_CONST_FUNC(SHADERPOINTER)
DEFINE_STRUCTURE_CAST_CONST_FUNC(SPAWNER)
DEFINE_STRUCTURE_CAST_CONST_FUNC(TEXT)
DEFINE_STRUCTURE_CAST_CONST_FUNC(TEXTURE)
DEFINE_STRUCTURE_CAST_CONST_FUNC(TIMELINE)
DEFINE_STRUCTURE_CAST_CONST_FUNC(VIEWPORT)

static const struct luaL_Reg l_lorx_orxSTRUCTURE_m_extra[] = {
  { "toAnim", STRUCTURE_CAST_FUNCNAME(ANIM) },
  { "toAnimPointer", STRUCTURE_CAST_FUNCNAME(ANIMPOINTER) },
  { "toAnimSet", STRUCTURE_CAST_FUNCNAME(ANIMSET) },
  { "toBody", STRUCTURE_CAST_FUNCNAME(BODY) },
  { "toCamera", STRUCTURE_CAST_FUNCNAME(CAMERA) },
  { "toClock", STRUCTURE_CAST_FUNCNAME(CLOCK) },
  { "toFont", STRUCTURE_CAST_FUNCNAME(FONT) },
  { "toFrame", STRUCTURE_CAST_FUNCNAME(FRAME) },
  { "toFX", STRUCTURE_CAST_FUNCNAME(FX) },
  { "toFXPointer", STRUCTURE_CAST_FUNCNAME(FXPOINTER) },
  { "toGraphic", STRUCTURE_CAST_FUNCNAME(GRAPHIC) },
  { "toObject", STRUCTURE_CAST_FUNCNAME(OBJECT) },
  { "toSound", STRUCTURE_CAST_FUNCNAME(SOUND) },
  { "toSoundPointer", STRUCTURE_CAST_FUNCNAME(SOUNDPOINTER) },
  { "toShader", STRUCTURE_CAST_FUNCNAME(SHADER) },
  { "toShaderPointer", STRUCTURE_CAST_FUNCNAME(SHADERPOINTER) },
  { "toSpawner", STRUCTURE_CAST_FUNCNAME(SPAWNER) },
  { "toText", STRUCTURE_CAST_FUNCNAME(TEXT) },
  { "toTexture", STRUCTURE_CAST_FUNCNAME(TEXTURE) },
  { "toTimeline", STRUCTURE_CAST_FUNCNAME(TIMELINE) },
  { "toViewport", STRUCTURE_CAST_FUNCNAME(VIEWPORT) },
  { "toAnimConst", STRUCTURE_CAST_CONST_FUNCNAME(ANIM) },
  { "toAnimPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(ANIMPOINTER) },
  { "toAnimSetConst", STRUCTURE_CAST_CONST_FUNCNAME(ANIMSET) },
  { "toBodyConst", STRUCTURE_CAST_CONST_FUNCNAME(BODY) },
  { "toCameraConst", STRUCTURE_CAST_CONST_FUNCNAME(CAMERA) },
  { "toClockConst", STRUCTURE_CAST_CONST_FUNCNAME(CLOCK) },
  { "toFontConst", STRUCTURE_CAST_CONST_FUNCNAME(FONT) },
  { "toFrameConst", STRUCTURE_CAST_CONST_FUNCNAME(FRAME) },
  { "toFXConst", STRUCTURE_CAST_CONST_FUNCNAME(FX) },
  { "toFXPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(FXPOINTER) },
  { "toGraphicConst", STRUCTURE_CAST_CONST_FUNCNAME(GRAPHIC) },
  { "toObjectConst", STRUCTURE_CAST_CONST_FUNCNAME(OBJECT) },
  { "toSoundConst", STRUCTURE_CAST_CONST_FUNCNAME(SOUND) },
  { "toSoundPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(SOUNDPOINTER) },
  { "toShaderConst", STRUCTURE_CAST_CONST_FUNCNAME(SHADER) },
  { "toShaderPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(SHADERPOINTER) },
  { "toSpawnerConst", STRUCTURE_CAST_CONST_FUNCNAME(SPAWNER) },
  { "toTextConst", STRUCTURE_CAST_CONST_FUNCNAME(TEXT) },
  { "toTextureConst", STRUCTURE_CAST_CONST_FUNCNAME(TEXTURE) },
  { "toTimelineConst", STRUCTURE_CAST_CONST_FUNCNAME(TIMELINE) },
  { "toViewportConst", STRUCTURE_CAST_CONST_FUNCNAME(VIEWPORT) },
  {NULL, NULL}
};

static const struct luaL_Reg l_lorx_orxSTRUCTURE_const_m_extra[] = {
  { "toAnimConst", STRUCTURE_CAST_CONST_FUNCNAME(ANIM) },
  { "toAnimPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(ANIMPOINTER) },
  { "toAnimSetConst", STRUCTURE_CAST_CONST_FUNCNAME(ANIMSET) },
  { "toBodyConst", STRUCTURE_CAST_CONST_FUNCNAME(BODY) },
  { "toCameraConst", STRUCTURE_CAST_CONST_FUNCNAME(CAMERA) },
  { "toClockConst", STRUCTURE_CAST_CONST_FUNCNAME(CLOCK) },
  { "toFontConst", STRUCTURE_CAST_CONST_FUNCNAME(FONT) },
  { "toFrameConst", STRUCTURE_CAST_CONST_FUNCNAME(FRAME) },
  { "toFXConst", STRUCTURE_CAST_CONST_FUNCNAME(FX) },
  { "toFXPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(FXPOINTER) },
  { "toGraphicConst", STRUCTURE_CAST_CONST_FUNCNAME(GRAPHIC) },
  { "toObjectConst", STRUCTURE_CAST_CONST_FUNCNAME(OBJECT) },
  { "toSoundConst", STRUCTURE_CAST_CONST_FUNCNAME(SOUND) },
  { "toSoundPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(SOUNDPOINTER) },
  { "toShaderConst", STRUCTURE_CAST_CONST_FUNCNAME(SHADER) },
  { "toShaderPointerConst", STRUCTURE_CAST_CONST_FUNCNAME(SHADERPOINTER) },
  { "toSpawnerConst", STRUCTURE_CAST_CONST_FUNCNAME(SPAWNER) },
  { "toTextConst", STRUCTURE_CAST_CONST_FUNCNAME(TEXT) },
  { "toTextureConst", STRUCTURE_CAST_CONST_FUNCNAME(TEXTURE) },
  { "toTimelineConst", STRUCTURE_CAST_CONST_FUNCNAME(TIMELINE) },
  { "toViewportConst", STRUCTURE_CAST_CONST_FUNCNAME(VIEWPORT) },
  {NULL, NULL}
};

#define OBJECT_GET_STRUCTURE_FUNCNAME(TYPE) l_lorx_orxOBJECT_get_##TYPE
#define DEFINE_OBJECT_GET_STRUCTURE_FUNC(TYPE) \
static int OBJECT_GET_STRUCTURE_FUNCNAME(TYPE)(lua_State *L) \
{ \
  orxOBJECT *pstObject = lorx_luserdata_to_orxOBJECT(L, 1); \
  orx##TYPE *pstAnim = orxOBJECT_GET_STRUCTURE(pstObject, TYPE); \
  lorx_orx##TYPE##_to_luserdata(L, pstAnim); \
  return 1; \
}

DEFINE_OBJECT_GET_STRUCTURE_FUNC(ANIMPOINTER)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(BODY)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(CLOCK)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(FRAME)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(FXPOINTER)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(GRAPHIC)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(SHADERPOINTER)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(SOUNDPOINTER)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(SPAWNER)
DEFINE_OBJECT_GET_STRUCTURE_FUNC(TIMELINE)


static const struct luaL_Reg l_lorx_orxOBJECT_m_extra[] = {
  { "getAnimPointer", OBJECT_GET_STRUCTURE_FUNCNAME(ANIMPOINTER) },
  { "getBody", OBJECT_GET_STRUCTURE_FUNCNAME(BODY) },
  { "getClock", OBJECT_GET_STRUCTURE_FUNCNAME(CLOCK) },
  { "getFrame", OBJECT_GET_STRUCTURE_FUNCNAME(FRAME) },
  { "getFXPointer", OBJECT_GET_STRUCTURE_FUNCNAME(FXPOINTER) },
  { "getGraphic", OBJECT_GET_STRUCTURE_FUNCNAME(GRAPHIC) },
  { "getShaderPointer", OBJECT_GET_STRUCTURE_FUNCNAME(SHADERPOINTER) },
  { "getSoundPointer", OBJECT_GET_STRUCTURE_FUNCNAME(SOUNDPOINTER) },
  { "getSpawner", OBJECT_GET_STRUCTURE_FUNCNAME(SPAWNER) },
  { "getTimeline", OBJECT_GET_STRUCTURE_FUNCNAME(TIMELINE) },
  { NULL, NULL }
};


/*
** lorx.vector.__add (just add with float operand support)
*/
static int l_lorx_orxVECTOR___add(lua_State *L)
{
  lua_pop(L, lua_gettop(L)-2); // remove excessive params
  // ensure the order: vector, float
  if (lua_isnumber(L, 1))
    lua_insert(L, 1);
  if (lua_isuserdata(L, 2)) /* vector, vector */
  {
    // get lorx.vector.add
    assert(lua_getglobal(L, "lorx") == LUA_TTABLE);
    assert(lua_getfield(L, -1, "vector") == LUA_TTABLE);
    assert(lua_getfield(L, -1, "add") == LUA_TFUNCTION);
    // put the function to bottom and call it
    lua_insert(L, 1);
    // pop lorx and lorx.vector
    lua_pop(L, 2);
    lua_call(L, 2, 1);
  }
  else /* vector, float */
  {
    orxVECTOR *v = lorx_luserdata_to_orxVECTOR(L, 1);
    orxFLOAT f = lorx_lnumber_to_orxFLOAT(L, 2);
    orxVECTOR res = { {v->fX + f}, {v->fY +f}, {v->fZ + f} };
    lorx_orxVECTOR_to_luserdata_struct(L, &res);
  }
  return 1;
}

/*
** lorx.vector.__sub (just sub with float operand support)
*/
static int l_lorx_orxVECTOR___sub(lua_State *L)
{
  lua_pop(L, lua_gettop(L)-2); // remove excessive params
  if (lua_isuserdata(L, 1) && lua_isuserdata(L, 2)) /* vector, vector */
  {
    // get lorx.vector.sub
    assert(lua_getglobal(L, "lorx") == LUA_TTABLE);
    assert(lua_getfield(L, -1, "vector") == LUA_TTABLE);
    assert(lua_getfield(L, -1, "sub") == LUA_TFUNCTION);
    lua_insert(L, 1);
    lua_pop(L, 2);
    lua_call(L, 2, 1);
  }
  else /* vector, float or float, vector */
  {
    if (lua_isnumber(L, 1))
    {
      orxFLOAT f = lorx_lnumber_to_orxFLOAT(L, 1);
      orxVECTOR *v = lorx_luserdata_to_orxVECTOR(L, 2);
      orxVECTOR res = { {f - v->fX}, {f - v->fY}, {f - v->fZ} };
      lorx_orxVECTOR_to_luserdata_struct(L, &res);
    }
    else
    {
      orxVECTOR *v = lorx_luserdata_to_orxVECTOR(L, 1);
      orxFLOAT f = lorx_lnumber_to_orxFLOAT(L, 2);
      orxVECTOR res = { {v->fX - f}, {v->fY - f}, {v->fZ - f} };
      lorx_orxVECTOR_to_luserdata_struct(L, &res);
    }
  }
  return 1;
}

static int l_lorx_orxVECTOR___mul(lua_State *L)
{
  lua_pop(L, lua_gettop(L)-2); // remove excessive params
  // ensure the order: vector, float
  if (lua_isnumber(L, 1))
    lua_insert(L, 1);
  // get lorx.vector
  assert(lua_getglobal(L, "lorx") == LUA_TTABLE);
  assert(lua_getfield(L, -1, "vector") == LUA_TTABLE);
  if (lua_isuserdata(L, 2)) /* vector */
    assert(lua_getfield(L, -1, "mul") == LUA_TFUNCTION);
  else /* float */
    assert(lua_getfield(L, -1, "mulf") == LUA_TFUNCTION);
  lua_insert(L, 1);
  lua_pop(L, 2);
  lua_call(L, 2, 1);
  return 1;
}

static int l_lorx_orxVECTOR___div(lua_State *L)
{
  lua_pop(L, lua_gettop(L)-2); // remove excessive params
  if (lua_isuserdata(L, 1) && lua_isuserdata(L, 2)) /* vector, vector */
  {
    // get lorx.vector.div
    assert(lua_getglobal(L, "lorx") == LUA_TTABLE);
    assert(lua_getfield(L, -1, "vector") == LUA_TTABLE);
    assert(lua_getfield(L, -1, "div") == LUA_TFUNCTION);
    lua_insert(L, 1);
    lua_pop(L, 2);
    lua_call(L, 2, 1);
  }
  else /* vector, float or float, vector */
  {
    if (lua_isnumber(L, 1)) /* float/vector */
    {
      orxFLOAT f = lorx_lnumber_to_orxFLOAT(L, 1);
      orxVECTOR *v = lorx_luserdata_to_orxVECTOR(L, 2);
      orxVECTOR res = { {f / v->fX}, {f / v->fY}, {f / v->fZ} };
      lorx_orxVECTOR_to_luserdata_struct(L, &res);
    }
    else /* vector/float */
    {
      if (lua_tonumber(L, 2) == 0.0)
        luaL_error(L, "divided by zero!");

      // get lorx.vector.divf
      assert(lua_getglobal(L, "lorx") == LUA_TTABLE);
      assert(lua_getfield(L, -1, "vector") == LUA_TTABLE);
      assert(lua_getfield(L, -1, "divf") == LUA_TFUNCTION);
      lua_insert(L, 1);
      lua_pop(L, 2);
      lua_call(L, 2, 1);
    }
  }
  return 1;
}

static int l_lorx_orxVECTOR___unm(lua_State *L)
{
  lua_pop(L, lua_gettop(L)-1); // remove excessive params
  lua_pushnumber(L, 0);
  lua_insert(L, 1);
  l_lorx_orxVECTOR___sub(L);
  return 1;
}

static int l_lorx_orxVECTOR___eq(lua_State *L)
{
  lua_pop(L, lua_gettop(L)-2);
  assert(lua_getfield(L, 1, "areEqual") == LUA_TFUNCTION);
  lua_insert(L, 1);
  lua_call(L, 2, 1);
  return 1;
}

static int l_lorx_orxVECTOR___tostring(lua_State *L)
{
  orxVECTOR *v = lorx_luserdata_to_orxVECTOR(L, 1);
  char buf[256];
  snprintf(buf, 256, "(%.4f %.4f %.4f)", v->fX, v->fY, v->fZ);
  lua_pushstring(L, buf);
  return 1;
}

static const luaL_Reg l_lorx_orxVECTOR_mm_extra[] = {
  { "__add", l_lorx_orxVECTOR___add },
  { "__sub", l_lorx_orxVECTOR___sub },
  { "__mul", l_lorx_orxVECTOR___mul },
  { "__div", l_lorx_orxVECTOR___div },
  { "__unm", l_lorx_orxVECTOR___unm },
  { "__eq", l_lorx_orxVECTOR___eq },
  { "__tostring", l_lorx_orxVECTOR___tostring },
  { NULL, NULL }
};


static int l_lorx_orxSOUND_FILTER_DATA___index(lua_State *L)
{
  orxSOUND_FILTER_DATA *pstData = lorx_luserdata_to_orxSOUND_FILTER_DATA(L, 1);
  const char* key = luaL_checkstring(L, 2);

  int notField = 0;

  if (strcmp(key, "type") == 0)
  {
    lorx_orxSOUND_FILTER_TYPE_to_lenumstr(L, pstData->eType);
  }
  else if (strcmp(key, "nameid") == 0)
  {
    lorx_orxSTRINGID_to_linteger(L, pstData->stNameID);
  }
  else
  {
    if (pstData->eType == orxSOUND_FILTER_TYPE_BIQUAD)
    {
      if (strcmp(key, "a0") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fA0);
      }
      else if (strcmp(key, "a1") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fA1);
      }
      else if (strcmp(key, "a2") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fA2);
      }
      else if (strcmp(key, "b0") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fB0);
      }
      else if (strcmp(key, "b1") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fB1);
      }
      else if (strcmp(key, "b2") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fB2);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_LOW_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowPass.fFrequency);
      }
      else if (strcmp(key, "order") == 0)
      {
        lorx_orxU32_to_linteger(L, pstData->stLowPass.u32Order);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_HIGH_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighPass.fFrequency);
      }
      else if (strcmp(key, "order") == 0)
      {
        lorx_orxU32_to_linteger(L, pstData->stHighPass.u32Order);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_BAND_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBandPass.fFrequency);
      }
      else if (strcmp(key, "order") == 0)
      {
        lorx_orxU32_to_linteger(L, pstData->stBandPass.u32Order);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_LOW_SHELF)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowShelf.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowShelf.fQ);
      }
      else if (strcmp(key, "gain") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowShelf.fGain);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_HIGH_SHELF)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighShelf.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighShelf.fQ);
      }
      else if (strcmp(key, "gain") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighShelf.fGain);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_NOTCH)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stNotch.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stNotch.fQ);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_PEAKING)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stPeaking.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stPeaking.fQ);
      }
      else if (strcmp(key, "gain") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stPeaking.fGain);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_DELAY)
    {
      if (strcmp(key, "delay") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stDelay.fDelay);
      }
      else if (strcmp(key, "decay") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stDelay.fDecay);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_NONE)
    {
      lua_pushnil(L);
    }
    else
    {
      LORX_ERROR("unexpected orxSOUND_FILTER_TYPE: %u!\n", pstData->eType);
    }
  }

  if (notField)
  {
    luaL_getmetatable(L, "lorx.orxSOUND_FILTER_DATA");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }

  return 1;
}

static int l_lorx_orxSOUND_FILTER_DATA___newindex(lua_State *L)
{
  orxSOUND_FILTER_DATA *pstData = lorx_luserdata_to_orxSOUND_FILTER_DATA(L, 1);
  const char* key = luaL_checkstring(L, 2);

  int notField = 0;

  if (strcmp(key, "type") == 0)
  {
    pstData->eType = lorx_lenumstr_to_orxSOUND_FILTER_TYPE(L, 3);
  }
  else if (strcmp(key, "nameid") == 0)
  {
    pstData->stNameID = lorx_linteger_to_orxSTRINGID(L, 3);
  }
  else
  {
    if (pstData->eType == orxSOUND_FILTER_TYPE_BIQUAD)
    {
      if (strcmp(key, "a0") == 0)
      {
        pstData->stBiquad.fA0 = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "a1") == 0)
      {
        pstData->stBiquad.fA1 = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "a2") == 0)
      {
        pstData->stBiquad.fA2 = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "b0") == 0)
      {
        pstData->stBiquad.fB0 = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "b1") == 0)
      {
        pstData->stBiquad.fB1 = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "b2") == 0)
      {
        pstData->stBiquad.fB2 = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_LOW_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stLowPass.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "order") == 0)
      {
        pstData->stLowPass.u32Order = lorx_linteger_to_orxU32(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_HIGH_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stHighPass.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "order") == 0)
      {
        pstData->stHighPass.u32Order = lorx_linteger_to_orxU32(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_BAND_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stBandPass.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "order") == 0)
      {
        pstData->stBandPass.u32Order = lorx_linteger_to_orxU32(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_LOW_SHELF)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stLowShelf.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "q") == 0)
      {
        pstData->stLowShelf.fQ = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "gain") == 0)
      {
        pstData->stLowShelf.fGain = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_HIGH_SHELF)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stHighShelf.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "q") == 0)
      {
        pstData->stHighShelf.fQ = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "gain") == 0)
      {
        pstData->stHighShelf.fGain = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_NOTCH)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stNotch.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "q") == 0)
      {
        pstData->stNotch.fQ = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_PEAKING)
    {
      if (strcmp(key, "frequency") == 0)
      {
        pstData->stPeaking.fFrequency = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "q") == 0)
      {
        pstData->stPeaking.fQ = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "gain") == 0)
      {
        pstData->stPeaking.fGain = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_DELAY)
    {
      if (strcmp(key, "delay") == 0)
      {
        pstData->stDelay.fDelay = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else if (strcmp(key, "decay") == 0)
      {
        pstData->stDelay.fDecay = lorx_lnumber_to_orxFLOAT(L, 3);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_NONE)
    {
      lua_pushnil(L);
    }
    else
    {
      LORX_ERROR("unexpected orxSOUND_FILTER_DATA: %u!\n", pstData->eType);
    }
  }

  if (notField)
  {
    luaL_getmetatable(L, "lorx.orxSOUND_FILTER_DATA");
    lua_pushvalue(L, 2);
    lua_pushvalue(L, 3);
    lua_rawset(L, -3);
  }

  return 0;
}

static int l_lorx_orxSOUND_FILTER_DATA_const___index(lua_State *L)
{
  const orxSOUND_FILTER_DATA *pstData = lorx_luserdata_to_orxSOUND_FILTER_DATA_const(L, 1);
  const char* key = luaL_checkstring(L, 2);

  int notField = 0;

  if (strcmp(key, "type") == 0)
  {
    lorx_orxSOUND_FILTER_TYPE_to_lenumstr(L, pstData->eType);
  }
  else if (strcmp(key, "nameid") == 0)
  {
    lorx_orxSTRINGID_to_linteger(L, pstData->stNameID);
  }
  else
  {
    if (pstData->eType == orxSOUND_FILTER_TYPE_BIQUAD)
    {
      if (strcmp(key, "a0") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fA0);
      }
      else if (strcmp(key, "a1") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fA1);
      }
      else if (strcmp(key, "a2") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fA2);
      }
      else if (strcmp(key, "b0") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fB0);
      }
      else if (strcmp(key, "b1") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fB1);
      }
      else if (strcmp(key, "b2") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBiquad.fB2);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_LOW_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowPass.fFrequency);
      }
      else if (strcmp(key, "order") == 0)
      {
        lorx_orxU32_to_linteger(L, pstData->stLowPass.u32Order);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_HIGH_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighPass.fFrequency);
      }
      else if (strcmp(key, "order") == 0)
      {
        lorx_orxU32_to_linteger(L, pstData->stHighPass.u32Order);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_BAND_PASS)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stBandPass.fFrequency);
      }
      else if (strcmp(key, "order") == 0)
      {
        lorx_orxU32_to_linteger(L, pstData->stBandPass.u32Order);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_LOW_SHELF)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowShelf.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowShelf.fQ);
      }
      else if (strcmp(key, "gain") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stLowShelf.fGain);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_HIGH_SHELF)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighShelf.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighShelf.fQ);
      }
      else if (strcmp(key, "gain") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stHighShelf.fGain);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_NOTCH)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stNotch.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stNotch.fQ);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_PEAKING)
    {
      if (strcmp(key, "frequency") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stPeaking.fFrequency);
      }
      else if (strcmp(key, "q") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stPeaking.fQ);
      }
      else if (strcmp(key, "gain") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stPeaking.fGain);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_DELAY)
    {
      if (strcmp(key, "delay") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stDelay.fDelay);
      }
      else if (strcmp(key, "decay") == 0)
      {
        lorx_orxFLOAT_to_lnumber(L, pstData->stDelay.fDecay);
      }
      else 
      {
        notField = 1;
      }
    }
    else if (pstData->eType == orxSOUND_FILTER_TYPE_NONE)
    {
      lua_pushnil(L);
    }
    else
    {
      LORX_ERROR("unexpected orxSOUND_FILTER_DATA: %u!\n", pstData->eType);
    }
  }

  if (notField)
  {
    luaL_getmetatable(L, "lorx.orxSOUND_FILTER_DATA#");
    lua_pushvalue(L, 2);
    lua_rawget(L, -2);
  }

  return 1;
}

static const luaL_Reg l_lorx_orxSOUND_DATA_FILTER_mm_extra[] = {
  { "__index", l_lorx_orxSOUND_FILTER_DATA___index },
  { "__newindex", l_lorx_orxSOUND_FILTER_DATA___newindex },
  { NULL, NULL }
};

static const luaL_Reg l_lorx_orxSOUND_DATA_FILTER_const_mm_extra[] = {
  { "__index", l_lorx_orxSOUND_FILTER_DATA_const___index },
  { NULL, NULL }
};


/*
** binding to orxClock_AddTimer
*/
static int l_lorx_orxCLOCK_addTimer(lua_State *L)
{
  orxCLOCK *pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  luaL_checktype(L, 2, LUA_TFUNCTION);
  int cbref = get_timercbref(L, 2);
  orxFLOAT fDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  orxS32 s32Repetition = lorx_linteger_to_orxS32(L, 4);
  // unique lua callback ref as context
  void *pContext = (void*)((uintptr_t)cbref);
  orxSTATUS ret = orxClock_AddTimer(pstClock, lorx_clock_callback, fDelay, s32Repetition, pContext);
  lorx_orxSTATUS_to_lenumstr(L, ret);
  increase_timercb_refcount(cbref);
  return 1;
}

/*
** binding to orxClock_RemoveTimer
*/
static int l_lorx_orxCLOCK_removeTimer(lua_State *L)
{
  orxCLOCK *pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  luaL_checktype(L, 2, LUA_TFUNCTION);
  int cbref = get_timercbref(L, 2);
  orxFLOAT fDelay = lorx_lnumber_to_orxFLOAT(L, 3);
  // unique lua callback ref as context
  void *pContext = (void*)((uintptr_t)cbref);
  orxSTATUS ret = orxClock_RemoveTimer(pstClock, lorx_clock_callback, fDelay, pContext);
  lorx_orxSTATUS_to_lenumstr(L, ret);
  decrease_timercb_refcount(cbref);
  return 1;
}

/*
** binding to orxClock_Register
*/
static int l_lorx_orxCLOCK_register(lua_State *L)
{
  orxCLOCK *pstClock = lorx_luserdata_to_orxCLOCK(L, 1);
  luaL_checktype(L, 2, LUA_TFUNCTION);
  orxMODULE_ID eModuleID = lorx_lenumstr_to_orxMODULE_ID(L, 3);
  orxCLOCK_PRIORITY ePriority = lorx_lenumstr_to_orxCLOCK_PRIORITY(L, 4);
  
  // check if there is already a clock callback registered from lua
  void *pContext = orxClock_GetContext(pstClock, lorx_clock_callback);
  int cbref;
  if (pContext)
  {
    // unregister the previous callback
    assert(orxClock_Unregister(pstClock, lorx_clock_callback) == orxSTATUS_SUCCESS);
    // unref the previous callback
    cbref = (int)((uintptr_t)pContext);
    luaL_unref(L, LUA_REGISTRYINDEX, cbref);
  }
  
  // make reference of the new callback and pass it as context
  lua_pushvalue(L, 2);
  cbref = luaL_ref(L, LUA_REGISTRYINDEX);
  pContext = (void*)((uintptr_t)cbref);

  orxSTATUS ret = orxClock_Register(pstClock, lorx_clock_callback, pContext, eModuleID, ePriority);
  lorx_orxSTATUS_to_lenumstr(L, ret);
  return 1;
}

/*
** binding to orxClock_Unregister
*/
static int l_lorx_orxCLOCK_unregister(lua_State *L)
{
  orxCLOCK *pstClock = lorx_luserdata_to_orxCLOCK(L, 1);

  // get lua callback and unref it
  void *pContext = orxClock_GetContext(pstClock, lorx_clock_callback);
  if (pContext)
  {
    // unref lua callback
    int cbref = (int)((uintptr_t)pContext);
    luaL_unref(L, LUA_REGISTRYINDEX, cbref);
  }

  // unregister the agent callback
  orxSTATUS ret = orxClock_Unregister(pstClock, lorx_clock_callback);
  lorx_orxSTATUS_to_lenumstr(L, ret);
  return 1;
}

static const luaL_Reg l_lorx_orxCLOCK_m_extra[] = {
  { "register", l_lorx_orxCLOCK_register },
  { "unregister", l_lorx_orxCLOCK_unregister },
  { "addTimer", l_lorx_orxCLOCK_addTimer },
  { "removeTimer", l_lorx_orxCLOCK_removeTimer },
  { NULL, NULL }
};


/*
** register all extra methods defined in this file
** (called after all userdata types are registered)
*/
static void lorx_register_extra_methods(lua_State *L)
{
  assert(luaL_getmetatable(L, "lorx.orxSTRUCTURE") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxSTRUCTURE_m_extra, 0);
  lua_pop(L, 1);
  assert(luaL_getmetatable(L, "lorx.orxSTRUCTURE#") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxSTRUCTURE_const_m_extra, 0);
  lua_pop(L, 1);

  assert(luaL_getmetatable(L, "lorx.orxOBJECT") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxOBJECT_m_extra, 0);
  lua_pop(L, 1);
  assert(luaL_getmetatable(L, "lorx.orxOBJECT#") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxOBJECT_m_extra, 0);
  lua_pop(L, 1);

  assert(luaL_getmetatable(L, "lorx.orxVECTOR") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxVECTOR_mm_extra, 0);
  lua_pop(L, 1);
  assert(luaL_getmetatable(L, "lorx.orxVECTOR#") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxVECTOR_mm_extra, 0);
  lua_pop(L, 1);

  assert(luaL_getmetatable(L, "lorx.orxSOUND_FILTER_DATA") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxSOUND_DATA_FILTER_mm_extra, 0);
  lua_pop(L, 1);
  assert(luaL_getmetatable(L, "lorx.orxSOUND_FILTER_DATA#") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxSOUND_DATA_FILTER_const_mm_extra, 0);
  lua_pop(L, 1);

  assert(luaL_getmetatable(L, "lorx.orxCLOCK") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxCLOCK_m_extra, 0);
  lua_pop(L, 1);
  assert(luaL_getmetatable(L, "lorx.orxCLOCK#") != LUA_TNIL);
  luaL_setfuncs(L, l_lorx_orxCLOCK_m_extra, 0);
  lua_pop(L, 1);
}



///////////////////////////////////////////////////////////////
//// Main loop stuff & auxilary functions
///////////////////////////////////////////////////////////////

static void orxFASTCALL lorx_update(const orxCLOCK_INFO *_pstClockInfo, void *_pContext)
{
  (void)_pContext;
  // retrive update callback and call it 
  if (luacb_update != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_update);
    lorx_orxCLOCK_INFO_to_luserdata_const(L0, _pstClockInfo);
    lua_call(L0, 1, 0);
  }
}

static orxSTATUS orxFASTCALL lorx_run()
{
  return lorx_orx_running ? orxSTATUS_SUCCESS : orxSTATUS_FAILURE;
}

static void orxFASTCALL lorx_exit()
{
  // call exit callback
  if (luacb_exit != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_exit);
    lua_call(L0, 0, 0);
  }

  // un-set debug callback agent
  _orxDebug_SetLogCallback(orxNULL);

  // unregister event handlers
  orxEvent_RemoveHandler(orxEVENT_TYPE_ANIM, lorx_anim_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_CLOCK, lorx_clock_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_CONFIG, lorx_config_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_DISPLAY, lorx_display_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_FX, lorx_fx_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_INPUT, lorx_input_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_OBJECT, lorx_object_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_RENDER, lorx_render_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_PHYSICS, lorx_physics_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_RESOURCE, lorx_resource_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_SHADER, lorx_shader_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_SOUND, lorx_sound_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_SPAWNER, lorx_spawner_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_SYSTEM, lorx_system_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_TEXTURE, lorx_texture_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_TIMELINE, lorx_timeline_event_handler);
  orxEvent_RemoveHandler(orxEVENT_TYPE_VIEWPORT, lorx_viewport_event_handler);

  // unref callbacks
  luaL_unref(L0, LUA_REGISTRYINDEX, luacb_init);
  luaL_unref(L0, LUA_REGISTRYINDEX, luacb_update);
  luaL_unref(L0, LUA_REGISTRYINDEX, luacb_exit);
  luaL_unref(L0, LUA_REGISTRYINDEX, luacb_log);

  // unref timer callbacks and the table
  lua_rawgeti(L0, LUA_REGISTRYINDEX, luatb_timercbs);
  int idx = lua_gettop(L0);
  lua_pushnil(L0);
  while (lua_next(L0, idx) != 0)
  {
    int timercb = lua_tointeger(L0, -1);
    luaL_unref(L0, LUA_REGISTRYINDEX, timercb);
    lua_pop(L0, 1);
  }
  lua_pop(L0, 2);
  luaL_unref(L0, LUA_REGISTRYINDEX, luatb_timercbs);
  
  // delete ref count table
  orxHashTable_Delete(rctable);

  // clean Lorx sub-command registerations
  LorxCMDReg *reg;
  for (orxHANDLE iter = orxHashTable_GetNext(cmdtable, orxNULL, orxNULL, (void**)&reg); iter != orxHANDLE_UNDEFINED; iter = orxHashTable_GetNext(cmdtable, iter, orxNULL, (void**)&reg))
  {
    if (reg)
      free(reg);
  }
  orxHashTable_Delete(cmdtable);
}

static orxSTATUS orxFASTCALL lorx_init()
{
  orxSTATUS ret = orxSTATUS_SUCCESS;
  
  // set agent debug callback
  _orxDebug_SetLogCallback((orxDEBUG_CALLBACK_FUNCTION)lorx_debug_callback);

  // register event handlers
  assert(orxEvent_AddHandler(orxEVENT_TYPE_ANIM, lorx_anim_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_CLOCK, lorx_clock_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_CONFIG, lorx_config_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_DISPLAY, lorx_display_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_FX, lorx_fx_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_INPUT, lorx_input_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_OBJECT, lorx_object_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_RENDER, lorx_render_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_PHYSICS, lorx_physics_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_RESOURCE, lorx_resource_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_SHADER, lorx_shader_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_SOUND, lorx_sound_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_SPAWNER, lorx_spawner_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_SYSTEM, lorx_system_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_TEXTURE, lorx_texture_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_TIMELINE, lorx_timeline_event_handler) != orxSTATUS_FAILURE);
  assert(orxEvent_AddHandler(orxEVENT_TYPE_VIEWPORT, lorx_viewport_event_handler) != orxSTATUS_FAILURE);

  // init Lorx sub-command system
  // create a table to hold Lorx sub-commands registration records
  assert((cmdtable = orxHashTable_Create(8192, orxHASHTABLE_KU32_FLAG_NONE, orxMEMORY_TYPE_MAIN)));
  // register Lorx commands
  orxCOMMAND_VAR_DEF lorxcmd_argdefs[LORX_SUBCMD_ARGNUM+1];
  lorxcmd_argdefs[0].eType = orxCOMMAND_VAR_TYPE_STRING;
  lorxcmd_argdefs[0].zName = "subcmd";
  for (int i = 1; i < LORX_SUBCMD_ARGNUM+1; i++)
  {
    lorxcmd_argdefs[i].eType = orxCOMMAND_VAR_TYPE_STRING;
    lorxcmd_argdefs[i].zName = "arg";
  }
  orxCOMMAND_VAR_DEF lorxcmd_resdef = { .zName = "result", .eType = orxCOMMAND_VAR_TYPE_STRING };
  assert(orxCommand_Register("Lorx", lorx_lorx_command, 1, LORX_SUBCMD_ARGNUM, lorxcmd_argdefs, &lorxcmd_resdef) != orxSTATUS_FAILURE);
  // register LorxHelp command
  orxCOMMAND_REGISTER("LorxHelp", lorx_lorxhelp_command, "helpmsg", orxCOMMAND_VAR_TYPE_STRING, 1, 0, { "subcommand", orxCOMMAND_VAR_TYPE_STRING });

  // create timer callback reference table in lua
  lua_createtable(L0, 0, 500);
  lua_pushliteral(L0, "k");
  lua_setfield(L0, -2, "__mode");
  luatb_timercbs = luaL_ref(L0, LUA_REGISTRYINDEX);
  // create a table to keep ref counts of all timer callbacks
  rctable = orxHashTable_Create(8192, orxHASHTABLE_KU32_FLAG_NONE, orxMEMORY_TYPE_MAIN);

  // call init callback in lua
  if (luacb_init != LUA_REFNIL)
  {
    lua_rawgeti(L0, LUA_REGISTRYINDEX, luacb_init);
    lua_call(L0, 0, 1);
    ret = get_status("return from init handler");
    lua_pop(L0, 1);
  }

  // register the update function to the core clock
  assert(orxClock_Register(orxClock_Get(orxCLOCK_KZ_CORE), lorx_update, orxNULL, orxMODULE_ID_MAIN, orxCLOCK_PRIORITY_NORMAL) != orxSTATUS_FAILURE);
  
  return ret;
}


/*
** Get Lorx version
*/
static int l_lorx_version(lua_State *L)
{
  lua_pushfstring(L, "%I.%I.%I", LORX_VERSION_MAJOR, LORX_VERSION_MINOR, LORX_VERSION_PATCH);
  return 1;
}

/*
** Get orx version string
*/
static int l_lorx_runtime_orx_version(lua_State *L)
{
  orxVERSION version;
  orxSystem_GetVersion(&version);
  char buf[1024];
  snprintf(buf, 1024, "%u.%u.%u", version.u32Major, version.u32Minor, version.u32Build);
  lua_pushstring(L, buf);
  return 1;
}

/*
** Get bind orx version string
*/
static int l_lorx_bind_orx_version(lua_State *L)
{
  char buf[1024];
  snprintf(buf, 1024, "%d.%d.%d", LORX_ORX_VERSION_MAJOR, LORX_ORX_VERSION_MINOR, LORX_ORX_VERSION_BUILD);
  lua_pushstring(L, buf);
  return 1;
}


static int l_lorx_register_update(lua_State *L)
{
  luaL_checktype(L, 1, LUA_TFUNCTION);
  if (luacb_update != LUA_REFNIL)
  {
    luaL_unref(L, LUA_REGISTRYINDEX, luacb_update);
  }
  lua_pushvalue(L, 1);
  luacb_update = luaL_ref(L, LUA_REGISTRYINDEX);

  return 0;
}

static int l_lorx_unregister_update(lua_State *L)
{
  if (luacb_update != LUA_REFNIL)
  {
    luaL_unref(L, LUA_REGISTRYINDEX, luacb_update);
    luacb_update = LUA_REFNIL;
    lua_pushboolean(L, 1);
  }
  else
    lua_pushboolean(L, 0);

  return 1;
}

static int l_lorx_stop(lua_State *L)
{
  (void)L;
  lorx_orx_running = 0;
  return 0;
}

static int l_lorx_execute(lua_State *L)
{
  // p1: init callback
  luaL_checktype(L, 1, LUA_TFUNCTION);
  lua_pushvalue(L, 1);
  luacb_init = luaL_ref(L, LUA_REGISTRYINDEX);

  // p2: update callback
  luaL_checktype(L, 2, LUA_TFUNCTION);
  lua_pushvalue(L, 2);
  luacb_update = luaL_ref(L, LUA_REGISTRYINDEX);

  // p3: exit callback (optional)
  if (lua_isfunction(L, 3))
  {
    lua_pushvalue(L, 3);
    luacb_exit = luaL_ref(L, LUA_REGISTRYINDEX);
  }

  // lua global 'arg' to C argv
  lua_getglobal(L, "arg");
  assert(lua_istable(L, -1));
  int argc = lua_rawlen(L, -1);
  char **argv = malloc(sizeof(char*)*argc);
  for (int i = 0; i < argc; i++)
  {
    lua_rawgeti(L, -1, i+1);
    const char* x = lua_tostring(L, -1);
    argv[i] = malloc(sizeof(char)*(strlen(x)+1));
    strcpy(argv[i], x);
    lua_pop(L, 1);
  }

  // run orx main loop
  lorx_orx_running = 1;
  orx_Execute(argc, argv, lorx_init, lorx_run, lorx_exit);

  // free argv[]
  for (int i = 1; i < argc; i++)
  {
    free(argv[i]);
  }
  free(argv);

  return 0;
}


static const struct luaL_Reg lorx[] = {
  { "execute", l_lorx_execute },
  { "stop", l_lorx_stop },
  { "getVersion", l_lorx_version },
  { "getOrxVersion", l_lorx_runtime_orx_version },
  { "getBindOrxVersion", l_lorx_bind_orx_version },
  { "registerUpdate", l_lorx_register_update },
  { "unregisterUpdate", l_lorx_unregister_update },
  { "registerAnimHandler", EHANDLER_REGISTER_FUNCNAME(anim) },
  { "unregisterAnimHandler", EHANDLER_UNREGISTER_FUNCNAME(anim) },
  { "registerClockHandler", EHANDLER_REGISTER_FUNCNAME(clock) },
  { "unregisterClockHandler", EHANDLER_UNREGISTER_FUNCNAME(clock) },
  { "registerConfigHandler", EHANDLER_REGISTER_FUNCNAME(config) },
  { "unregisterConfigHandler", EHANDLER_UNREGISTER_FUNCNAME(config) },
  { "registerDisplayHandler", EHANDLER_REGISTER_FUNCNAME(display) },
  { "unregisterDisplayHandler", EHANDLER_UNREGISTER_FUNCNAME(display) },
  { "registerFXHandler", EHANDLER_REGISTER_FUNCNAME(fx) },
  { "unregisterFXHandler", EHANDLER_UNREGISTER_FUNCNAME(fx) },
  { "registerInputHandler", EHANDLER_REGISTER_FUNCNAME(input) },
  { "unregisterInputHandler", EHANDLER_UNREGISTER_FUNCNAME(input) },
  { "registerLocaleHandler", EHANDLER_REGISTER_FUNCNAME(locale) },
  { "unregisterLocaleHandler", EHANDLER_UNREGISTER_FUNCNAME(locale) },
  { "registerObjectHandler", EHANDLER_REGISTER_FUNCNAME(object) },
  { "unregisterObjectHandler", EHANDLER_UNREGISTER_FUNCNAME(object) },
  { "registerRenderHandler", EHANDLER_REGISTER_FUNCNAME(render) },
  { "unregisterRenderHandler", EHANDLER_UNREGISTER_FUNCNAME(render) },
  { "registerPhysicsHandler", EHANDLER_REGISTER_FUNCNAME(physics) },
  { "unregisterPhysicsHandler", EHANDLER_UNREGISTER_FUNCNAME(physics) },
  { "registerResourceHandler", EHANDLER_REGISTER_FUNCNAME(resource) },
  { "unregisterResourceHandler", EHANDLER_UNREGISTER_FUNCNAME(resource) },
  { "registerShaderHandler", EHANDLER_REGISTER_FUNCNAME(shader) },
  { "unregisterShaderHandler", EHANDLER_UNREGISTER_FUNCNAME(shader) },
  { "registerSoundHandler", EHANDLER_REGISTER_FUNCNAME(sound) },
  { "unregisterSoundHandler", EHANDLER_UNREGISTER_FUNCNAME(sound) },
  { "registerSpawnerHandler", EHANDLER_REGISTER_FUNCNAME(spawner) },
  { "unregisterSpawnerHandler", EHANDLER_UNREGISTER_FUNCNAME(spawner) },
  { "registerSystemHandler", EHANDLER_REGISTER_FUNCNAME(system) },
  { "unregisterSystemHandler", EHANDLER_UNREGISTER_FUNCNAME(system) },
  { "registerTextureHandler", EHANDLER_REGISTER_FUNCNAME(texture) },
  { "unregisterTextureHandler", EHANDLER_UNREGISTER_FUNCNAME(texture) },
  { "registerTimelineHandler", EHANDLER_REGISTER_FUNCNAME(timeline) },
  { "unregisterTimelineHandler", EHANDLER_UNREGISTER_FUNCNAME(timeline) },
  { "registerViewportHandler", EHANDLER_REGISTER_FUNCNAME(viewport) },
  { "unregisterViewportHandler", EHANDLER_UNREGISTER_FUNCNAME(viewport) },
  { NULL, NULL }
};


LORX_API int luaopen_lorx(lua_State *L)
{
  if (L0)
  {
    if (L0 != L)
    {
      fprintf(stderr, "error: lorx cannot be used in multiple lua states!\n");
      return 0;
    }
    else
    {
      fprintf(stderr, "warning: trying to open the lorx module more than once!\n");
      lua_getglobal(L0, "lorx");
      return 1;
    }
  }

  // version check
  {
    orxVERSION version;
    orxSystem_GetVersion(&version);
    if (version.u32Major != LORX_ORX_VERSION_MAJOR)
      LORX_ERROR("Runtime Orx version (%u.%u.%u) mismatch with target version (%d.%d.%d)!\n", version.u32Major, version.u32Minor, version.u32Build, LORX_ORX_VERSION_MAJOR, LORX_ORX_VERSION_MINOR, LORX_ORX_VERSION_BUILD);
    if (version.u32Minor < LORX_ORX_VERSION_MINOR)
      LORX_ERROR("Runtime Orx version (%u.%u.%u) is older than target version (%d.%d.%d)!\n", version.u32Major, version.u32Minor, version.u32Build, LORX_ORX_VERSION_MAJOR, LORX_ORX_VERSION_MINOR, LORX_ORX_VERSION_BUILD);
    if (version.u32Minor != LORX_ORX_VERSION_MINOR || version.u32Build != LORX_ORX_VERSION_BUILD)
      fprintf(stderr, "warning: Runtime Orx version (%u.%u.%u) mismatch with target version (%d.%d.%d), errors might occur!\n", version.u32Major, version.u32Minor, version.u32Build, LORX_ORX_VERSION_MAJOR, LORX_ORX_VERSION_MINOR, LORX_ORX_VERSION_BUILD);
  }

  // register void* and orxHANDLE types
  lorx_register_type(L, "lorx.void*", 0);
  lorx_register_type(L, "lorx.void*#", 0);
  lorx_register_type(L, "lorx.orxHANDLE", 0);

  // register all orx userdata types
  lorx_register_orx_utypes(L);

  // register extra methods for orx userdata types
  lorx_register_extra_methods(L);

  // preload all orx submods
  for (size_t i = 0; i < lorx_orx_module_number; i++)
  {
    lorx_package_preload(L, lorx_orx_modules[i].func, lorx_orx_modules[i].name);
  }

  // global table 'lorx'
  lorx_insistglobal(L, "lorx");

  // set all the functions to the table
  luaL_setfuncs(L, lorx, 0);

  // load all orx submods
  for (size_t i = 0; i < lorx_orx_module_number; i++)
  {
    lua_getglobal(L, "require");
    lua_pushstring(L, lorx_orx_modules[i].name);
    lua_call(L, 1, 1);
    assert(!lua_isnil(L, -1));
    lua_pop(L, 1);
  }

  // add extra functions into submodules
  lorx_register_extra_submod_funcs(L);

  // save lua VM handle
  L0 = L;

  return 1;
}

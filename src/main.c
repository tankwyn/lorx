#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <orx.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "helpers.h"
#include "lorx.h"

#if defined(_LORX_WIN_)
  #define WIN32_LEAN_AND_MEAN
  #include <windows.h>
  #include <io.h>
  #include <direct.h>
  #include <fileapi.h>
#else /* _LORX_WIN32_ */
  #include <unistd.h>
  #include <sys/types.h>
  #include <sys/stat.h>
#endif /* _LORX_WIN32_ */


// lua VM
static lua_State *L0;

// Orx running ?
static int orx_running = 0;

// current path
#define LORX_MAX_PATH_LEN 2048
static char lorx_cwd[LORX_MAX_PATH_LEN];


static int lorx_access(const char* fname)
{
#if defined(_LORX_WIN_)
  return (_access(fname, 0) == 0) ? 1 : 0;
#else
  return (access(fname, F_OK) == 0) ? 1 : 0;
#endif /* _LORX_WIN_ */
}

int lorx_isdir(const char* path)
{
#if defined(_LORX_WIN_)
  DWORD attr = GetFileAttributes(path);
  return (attr != INVALID_FILE_ATTRIBUTES && (attr & FILE_ATTRIBUTE_DIRECTORY));
#else
  struct stat s;
  memset(&s, 0, sizeof(struct stat));
  stat(path, &s);
  return S_ISDIR(s.st_mode);
#endif /* _LORX_WIN_ */
}

static void lorx_getcwd()
{
#if defined(_LORX_WIN_)
  _getcwd(lorx_cwd, LORX_MAX_PATH_LEN);
#else
  getcwd(lorx_cwd, LORX_MAX_PATH_LEN);
#endif /* _LORX_WIN_ */
}

static orxSTATUS lorx_setcwd(const char* cwd)
{
#if defined(_LORX_WIN_)
  return (_chdir(cwd) == 0) ? orxSTATUS_SUCCESS : orxSTATUS_FAILURE;
#else
  return (chdir(cwd) == 0) ? orxSTATUS_SUCCESS : orxSTATUS_FAILURE;
#endif /* _LORX_WIN_ */
}

/*
** stop hook for SIGINT (copied from lua.c)
*/
static void lorx_int_hook (lua_State *L, lua_Debug *ar)
{
  printf("interrupted!\n");
  (void)ar;  /* unused arg. */
  lua_sethook(L, NULL, 0, 0);  /* reset hook */
  luaL_error(L, "interrupted!");
}

/*
** stop hook for SIGTERM
*/
static void lorx_term_hook(lua_State *L, lua_Debug *ar)
{
  printf("terminated!\n");
  (void)ar;
  lua_sethook(L, NULL, 0, 0);
  lua_getglobal(L, "lorx");
  lua_getfield(L, -1, "stop");
  lua_call(L, 0, 0);
}

/*
** properly handle c signals when lua is running
*/
static void lorx_sigaction (int i)
{
  if (i == SIGILL || i == SIGABRT || i == SIGSEGV)
  {
    signal(i, SIG_DFL);
    // show lua backtrace
    luaL_error(L0, "fatal error: recieved signal %d!", i);
  }
  else if (i == SIGINT)
  { 
    signal(i, SIG_DFL);
    // delayed interruption hook
    lua_sethook(L0, lorx_int_hook, LUA_MASKCALL | LUA_MASKRET | LUA_MASKCOUNT, 1);
  }
  else if (i == SIGTERM)
  {
    signal(i, SIG_DFL);
    // delayed termination hook
    lua_sethook(L0, lorx_term_hook, LUA_MASKCALL | LUA_MASKRET | LUA_MASKCOUNT, 1);
  }
}

/*
** message handler used to run all chunks (copied from lua.c)
*/
static int lorx_msghandler (lua_State *L)
{
  const char *msg = lua_tostring(L, 1);
  if (msg == NULL) 
  {
    if (luaL_callmeta(L, 1, "__tostring") && lua_type(L, -1) == LUA_TSTRING)
      return 1;
    else
      msg = lua_pushfstring(L, "(error object is a %s value)", luaL_typename(L, 1)); 
  }

  luaL_traceback(L, L, msg, 1);
// lorx_break();
  return 1;
}

/*
** Interface to 'lua_pcall', which sets appropriate message function
** and C-signal handler. Used to run all chunks. (copied from lua.c)
*/
static int lorx_pcall(lua_State *L, int narg, int nres)
{
  int status;
  int base = lua_gettop(L) - narg;  /* function index */
  lua_pushcfunction(L, lorx_msghandler);  /* push message handler */
  lua_insert(L, base);  /* put it under function and args */
  status = lua_pcall(L, narg, nres, base);
  lua_remove(L, base);  /* remove message handler from the stack */
  return status;
}

/*
** Add a package search path 
*/
void lorx_append_path(lua_State* L, const char* path)
{
  (void)L;
  const char* lpath = getenv("LUA_PATH");
  size_t size = 8192;
  char buf[8192];
  memset(buf, 0, size);
  if (lpath)
  {
    assert(size > strlen(lpath) + 1 + strlen(path));
    strcpy(buf, lpath);
#if defined (_LORX_WIN_)
    strcat(buf, ";");
#else
    strcat(buf, ":");
#endif
  }
  strcat(buf, path);
#if defined(_LORX_WIN_)
  assert(SetEnvironmentVariable("LUA_PATH", buf));
#else
  assert(setenv("LUA_PATH", buf, 1) == 0);
#endif
}

/*
** Parse args
*/
static int lorx_parse_args(int argc, char* argv[])
{
  const char* path;
  if (argc > 1)
  {
    if (strcmp(argv[1], "-v") == 0)
    {
      printf("%d.%d.%d\n", LORX_VERSION_MAJOR, LORX_VERSION_MINOR, LORX_VERSION_PATCH);
      return 0;
    }
    else
    {
      path = argv[1];
    }
  }
  else
  {
    fprintf(stderr, "please specify a game directory!\n");
    return -1;
  }

  if (!lorx_isdir(path))
  {
    fprintf(stderr, "expect a valid directory!");
    return -1;
  }

  // set game directory as current working directory
  lorx_setcwd(path);

  return argc - 1;
}

/*
** Setup lua and lorx
*/
static lua_State* lorx_setup(int argc, char* argv[])
{
  lua_State* L = luaL_newstate();
  if (L == NULL)
  {
    fprintf(stderr, "cannot create lua state!\n");
    return NULL;
  }

  luaL_openlibs(L);

  // add command line arguments to global arg (orx will need this)
  lua_newtable(L);
  for (int i = 0; i < argc; i++)
  {
    lua_pushstring(L, argv[i]);
    lua_rawseti(L, -2, i+1);
  }
  lua_setglobal(L, "arg");

  // preload lorx
  lorx_package_preload(L, luaopen_lorx, "lorx");

  // require "lorx"
  lua_getglobal(L, "require");
  lua_pushstring(L, "lorx");
  lua_call(L, 1, 1);
  lua_pop(L, 1);

  // add current working directory to package search path
  lorx_append_path(L, lorx_cwd);

  return L;
}


static orxSTATUS lorx_do_script(const char* fname)
{
  int status = luaL_loadfile(L0, fname);
  if (status == LUA_OK)
  {
    status = lorx_pcall(L0, 0, 0);
  }
  if (status != LUA_OK) 
  {
    const char *msg = lua_tostring(L0, -1);
    if (orx_running)
      orxLOG(msg);
    else
      fprintf(stderr, "%s\n", msg);
    lua_pop(L0, 1);  /* remove message */
  }
  return status == LUA_OK ? orxSTATUS_SUCCESS : orxSTATUS_FAILURE;
}
  

orxSTATUS orxFASTCALL lorx_bootstrap()
{
  orx_running = 1;

  // enforce initial cwd
  if (lorx_setcwd(lorx_cwd) != orxSTATUS_SUCCESS)
  {
    orxLOG("Lorx: Failed to change current directory to %s!", lorx_cwd);
    _orxDebug_Break();
  }

  // load settings.ini if it exists
  if (lorx_access("settings.ini"))
  {
    if (orxConfig_Load("settings.ini") == orxSTATUS_FAILURE)
    {
      orxLOG("Lorx: Loading settings.ini failed!");
    }
    else
    {
      orxDEBUG_PRINT(orxDEBUG_LEVEL_USER, "Lorx: Loading settings.ini completed!");
    }
  }

  // load boot.lua if it exists
  if (lorx_access("boot.lua"))
  {
    if (lorx_do_script("boot.lua") == orxSTATUS_FAILURE)
    {
      orxLOG("Lorx: Failed to load boot.lua!");
    }
    else
    {
      orxDEBUG_PRINT(orxDEBUG_LEVEL_USER, "Lorx: Loaded boot.lua!");
    }
  }

  return orxSTATUS_FAILURE;
}


int main(int argc, char **argv)
{
  int argc0 = lorx_parse_args(argc, argv);
  if (argc0 > 0)
  {
    // store current working directory (and enforce it when orx starts)
    // if a valid game directory is specified, this will be the game directory
    lorx_getcwd();

    // create lua VM and load lorx
    if ((L0 = lorx_setup(argc, argv)))
    {
      signal(SIGSEGV, lorx_sigaction);
      signal(SIGILL, lorx_sigaction);
      signal(SIGABRT, lorx_sigaction);
      signal(SIGINT, lorx_sigaction);
      signal(SIGTERM, lorx_sigaction);

      // before loading config files (load boot.lua)
      orxConfig_SetBootstrap(lorx_bootstrap);

      // run main.lua
      lorx_do_script("main.lua");

      // close lua VM (is it possible that orx is still running?)
      lua_close(L0);

      orx_running = 0;

      // Done!
      return EXIT_SUCCESS;
    }
  }
  else if (argc0 == 0)
  {
    return EXIT_SUCCESS;
  }
  else
  {
    return EXIT_FAILURE;
  }
}

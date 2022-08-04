# Overview

Lorx is a Lua binding to the [Orx game engine](https://orx-project.org). Orx is a data-driven game engine with high performance and abundant features.

The goal of Lorx is to provide a set of APIs in Lua that is as complete as possible to the original Orx APIs and a *comfortable experience* in Lua. With the power of Lua, Lorx enables agile game development.

Lorx is created with a bunch of scripts for auto-generating code, and some manually written code. The bindings are currently built for Orx 1.13.0, but the scripts can also work with Orx 1.14. See "[How to Build](index.md#how-to-build)" if you wish to use a more recent version of Orx. 

The current version, 0.1.0, is built with Orx 1.13.0 and Lua 5.3.6.

---

## Advantages

* [Lua](https://www.lua.org/) is a simple but flexible language which has been tested for many years in the game industry.
* The config system is very powerful. Visit the [Orx Wiki](https://orx-project.org/wiki/) to find out.
* Orx is a very performant game engine written in C. It runs very fast and it's memory efficient.
* Orx has many advanced features that are missing even in many established engines (e.g. multiple viewports, object aging).
* Lorx has covered almost all of Orx's functionalities.
* Lorx runs nearly as fast as native Orx. Lua won't slow you down since Orx has done most of the heavy work for you.
* Lorx is simple, you can get started in minutes if you are already familiar with Orx.

## Get started

The Lorx executable (lorx.sh if you are on Linux) accepts a game directory as argument. A typical directory layout might look like this:

    boot.lua      # Load on initializing.
    main.lua      # Load after initialized.
    settings.ini  # Settings.
    data/
        config/   # Config files.
        texture/  # Textures.
        sound/    # Sound.
        ...       # Other resources.

If you want to do something before Orx is fully initialized, `boot.lua` is the place to put your code in. Example `boot.lua`:

```lua
lorx.config.load("settings.ini")
```

If you only need to load some settings, you can create a `settings.ini` in the root directory, Lorx will detect and load it automatically. Example `settings.ini`:

```ini
[Display]
Title           = My Game
ScreenWidth     = 800
ScreenHeight    = 600
FullScreen      = false
AllowResize     = false

[Resource]
Texture         = data/texture
Sound           = data/sound

[Input]
SetList         = MainInput

[MainInput]
KEY_ESCAPE      = Quit
```

The file `main.lua` is loaded after the engine is fully initialized. The Orx engine should be started in here. Example `main.lua`:

```lua
local function init()
    -- load game configs
    lorx.resource.addStorage('Config', 'data/config', false)
    lorx.config.load('my_game.ini')

    -- create cameras, objects, ...
    local scene = lorx.object.createFromConfig('Scene')
    local camera = lorx.camera.createFromConfig('MainCamera')
    -- ...
end

local function update(clockinfo)
    -- print dt
    print('dt =', clockinfo.dt)

    -- handle keys
    if lorx.input.isActive('Quit') then
        lorx.event.sendShort('system', 'close')
    end
end

-- start Orx
lorx.execute(init, update, function() print('exit!') end)
```

To run a game, provide the game directory as the sole command line argument to lorx.sh or lorx.exe: `<path-to-lorx> <game-directory>`.

There are some examples shipped with the source code, you can view them to learn more about Lorx. (Before you try any of these, it is strongly advised that you get familiar with [Orx's config system](https://wiki.orx-project.org/en/orx/config) first.)

In addition, there is some advices about setting up a development environment:

* Auto-completion and linting: If your editor/IDE (vscode, vim, ...) supports LSP, you can install the [sumneoko](https://github.com/sumneko/lua-language-server) Lua language server, download the Emmy annotations for Lorx and set the `api` path as an external library path for your project.
* Debugging: Use a debugger plugin that supports custom Lua environments (e.g. [Local Lua Debugger](https://github.com/tomblind/local-lua-debugger-vscode.git) for vscode).

## How is everything mapped to Lua

### Basic types

Orx | Lua | Remarks
--- | --- | ---
orxFLOAT | number |
orxDOUBLE | number |
orxU64 | integer |
orxU32 | integer |
orxU16 | integer |
orxU8 | integer |
orxS64 | integer |
orxS32 | integer |
orxS16 | integer |
orxS8 | integer |
orxBOOL | boolean |
orxCHAR | string | single char string
char | string | single char string
orxCHAR* | string |
char* | string |
orxHANDLE | userdata |
void\* | userdata |
orxSTRINGID | integer | u64
orxENUM | string | depends on the type of the enum
orxSTRING | string |
*orxSPTR*\* | integer | s32 / s64
*orxUPTR*\* | integer | u32 / u64

\* *orxSPTR and orxUPTR is only available for Orx version >= 1.14*

**Note:**

* All strings are immutable (const), string APIs defined in orxString.h with non-const char sequence params are not binded.
* Every conversion from Lua string to C string will cause caching in Orx (`orxString_Store`), so you must avoid immoderate generation of C strings.
* void\* is stored as a userdata in Lorx (lorx.void\* or lorx.void\*\#, '\#' stands for 'const').

### Enums

Enums are lowercase strings in Lua: `orxEVENT_TYPE_PHYSICS -> 'physics'`.

### Utypes (structs)

Structs are stored as userdata. However, there is no difference between a struct and a pointer to a struct in Lorx, so I like to call them 'utypes'.

There are two types of utypes in Lorx, one is the private structs, the other is the public structs. 

For the private structs, only the pointer to the struct is stored and they can only be created by Orx through an Orx call.

For the public structs, both the pointer and the memory block are stored and you can create them through a constructor function. As a result, these utypes are totally managed by the Lua GC.

When passing utypes between Lua and Orx, they will be duplicated (pass by value) rather than referenced. Obviously, only the pointers are duplicated for the private types, while the whole data are duplicated for public types. Avoiding referencing makes things a lot easier.

For the sake of simplicity, complex data structures are dealt with differently. (e.g. events related types, see [Events](index.md#events) for details).

**Note:**

There are a few cases where a const pointer is returned, Lorx marks these APIs with a 'Const' suffix and distinguish const utypes with a '#' suffix in the tname or type name. Const objects cannot be passed to the APIs requiring for non-const params.

### Arrays

Arrays are Lua tables in Lorx. Every Orx API call with array params will cause memory allocation and deallocation.

This won't be very performant, so don't do arrays too heavily in Lua.

## How to build

### Prerequisites
* Lua (>= 5.3)
* Orx (>= 1.13)

### Linux

1. Compile Lua and Orx.
2. Copy `Makefile.linux` to `Makefile`
3. Set `LUA` in the makefile and make sure the environment variable `ORX` is set to the right path.
4. Run `make` to build 64 bit binary; run `make arch=x86` to build 32 bit binary.
5. Run `make clean` and `make config=debug` or `make config=profile` if you wish to build debug or profile targets.

### Windows

The recommended way to build on Windows is using NMake/cl (need to install Visual Studio), and link dynamically to lua. Alternatively, you can build with MinGW. (you can find `Makefile.mingw` in `src`)

1. Compile Lua and Orx. (Lua must also be compiled in MSVC)
2. Copy `Makefile.nmake` or `Makefile.mingw` to `Makefile`.
3. Set `LUA`, `LUA_INC` and `LUA_LIB` in the makefile; Make sure the environment variable `ORX` is set correctly (which should contain `include` and `lib`).
4. Open VS command prompt (x86 or x86_64), cd to `src` and run `nmake` to build.
5. Run `nmake clean` and `nmake config=debug` or `nmake config=profile` if you wish to build debug or profile targets.
6. For MinGW, take similar steps as on Linux.

### Bind to another Orx version

Lorx is on 1.13.0, but the auto-generation scripts support 1.14.

Prepare corresponding Orx headers and libs and make sure the environment variable `ORX` points to a path containing `include` and `lib` of Orx. Then, run `python autogen.py` to generate source code and some other stuff. Finally, build the source and doc.

### Build documentation

The documentations are built with [Mkdocs](https://www.mkdocs.org). Run the following command to install the prerequisites:

```shell
pip3 install mkdocs mkdocs-material mkdocs-localsearch markdown-extra mkdocs-markdownextradata-plugin
```

Go to `doc`, run `mkdocs build` to generate all documentations. (The generated htmls are fully static, which can used offline)

## Events

Events are dealt with differently in Lorx. The event system is too flexible for Lua, too many void\* and unions. 

The first difference being, event handlers are registered separately with respect to event types. For each type of event, there can be only one handler. Register two handlers to the same event type and the first one will be discarded.

The second difference is that there's no direct type mapping between `orxEVENT` and all event payloads. Instead, Lorx puts all event data in one table and pass it as the sole argument to handlers. Following emmy annotation shows the sound event type:

```lua
---@class lorxSOUND_EVENT
---@field id orxSOUND_EVENT
---@field sender orxHANDLE|orxOBJECT|orxSTRUCTURE|voidptr
---@field recipient orxOBJECT|voidptr
---@field streaminfo orxSOUND_STREAM_INFO # when id is 'packet' or 'recording_*'
---@field streampacket orxSOUND_STREAM_PACKET # when id is 'packet' or 'recording_*'
---@field filterdata orxSOUND_FILTER_DATA # when id is 'set_filter_param'
---@field filterbusid integer # when id is 'set_filter_param'
---@field raw voidptr # raw pointer of orxEVENT
local lorxSOUND_EVENT = {}
```

An example of sound event handler:

```lua
local function sound_handler(e)
    if e.id == 'packet' then
       print('stream name:', e.streaminfo.name)
    end
end
```

**Note:** All types of event have at least four fields: `id`, `sender`, `recipient` and `raw`. The returning value of event handlers can be omitted and orxSTATUS_SUCCESS ('success') will be returned by default. The types of sender and recipient are often decided by `id`, however you don't have to cast pointers manully. Other fields might only be available for certain `id`\[s\]. See [event handler callbacks](callbacks.md) for more detail.


## Commands

Commands are also a bit different than in C.

In Lorx, you can register sub-commands to a main command `Lorx` via [lorx.command.sRegister](modules/command.md#sregister) and it does not involve `orxCOMMAND_VAR_TYPE` and `orxCOMMAND_VAR_DEF`. Here is an example:

```lua
lorx.command.sRegister(function(arg) return arg + lorx.vector.vector(1, 1, 1) end, 'MyCmd', 'vector', 1, 0, 'vector')
if lorx.command.sIsRegistered('MyCmd') then
    local vvar = lorx.command.evaluate('Lorx MyCmd (1, 0, 0)')
    print('MyCmd returns', vvar.vvalue)
end
```

To add comments to a sub-command, you can use [lorx.command.sComment](modules/command.md#scomment). To get help messages, use the `LorxHelp` command. Example:

```lua
lorx.command.sComment("MyCmd", "Help me, help you", "OutVector", "InVector")
print(lorx.command.evaluate('LorxHelp MyCmd'))
```

## What's not implemented

* Threading (`orxThread_Start`, `orxThread_RunTask` and `orxThread_SetCallbacks`). Lua is not thread safe and there's little benefit in supporting it.
* Low-level resource reading/writing (`orxResource_Read` and `orxResource_Write`).
* Body, part and joint definition structs (`orxBODY_DEF`, `orxBODY_PART_DEF` and `orxBODY_JOINT_DEF`). Please use configuration instead.
* Meshes. Lorx supports drawing meshes, but does not support creating or reading meshes from files. However, you can write your own code to get meshes read in C and store the pointer in a userdata with the tname of 'lorx.orxDISPLAY_MESH', then you will be able to draw meshes in Lua.

## Upcoming

1. Android support.
2. Loading pre-compiled chunks (and maybe basic chunk encryption).
3. Reflect event data modification to Orx.
4. Maybe support setting lua tables as the userdata of orxObject. So that we can easily attach data (health, mana, ...) to objects.

## FAQ

> Why not Luajit

Luajit has better performance in most cases. However, unlike a Lua game framework, Orx is a full-featured game engine that handles most of the heavy work for you, and Lorx is performant enough in the sense of interacting with Orx. Also, Luajit does not support 64 bit integers for the sake of performance.

> How to stay performant

Here are some advices about performance:

1. Strings. Passing strings between Lua and Orx will result in memory duplication. Store the string IDs in Lua (rather than the strings) for those that would be used heavily.
2. Arrays. Passing arrays in Orx API calls will induce memory allocation/deallocation. Avoid doing this too frequently.
3. GC. Avoid generating too much garbage in a short time.
4. Don't think too much about performance until you really have to :).

> How to make C extensions

Building extensions for Lorx is simple, you just write your functions, put them in a new table and return the table as a module. It's no different than [making a C module for vanilla Lua](http://lua-users.org/wiki/BuildingModules). Just make sure you have the headers of both Lua and Lorx.
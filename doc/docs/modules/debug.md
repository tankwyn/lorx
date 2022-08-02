# module debug

## functions

### **`_break`**

* Signature:

```lua
_break()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  _orxDebug_Break()
```

---

### **`enableLevel`**

* Signature:

```lua
enableLevel(level, enable)
```

* Description:

> Enables/disables a given log level

* Params:

name | type | description 
--- | --- | ---
level | [orxDEBUG_LEVEL](../enums.md#orxdebug_level)  | Debug level to enable/disable
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  _orxDebug_EnableLevel(orxDEBUG_LEVEL _eLevel, orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> 

* Params:

* Returns:

* C signature:

```c
  void  _orxDebug_Exit()
```

---

### **`getFlags`**

* Signature:

```lua
r1 = getFlags()
```

* Description:

> Gets current debug flags

* Params:

* Returns:

type | description 
--- | ---
integer | Current debug flags

* C signature:

```c
  orxU32  _orxDebug_GetFlags()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the debug module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  _orxDebug_Init()
```

---

### **`isLevelEnabled`**

* Signature:

```lua
r1 = isLevelEnabled(level)
```

* Description:

> Is a given log level enabled?

* Params:

name | type | description 
--- | --- | ---
level | [orxDEBUG_LEVEL](../enums.md#orxdebug_level)  | Concerned debug level

* Returns:

type | description 
--- | ---
boolean | 

* C signature:

```c
  orxBOOL  _orxDebug_IsLevelEnabled(orxDEBUG_LEVEL _eLevel)
```

---

### **`log`**

* Signature:

```lua
log(level, function, file, line, format)
```

* Description:

> Logs given debug text

* Params:

name | type | description 
--- | --- | ---
level | [orxDEBUG_LEVEL](../enums.md#orxdebug_level)  | Debug level associated with this output
function | string | Calling function name
file | string | Calling file name
line | integer | Calling file line
format | string | Printf formatted text

* Returns:

* C signature:

```c
  void  _orxDebug_Log(orxDEBUG_LEVEL _eLevel, const orxSTRING _zFunction, const orxSTRING _zFile, orxU32 _u32Line, const orxSTRING _zFormat, ...)
```

---

### **`setDebugFile`**

* Signature:

```lua
setDebugFile(filename)
```

* Description:

> Sets debug file name

* Params:

name | type | description 
--- | --- | ---
filename | string | Debug file name

* Returns:

* C signature:

```c
  void  _orxDebug_SetDebugFile(const orxSTRING _zFileName)
```

---

### **`setFlags`**

* Signature:

```lua
setFlags(add, remove)
```

* Description:

> Sets current debug flags

* Params:

name | type | description 
--- | --- | ---
add | integer | Flags to add
remove | integer | Flags to remove

* Returns:

* C signature:

```c
  void  _orxDebug_SetFlags(orxU32 _u32Add, orxU32 _u32Remove)
```

---

### **`setLogCallback`**

* Signature:

```lua
setLogCallback(func)
```

* Description:

> Sets log callback function, if the callback returns failure, the log entry will be entirely inhibited

* Params:

name | type | description 
--- | --- | ---
func | [lorxLOG_CALLBACK](../callbacks.md#lorxlog_callback)  | log callback function

* Returns:

---

### **`setLogFile`**

* Signature:

```lua
setLogFile(filename)
```

* Description:

> Sets log file name

* Params:

name | type | description 
--- | --- | ---
filename | string | Log file name

* Returns:

* C signature:

```c
  void  _orxDebug_SetLogFile(const orxSTRING _zFileName)
```

---


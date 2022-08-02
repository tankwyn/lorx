# module console

## functions

### **`enable`**

* Signature:

```lua
enable(enable)
```

* Description:

> Enables/disables the console

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxConsole_Enable(orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the console module

* Params:

* Returns:

* C signature:

```c
  void  orxConsole_Exit()
```

---

### **`getCompletion`**

* Signature:

```lua
r1, r2 = getCompletion(index)
```

* Description:

> Gets completion

* Params:

name | type | description 
--- | --- | ---
index | integer | Index of the active completion

* Returns:

type | description 
--- | ---
string | Completion string if found, empty string otherwise
boolean | Is completion active, nil to ignore

* C signature:

```c
  const orxSTRING  orxConsole_GetCompletion(orxU32 _u32Index, orxBOOL *_pbActive)
```

---

### **`getCompletionCount`**

* Signature:

```lua
r1, r2 = getCompletionCount()
```

* Description:

> Gets current completions count

* Params:

* Returns:

type | description 
--- | ---
integer | Current completions count
integer | Max completion length, nil to ignore

* C signature:

```c
  orxU32  orxConsole_GetCompletionCount(orxU32 *_pu32MaxLength)
```

---

### **`getFontConst`**

* Signature:

```lua
r1 = getFontConst()
```

* Description:

> Gets the console font

* Params:

* Returns:

type | description 
--- | ---
[orxFONT\#](../types/orxFONT.md) | Current in-use font, nil

* C signature:

```c
  const orxFONT * orxConsole_GetFont()
```

---

### **`getInput`**

* Signature:

```lua
r1, r2 = getInput()
```

* Description:

> Gets input text

* Params:

* Returns:

type | description 
--- | ---
string | orxTRING / empty string
integer | Index \(ie. character position\) of the cursor \(any character past it has not been validated\)

* C signature:

```c
  const orxSTRING  orxConsole_GetInput(orxU32 *_pu32CursorIndex)
```

---

### **`getLogLineLength`**

* Signature:

```lua
r1 = getLogLineLength()
```

* Description:

> Gets the console log line length

* Params:

* Returns:

type | description 
--- | ---
integer | Console log line length

* C signature:

```c
  orxU32  orxConsole_GetLogLineLength()
```

---

### **`getTrailLogLine`**

* Signature:

```lua
r1 = getTrailLogLine(traillineindex)
```

* Description:

> Gets log line from the end \(trail\), using internal offset

* Params:

name | type | description 
--- | --- | ---
traillineindex | integer | Index of the line starting from end

* Returns:

type | description 
--- | ---
string | orxTRING / empty string

* C signature:

```c
  const orxSTRING  orxConsole_GetTrailLogLine(orxU32 _u32TrailLineIndex)
```

---

### **`getTrailLogLineOffset`**

* Signature:

```lua
r1 = getTrailLogLineOffset()
```

* Description:

> Gets log line offset from the end

* Params:

* Returns:

type | description 
--- | ---
integer | Log line offset from the end

* C signature:

```c
  orxU32  orxConsole_GetTrailLogLineOffset()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the console module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConsole_Init()
```

---

### **`isEnabled`**

* Signature:

```lua
r1 = isEnabled()
```

* Description:

> Is the console enabled?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if enabled, false otherwise

* C signature:

```c
  orxBOOL  orxConsole_IsEnabled()
```

---

### **`isInsertMode`**

* Signature:

```lua
r1 = isInsertMode()
```

* Description:

> Is the console input in insert mode?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if insert mode, false otherwise \(overwrite mode\)

* C signature:

```c
  orxBOOL  orxConsole_IsInsertMode()
```

---

### **`log`**

* Signature:

```lua
r1 = log(text)
```

* Description:

> Logs to the console

* Params:

name | type | description 
--- | --- | ---
text | string | Text to log

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConsole_Log(const orxSTRING _zText)
```

---

### **`setFont`**

* Signature:

```lua
r1 = setFont(font)
```

* Description:

> Sets the console font

* Params:

name | type | description 
--- | --- | ---
font | [orxFONT\#](../types/orxFONT.md) | Font to use

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConsole_SetFont(const orxFONT *_pstFont)
```

---

### **`setLogLineLength`**

* Signature:

```lua
r1 = setLogLineLength(linelength)
```

* Description:

> Sets the console log line length

* Params:

name | type | description 
--- | --- | ---
linelength | integer | Line length to use

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConsole_SetLogLineLength(orxU32 _u32LineLength)
```

---

### **`setToggle`**

* Signature:

```lua
r1 = setToggle(inputtype, inputid, inputmode)
```

* Description:

> Sets the console toggle

* Params:

name | type | description 
--- | --- | ---
inputtype | [orxINPUT_TYPE](../enums.md#orxinput_type)  | Type of input peripheral
inputid | string | ID of button/key/axis
inputmode | [orxINPUT_MODE](../enums.md#orxinput_mode)  | Mode of input

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxConsole_SetToggle(orxINPUT_TYPE _eInputType, orxENUM _eInputID, orxINPUT_MODE _eInputMode)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Console module setup

* Params:

* Returns:

* C signature:

```c
  void  orxConsole_Setup()
```

---


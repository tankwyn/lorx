# module system

## functions

### **`delay`**

* Signature:

```lua
delay(seconds)
```

* Description:

> Delay the program for given number of seconds

* Params:

name | type | description 
--- | --- | ---
seconds | number | Number of seconds to wait

* Returns:

* C signature:

```c
  void  orxSystem_Delay(orxFLOAT _fSeconds)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the system module

* Params:

* Returns:

* C signature:

```c
  void  orxSystem_Exit()
```

---

### **`getClipboard`**

* Signature:

```lua
r1 = getClipboard()
```

* Description:

> Gets clipboard's content

* Params:

* Returns:

type | description 
--- | ---
string | Clipboard's content / orxNULL, valid until next call to orxSystem_GetClipboard/orxSystem_SetClipboard

* C signature:

```c
  const orxSTRING  orxSystem_GetClipboard()
```

---

### **`getRealTime`**

* Signature:

```lua
r1 = getRealTime()
```

* Description:

> Gets real time \(in seconds\)

* Params:

* Returns:

type | description 
--- | ---
integer | Returns the amount of seconds elapsed since reference time \(epoch\)

* C signature:

```c
  orxU64  orxSystem_GetRealTime()
```

---

### **`getSystemTime`**

* Signature:

```lua
r1 = getSystemTime()
```

* Description:

> Gets current internal system time \(in seconds\)

* Params:

* Returns:

type | description 
--- | ---
number | Current internal system time

* C signature:

```c
  orxDOUBLE  orxSystem_GetSystemTime()
```

---

### **`getTime`**

* Signature:

```lua
r1 = getTime()
```

* Description:

> Gets current time \(elapsed from the beginning of the application, in seconds\)

* Params:

* Returns:

type | description 
--- | ---
number | Current time

* C signature:

```c
  orxDOUBLE  orxSystem_GetTime()
```

---

### **`getVersionFullString`**

* Signature:

```lua
r1 = getVersionFullString()
```

* Description:

> Gets orx version literal \(compiled\), including build number

* Params:

* Returns:

type | description 
--- | ---
string | Compiled version literal

* C signature:

```c
  const orxSTRING  orxSystem_GetVersionFullString()
```

---

### **`getVersionNumeric`**

* Signature:

```lua
r1 = getVersionNumeric()
```

* Description:

> Gets orx version absolute numeric value \(compiled\)

* Params:

* Returns:

type | description 
--- | ---
integer | Absolute numeric value of compiled version

* C signature:

```c
  orxU32  orxSystem_GetVersionNumeric()
```

---

### **`getVersionString`**

* Signature:

```lua
r1 = getVersionString()
```

* Description:

> Gets orx version literal \(compiled\), excluding build number

* Params:

* Returns:

type | description 
--- | ---
string | Compiled version literal

* C signature:

```c
  const orxSTRING  orxSystem_GetVersionString()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the system module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSystem_Init()
```

---

### **`setClipboard`**

* Signature:

```lua
r1 = setClipboard(value)
```

* Description:

> Sets clipboard's content

* Params:

name | type | description 
--- | --- | ---
value | string | Value to set in the clipboard, nil to clear

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSystem_SetClipboard(const orxSTRING _zValue)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> System module setup

* Params:

* Returns:

* C signature:

```c
  void  orxSystem_Setup()
```

---


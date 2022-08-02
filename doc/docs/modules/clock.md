# module clock

## functions

### **`addGlobalTimer`**

* Signature:

```lua
r1 = addGlobalTimer(timercb, delay, repetition)
```

* Description:

> Add a global timer function \(ie. using the main core clock\)

* Params:

name | type | description 
--- | --- | ---
timercb | [lorxCLOCK_CALLBACK](../callbacks.md#lorxclock_callback)  | Concerned timer callback
delay | number | Timer's delay between 2 calls, must be strictly positive
repetition | integer | Number of times this timer should be called before removed, -1 for infinite

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxClock_AddGlobalTimer(const orxCLOCK_FUNCTION _pfnCallback, orxFLOAT _fDelay, orxS32 _s32Repetition, void *_pContext)
```

---

### **`create`**

* Signature:

```lua
r1 = create(ticksize)
```

* Description:

> Creates a clock

* Params:

name | type | description 
--- | --- | ---
ticksize | number | Tick size for the clock \(in seconds\)

* Returns:

type | description 
--- | ---
[orxCLOCK](../types/orxCLOCK.md)  | [orxCLOCK](../types/orxCLOCK.md) / nil

* C signature:

```c
  orxCLOCK * orxClock_Create(orxFLOAT _fTickSize)
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a clock from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxCLOCK](../types/orxCLOCK.md)  | [orxCLOCK](../types/orxCLOCK.md) / nil

* C signature:

```c
  orxCLOCK * orxClock_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the clock module

* Params:

* Returns:

* C signature:

```c
  void  orxClock_Exit()
```

---

### **`get`**

* Signature:

```lua
r1 = get(name)
```

* Description:

> Gets clock given its name

* Params:

name | type | description 
--- | --- | ---
name | string | Clock name

* Returns:

type | description 
--- | ---
[orxCLOCK](../types/orxCLOCK.md)  | [orxCLOCK](../types/orxCLOCK.md) / nil

* C signature:

```c
  orxCLOCK * orxClock_Get(const orxSTRING _zName)
```

---

### **`getFromInfo`**

* Signature:

```lua
r1 = getFromInfo(clockinfo)
```

* Description:

> Gets clock from its info

* Params:

name | type | description 
--- | --- | ---
clockinfo | [orxCLOCK_INFO\#](../types/orxCLOCK_INFO.md) | Concerned clock info

* Returns:

type | description 
--- | ---
[orxCLOCK](../types/orxCLOCK.md)  | [orxCLOCK](../types/orxCLOCK.md) / nil

* C signature:

```c
  orxCLOCK * orxClock_GetFromInfo(const orxCLOCK_INFO *_pstClockInfo)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the clock module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_Init()
```

---

### **`removeGlobalTimer`**

* Signature:

```lua
r1 = removeGlobalTimer(timercb, delay)
```

* Description:

> Removes a global timer function \(ie. from the main core clock\)

* Params:

name | type | description 
--- | --- | ---
timercb | [lorxCLOCK_CALLBACK](../callbacks.md#lorxclock_callback)  | Concerned timer callback
delay | number | Timer's delay between 2 calls, must be strictly positive

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
orxSTATUS orxClock_RemoveGlobalTimer(const orxCLOCK_FUNCTION _pfnCallback, orxFLOAT _fDelay, void *_pContext)
```

---

### **`resyncAll`**

* Signature:

```lua
r1 = resyncAll()
```

* Description:

> Resyncs all clocks \(accumulated DT =\> 0\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_ResyncAll()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Clock module setup

* Params:

* Returns:

* C signature:

```c
  void  orxClock_Setup()
```

---

### **`update`**

* Signature:

```lua
r1 = update()
```

* Description:

> Updates the clock system

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxClock_Update()
```

---


# module frame

## functions

### **`create`**

* Signature:

```lua
r1 = create(flags)
```

* Description:

> Creates a frame

* Params:

name | type | description 
--- | --- | ---
flags | integer | Flags for created animation

* Returns:

type | description 
--- | ---
[orxFRAME](../types/orxFRAME.md)  | Created [orxFRAME](../types/orxFRAME.md) / nil

* C signature:

```c
  orxFRAME * orxFrame_Create(orxU32 _u32Flags)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the frame module

* Params:

* Returns:

* C signature:

```c
  void  orxFrame_Exit()
```

---

### **`getIgnoreFlagNames`**

* Signature:

```lua
r1 = getIgnoreFlagNames(flags)
```

* Description:

> Get ignore flag names \(beware: result won't persist from one call to the other\)

* Params:

name | type | description 
--- | --- | ---
flags | integer | Literal ignore flags

* Returns:

type | description 
--- | ---
string | Ignore flags names

* C signature:

```c
  const orxSTRING  orxFrame_GetIgnoreFlagNames(orxU32 _u32Flags)
```

---

### **`getIgnoreFlagValues`**

* Signature:

```lua
r1 = getIgnoreFlagValues(flags)
```

* Description:

> Get ignore flag values

* Params:

name | type | description 
--- | --- | ---
flags | string | Literal ignore flags

* Returns:

type | description 
--- | ---
integer | Ignore flags

* C signature:

```c
  orxU32  orxFrame_GetIgnoreFlagValues(const orxSTRING _zFlags)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the frame module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFrame_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Setups the frame module

* Params:

* Returns:

* C signature:

```c
  void  orxFrame_Setup()
```

---


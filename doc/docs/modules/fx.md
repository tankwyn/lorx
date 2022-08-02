# module fx

## functions

### **`clearCache`**

* Signature:

```lua
r1 = clearCache()
```

* Description:

> Clears cache \(if any FX is still in active use, it'll remain in memory until not referenced anymore\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_ClearCache()
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty FX

* Params:

* Returns:

type | description 
--- | ---
[orxFX](../types/orxFX.md)  | [orxFX](../types/orxFX.md) / nil

* C signature:

```c
  orxFX * orxFX_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates an FX from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxFX](../types/orxFX.md)  | [orxFX](../types/orxFX.md) / nil

* C signature:

```c
  orxFX * orxFX_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the FX module

* Params:

* Returns:

* C signature:

```c
  void  orxFX_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the FX module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFX_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> FX module setup

* Params:

* Returns:

* C signature:

```c
  void  orxFX_Setup()
```

---


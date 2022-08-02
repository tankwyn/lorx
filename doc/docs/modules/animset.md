# module animset

## functions

### **`clearCache`**

* Signature:

```lua
r1 = clearCache()
```

* Description:

> Clears cache \(if any animset is still in active use, it'll remain in memory until not referenced anymore\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimSet_ClearCache()
```

---

### **`create`**

* Signature:

```lua
r1 = create(size)
```

* Description:

> Creates an empty AnimSet

* Params:

name | type | description 
--- | --- | ---
size | integer | Storage size

* Returns:

type | description 
--- | ---
[orxANIMSET](../types/orxANIMSET.md)  | 

* C signature:

```c
  orxANIMSET * orxAnimSet_Create(orxU32 _u32Size)
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates an animation set from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxANIMSET](../types/orxANIMSET.md)  | [orxANIMSET](../types/orxANIMSET.md) / nil

* C signature:

```c
  orxANIMSET * orxAnimSet_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the AnimSet module

* Params:

* Returns:

* C signature:

```c
  void  orxAnimSet_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the AnimSet module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimSet_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> AnimSet module setup

* Params:

* Returns:

* C signature:

```c
  void  orxAnimSet_Setup()
```

---


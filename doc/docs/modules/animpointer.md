# module animpointer

## functions

### **`create`**

* Signature:

```lua
r1 = create(animset)
```

* Description:

> Creates an empty AnimPointer

* Params:

name | type | description 
--- | --- | ---
animset | [orxANIMSET](../types/orxANIMSET.md)  | AnimSet reference

* Returns:

type | description 
--- | ---
[orxANIMPOINTER](../types/orxANIMPOINTER.md)  | [orxANIMPOINTER](../types/orxANIMPOINTER.md) / nil

* C signature:

```c
  orxANIMPOINTER * orxAnimPointer_Create(orxANIMSET *_pstAnimSet)
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates an animation pointer from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxANIMPOINTER](../types/orxANIMPOINTER.md)  | [orxANIMPOINTER](../types/orxANIMPOINTER.md) / nil

* C signature:

```c
  orxANIMPOINTER * orxAnimPointer_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the AnimPointer module

* Params:

* Returns:

* C signature:

```c
  void  orxAnimPointer_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the AnimPointer module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxAnimPointer_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> AnimPointer module setup

* Params:

* Returns:

* C signature:

```c
  void  orxAnimPointer_Setup()
```

---


# module fxpointer

## functions

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty FXPointer

* Params:

* Returns:

type | description 
--- | ---
[orxFXPOINTER](../types/orxFXPOINTER.md)  | [orxFXPOINTER](../types/orxFXPOINTER.md) / nil

* C signature:

```c
  orxFXPOINTER * orxFXPointer_Create()
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the FXPointer module

* Params:

* Returns:

* C signature:

```c
  void  orxFXPointer_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the FXPointer module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFXPointer_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> FXPointer module setup

* Params:

* Returns:

* C signature:

```c
  void  orxFXPointer_Setup()
```

---


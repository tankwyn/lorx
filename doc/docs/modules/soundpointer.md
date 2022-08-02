# module soundpointer

## functions

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty SoundPointer

* Params:

* Returns:

type | description 
--- | ---
[orxSOUNDPOINTER](../types/orxSOUNDPOINTER.md)  | [orxSOUNDPOINTER](../types/orxSOUNDPOINTER.md) / nil

* C signature:

```c
  orxSOUNDPOINTER * orxSoundPointer_Create()
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the SoundPointer module

* Params:

* Returns:

* C signature:

```c
  void  orxSoundPointer_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the SoundPointer module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxSoundPointer_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> SoundPointer module setup

* Params:

* Returns:

* C signature:

```c
  void  orxSoundPointer_Setup()
```

---


# module anim

## functions

### **`animCustomEvent`**

* Signature:

```lua
r1 = animCustomEvent()
```

* Description:

> Create a new [orxANIM_CUSTOM_EVENT](../types/orxANIM_CUSTOM_EVENT.md) 

* Params:

* Returns:

type | description 
--- | ---
[orxANIM_CUSTOM_EVENT](../types/orxANIM_CUSTOM_EVENT.md)  | The new instance

---

### **`create`**

* Signature:

```lua
r1 = create(flags, keynumber, eventnumber)
```

* Description:

> Creates an empty animation

* Params:

name | type | description 
--- | --- | ---
flags | integer | Flags for created animation
keynumber | integer | Number of keys for this animation
eventnumber | integer | Number of events for this animation

* Returns:

type | description 
--- | ---
[orxANIM](../types/orxANIM.md)  | Created [orxANIM](../types/orxANIM.md) / nil

* C signature:

```c
  orxANIM * orxAnim_Create(orxU32 _u32Flags, orxU32 _u32KeyNumber, orxU32 _u32EventNumber)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the Anim module

* Params:

* Returns:

* C signature:

```c
  void  orxAnim_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the Anim module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxAnim_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Anim module setup

* Params:

* Returns:

* C signature:

```c
  void  orxAnim_Setup()
```

---


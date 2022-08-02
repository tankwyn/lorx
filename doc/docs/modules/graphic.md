# module graphic

## functions

### **`alignVector`**

* Signature:

```lua
r1 = alignVector(alignflags, box)
```

* Description:

> Aligns a vector inside a box using flags

* Params:

name | type | description 
--- | --- | ---
alignflags | integer | Align flags
box | [orxAABOX\#](../types/orxAABOX.md) | Concerned box

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) 

* C signature:

```c
  orxVECTOR * orxGraphic_AlignVector(orxU32 _u32AlignFlags, const orxAABOX *_pstBox, orxVECTOR *_pvValue)
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty graphic

* Params:

* Returns:

type | description 
--- | ---
[orxGRAPHIC](../types/orxGRAPHIC.md)  | Created [orxGRAPHIC](../types/orxGRAPHIC.md) / nil

* C signature:

```c
  orxGRAPHIC * orxGraphic_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a graphic from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxGRAPHIC](../types/orxGRAPHIC.md)  | [orxGRAPHIC](../types/orxGRAPHIC.md) / nil

* C signature:

```c
  orxGRAPHIC * orxGraphic_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the Graphic module

* Params:

* Returns:

* C signature:

```c
  void  orxGraphic_Exit()
```

---

### **`getAlignFlags`**

* Signature:

```lua
r1 = getAlignFlags(align)
```

* Description:

> Gets alignment flags from literals

* Params:

name | type | description 
--- | --- | ---
align | string | Align literals

* Returns:

type | description 
--- | ---
integer | Align flags

* C signature:

```c
  orxU32  orxGraphic_GetAlignFlags(const orxSTRING _zAlign)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the Graphic module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxGraphic_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Graphic module setup

* Params:

* Returns:

* C signature:

```c
  void  orxGraphic_Setup()
```

---


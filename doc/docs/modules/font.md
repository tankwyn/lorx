# module font

## functions

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty font

* Params:

* Returns:

type | description 
--- | ---
[orxFONT](../types/orxFONT.md)  | [orxFONT](../types/orxFONT.md) / nil

* C signature:

```c
  orxFONT * orxFont_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a font from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxFONT](../types/orxFONT.md)  | [orxFONT](../types/orxFONT.md) / nil

* C signature:

```c
  orxFONT * orxFont_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the font module

* Params:

* Returns:

* C signature:

```c
  void  orxFont_Exit()
```

---

### **`getDefaultFontConst`**

* Signature:

```lua
r1 = getDefaultFontConst()
```

* Description:

> Gets default font

* Params:

* Returns:

type | description 
--- | ---
[orxFONT\#](../types/orxFONT.md) | Default font / nil

* C signature:

```c
  const orxFONT * orxFont_GetDefaultFont()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the font module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxFont_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Setups the font module

* Params:

* Returns:

* C signature:

```c
  void  orxFont_Setup()
```

---


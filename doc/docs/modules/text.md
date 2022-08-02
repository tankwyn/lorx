# module text

## functions

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty text

* Params:

* Returns:

type | description 
--- | ---
[orxTEXT](../types/orxTEXT.md)  | [orxTEXT](../types/orxTEXT.md) / nil

* C signature:

```c
  orxTEXT * orxText_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a text from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxTEXT](../types/orxTEXT.md)  | [orxTEXT](../types/orxTEXT.md) / nil

* C signature:

```c
  orxTEXT * orxText_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the text module

* Params:

* Returns:

* C signature:

```c
  void  orxText_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the text module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxText_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Setups the text module

* Params:

* Returns:

* C signature:

```c
  void  orxText_Setup()
```

---


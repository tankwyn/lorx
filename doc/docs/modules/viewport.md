# module viewport

## functions

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates a viewport

* Params:

* Returns:

type | description 
--- | ---
[orxVIEWPORT](../types/orxVIEWPORT.md)  | Created [orxVIEWPORT](../types/orxVIEWPORT.md) / nil

* C signature:

```c
  orxVIEWPORT * orxViewport_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a viewport from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxVIEWPORT](../types/orxVIEWPORT.md)  | [orxVIEWPORT](../types/orxVIEWPORT.md) / nil

* C signature:

```c
  orxVIEWPORT * orxViewport_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the viewport module

* Params:

* Returns:

* C signature:

```c
  void  orxViewport_Exit()
```

---

### **`get`**

* Signature:

```lua
r1 = get(name)
```

* Description:

> Gets viewport given its name

* Params:

name | type | description 
--- | --- | ---
name | string | Camera name

* Returns:

type | description 
--- | ---
[orxVIEWPORT](../types/orxVIEWPORT.md)  | [orxVIEWPORT](../types/orxVIEWPORT.md) / nil

* C signature:

```c
  orxVIEWPORT * orxViewport_Get(const orxSTRING _zName)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the viewport module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxViewport_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Viewport module setup

* Params:

* Returns:

* C signature:

```c
  void  orxViewport_Setup()
```

---


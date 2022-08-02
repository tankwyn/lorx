# module camera

## functions

### **`create`**

* Signature:

```lua
r1 = create(flags)
```

* Description:

> Creates a camera

* Params:

name | type | description 
--- | --- | ---
flags | integer | Camera flags \(2D / ...\)

* Returns:

type | description 
--- | ---
[orxCAMERA](../types/orxCAMERA.md)  | Created [orxCAMERA](../types/orxCAMERA.md) / nil

* C signature:

```c
  orxCAMERA * orxCamera_Create(orxU32 _u32Flags)
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a camera from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxCAMERA](../types/orxCAMERA.md)  | [orxCAMERA](../types/orxCAMERA.md) / nil

* C signature:

```c
  orxCAMERA * orxCamera_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the Camera module

* Params:

* Returns:

* C signature:

```c
  void  orxCamera_Exit()
```

---

### **`get`**

* Signature:

```lua
r1 = get(name)
```

* Description:

> Gets camera given its name

* Params:

name | type | description 
--- | --- | ---
name | string | Camera name

* Returns:

type | description 
--- | ---
[orxCAMERA](../types/orxCAMERA.md)  | [orxCAMERA](../types/orxCAMERA.md) / nil

* C signature:

```c
  orxCAMERA * orxCamera_Get(const orxSTRING _zName)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the Camera module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | 

* C signature:

```c
  orxSTATUS  orxCamera_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Camera module setup

* Params:

* Returns:

* C signature:

```c
  void  orxCamera_Setup()
```

---


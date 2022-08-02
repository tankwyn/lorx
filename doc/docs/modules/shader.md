# module shader

## functions

### **`clearCache`**

* Signature:

```lua
r1 = clearCache()
```

* Description:

> Clears cache \(if any shader is still in active use, it'll remain in memory until not referenced anymore\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_ClearCache()
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty shader

* Params:

* Returns:

type | description 
--- | ---
[orxSHADER](../types/orxSHADER.md)  | [orxSHADER](../types/orxSHADER.md) / nil

* C signature:

```c
  orxSHADER * orxShader_Create()
```

---

### **`createFromConfig`**

* Signature:

```lua
r1 = createFromConfig(configid)
```

* Description:

> Creates a shader from config

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID

* Returns:

type | description 
--- | ---
[orxSHADER](../types/orxSHADER.md)  | [orxSHADER](../types/orxSHADER.md) / nil

* C signature:

```c
  orxSHADER * orxShader_CreateFromConfig(const orxSTRING _zConfigID)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the shader module

* Params:

* Returns:

* C signature:

```c
  void  orxShader_Exit()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the shader module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxShader_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Shader module setup

* Params:

* Returns:

* C signature:

```c
  void  orxShader_Setup()
```

---


# module texture

## functions

### **`clearCache`**

* Signature:

```lua
r1 = clearCache()
```

* Description:

> Clears cache \(if any texture is still in active use, it'll remain in memory until not referenced anymore\)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxTexture_ClearCache()
```

---

### **`create`**

* Signature:

```lua
r1 = create()
```

* Description:

> Creates an empty texture

* Params:

* Returns:

type | description 
--- | ---
[orxTEXTURE](../types/orxTEXTURE.md)  | [orxTEXTURE](../types/orxTEXTURE.md) / nil

* C signature:

```c
  orxTEXTURE * orxTexture_Create()
```

---

### **`createFromFile`**

* Signature:

```lua
r1 = createFromFile(filename, keepincache)
```

* Description:

> Creates a texture from a bitmap file

* Params:

name | type | description 
--- | --- | ---
filename | string | Name of the bitmap
keepincache | boolean | Should be kept in cache after no more references exist?

* Returns:

type | description 
--- | ---
[orxTEXTURE](../types/orxTEXTURE.md)  | [orxTEXTURE](../types/orxTEXTURE.md) / nil

* C signature:

```c
  orxTEXTURE * orxTexture_CreateFromFile(const orxSTRING _zFileName, orxBOOL _bKeepInCache)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the texture module

* Params:

* Returns:

* C signature:

```c
  void  orxTexture_Exit()
```

---

### **`get`**

* Signature:

```lua
r1 = get(name)
```

* Description:

> Gets texture given its name

* Params:

name | type | description 
--- | --- | ---
name | string | Texture name

* Returns:

type | description 
--- | ---
[orxTEXTURE](../types/orxTEXTURE.md)  | [orxTEXTURE](../types/orxTEXTURE.md) / nil

* C signature:

```c
  orxTEXTURE * orxTexture_Get(const orxSTRING _zName)
```

---

### **`getLoadCount`**

* Signature:

```lua
r1 = getLoadCount()
```

* Description:

> Gets pending load count

* Params:

* Returns:

type | description 
--- | ---
integer | Pending load count

* C signature:

```c
  orxU32  orxTexture_GetLoadCount()
```

---

### **`getScreenTexture`**

* Signature:

```lua
r1 = getScreenTexture()
```

* Description:

> Gets screen texture

* Params:

* Returns:

type | description 
--- | ---
[orxTEXTURE](../types/orxTEXTURE.md)  | Screen texture / nil

* C signature:

```c
  orxTEXTURE * orxTexture_GetScreenTexture()
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the texture module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxTexture_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Setups the texture module

* Params:

* Returns:

* C signature:

```c
  void  orxTexture_Setup()
```

---


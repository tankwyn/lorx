# module render

## functions

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the render module

* Params:

* Returns:

* C signature:

```c
  void  orxRender_Exit()
```

---

### **`getScreenPosition`**

* Signature:

```lua
r1 = getScreenPosition(worldposition, viewport)
```

* Description:

> Get a screen position given a world one and a viewport \(rendering position\)

* Params:

name | type | description 
--- | --- | ---
worldposition | [orxVECTOR\#](../types/orxVECTOR.md) | Concerned world position
viewport | [orxVIEWPORT\#](../types/orxVIEWPORT.md) | Concerned viewport, if nil then the last viewport with a camera will be used

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) if found \(can be off-screen\), nil otherwise

* C signature:

```c
  orxVECTOR * orxRender_GetScreenPosition(const orxVECTOR *_pvWorldPosition, const orxVIEWPORT *_pstViewport, orxVECTOR *_pvScreenPosition)
```

---

### **`getWorldPosition`**

* Signature:

```lua
r1 = getWorldPosition(screenposition, viewport)
```

* Description:

> Get a world position given a screen one \(absolute picking\)

* Params:

name | type | description 
--- | --- | ---
screenposition | [orxVECTOR\#](../types/orxVECTOR.md) | Concerned screen position
viewport | [orxVIEWPORT\#](../types/orxVIEWPORT.md) | Concerned viewport, if nil then either the last viewport that contains the position \(if any\), or the last viewport with a camera in the list if none contains the position

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) if found \*inside\* the display surface, nil otherwise

* C signature:

```c
  orxVECTOR * orxRender_GetWorldPosition(const orxVECTOR *_pvScreenPosition, const orxVIEWPORT *_pstViewport, orxVECTOR *_pvWorldPosition)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the render module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxRender_Init()
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Render module setup

* Params:

* Returns:

* C signature:

```c
  void  orxRender_Setup()
```

---


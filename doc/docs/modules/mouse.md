# module mouse

## functions

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the mouse module

* Params:

* Returns:

* C signature:

```c
  void  orxMouse_Exit()
```

---

### **`getAxisName`**

* Signature:

```lua
r1 = getAxisName(axis)
```

* Description:

> Gets axis literal name

* Params:

name | type | description 
--- | --- | ---
axis | [orxMOUSE_AXIS](../enums.md#orxmouse_axis)  | Concerned axis

* Returns:

type | description 
--- | ---
string | Axis's name

* C signature:

```c
  const orxSTRING  orxMouse_GetAxisName(orxMOUSE_AXIS _eAxis)
```

---

### **`getButtonName`**

* Signature:

```lua
r1 = getButtonName(button)
```

* Description:

> Gets button literal name

* Params:

name | type | description 
--- | --- | ---
button | [orxMOUSE_BUTTON](../enums.md#orxmouse_button)  | Concerned button

* Returns:

type | description 
--- | ---
string | Button's name

* C signature:

```c
  const orxSTRING  orxMouse_GetButtonName(orxMOUSE_BUTTON _eButton)
```

---

### **`getMoveDelta`**

* Signature:

```lua
r1 = getMoveDelta()
```

* Description:

> Gets mouse move delta \(since last call\)

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxMouse_GetMoveDelta(orxVECTOR *_pvMoveDelta)
```

---

### **`getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Gets mouse position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxMouse_GetPosition(orxVECTOR *_pvPosition)
```

---

### **`getWheelDelta`**

* Signature:

```lua
r1 = getWheelDelta()
```

* Description:

> Gets mouse wheel delta \(since last call\)

* Params:

* Returns:

type | description 
--- | ---
number | Mouse wheel delta

* C signature:

```c
  orxFLOAT  orxMouse_GetWheelDelta()
```

---

### **`grab`**

* Signature:

```lua
r1 = grab(grab)
```

* Description:

> Grabs the mouse

* Params:

name | type | description 
--- | --- | ---
grab | boolean | Grab / Release

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxMouse_Grab(orxBOOL _bGrab)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the mouse module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | Returns the status of the operation

* C signature:

```c
  orxSTATUS  orxMouse_Init()
```

---

### **`isButtonPressed`**

* Signature:

```lua
r1 = isButtonPressed(button)
```

* Description:

> Is mouse button pressed?

* Params:

name | type | description 
--- | --- | ---
button | [orxMOUSE_BUTTON](../enums.md#orxmouse_button)  | Mouse button to check

* Returns:

type | description 
--- | ---
boolean | true if pressed / false otherwise

* C signature:

```c
  orxBOOL  orxMouse_IsButtonPressed(orxMOUSE_BUTTON _eButton)
```

---

### **`setCursor`**

* Signature:

```lua
r1 = setCursor(name, pivot)
```

* Description:

> Sets mouse \(hardware\) cursor

* Params:

name | type | description 
--- | --- | ---
name | string | Cursor's name can be: a standard name \(arrow, ibeam, hand, crosshair, hresize or vresize\), a file name or nil to reset the hardware cursor to default
pivot | [orxVECTOR\#](../types/orxVECTOR.md) | Cursor's pivot \(aka hotspot\), nil will default to \(0, 0\)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxMouse_SetCursor(const orxSTRING _zName, const orxVECTOR *_pvPivot)
```

---

### **`setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets mouse position

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](../types/orxVECTOR.md) | Mouse position

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxMouse_SetPosition(const orxVECTOR *_pvPosition)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Mouse module setup

* Params:

* Returns:

* C signature:

```c
  void  orxMouse_Setup()
```

---

### **`showCursor`**

* Signature:

```lua
r1 = showCursor(show)
```

* Description:

> Shows mouse \(hardware\) cursor

* Params:

name | type | description 
--- | --- | ---
show | boolean | Show / Hide

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxMouse_ShowCursor(orxBOOL _bShow)
```

---


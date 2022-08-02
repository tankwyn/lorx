# module joystick

## functions

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the joystick module

* Params:

* Returns:

* C signature:

```c
  void  orxJoystick_Exit()
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
axis | [orxJOYSTICK_AXIS](../enums.md#orxjoystick_axis)  | Concerned axis

* Returns:

type | description 
--- | ---
string | Axis's name

* C signature:

```c
  const orxSTRING  orxJoystick_GetAxisName(orxJOYSTICK_AXIS _eAxis)
```

---

### **`getAxisValue`**

* Signature:

```lua
r1 = getAxisValue(axis)
```

* Description:

> Gets joystick axis value

* Params:

name | type | description 
--- | --- | ---
axis | [orxJOYSTICK_AXIS](../enums.md#orxjoystick_axis)  | Joystick axis to check

* Returns:

type | description 
--- | ---
number | Value of the axis

* C signature:

```c
  orxFLOAT  orxJoystick_GetAxisValue(orxJOYSTICK_AXIS _eAxis)
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
button | [orxJOYSTICK_BUTTON](../enums.md#orxjoystick_button)  | Concerned button

* Returns:

type | description 
--- | ---
string | Button's name

* C signature:

```c
  const orxSTRING  orxJoystick_GetButtonName(orxJOYSTICK_BUTTON _eButton)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the joystick module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | Returns the status of the operation

* C signature:

```c
  orxSTATUS  orxJoystick_Init()
```

---

### **`isButtonPressed`**

* Signature:

```lua
r1 = isButtonPressed(button)
```

* Description:

> Is joystick button pressed?

* Params:

name | type | description 
--- | --- | ---
button | [orxJOYSTICK_BUTTON](../enums.md#orxjoystick_button)  | Joystick button to check

* Returns:

type | description 
--- | ---
boolean | true if pressed / false otherwise

* C signature:

```c
  orxBOOL  orxJoystick_IsButtonPressed(orxJOYSTICK_BUTTON _eButton)
```

---

### **`isConnected`**

* Signature:

```lua
r1 = isConnected(id)
```

* Description:

> Is joystick connected?

* Params:

name | type | description 
--- | --- | ---
id | integer | ID of the joystick, 1-based index

* Returns:

type | description 
--- | ---
boolean | true if connected / false otherwise

* C signature:

```c
  orxBOOL  orxJoystick_IsConnected(orxU32 _u32ID)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> JOYSTICK module setup

* Params:

* Returns:

* C signature:

```c
  void  orxJoystick_Setup()
```

---


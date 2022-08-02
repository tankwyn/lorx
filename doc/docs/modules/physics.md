# module physics

## functions

### **`boxPick`**

* Signature:

```lua
r1 = boxPick(box, selfflags, checkmask, userdatalist, number)
```

* Description:

> Picks bodies in contact with the given axis aligned box

* Params:

name | type | description 
--- | --- | ---
box | [orxAABOX\#](../types/orxAABOX.md) | Box used for picking
selfflags | integer | Selfs flags used for filtering \(0xFFFF for no filtering\)
checkmask | integer | Check mask used for filtering \(0xFFFF for no filtering\)
userdatalist | table of orxHANDLE | List of user data to fill
number | integer | Number of user data

* Returns:

type | description 
--- | ---
integer | Count of actual found bodies. It might be larger than the given array, in which case you'd need to pass a larger array to retrieve them all.

* C signature:

```c
  orxU32  orxPhysics_BoxPick(const orxAABOX *_pstBox, orxU16 _u16SelfFlags, orxU16 _u16CheckMask, orxHANDLE _ahUserDataList[], orxU32 _u32Number)
```

---

### **`enableSimulation`**

* Signature:

```lua
enableSimulation(enable)
```

* Description:

> Enables/disables physics simulation

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / disable

* Returns:

* C signature:

```c
  void  orxPhysics_EnableSimulation(orxBOOL _bEnable)
```

---

### **`exit`**

* Signature:

```lua
exit()
```

* Description:

> Exits from the physics module

* Params:

* Returns:

* C signature:

```c
  void  orxPhysics_Exit()
```

---

### **`getCollisionFlagName`**

* Signature:

```lua
r1 = getCollisionFlagName(flag)
```

* Description:

> Gets collision flag literal name

* Params:

name | type | description 
--- | --- | ---
flag | integer | Concerned collision flag numerical value

* Returns:

type | description 
--- | ---
string | Flag's name

* C signature:

```c
  const orxSTRING  orxPhysics_GetCollisionFlagName(orxU32 _u32Flag)
```

---

### **`getCollisionFlagValue`**

* Signature:

```lua
r1 = getCollisionFlagValue(flag)
```

* Description:

> Gets collision flag numerical value

* Params:

name | type | description 
--- | --- | ---
flag | string | Concerned collision flag literal name

* Returns:

type | description 
--- | ---
integer | Flag's value

* C signature:

```c
  orxU32  orxPhysics_GetCollisionFlagValue(const orxSTRING _zFlag)
```

---

### **`getGravity`**

* Signature:

```lua
r1 = getGravity()
```

* Description:

> Gets physics gravity

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | [orxVECTOR](../types/orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxPhysics_GetGravity(orxVECTOR *_pvGravity)
```

---

### **`init`**

* Signature:

```lua
r1 = init()
```

* Description:

> Inits the physics module

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_Init()
```

---

### **`raycast`**

* Signature:

```lua
r1 = raycast(begin, end, selfflags, checkmask, earlyexit, contact, normal)
```

* Description:

> Issues a raycast to test for potential physics bodies in the way

* Params:

name | type | description 
--- | --- | ---
begin | [orxVECTOR\#](../types/orxVECTOR.md) | Beginning of raycast
end | [orxVECTOR\#](../types/orxVECTOR.md) | End of raycast
selfflags | integer | Selfs flags used for filtering \(0xFFFF for no filtering\)
checkmask | integer | Check mask used for filtering \(0xFFFF for no filtering\)
earlyexit | boolean | Should stop as soon as an object has been hit \(which might not be the closest\)
contact | [orxVECTOR](../types/orxVECTOR.md)  | If non-nil and a contact is found it will be stored here
normal | [orxVECTOR](../types/orxVECTOR.md)  | If non-nil and a contact is found, its normal will be stored here

* Returns:

type | description 
--- | ---
orxHANDLE | Colliding body's user data / [orxHANDLE_UNDEFINED](./constants.md#orxhandle_undefined) 

* C signature:

```c
  orxHANDLE  orxPhysics_Raycast(const orxVECTOR *_pvBegin, const orxVECTOR *_pvEnd, orxU16 _u16SelfFlags, orxU16 _u16CheckMask, orxBOOL _bEarlyExit, orxVECTOR *_pvContact, orxVECTOR *_pvNormal)
```

---

### **`setGravity`**

* Signature:

```lua
r1 = setGravity(gravity)
```

* Description:

> Sets physics gravity

* Params:

name | type | description 
--- | --- | ---
gravity | [orxVECTOR\#](../types/orxVECTOR.md) | Gravity to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetGravity(const orxVECTOR *_pvGravity)
```

---

### **`setup`**

* Signature:

```lua
setup()
```

* Description:

> Physics module setup

* Params:

* Returns:

* C signature:

```c
  void  orxPhysics_Setup()
```

---


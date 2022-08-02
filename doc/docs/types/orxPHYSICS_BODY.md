# type orxPHYSICS_BODY

> 

## Methods

### **`orxPHYSICS_BODY:addr`**

* Signature:

```lua
r1 = addr()
```

* Description:

> get the c memory address of the lorx userdata

* Params:

* Returns:

type | description 
--- | ---
string | address string

---

### **`orxPHYSICS_BODY:aeq`**

* Signature:

```lua
r1 = aeq(u)
```

* Description:

> check if the c memory address of this lorx userdata equals to another

* Params:

name | type | description 
--- | --- | ---
u | any lorx utype | another lorx userdata

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`orxPHYSICS_BODY:applyForce`**

* Signature:

```lua
r1 = applyForce(force, point)
```

* Description:

> Applies a force to a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
force | [orxVECTOR\#](./orxVECTOR.md) | Force to apply
point | [orxVECTOR\#](./orxVECTOR.md) | Point of application (world coordinates) (if null, center of mass will be used)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_ApplyForce(orxPHYSICS_BODY *_pstBody, const orxVECTOR *_pvForce, const orxVECTOR *_pvPoint)
```

---

### **`orxPHYSICS_BODY:applyImpulse`**

* Signature:

```lua
r1 = applyImpulse(impulse, point)
```

* Description:

> Applies an impulse to a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
impulse | [orxVECTOR\#](./orxVECTOR.md) | Impulse to apply
point | [orxVECTOR\#](./orxVECTOR.md) | Point of application (world coordinates) (if null, center of mass will be used)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_ApplyImpulse(orxPHYSICS_BODY *_pstBody, const orxVECTOR *_pvImpulse, const orxVECTOR *_pvPoint)
```

---

### **`orxPHYSICS_BODY:applyTorque`**

* Signature:

```lua
r1 = applyTorque(torque)
```

* Description:

> Applies a torque to a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
torque | number | Torque to apply

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_ApplyTorque(orxPHYSICS_BODY *_pstBody, orxFLOAT _fTorque)
```

---

### **`orxPHYSICS_BODY:asVoid`**

* Signature:

```lua
r1 = asVoid()
```

* Description:

> convert to a void\*

* Params:

* Returns:

type | description 
--- | ---
void\* | the converted void\*

---

### **`orxPHYSICS_BODY:delete`**

* Signature:

```lua
delete()
```

* Description:

> Deletes a physical body (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxPhysics_DeleteBody(orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:getAngularDamping`**

* Signature:

```lua
r1 = getAngularDamping()
```

* Description:

> Gets angular damping of a physical body

* Params:

* Returns:

type | description 
--- | ---
number | Angular damping of the physical body

* C signature:

```c
  orxFLOAT  orxPhysics_GetAngularDamping(const orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:getAngularVelocity`**

* Signature:

```lua
r1 = getAngularVelocity()
```

* Description:

> Gets the angular velocity of a physical body

* Params:

* Returns:

type | description 
--- | ---
number | Angular velocity \(radians/seconds\) of the physical body

* C signature:

```c
  orxFLOAT  orxPhysics_GetAngularVelocity(const orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:getCustomGravity`**

* Signature:

```lua
r1 = getCustomGravity()
```

* Description:

> Gets the custom gravity of a physical body

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Physical body custom gravity / nil is object doesn't have any

* C signature:

```c
  orxVECTOR * orxPhysics_GetCustomGravity(const orxPHYSICS_BODY *_pstBody, orxVECTOR *_pvCustomGravity)
```

---

### **`orxPHYSICS_BODY:getLinearDamping`**

* Signature:

```lua
r1 = getLinearDamping()
```

* Description:

> Gets linear damping of a physical body

* Params:

* Returns:

type | description 
--- | ---
number | Linear damping of the physical body

* C signature:

```c
  orxFLOAT  orxPhysics_GetLinearDamping(const orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:getMass`**

* Signature:

```lua
r1 = getMass()
```

* Description:

> Gets the mass of a physical body

* Params:

* Returns:

type | description 
--- | ---
number | Mass of the physical body

* C signature:

```c
  orxFLOAT  orxPhysics_GetMass(const orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:getMassCenter`**

* Signature:

```lua
r1 = getMassCenter()
```

* Description:

> Gets the center of mass of a physical body \(object space but scale isn't accounted for\)

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Center of mass of the physical body

* C signature:

```c
  orxVECTOR * orxPhysics_GetMassCenter(const orxPHYSICS_BODY *_pstBody, orxVECTOR *_pvMassCenter)
```

---

### **`orxPHYSICS_BODY:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Gets the position of a physical body

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Position of the physical body

* C signature:

```c
  orxVECTOR * orxPhysics_GetPosition(const orxPHYSICS_BODY *_pstBody, orxVECTOR *_pvPosition)
```

---

### **`orxPHYSICS_BODY:getRotation`**

* Signature:

```lua
r1 = getRotation()
```

* Description:

> Gets the rotation of a physical body

* Params:

* Returns:

type | description 
--- | ---
number | Rotation \(radians\) of the physical body

* C signature:

```c
  orxFLOAT  orxPhysics_GetRotation(const orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:getSpeed`**

* Signature:

```lua
r1 = getSpeed()
```

* Description:

> Gets the speed of a physical body

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Speed of the physical body

* C signature:

```c
  orxVECTOR * orxPhysics_GetSpeed(const orxPHYSICS_BODY *_pstBody, orxVECTOR *_pvSpeed)
```

---

### **`orxPHYSICS_BODY:getSpeedAtWorldPosition`**

* Signature:

```lua
r1 = getSpeedAtWorldPosition(position)
```

* Description:

> Gets the speed of a physical body at a specified world position

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Concerned world position

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Speed of the physical body

* C signature:

```c
  orxVECTOR * orxPhysics_GetSpeedAtWorldPosition(const orxPHYSICS_BODY *_pstBody, const orxVECTOR *_pvPosition, orxVECTOR *_pvSpeed)
```

---

### **`orxPHYSICS_BODY:isFixedRotation`**

* Signature:

```lua
r1 = isFixedRotation()
```

* Description:

> Is a physical body using a fixed rotation

* Params:

* Returns:

type | description 
--- | ---
boolean | true if fixed rotation, false otherwise

* C signature:

```c
  orxBOOL  orxPhysics_IsFixedRotation(const orxPHYSICS_BODY *_pstBody)
```

---

### **`orxPHYSICS_BODY:setAllowMoving`**

* Signature:

```lua
r1 = setAllowMoving(allowmoving)
```

* Description:

> Sets the "allow moving" property of a body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
allowmoving | boolean | Only used for non-dynamic bodies, Kinematic / Static

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetAllowMoving(orxPHYSICS_BODY *_pstBody, orxBOOL _bAllowMoving)
```

---

### **`orxPHYSICS_BODY:setAngularDamping`**

* Signature:

```lua
r1 = setAngularDamping(damping)
```

* Description:

> Sets angular damping of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
damping | number | Angular damping to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetAngularDamping(orxPHYSICS_BODY *_pstBody, orxFLOAT _fDamping)
```

---

### **`orxPHYSICS_BODY:setAngularVelocity`**

* Signature:

```lua
r1 = setAngularVelocity(velocity)
```

* Description:

> Sets the angular velocity of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
velocity | number | Angular velocity (radians/seconds) to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetAngularVelocity(orxPHYSICS_BODY *_pstBody, orxFLOAT _fVelocity)
```

---

### **`orxPHYSICS_BODY:setCustomGravity`**

* Signature:

```lua
r1 = setCustomGravity(customgravity)
```

* Description:

> Sets the custom gravity of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
customgravity | [orxVECTOR\#](./orxVECTOR.md) | Custom gravity multiplier to set / nil to remove it

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetCustomGravity(orxPHYSICS_BODY *_pstBody, const orxVECTOR *_pvCustomGravity)
```

---

### **`orxPHYSICS_BODY:setDynamic`**

* Signature:

```lua
r1 = setDynamic(dynamic)
```

* Description:

> Sets the dynamic property of a body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
dynamic | boolean | Dynamic / Static (or Kinematic depending on the "allow moving" property)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetDynamic(orxPHYSICS_BODY *_pstBody, orxBOOL _bDynamic)
```

---

### **`orxPHYSICS_BODY:setFixedRotation`**

* Signature:

```lua
r1 = setFixedRotation(fixed)
```

* Description:

> Sets the fixed rotation property of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
fixed | boolean | Fixed / not fixed

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetFixedRotation(orxPHYSICS_BODY *_pstBody, orxBOOL _bFixed)
```

---

### **`orxPHYSICS_BODY:setLinearDamping`**

* Signature:

```lua
r1 = setLinearDamping(damping)
```

* Description:

> Sets linear damping of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
damping | number | Linear damping to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetLinearDamping(orxPHYSICS_BODY *_pstBody, orxFLOAT _fDamping)
```

---

### **`orxPHYSICS_BODY:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets the position of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Position to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPosition(orxPHYSICS_BODY *_pstBody, const orxVECTOR *_pvPosition)
```

---

### **`orxPHYSICS_BODY:setRotation`**

* Signature:

```lua
r1 = setRotation(rotation)
```

* Description:

> Sets the rotation of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rotation | number | Rotation (radians) to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetRotation(orxPHYSICS_BODY *_pstBody, orxFLOAT _fRotation)
```

---

### **`orxPHYSICS_BODY:setSpeed`**

* Signature:

```lua
r1 = setSpeed(speed)
```

* Description:

> Sets the speed of a physical body (non-const self only)

* Params:

name | type | description 
--- | --- | ---
speed | [orxVECTOR\#](./orxVECTOR.md) | Speed to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetSpeed(orxPHYSICS_BODY *_pstBody, const orxVECTOR *_pvSpeed)
```

---

### **`orxPHYSICS_BODY:type`**

* Signature:

```lua
r1 = type()
```

* Description:

> get the type name of the lorx userdata

* Params:

* Returns:

type | description 
--- | ---
string | the type name

---


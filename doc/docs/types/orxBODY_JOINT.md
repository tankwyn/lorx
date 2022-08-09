# type orxBODY_JOINT

> 

## Methods

### **`orxBODY_JOINT:addr`**

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

### **`orxBODY_JOINT:aeq`**

* Signature:

```lua
r1 = aeq(u)
```

* Description:

> check if the memory address of this lorx userdata equals to another

* Params:

name | type | description 
--- | --- | ---
u | any lorx utype | another lorx userdata

* Returns:

type | description 
--- | ---
boolean | true or false

---

### **`orxBODY_JOINT:asVoid`**

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

### **`orxBODY_JOINT:enableMotor`**

* Signature:

```lua
r1 = enableMotor(enable)
```

* Description:

> Enables a \(revolute\) body joint motor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / Disable

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_EnableMotor(orxBODY_JOINT *_pstBodyJoint, orxBOOL _bEnable)
```

---

### **`orxBODY_JOINT:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets a body joint name

* Params:

* Returns:

type | description 
--- | ---
string | string / nil

* C signature:

```c
  const orxSTRING  orxBody_GetJointName(const orxBODY_JOINT *_pstBodyJoint)
```

---

### **`orxBODY_JOINT:getReactionForce`**

* Signature:

```lua
r1 = getReactionForce()
```

* Description:

> Gets the reaction force on the attached body at the joint anchor

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Reaction force in Newtons

* C signature:

```c
  orxVECTOR * orxBody_GetJointReactionForce(const orxBODY_JOINT *_pstBodyJoint, orxVECTOR *_pvForce)
```

---

### **`orxBODY_JOINT:getReactionTorque`**

* Signature:

```lua
r1 = getReactionTorque()
```

* Description:

> Gets the reaction torque on the attached body

* Params:

* Returns:

type | description 
--- | ---
number | Reaction torque

* C signature:

```c
  orxFLOAT  orxBody_GetJointReactionTorque(const orxBODY_JOINT *_pstBodyJoint)
```

---

### **`orxBODY_JOINT:remove`**

* Signature:

```lua
r1 = remove()
```

* Description:

> Removes a body joint (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_RemoveJoint(orxBODY_JOINT *_pstBodyJoint)
```

---

### **`orxBODY_JOINT:setMaxMotorTorque`**

* Signature:

```lua
r1 = setMaxMotorTorque(maxtorque)
```

* Description:

> Sets a \(revolute\) body joint maximum motor torque (non-const self only)

* Params:

name | type | description 
--- | --- | ---
maxtorque | number | Maximum motor torque

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_SetJointMaxMotorTorque(orxBODY_JOINT *_pstBodyJoint, orxFLOAT _fMaxTorque)
```

---

### **`orxBODY_JOINT:setMotorSpeed`**

* Signature:

```lua
r1 = setMotorSpeed(speed)
```

* Description:

> Sets a \(revolute\) body joint motor speed (non-const self only)

* Params:

name | type | description 
--- | --- | ---
speed | number | Speed

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_SetJointMotorSpeed(orxBODY_JOINT *_pstBodyJoint, orxFLOAT _fSpeed)
```

---

### **`orxBODY_JOINT:type`**

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


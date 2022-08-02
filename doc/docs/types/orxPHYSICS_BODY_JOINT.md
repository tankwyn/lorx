# type orxPHYSICS_BODY_JOINT

> 

## Methods

### **`orxPHYSICS_BODY_JOINT:addr`**

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

### **`orxPHYSICS_BODY_JOINT:aeq`**

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

### **`orxPHYSICS_BODY_JOINT:asVoid`**

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

### **`orxPHYSICS_BODY_JOINT:delete`**

* Signature:

```lua
delete()
```

* Description:

> Deletes a physical body joint (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxPhysics_DeleteJoint(orxPHYSICS_BODY_JOINT *_pstBodyJoint)
```

---

### **`orxPHYSICS_BODY_JOINT:enableMotor`**

* Signature:

```lua
enableMotor(enable)
```

* Description:

> Enables a \(revolute\) body joint motor (non-const self only)

* Params:

name | type | description 
--- | --- | ---
enable | boolean | Enable / Disable

* Returns:

* C signature:

```c
  void  orxPhysics_EnableMotor(orxPHYSICS_BODY_JOINT *_pstBodyJoint, orxBOOL _bEnable)
```

---

### **`orxPHYSICS_BODY_JOINT:getReactionForce`**

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
  orxVECTOR * orxPhysics_GetJointReactionForce(const orxPHYSICS_BODY_JOINT *_pstBodyJoint, orxVECTOR *_pvForce)
```

---

### **`orxPHYSICS_BODY_JOINT:getReactionTorque`**

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
  orxFLOAT  orxPhysics_GetJointReactionTorque(const orxPHYSICS_BODY_JOINT *_pstBodyJoint)
```

---

### **`orxPHYSICS_BODY_JOINT:setMaxMotorTorque`**

* Signature:

```lua
setMaxMotorTorque(maxtorque)
```

* Description:

> Sets a \(revolute\) body joint maximum motor torque (non-const self only)

* Params:

name | type | description 
--- | --- | ---
maxtorque | number | Maximum motor torque

* Returns:

* C signature:

```c
  void  orxPhysics_SetJointMaxMotorTorque(orxPHYSICS_BODY_JOINT *_pstBodyJoint, orxFLOAT _fMaxTorque)
```

---

### **`orxPHYSICS_BODY_JOINT:setMotorSpeed`**

* Signature:

```lua
setMotorSpeed(speed)
```

* Description:

> Sets a \(revolute\) body joint motor speed (non-const self only)

* Params:

name | type | description 
--- | --- | ---
speed | number | Speed

* Returns:

* C signature:

```c
  void  orxPhysics_SetJointMotorSpeed(orxPHYSICS_BODY_JOINT *_pstBodyJoint, orxFLOAT _fSpeed)
```

---

### **`orxPHYSICS_BODY_JOINT:type`**

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


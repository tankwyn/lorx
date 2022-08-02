# type orxBODY

> 

## Methods

### **`orxBODY:addJointFromConfig`**

* Signature:

```lua
r1 = addJointFromConfig(dstbody, configid)
```

* Description:

> Adds a joint from config to link two bodies together (non-const self only)

* Params:

name | type | description 
--- | --- | ---
dstbody | [orxBODY](./orxBODY.md)  | Concerned destination body
configid | string | Body joint config ID

* Returns:

type | description 
--- | ---
[orxBODY_JOINT](./orxBODY_JOINT.md)  | [orxBODY_JOINT](./orxBODY_JOINT.md) / nil

* C signature:

```c
  orxBODY_JOINT * orxBody_AddJointFromConfig(orxBODY *_pstSrcBody, orxBODY *_pstDstBody, const orxSTRING _zConfigID)
```

---

### **`orxBODY:addPartFromConfig`**

* Signature:

```lua
r1 = addPartFromConfig(configid)
```

* Description:

> Adds a part to body from config (non-const self only)

* Params:

name | type | description 
--- | --- | ---
configid | string | Body part config ID

* Returns:

type | description 
--- | ---
[orxBODY_PART](./orxBODY_PART.md)  | [orxBODY_PART](./orxBODY_PART.md) / nil

* C signature:

```c
  orxBODY_PART * orxBody_AddPartFromConfig(orxBODY *_pstBody, const orxSTRING _zConfigID)
```

---

### **`orxBODY:addr`**

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

### **`orxBODY:aeq`**

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

### **`orxBODY:applyForce`**

* Signature:

```lua
r1 = applyForce(force, point)
```

* Description:

> Applies a force (non-const self only)

* Params:

name | type | description 
--- | --- | ---
force | [orxVECTOR\#](./orxVECTOR.md) | Force to apply
point | [orxVECTOR\#](./orxVECTOR.md) | Point (world coordinates) where the force will be applied, if orxNULL, center of mass will be used

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_ApplyForce(orxBODY *_pstBody, const orxVECTOR *_pvForce, const orxVECTOR *_pvPoint)
```

---

### **`orxBODY:applyImpulse`**

* Signature:

```lua
r1 = applyImpulse(impulse, point)
```

* Description:

> Applies an impulse (non-const self only)

* Params:

name | type | description 
--- | --- | ---
impulse | [orxVECTOR\#](./orxVECTOR.md) | Impulse to apply
point | [orxVECTOR\#](./orxVECTOR.md) | Point (world coordinates) where the impulse will be applied, if orxNULL, center of mass will be used

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_ApplyImpulse(orxBODY *_pstBody, const orxVECTOR *_pvImpulse, const orxVECTOR *_pvPoint)
```

---

### **`orxBODY:applyTorque`**

* Signature:

```lua
r1 = applyTorque(torque)
```

* Description:

> Applies a torque (non-const self only)

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
  orxSTATUS  orxBody_ApplyTorque(orxBODY *_pstBody, orxFLOAT _fTorque)
```

---

### **`orxBODY:asVoid`**

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

### **`orxBODY:decreaseCount`**

* Signature:

```lua
decreaseCount()
```

* Description:

> Decreases structure reference count (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void orxStructure_DecreaseCount(void *_pStructure)
```

---

### **`orxBODY:delete`**

* Signature:

```lua
r1 = delete()
```

* Description:

> Deletes a body (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_Delete(orxBODY *_pstBody)
```

---

### **`orxBODY:getAllowMoving`**

* Signature:

```lua
r1 = getAllowMoving()
```

* Description:

> Gets the "allow moving" property of a body, only relevant for non-dynamic bodies

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxBody_GetAllowMoving(const orxBODY *_pstBody)
```

---

### **`orxBODY:getAngularDamping`**

* Signature:

```lua
r1 = getAngularDamping()
```

* Description:

> Gets a body angular damping

* Params:

* Returns:

type | description 
--- | ---
number | Body's angular damping

* C signature:

```c
  orxFLOAT  orxBody_GetAngularDamping(const orxBODY *_pstBody)
```

---

### **`orxBODY:getAngularVelocity`**

* Signature:

```lua
r1 = getAngularVelocity()
```

* Description:

> Gets a body angular velocity

* Params:

* Returns:

type | description 
--- | ---
number | Body angular velocity \(radians/seconds\)

* C signature:

```c
  orxFLOAT  orxBody_GetAngularVelocity(const orxBODY *_pstBody)
```

---

### **`orxBODY:getChild`**

* Signature:

```lua
r1 = getChild()
```

* Description:

> Gets structure tree child

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetChild(const void *_pStructure)
```

---

### **`orxBODY:getCustomGravity`**

* Signature:

```lua
r1 = getCustomGravity()
```

* Description:

> Gets a body custom gravity

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Body custom gravity / nil is object doesn't have any

* C signature:

```c
  orxVECTOR * orxBody_GetCustomGravity(const orxBODY *_pstBody, orxVECTOR *_pvCustomGravity)
```

---

### **`orxBODY:getDefFlags`**

* Signature:

```lua
r1 = getDefFlags(mask)
```

* Description:

> Gets body definition flags

* Params:

name | type | description 
--- | --- | ---
mask | integer | Mask to use for getting flags

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32  orxBody_GetDefFlags(const orxBODY *_pstBody, orxU32 _u32Mask)
```

---

### **`orxBODY:getFlags`**

* Signature:

```lua
r1 = getFlags()
```

* Description:

> Gets structure flags

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetFlags(const void *_pStructure, orxU32 _u32Mask)
```

---

### **`orxBODY:getGUID`**

* Signature:

```lua
r1 = getGUID()
```

* Description:

> Gets structure GUID

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u64\)

* C signature:

```c
  orxU64 orxStructure_GetGUID(const void *_pStructure)
```

---

### **`orxBODY:getID`**

* Signature:

```lua
r1 = getID()
```

* Description:

> Gets structure ID

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE_ID](../enums.md#orxstructure_id)  | [orxSTRUCTURE_ID](../enums.md#orxstructure_id) 

* C signature:

```c
  orxSTRUCTURE_ID orxStructure_GetID(const void *_pStructure)
```

---

### **`orxBODY:getLinearDamping`**

* Signature:

```lua
r1 = getLinearDamping()
```

* Description:

> Gets a body linear damping

* Params:

* Returns:

type | description 
--- | ---
number | Body's linear damping

* C signature:

```c
  orxFLOAT  orxBody_GetLinearDamping(const orxBODY *_pstBody)
```

---

### **`orxBODY:getMass`**

* Signature:

```lua
r1 = getMass()
```

* Description:

> Gets a body mass

* Params:

* Returns:

type | description 
--- | ---
number | Body mass

* C signature:

```c
  orxFLOAT  orxBody_GetMass(const orxBODY *_pstBody)
```

---

### **`orxBODY:getMassCenter`**

* Signature:

```lua
r1 = getMassCenter()
```

* Description:

> Gets a body center of mass \(object space\)

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Mass center / nil

* C signature:

```c
  orxVECTOR * orxBody_GetMassCenter(const orxBODY *_pstBody, orxVECTOR *_pvMassCenter)
```

---

### **`orxBODY:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets body config name

* Params:

* Returns:

type | description 
--- | ---
string | string / empty string

* C signature:

```c
  const orxSTRING  orxBody_GetName(const orxBODY *_pstBody)
```

---

### **`orxBODY:getNext`**

* Signature:

```lua
r1 = getNext()
```

* Description:

> Gets structure list next

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetNext(const void *_pStructure)
```

---

### **`orxBODY:getNextJoint`**

* Signature:

```lua
r1 = getNextJoint(bodyjoint)
```

* Description:

> Gets next body joint

* Params:

name | type | description 
--- | --- | ---
bodyjoint | [orxBODY_JOINT\#](./orxBODY_JOINT.md) | Current body joint (nil to get the first one)

* Returns:

type | description 
--- | ---
[orxBODY_JOINT](./orxBODY_JOINT.md)  | [orxBODY_JOINT](./orxBODY_JOINT.md) / nil

* C signature:

```c
  orxBODY_JOINT * orxBody_GetNextJoint(const orxBODY *_pstBody, const orxBODY_JOINT *_pstBodyJoint)
```

---

### **`orxBODY:getNextPart`**

* Signature:

```lua
r1 = getNextPart(bodypart)
```

* Description:

> Gets next body part

* Params:

name | type | description 
--- | --- | ---
bodypart | [orxBODY_PART\#](./orxBODY_PART.md) | Current body part (nil to get the first one)

* Returns:

type | description 
--- | ---
[orxBODY_PART](./orxBODY_PART.md)  | [orxBODY_PART](./orxBODY_PART.md) / nil

* C signature:

```c
  orxBODY_PART * orxBody_GetNextPart(const orxBODY *_pstBody, const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY:getOwner`**

* Signature:

```lua
r1 = getOwner()
```

* Description:

> Gets structure's owner

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) / nil if not found/alive

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetOwner(const void *_pStructure)
```

---

### **`orxBODY:getParent`**

* Signature:

```lua
r1 = getParent()
```

* Description:

> Gets structure tree parent

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetParent(const void *_pStructure)
```

---

### **`orxBODY:getPosition`**

* Signature:

```lua
r1 = getPosition()
```

* Description:

> Gets a body position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Body position / nil

* C signature:

```c
  orxVECTOR * orxBody_GetPosition(const orxBODY *_pstBody, orxVECTOR *_pvPosition)
```

---

### **`orxBODY:getPrevious`**

* Signature:

```lua
r1 = getPrevious()
```

* Description:

> Gets structure list previous

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetPrevious(const void *_pStructure)
```

---

### **`orxBODY:getRefCount`**

* Signature:

```lua
r1 = getRefCount()
```

* Description:

> Gets structure reference count

* Params:

* Returns:

type | description 
--- | ---
integer | integer \(u32\)

* C signature:

```c
  orxU32 orxStructure_GetRefCount(const void *_pStructure)
```

---

### **`orxBODY:getRotation`**

* Signature:

```lua
r1 = getRotation()
```

* Description:

> Gets a body rotation

* Params:

* Returns:

type | description 
--- | ---
number | Body rotation \(radians\)

* C signature:

```c
  orxFLOAT  orxBody_GetRotation(const orxBODY *_pstBody)
```

---

### **`orxBODY:getSibling`**

* Signature:

```lua
r1 = getSibling()
```

* Description:

> Gets structure tree sibling

* Params:

* Returns:

type | description 
--- | ---
[orxSTRUCTURE](./orxSTRUCTURE.md)  | [orxSTRUCTURE](./orxSTRUCTURE.md) 

* C signature:

```c
  orxSTRUCTURE * orxStructure_GetSibling(const void *_pStructure)
```

---

### **`orxBODY:getSpeed`**

* Signature:

```lua
r1 = getSpeed()
```

* Description:

> Gets a body speed

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Body speed / nil

* C signature:

```c
  orxVECTOR * orxBody_GetSpeed(const orxBODY *_pstBody, orxVECTOR *_pvSpeed)
```

---

### **`orxBODY:getSpeedAtWorldPosition`**

* Signature:

```lua
r1 = getSpeedAtWorldPosition(position)
```

* Description:

> Gets a body speed at a specified world position

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Concerned world position

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Body speed / nil

* C signature:

```c
  orxVECTOR * orxBody_GetSpeedAtWorldPosition(const orxBODY *_pstBody, const orxVECTOR *_pvPosition, orxVECTOR *_pvSpeed)
```

---

### **`orxBODY:increaseCount`**

* Signature:

```lua
increaseCount()
```

* Description:

> Increases structure reference count (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void orxStructure_IncreaseCount(void *_pStructure)
```

---

### **`orxBODY:isDynamic`**

* Signature:

```lua
r1 = isDynamic()
```

* Description:

> Gets the dynamic property of a body

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxBody_IsDynamic(const orxBODY *_pstBody)
```

---

### **`orxBODY:isFixedRotation`**

* Signature:

```lua
r1 = isFixedRotation()
```

* Description:

> Is a body using a fixed rotation

* Params:

* Returns:

type | description 
--- | ---
boolean | true if fixed rotation, false otherwise

* C signature:

```c
  orxBOOL  orxBody_IsFixedRotation(const orxBODY *_pstBody)
```

---

### **`orxBODY:isInside`**

* Signature:

```lua
r1 = isInside(position)
```

* Description:

> Is point inside body? \(Using world coordinates\)

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Position to test (world coordinates)

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxBody_IsInside(const orxBODY *_pstBody, const orxVECTOR *_pvPosition)
```

---

### **`orxBODY:removePartFromConfig`**

* Signature:

```lua
r1 = removePartFromConfig(configid)
```

* Description:

> Removes a part using its config ID (non-const self only)

* Params:

name | type | description 
--- | --- | ---
configid | string | Config ID of the part to remove

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_RemovePartFromConfig(orxBODY *_pstBody, const orxSTRING _zConfigID)
```

---

### **`orxBODY:setAllowMoving`**

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
  orxSTATUS  orxBody_SetAllowMoving(orxBODY *_pstBody, orxBOOL _bAllowMoving)
```

---

### **`orxBODY:setAngularDamping`**

* Signature:

```lua
r1 = setAngularDamping(damping)
```

* Description:

> Sets a body angular damping (non-const self only)

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
  orxSTATUS  orxBody_SetAngularDamping(orxBODY *_pstBody, orxFLOAT _fDamping)
```

---

### **`orxBODY:setAngularVelocity`**

* Signature:

```lua
r1 = setAngularVelocity(velocity)
```

* Description:

> Sets a body angular velocity (non-const self only)

* Params:

name | type | description 
--- | --- | ---
velocity | number | Angular velocity to set (radians/seconds)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_SetAngularVelocity(orxBODY *_pstBody, orxFLOAT _fVelocity)
```

---

### **`orxBODY:setCustomGravity`**

* Signature:

```lua
r1 = setCustomGravity(customgravity)
```

* Description:

> Sets a body custom gravity (non-const self only)

* Params:

name | type | description 
--- | --- | ---
customgravity | [orxVECTOR\#](./orxVECTOR.md) | Custom gravity to set / nil to remove it

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_SetCustomGravity(orxBODY *_pstBody, const orxVECTOR *_pvCustomGravity)
```

---

### **`orxBODY:setDynamic`**

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
  orxSTATUS  orxBody_SetDynamic(orxBODY *_pstBody, orxBOOL _bDynamic)
```

---

### **`orxBODY:setFixedRotation`**

* Signature:

```lua
r1 = setFixedRotation(fixed)
```

* Description:

> Sets a body fixed rotation (non-const self only)

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
  orxSTATUS  orxBody_SetFixedRotation(orxBODY *_pstBody, orxBOOL _bFixed)
```

---

### **`orxBODY:setFlags`**

* Signature:

```lua
setFlags(removeflags)
```

* Description:

> Sets structure flags (non-const self only)

* Params:

name | type | description 
--- | --- | ---
removeflags | integer | Flags to remove

* Returns:

* C signature:

```c
  void orxStructure_SetFlags(void *_pStructure, orxU32 _u32AddFlags, orxU32 _u32RemoveFlags)
```

---

### **`orxBODY:setLinearDamping`**

* Signature:

```lua
r1 = setLinearDamping(damping)
```

* Description:

> Sets a body linear damping (non-const self only)

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
  orxSTATUS  orxBody_SetLinearDamping(orxBODY *_pstBody, orxFLOAT _fDamping)
```

---

### **`orxBODY:setOwner`**

* Signature:

```lua
r1 = setOwner()
```

* Description:

> Sets structure owner (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetOwner(void *_pStructure, void *_pOwner)
```

---

### **`orxBODY:setParent`**

* Signature:

```lua
r1 = setParent()
```

* Description:

> Sets structure tree parent (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_SetParent(void *_pStructure, void *_phParent)
```

---

### **`orxBODY:setPosition`**

* Signature:

```lua
r1 = setPosition(position)
```

* Description:

> Sets a body position (non-const self only)

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
  orxSTATUS  orxBody_SetPosition(orxBODY *_pstBody, const orxVECTOR *_pvPosition)
```

---

### **`orxBODY:setRotation`**

* Signature:

```lua
r1 = setRotation(rotation)
```

* Description:

> Sets a body rotation (non-const self only)

* Params:

name | type | description 
--- | --- | ---
rotation | number | Rotation to set (radians)

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_SetRotation(orxBODY *_pstBody, orxFLOAT _fRotation)
```

---

### **`orxBODY:setScale`**

* Signature:

```lua
r1 = setScale(scale)
```

* Description:

> Sets a body scale (non-const self only)

* Params:

name | type | description 
--- | --- | ---
scale | [orxVECTOR\#](./orxVECTOR.md) | Scale to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_SetScale(orxBODY *_pstBody, const orxVECTOR *_pvScale)
```

---

### **`orxBODY:setSpeed`**

* Signature:

```lua
r1 = setSpeed(speed)
```

* Description:

> Sets a body speed (non-const self only)

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
  orxSTATUS  orxBody_SetSpeed(orxBODY *_pstBody, const orxVECTOR *_pvSpeed)
```

---

### **`orxBODY:testAllDefFlags`**

* Signature:

```lua
r1 = testAllDefFlags(flags)
```

* Description:

> Tests all flags against body definition ones

* Params:

name | type | description 
--- | --- | ---
flags | integer | Flags to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxBody_TestAllDefFlags(const orxBODY *_pstBody, orxU32 _u32Flags)
```

---

### **`orxBODY:testAllFlags`**

* Signature:

```lua
r1 = testAllFlags()
```

* Description:

> Tests all flags against structure ones

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestAllFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`orxBODY:testDefFlags`**

* Signature:

```lua
r1 = testDefFlags(flags)
```

* Description:

> Tests flags against body definition ones

* Params:

name | type | description 
--- | --- | ---
flags | integer | Flags to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxBody_TestDefFlags(const orxBODY *_pstBody, orxU32 _u32Flags)
```

---

### **`orxBODY:testFlags`**

* Signature:

```lua
r1 = testFlags()
```

* Description:

> Tests flags against structure ones

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxStructure_TestFlags(const void *_pStructure, orxU32 _u32Flags)
```

---

### **`orxBODY:type`**

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

### **`orxBODY:update`**

* Signature:

```lua
r1 = update(clockinfo)
```

* Description:

> Updates structure if update function was registered for the structure type (non-const self only)

* Params:

name | type | description 
--- | --- | ---
clockinfo | [orxCLOCK_INFO\#](./orxCLOCK_INFO.md) | Update associated clock info

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxStructure_Update(void *_pStructure, const void *_phCaller, const orxCLOCK_INFO *_pstClockInfo)
```

---


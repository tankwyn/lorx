# type orxPHYSICS_BODY_PART

> 

## Methods

### **`orxPHYSICS_BODY_PART:addr`**

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

### **`orxPHYSICS_BODY_PART:aeq`**

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

### **`orxPHYSICS_BODY_PART:asVoid`**

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

### **`orxPHYSICS_BODY_PART:delete`**

* Signature:

```lua
delete()
```

* Description:

> Deletes a physical body part (non-const self only)

* Params:

* Returns:

* C signature:

```c
  void  orxPhysics_DeletePart(orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:getCheckMask`**

* Signature:

```lua
r1 = getCheckMask()
```

* Description:

> Gets check mask of a physical body part

* Params:

* Returns:

type | description 
--- | ---
integer | Check mask of the physical body part

* C signature:

```c
  orxU16  orxPhysics_GetPartCheckMask(const orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:getDensity`**

* Signature:

```lua
r1 = getDensity()
```

* Description:

> Gets density of a physical body part

* Params:

* Returns:

type | description 
--- | ---
number | Density

* C signature:

```c
  orxFLOAT  orxPhysics_GetPartDensity(const orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:getFriction`**

* Signature:

```lua
r1 = getFriction()
```

* Description:

> Gets friction of a physical body part

* Params:

* Returns:

type | description 
--- | ---
number | Friction

* C signature:

```c
  orxFLOAT  orxPhysics_GetPartFriction(const orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:getRestitution`**

* Signature:

```lua
r1 = getRestitution()
```

* Description:

> Gets restitution of a physical body part

* Params:

* Returns:

type | description 
--- | ---
number | Restitution

* C signature:

```c
  orxFLOAT  orxPhysics_GetPartRestitution(const orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:getSelfFlags`**

* Signature:

```lua
r1 = getSelfFlags()
```

* Description:

> Gets self flags of a physical body part

* Params:

* Returns:

type | description 
--- | ---
integer | Self flags of the physical body part

* C signature:

```c
  orxU16  orxPhysics_GetPartSelfFlags(const orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:isInside`**

* Signature:

```lua
r1 = isInside(position)
```

* Description:

> Is point inside part? \(Using world coordinates\)

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
  orxBOOL  orxPhysics_IsInsidePart(const orxPHYSICS_BODY_PART *_pstBodyPart, const orxVECTOR *_pvPosition)
```

---

### **`orxPHYSICS_BODY_PART:isSolid`**

* Signature:

```lua
r1 = isSolid()
```

* Description:

> Is a physical body part solid?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxPhysics_IsPartSolid(const orxPHYSICS_BODY_PART *_pstBodyPart)
```

---

### **`orxPHYSICS_BODY_PART:setCheckMask`**

* Signature:

```lua
r1 = setCheckMask(checkmask)
```

* Description:

> Sets check mask of a physical body part (non-const self only)

* Params:

name | type | description 
--- | --- | ---
checkmask | integer | Check mask to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPartCheckMask(orxPHYSICS_BODY_PART *_pstBodyPart, orxU16 _u16CheckMask)
```

---

### **`orxPHYSICS_BODY_PART:setDensity`**

* Signature:

```lua
r1 = setDensity(density)
```

* Description:

> Sets density of a physical body part (non-const self only)

* Params:

name | type | description 
--- | --- | ---
density | number | Density

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPartDensity(orxPHYSICS_BODY_PART *_pstBodyPart, orxFLOAT _fDensity)
```

---

### **`orxPHYSICS_BODY_PART:setFriction`**

* Signature:

```lua
r1 = setFriction(friction)
```

* Description:

> Sets friction of a physical body part (non-const self only)

* Params:

name | type | description 
--- | --- | ---
friction | number | Friction

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPartFriction(orxPHYSICS_BODY_PART *_pstBodyPart, orxFLOAT _fFriction)
```

---

### **`orxPHYSICS_BODY_PART:setRestitution`**

* Signature:

```lua
r1 = setRestitution(restitution)
```

* Description:

> Sets restitution of a physical body part (non-const self only)

* Params:

name | type | description 
--- | --- | ---
restitution | number | Restitution

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPartRestitution(orxPHYSICS_BODY_PART *_pstBodyPart, orxFLOAT _fRestitution)
```

---

### **`orxPHYSICS_BODY_PART:setSelfFlags`**

* Signature:

```lua
r1 = setSelfFlags(selfflags)
```

* Description:

> Sets self flags of a physical body part (non-const self only)

* Params:

name | type | description 
--- | --- | ---
selfflags | integer | Self flags to set

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPartSelfFlags(orxPHYSICS_BODY_PART *_pstBodyPart, orxU16 _u16SelfFlags)
```

---

### **`orxPHYSICS_BODY_PART:setSolid`**

* Signature:

```lua
r1 = setSolid(solid)
```

* Description:

> Sets a physical body part solid (non-const self only)

* Params:

name | type | description 
--- | --- | ---
solid | boolean | Solid or sensor?

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxPhysics_SetPartSolid(orxPHYSICS_BODY_PART *_pstBodyPart, orxBOOL _bSolid)
```

---

### **`orxPHYSICS_BODY_PART:type`**

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


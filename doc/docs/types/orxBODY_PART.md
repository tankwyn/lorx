# type orxBODY_PART

> 

## Methods

### **`orxBODY_PART:addr`**

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

### **`orxBODY_PART:aeq`**

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

### **`orxBODY_PART:asVoid`**

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

### **`orxBODY_PART:getBody`**

* Signature:

```lua
r1 = getBody()
```

* Description:

> Gets a body part body \(ie. owner\)

* Params:

* Returns:

type | description 
--- | ---
[orxBODY](./orxBODY.md)  | [orxBODY](./orxBODY.md) / nil

* C signature:

```c
  orxBODY * orxBody_GetPartBody(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:getCheckMask`**

* Signature:

```lua
r1 = getCheckMask()
```

* Description:

> Gets check mask of a body part

* Params:

* Returns:

type | description 
--- | ---
integer | Check mask of the body part

* C signature:

```c
  orxU16  orxBody_GetPartCheckMask(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:getDensity`**

* Signature:

```lua
r1 = getDensity()
```

* Description:

> Gets density of a body part

* Params:

* Returns:

type | description 
--- | ---
number | Density

* C signature:

```c
  orxFLOAT  orxBody_GetPartDensity(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:getFriction`**

* Signature:

```lua
r1 = getFriction()
```

* Description:

> Gets friction of a body part

* Params:

* Returns:

type | description 
--- | ---
number | Friction

* C signature:

```c
  orxFLOAT  orxBody_GetPartFriction(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:getName`**

* Signature:

```lua
r1 = getName()
```

* Description:

> Gets a body part name

* Params:

* Returns:

type | description 
--- | ---
string | string / nil

* C signature:

```c
  const orxSTRING  orxBody_GetPartName(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:getRestitution`**

* Signature:

```lua
r1 = getRestitution()
```

* Description:

> Gets restitution of a body part

* Params:

* Returns:

type | description 
--- | ---
number | Restitution

* C signature:

```c
  orxFLOAT  orxBody_GetPartRestitution(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:getSelfFlags`**

* Signature:

```lua
r1 = getSelfFlags()
```

* Description:

> Gets self flags of a body part

* Params:

* Returns:

type | description 
--- | ---
integer | Self flags of the body part

* C signature:

```c
  orxU16  orxBody_GetPartSelfFlags(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:isInside`**

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
  orxBOOL  orxBody_IsInsidePart(const orxBODY_PART *_pstBodyPart, const orxVECTOR *_pvPosition)
```

---

### **`orxBODY_PART:isSolid`**

* Signature:

```lua
r1 = isSolid()
```

* Description:

> Is a body part solid?

* Params:

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL  orxBody_IsPartSolid(const orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:remove`**

* Signature:

```lua
r1 = remove()
```

* Description:

> Removes a body part (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxSTATUS](../enums.md#orxstatus)  | success / failure

* C signature:

```c
  orxSTATUS  orxBody_RemovePart(orxBODY_PART *_pstBodyPart)
```

---

### **`orxBODY_PART:setCheckMask`**

* Signature:

```lua
r1 = setCheckMask(checkmask)
```

* Description:

> Sets check mask of a body part (non-const self only)

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
  orxSTATUS  orxBody_SetPartCheckMask(orxBODY_PART *_pstBodyPart, orxU16 _u16CheckMask)
```

---

### **`orxBODY_PART:setDensity`**

* Signature:

```lua
r1 = setDensity(density)
```

* Description:

> Sets density of a body part (non-const self only)

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
  orxSTATUS  orxBody_SetPartDensity(orxBODY_PART *_pstBodyPart, orxFLOAT _fDensity)
```

---

### **`orxBODY_PART:setFriction`**

* Signature:

```lua
r1 = setFriction(friction)
```

* Description:

> Sets friction of a body part (non-const self only)

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
  orxSTATUS  orxBody_SetPartFriction(orxBODY_PART *_pstBodyPart, orxFLOAT _fFriction)
```

---

### **`orxBODY_PART:setRestitution`**

* Signature:

```lua
r1 = setRestitution(restitution)
```

* Description:

> Sets restitution of a body part (non-const self only)

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
  orxSTATUS  orxBody_SetPartRestitution(orxBODY_PART *_pstBodyPart, orxFLOAT _fRestitution)
```

---

### **`orxBODY_PART:setSelfFlags`**

* Signature:

```lua
r1 = setSelfFlags(selfflags)
```

* Description:

> Sets self flags of a body part (non-const self only)

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
  orxSTATUS  orxBody_SetPartSelfFlags(orxBODY_PART *_pstBodyPart, orxU16 _u16SelfFlags)
```

---

### **`orxBODY_PART:setSolid`**

* Signature:

```lua
r1 = setSolid(solid)
```

* Description:

> Sets a body part solid (non-const self only)

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
  orxSTATUS  orxBody_SetPartSolid(orxBODY_PART *_pstBodyPart, orxBOOL _bSolid)
```

---

### **`orxBODY_PART:type`**

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


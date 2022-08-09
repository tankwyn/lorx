# type orxOBOX

> 

constructors: [lorx.obox.obox](../modules/obox.md#obox)

## Properties

name | type 
--- | --- 
position | [orxVECTOR](./orxVECTOR.md) 
pivot | [orxVECTOR](./orxVECTOR.md) 
x | [orxVECTOR](./orxVECTOR.md) 
y | [orxVECTOR](./orxVECTOR.md) 
z | [orxVECTOR](./orxVECTOR.md) 

## Methods

### **`orxOBOX:_2DIsInside`**

* Signature:

```lua
r1 = _2DIsInside(position)
```

* Description:

> Is 2D position inside oriented box test

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Position to test against the box (no Z-test)

* Returns:

type | description 
--- | ---
boolean | true if position is inside the box, false otherwise

* C signature:

```c
  orxBOOL orxOBox_2DIsInside(const orxOBOX *_pstBox, const orxVECTOR *_pvPosition)
```

---

### **`orxOBOX:_2DRotate`**

* Signature:

```lua
r1 = _2DRotate(angle)
```

* Description:

> Rotates in 2D an OBox

* Params:

name | type | description 
--- | --- | ---
angle | number | Z-axis rotation angle (radians)

* Returns:

type | description 
--- | ---
[orxOBOX](./orxOBOX.md)  | Rotated OBox

* C signature:

```c
  orxOBOX * orxOBox_2DRotate(orxOBOX *_pstRes, const orxOBOX *_pstOp, orxFLOAT _fAngle)
```

---

### **`orxOBOX:_2DSet`**

* Signature:

```lua
r1 = _2DSet(worldposition, pivot, size, angle)
```

* Description:

> Sets 2D oriented box values (non-const self only)

* Params:

name | type | description 
--- | --- | ---
worldposition | [orxVECTOR\#](./orxVECTOR.md) | World space position vector
pivot | [orxVECTOR\#](./orxVECTOR.md) | Pivot vector
size | [orxVECTOR\#](./orxVECTOR.md) | Size vector
angle | number | Z-axis angle (radians)

* Returns:

type | description 
--- | ---
[orxOBOX](./orxOBOX.md)  | [orxOBOX](./orxOBOX.md) / nil

* C signature:

```c
  orxOBOX * orxOBox_2DSet(orxOBOX *_pstRes, const orxVECTOR *_pvWorldPosition, const orxVECTOR *_pvPivot, const orxVECTOR *_pvSize, orxFLOAT _fAngle)
```

---

### **`orxOBOX:addr`**

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

### **`orxOBOX:aeq`**

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

### **`orxOBOX:asVoid`**

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

### **`orxOBOX:copy`**

* Signature:

```lua
r1 = copy()
```

* Description:

> Copies an OBox onto another one

* Params:

* Returns:

type | description 
--- | ---
[orxOBOX](./orxOBOX.md)  | Destination OBox

* C signature:

```c
  orxOBOX * orxOBox_Copy(orxOBOX *_pstDst, const orxOBOX *_pstSrc)
```

---

### **`orxOBOX:getCenter`**

* Signature:

```lua
r1 = getCenter()
```

* Description:

> Gets OBox center position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Center position vector

* C signature:

```c
  orxVECTOR * orxOBox_GetCenter(const orxOBOX *_pstOp, orxVECTOR *_pvRes)
```

---

### **`orxOBOX:isInside`**

* Signature:

```lua
r1 = isInside(position)
```

* Description:

> Is position inside oriented box test

* Params:

name | type | description 
--- | --- | ---
position | [orxVECTOR\#](./orxVECTOR.md) | Position to test against the box

* Returns:

type | description 
--- | ---
boolean | true if position is inside the box, false otherwise

* C signature:

```c
  orxBOOL orxOBox_IsInside(const orxOBOX *_pstBox, const orxVECTOR *_pvPosition)
```

---

### **`orxOBOX:move`**

* Signature:

```lua
r1 = move(move)
```

* Description:

> Moves an OBox

* Params:

name | type | description 
--- | --- | ---
move | [orxVECTOR\#](./orxVECTOR.md) | Move vector

* Returns:

type | description 
--- | ---
[orxOBOX](./orxOBOX.md)  | Moved OBox

* C signature:

```c
  orxOBOX * orxOBox_Move(orxOBOX *_pstRes, const orxOBOX *_pstOp, const orxVECTOR *_pvMove)
```

---

### **`orxOBOX:type`**

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

### **`orxOBOX:zAlignedTestIntersection`**

* Signature:

```lua
r1 = zAlignedTestIntersection(box2)
```

* Description:

> Tests oriented box intersection \(simple Z-axis test, to use with Z-axis aligned orxOBOX\)

* Params:

name | type | description 
--- | --- | ---
box2 | [orxOBOX\#](./orxOBOX.md) | Second box operand

* Returns:

type | description 
--- | ---
boolean | true if boxes intersect, false otherwise

* C signature:

```c
  orxBOOL orxOBox_ZAlignedTestIntersection(const orxOBOX *_pstBox1, const orxOBOX *_pstBox2)
```

---


# type orxAABOX

> 

constructors: [lorx.aabox.aabox](../modules/aabox.md#aabox)

## Properties

name | type 
--- | --- 
tl | [orxVECTOR](./orxVECTOR.md) 
br | [orxVECTOR](./orxVECTOR.md) 

## Methods

### **`orxAABOX:addr`**

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

### **`orxAABOX:aeq`**

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

### **`orxAABOX:asVoid`**

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

### **`orxAABOX:copy`**

* Signature:

```lua
r1 = copy()
```

* Description:

> Copies an AABox onto another one

* Params:

* Returns:

type | description 
--- | ---
[orxAABOX](./orxAABOX.md)  | Destination AABox

* C signature:

```c
  orxAABOX * orxAABox_Copy(orxAABOX *_pstDst, const orxAABOX *_pstSrc)
```

---

### **`orxAABOX:getCenter`**

* Signature:

```lua
r1 = getCenter()
```

* Description:

> Gets AABox center position

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Center position vector

* C signature:

```c
  orxVECTOR * orxAABox_GetCenter(const orxAABOX *_pstOp, orxVECTOR *_pvRes)
```

---

### **`orxAABOX:isInside`**

* Signature:

```lua
r1 = isInside(position)
```

* Description:

> Is position inside axis aligned box test

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
  orxBOOL orxAABox_IsInside(const orxAABOX *_pstBox, const orxVECTOR *_pvPosition)
```

---

### **`orxAABOX:move`**

* Signature:

```lua
r1 = move(move)
```

* Description:

> Moves an AABox

* Params:

name | type | description 
--- | --- | ---
move | [orxVECTOR\#](./orxVECTOR.md) | Move vector

* Returns:

type | description 
--- | ---
[orxAABOX](./orxAABOX.md)  | Moved AABox

* C signature:

```c
  orxAABOX * orxAABox_Move(orxAABOX *_pstRes, const orxAABOX *_pstOp, const orxVECTOR *_pvMove)
```

---

### **`orxAABOX:reorder`**

* Signature:

```lua
r1 = reorder()
```

* Description:

> Reorders AABox corners (non-const self only)

* Params:

* Returns:

type | description 
--- | ---
[orxAABOX](./orxAABOX.md)  | Reordered AABox

* C signature:

```c
  orxAABOX * orxAABox_Reorder(orxAABOX *_pstBox)
```

---

### **`orxAABOX:set`**

* Signature:

```lua
r1 = set(tl, br)
```

* Description:

> Sets axis aligned box values (non-const self only)

* Params:

name | type | description 
--- | --- | ---
tl | [orxVECTOR\#](./orxVECTOR.md) | Top left corner
br | [orxVECTOR\#](./orxVECTOR.md) | Bottom right corner

* Returns:

type | description 
--- | ---
[orxAABOX](./orxAABOX.md)  | [orxAABOX](./orxAABOX.md) / nil

* C signature:

```c
  orxAABOX * orxAABox_Set(orxAABOX *_pstRes, const orxVECTOR *_pvTL, const orxVECTOR *_pvBR)
```

---

### **`orxAABOX:test2DIntersection`**

* Signature:

```lua
r1 = test2DIntersection(box2)
```

* Description:

> Tests axis aligned box 2D intersection \(no Z-axis test\)

* Params:

name | type | description 
--- | --- | ---
box2 | [orxAABOX\#](./orxAABOX.md) | Second box operand

* Returns:

type | description 
--- | ---
boolean | true if boxes intersect in 2D, false otherwise

* C signature:

```c
  orxBOOL orxAABox_Test2DIntersection(const orxAABOX *_pstBox1, const orxAABOX *_pstBox2)
```

---

### **`orxAABOX:testIntersection`**

* Signature:

```lua
r1 = testIntersection(box2)
```

* Description:

> Tests axis aligned box intersection

* Params:

name | type | description 
--- | --- | ---
box2 | [orxAABOX\#](./orxAABOX.md) | Second box operand

* Returns:

type | description 
--- | ---
boolean | true if boxes intersect, false otherwise

* C signature:

```c
  orxBOOL orxAABox_TestIntersection(const orxAABOX *_pstBox1, const orxAABOX *_pstBox2)
```

---

### **`orxAABOX:type`**

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


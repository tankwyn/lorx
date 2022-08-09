# type orxVECTOR

> This type has __add, __sub, __mul, __div, __unm, __eq, and __tostring implemented, so it can handle common arithmetic operations, compare with '=' and print as a string

constructors: [lorx.vector.vector](../modules/vector.md#vector)

## Properties

name | type 
--- | --- 
x | number
rho | number
r | number
h | number
y | number
theta | number
g | number
s | number
z | number
phi | number
b | number
l | number
v | number

## Methods

### **`orxVECTOR:_2DRotate`**

* Signature:

```lua
r1 = _2DRotate(angle)
```

* Description:

> Rotates a 2D vector \(along Z-axis\)

* Params:

name | type | description 
--- | --- | ---
angle | number | Angle of rotation (radians)

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Rotated vector

* C signature:

```c
  orxVECTOR * orxVector_2DRotate(orxVECTOR *_pvRes, const orxVECTOR *_pvOp, orxFLOAT _fAngle)
```

---

### **`orxVECTOR:addr`**

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

### **`orxVECTOR:aeq`**

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

### **`orxVECTOR:asVoid`**

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

### **`orxVECTOR:bezier`**

* Signature:

```lua
r1 = bezier(point2, point3, point4, t)
```

* Description:

> Computes an interpolated point on a cubic Bezier curve segment for a given parameter

* Params:

name | type | description 
--- | --- | ---
point2 | [orxVECTOR\#](./orxVECTOR.md) | First control point for this curve segment
point3 | [orxVECTOR\#](./orxVECTOR.md) | Second control point for this curve segment
point4 | [orxVECTOR\#](./orxVECTOR.md) | Last point for this curve segment
t | number | Interpolation parameter in [0.0, 1.0]

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Interpolated point on the cubic Bezier curve segment

* C signature:

```c
  orxVECTOR * orxVector_Bezier(orxVECTOR *_pvRes, const orxVECTOR *_pvPoint1, const orxVECTOR *_pvPoint2, const orxVECTOR *_pvPoint3, const orxVECTOR *_pvPoint4, orxFLOAT _fT)
```

---

### **`orxVECTOR:catmullRom`**

* Signature:

```lua
r1 = catmullRom(point2, point3, point4, t)
```

* Description:

> Computes an interpolated point on a Catmull-Rom curve segment for a given parameter

* Params:

name | type | description 
--- | --- | ---
point2 | [orxVECTOR\#](./orxVECTOR.md) | Second control point for this curve segment
point3 | [orxVECTOR\#](./orxVECTOR.md) | Third control point for this curve segment
point4 | [orxVECTOR\#](./orxVECTOR.md) | Fourth control point for this curve segment
t | number | Interpolation parameter in [0.0, 1.0]

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Interpolated point on the Catmull-Rom curve segment

* C signature:

```c
  orxVECTOR * orxVector_CatmullRom(orxVECTOR *_pvRes, const orxVECTOR *_pvPoint1, const orxVECTOR *_pvPoint2, const orxVECTOR *_pvPoint3, const orxVECTOR *_pvPoint4, orxFLOAT _fT)
```

---

### **`orxVECTOR:clamp`**

* Signature:

```lua
r1 = clamp(min, max)
```

* Description:

> Clamps a vector between two others

* Params:

name | type | description 
--- | --- | ---
min | [orxVECTOR\#](./orxVECTOR.md) | Minimum boundary
max | [orxVECTOR\#](./orxVECTOR.md) | Maximum boundary

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Resulting vector CLAMP\(Op, MIN, MAX\)

* C signature:

```c
  orxVECTOR * orxVector_Clamp(orxVECTOR *_pvRes, const orxVECTOR *_pvOp, const orxVECTOR *_pvMin, const orxVECTOR *_pvMax)
```

---

### **`orxVECTOR:copy`**

* Signature:

```lua
r1 = copy()
```

* Description:

> Copies a vector onto another one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Destination vector

* C signature:

```c
  orxVECTOR * orxVector_Copy(orxVECTOR *_pvDst, const orxVECTOR *_pvSrc)
```

---

### **`orxVECTOR:floor`**

* Signature:

```lua
r1 = floor()
```

* Description:

> Gets floored vector and stores the result in another one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Resulting vector Floor\(Op\)

* C signature:

```c
  orxVECTOR * orxVector_Floor(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:fromCartesianToSpherical`**

* Signature:

```lua
r1 = fromCartesianToSpherical()
```

* Description:

> Transforms a cartesian vector into a spherical one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Transformed vector

* C signature:

```c
  orxVECTOR * orxVector_FromCartesianToSpherical(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:fromSphericalToCartesian`**

* Signature:

```lua
r1 = fromSphericalToCartesian()
```

* Description:

> Transforms a spherical vector into a cartesian one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Transformed vector

* C signature:

```c
  orxVECTOR * orxVector_FromSphericalToCartesian(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:getSize`**

* Signature:

```lua
r1 = getSize()
```

* Description:

> Gets vector size

* Params:

* Returns:

type | description 
--- | ---
number | Vector's size

* C signature:

```c
  orxFLOAT orxVector_GetSize(const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:getSquareSize`**

* Signature:

```lua
r1 = getSquareSize()
```

* Description:

> Gets vector squared size

* Params:

* Returns:

type | description 
--- | ---
number | Vector's squared size

* C signature:

```c
  orxFLOAT orxVector_GetSquareSize(const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:isNull`**

* Signature:

```lua
r1 = isNull()
```

* Description:

> Is vector null?

* Params:

* Returns:

type | description 
--- | ---
boolean | true if vector's null, false otherwise

* C signature:

```c
  orxBOOL orxVector_IsNull(const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:neg`**

* Signature:

```lua
r1 = neg()
```

* Description:

> Negates a vector and stores result in another one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Resulting vector \(-Op\)

* C signature:

```c
  orxVECTOR * orxVector_Neg(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:normalize`**

* Signature:

```lua
r1 = normalize()
```

* Description:

> Normalizes a vector

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Normalized vector

* C signature:

```c
  orxVECTOR * orxVector_Normalize(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:rec`**

* Signature:

```lua
r1 = rec()
```

* Description:

> Gets reciprocal \(1.0 /\) vector and stores the result in another one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Resulting vector \(1 / Op\)

* C signature:

```c
  orxVECTOR * orxVector_Rec(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:round`**

* Signature:

```lua
r1 = round()
```

* Description:

> Gets rounded vector and stores the result in another one

* Params:

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Resulting vector Round\(Op\)

* C signature:

```c
  orxVECTOR * orxVector_Round(orxVECTOR *_pvRes, const orxVECTOR *_pvOp)
```

---

### **`orxVECTOR:set`**

* Signature:

```lua
r1 = set(x, y, z)
```

* Description:

> Sets vector XYZ values \(also work for other coordinate system\) (non-const self only)

* Params:

name | type | description 
--- | --- | ---
x | number | First coordinate value
y | number | Second coordinate value
z | number | Third coordinate value

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Vector

* C signature:

```c
  orxVECTOR * orxVector_Set(orxVECTOR *_pvVec, orxFLOAT _fX, orxFLOAT _fY, orxFLOAT _fZ)
```

---

### **`orxVECTOR:setAll`**

* Signature:

```lua
r1 = setAll(value)
```

* Description:

> Sets all the vector coordinates with the given value (non-const self only)

* Params:

name | type | description 
--- | --- | ---
value | number | Value to set

* Returns:

type | description 
--- | ---
[orxVECTOR](./orxVECTOR.md)  | Vector

* C signature:

```c
  orxVECTOR * orxVector_SetAll(orxVECTOR *_pvVec, orxFLOAT _fValue)
```

---

### **`orxVECTOR:type`**

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


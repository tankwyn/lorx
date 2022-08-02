# module vector

## functions

### **`_2DDot`**

* Signature:

```lua
r1 = _2DDot(op1, op2)
```

* Description:

> Gets 2D dot product of two vectors

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
number | 2D dot product

* C signature:

```c
  orxFLOAT orxVector_2DDot(const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`add`**

* Signature:

```lua
r1 = add(op1, op2)
```

* Description:

> Adds vectors and stores result in a third one

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector \(Op1 + Op2\)

* C signature:

```c
  orxVECTOR * orxVector_Add(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`areEqual`**

* Signature:

```lua
r1 = areEqual(op1, op2)
```

* Description:

> Are vectors equal?

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First vector to compare
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second vector to compare

* Returns:

type | description 
--- | ---
boolean | true if both vectors are equal, false otherwise

* C signature:

```c
  orxBOOL orxVector_AreEqual(const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`cross`**

* Signature:

```lua
r1 = cross(op1, op2)
```

* Description:

> Gets cross product of two vectors

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Cross product [orxVECTOR](../types/orxVECTOR.md) / nil

* C signature:

```c
  orxVECTOR * orxVector_Cross(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`div`**

* Signature:

```lua
r1 = div(op1, op2)
```

* Description:

> Divides a vector by another vector and stores result in a third one

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector \(Op1 / Op2\)

* C signature:

```c
  orxVECTOR * orxVector_Div(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`divf`**

* Signature:

```lua
r1 = divf(op1, op2)
```

* Description:

> Divides a vector by an orxFLOAT and stores result in another one

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | number | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector

* C signature:

```c
  orxVECTOR * orxVector_Divf(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, orxFLOAT _fOp2)
```

---

### **`dot`**

* Signature:

```lua
r1 = dot(op1, op2)
```

* Description:

> Gets dot product of two vectors

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
number | Dot product

* C signature:

```c
  orxFLOAT orxVector_Dot(const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`getDistance`**

* Signature:

```lua
r1 = getDistance(op1, op2)
```

* Description:

> Gets distance between 2 positions

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First position
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second position

* Returns:

type | description 
--- | ---
number | Distance

* C signature:

```c
  orxFLOAT orxVector_GetDistance(const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`getSquareDistance`**

* Signature:

```lua
r1 = getSquareDistance(op1, op2)
```

* Description:

> Gets squared distance between 2 positions

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First position
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second position

* Returns:

type | description 
--- | ---
number | Squared distance

* C signature:

```c
  orxFLOAT orxVector_GetSquareDistance(const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`lerp`**

* Signature:

```lua
r1 = lerp(op1, op2, op)
```

* Description:

> Lerps from one vector to another one using a coefficient

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand
op | number | Lerp coefficient parameter

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector

* C signature:

```c
  orxVECTOR * orxVector_Lerp(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2, orxFLOAT _fOp)
```

---

### **`max`**

* Signature:

```lua
r1 = max(op1, op2)
```

* Description:

> Gets maximum between two vectors

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector MAX\(Op1, Op2\)

* C signature:

```c
  orxVECTOR * orxVector_Max(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`min`**

* Signature:

```lua
r1 = min(op1, op2)
```

* Description:

> Gets minimum between two vectors

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector MIN\(Op1, Op2\)

* C signature:

```c
  orxVECTOR * orxVector_Min(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`mul`**

* Signature:

```lua
r1 = mul(op1, op2)
```

* Description:

> Multiplies a vector by another vector and stores result in a third one

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector \(Op1 \* Op2\)

* C signature:

```c
  orxVECTOR * orxVector_Mul(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`mulf`**

* Signature:

```lua
r1 = mulf(op1, op2)
```

* Description:

> Multiplies a vector by an orxFLOAT and stores result in another one

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | number | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector

* C signature:

```c
  orxVECTOR * orxVector_Mulf(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, orxFLOAT _fOp2)
```

---

### **`sub`**

* Signature:

```lua
r1 = sub(op1, op2)
```

* Description:

> Substracts vectors and stores result in a third one

* Params:

name | type | description 
--- | --- | ---
op1 | [orxVECTOR\#](../types/orxVECTOR.md) | First operand
op2 | [orxVECTOR\#](../types/orxVECTOR.md) | Second operand

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | Resulting vector \(Op1 - Op2\)

* C signature:

```c
  orxVECTOR * orxVector_Sub(orxVECTOR *_pvRes, const orxVECTOR *_pvOp1, const orxVECTOR *_pvOp2)
```

---

### **`vector`**

* Signature:

```lua
r1 = vector(fX, fY, fZ)
```

* Description:

> Create a new [orxVECTOR](../types/orxVECTOR.md) 

* Params:

name | type | description 
--- | --- | ---
fX | number | 
fY | number | 
fZ | number | 

* Returns:

type | description 
--- | ---
[orxVECTOR](../types/orxVECTOR.md)  | The new instance

---


# module math

## functions

### **`aCos`**

* Signature:

```lua
r1 = aCos(op)
```

* Description:

> Gets an arccosine

* Params:

name | type | description 
--- | --- | ---
op | number | Input radian angle value

* Returns:

type | description 
--- | ---
number | Arccosine of the given angle

* C signature:

```c
  orxFLOAT orxMath_ACos(orxFLOAT _fOp)
```

---

### **`aSin`**

* Signature:

```lua
r1 = aSin(op)
```

* Description:

> Gets an arcsine

* Params:

name | type | description 
--- | --- | ---
op | number | Input radian angle value

* Returns:

type | description 
--- | ---
number | Arcsine of the given angle

* C signature:

```c
  orxFLOAT orxMath_ASin(orxFLOAT _fOp)
```

---

### **`aTan`**

* Signature:

```lua
r1 = aTan(op1, op2)
```

* Description:

> Gets an arctangent

* Params:

name | type | description 
--- | --- | ---
op1 | number | First operand
op2 | number | Second operand

* Returns:

type | description 
--- | ---
number | Arctangent of the given angle

* C signature:

```c
  orxFLOAT orxMath_ATan(orxFLOAT _fOp1, orxFLOAT _fOp2)
```

---

### **`abs`**

* Signature:

```lua
r1 = abs(op)
```

* Description:

> Gets an absolute value

* Params:

name | type | description 
--- | --- | ---
op | number | Input value

* Returns:

type | description 
--- | ---
number | Absolute value

* C signature:

```c
  orxFLOAT orxMath_Abs(orxFLOAT _fOp)
```

---

### **`ceil`**

* Signature:

```lua
r1 = ceil(op)
```

* Description:

> Gets a ceiled value

* Params:

name | type | description 
--- | --- | ---
op | number | Input value

* Returns:

type | description 
--- | ---
number | Ceiled value

* C signature:

```c
  orxFLOAT orxMath_Ceil(orxFLOAT _fOp)
```

---

### **`cos`**

* Signature:

```lua
r1 = cos(op)
```

* Description:

> Gets a cosine

* Params:

name | type | description 
--- | --- | ---
op | number | Input radian angle value

* Returns:

type | description 
--- | ---
number | Cosine of the given angle

* C signature:

```c
  orxFLOAT orxMath_Cos(orxFLOAT _fOp)
```

---

### **`floor`**

* Signature:

```lua
r1 = floor(op)
```

* Description:

> Gets a floored value

* Params:

name | type | description 
--- | --- | ---
op | number | Input value

* Returns:

type | description 
--- | ---
number | Floored value

* C signature:

```c
  orxFLOAT orxMath_Floor(orxFLOAT _fOp)
```

---

### **`getBitCount`**

* Signature:

```lua
r1 = getBitCount(value)
```

* Description:

> Gets the count of bit in an orxU32

* Params:

name | type | description 
--- | --- | ---
value | integer | Value to process

* Returns:

type | description 
--- | ---
integer | Number of bits that are set in the value

* C signature:

```c
  orxU32 orxMath_GetBitCount(orxU32 _u32Value)
```

---

### **`getNextPowerOfTwo`**

* Signature:

```lua
r1 = getNextPowerOfTwo(value)
```

* Description:

> Gets next power of two of an orxU32

* Params:

name | type | description 
--- | --- | ---
value | integer | Value to process

* Returns:

type | description 
--- | ---
integer | If _u32Value is already a power of two, returns it, otherwise the next power of two

* C signature:

```c
  orxU32 orxMath_GetNextPowerOfTwo(orxU32 _u32Value)
```

---

### **`getRandomFloat`**

* Signature:

```lua
r1 = getRandomFloat(min, max)
```

* Description:

> Gets a random orxFLOAT value

* Params:

name | type | description 
--- | --- | ---
min | number | Minimum boundary \(inclusive\)
max | number | Maximum boundary \(exclusive\)

* Returns:

type | description 
--- | ---
number | Random value

* C signature:

```c
  orxFLOAT  orxMath_GetRandomFloat(orxFLOAT _fMin, orxFLOAT _fMax)
```

---

### **`getRandomS32`**

* Signature:

```lua
r1 = getRandomS32(min, max)
```

* Description:

> Gets a random orxS32 value

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxS32  orxMath_GetRandomS32(orxS32 _s32Min, orxS32 _s32Max)
```

---

### **`getRandomS64`**

* Signature:

```lua
r1 = getRandomS64(min, max)
```

* Description:

> Gets a random orxS64 value

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxS64  orxMath_GetRandomS64(orxS64 _s64Min, orxS64 _s64Max)
```

---

### **`getRandomSeeds`**

* Signature:

```lua
r1 = getRandomSeeds()
```

* Description:

> Gets the current random seeds

* Params:

* Returns:

type | description 
--- | ---
table of integer | Current seeds

* C signature:

```c
  void  orxMath_GetRandomSeeds(orxU32 _au32Seeds[4])
```

---

### **`getRandomU32`**

* Signature:

```lua
r1 = getRandomU32(min, max)
```

* Description:

> Gets a random orxU32 value

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxU32  orxMath_GetRandomU32(orxU32 _u32Min, orxU32 _u32Max)
```

---

### **`getRandomU64`**

* Signature:

```lua
r1 = getRandomU64(min, max)
```

* Description:

> Gets a random orxU64 value

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxU64  orxMath_GetRandomU64(orxU64 _u64Min, orxU64 _u64Max)
```

---

### **`getSteppedRandomFloat`**

* Signature:

```lua
r1 = getSteppedRandomFloat(min, max, step)
```

* Description:

> Gets a random orxFLOAT value using step increments

* Params:

name | type | description 
--- | --- | ---
min | number | Minimum boundary \(inclusive\)
max | number | Maximum boundary \(inclusive\)
step | number | Step value, must be strictly positive

* Returns:

type | description 
--- | ---
number | Random value

* C signature:

```c
  orxFLOAT  orxMath_GetSteppedRandomFloat(orxFLOAT _fMin, orxFLOAT _fMax, orxFLOAT _fStep)
```

---

### **`getSteppedRandomS32`**

* Signature:

```lua
r1 = getSteppedRandomS32(min, max, step)
```

* Description:

> Gets a random S32 value using step increments

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)
step | integer | Step value, must be strictly positive

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxS32  orxMath_GetSteppedRandomS32(orxS32 _s32Min, orxS32 _s32Max, orxS32 _s32Step)
```

---

### **`getSteppedRandomS64`**

* Signature:

```lua
r1 = getSteppedRandomS64(min, max, step)
```

* Description:

> Gets a random S64 value using step increments

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)
step | integer | Step value, must be strictly positive

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxS64  orxMath_GetSteppedRandomS64(orxS64 _s64Min, orxS64 _s64Max, orxS64 _s64Step)
```

---

### **`getSteppedRandomU32`**

* Signature:

```lua
r1 = getSteppedRandomU32(min, max, step)
```

* Description:

> Gets a random U32 value using step increments

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)
step | integer | Step value, must be strictly positive

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxU32  orxMath_GetSteppedRandomU32(orxU32 _u32Min, orxU32 _u32Max, orxU32 _u32Step)
```

---

### **`getSteppedRandomU64`**

* Signature:

```lua
r1 = getSteppedRandomU64(min, max, step)
```

* Description:

> Gets a random U64 value using step increments

* Params:

name | type | description 
--- | --- | ---
min | integer | Minimum boundary \(inclusive\)
max | integer | Maximum boundary \(inclusive\)
step | integer | Step value, must be strictly positive

* Returns:

type | description 
--- | ---
integer | Random value

* C signature:

```c
  orxU64  orxMath_GetSteppedRandomU64(orxU64 _u64Min, orxU64 _u64Max, orxU64 _u64Step)
```

---

### **`getTrailingZeroCount`**

* Signature:

```lua
r1 = getTrailingZeroCount(value)
```

* Description:

> Gets the count of trailing zeros in an orxU32

* Params:

name | type | description 
--- | --- | ---
value | integer | Value to process

* Returns:

type | description 
--- | ---
integer | Number of trailing zeros

* C signature:

```c
  orxU32 orxMath_GetTrailingZeroCount(orxU32 _u32Value)
```

---

### **`getTrailingZeroCount64`**

* Signature:

```lua
r1 = getTrailingZeroCount64(value)
```

* Description:

> Gets the count of trailing zeros in an orxU64

* Params:

name | type | description 
--- | --- | ---
value | integer | Value to process

* Returns:

type | description 
--- | ---
integer | Number of trailing zeros

* C signature:

```c
  orxU32 orxMath_GetTrailingZeroCount64(orxU64 _u64Value)
```

---

### **`initRandom`**

* Signature:

```lua
initRandom(seed)
```

* Description:

> Inits the random seed

* Params:

name | type | description 
--- | --- | ---
seed | integer | Value to use as seed for random number generation

* Returns:

* C signature:

```c
  void  orxMath_InitRandom(orxU32 _u32Seed)
```

---

### **`isPowerOfTwo`**

* Signature:

```lua
r1 = isPowerOfTwo(value)
```

* Description:

> Is value a power of two?

* Params:

name | type | description 
--- | --- | ---
value | integer | Value to test

* Returns:

type | description 
--- | ---
boolean | true / false

* C signature:

```c
  orxBOOL orxMath_IsPowerOfTwo(orxU32 _u32Value)
```

---

### **`mod`**

* Signature:

```lua
r1 = mod(op1, op2)
```

* Description:

> Gets a modulo value

* Params:

name | type | description 
--- | --- | ---
op1 | number | Input value
op2 | number | Modulo value

* Returns:

type | description 
--- | ---
number | Modulo value

* C signature:

```c
  orxFLOAT orxMath_Mod(orxFLOAT _fOp1, orxFLOAT _fOp2)
```

---

### **`pow`**

* Signature:

```lua
r1 = pow(op, exp)
```

* Description:

> Gets a powed value

* Params:

name | type | description 
--- | --- | ---
op | number | Input value
exp | number | Exponent value

* Returns:

type | description 
--- | ---
number | Powed value

* C signature:

```c
  orxFLOAT orxMath_Pow(orxFLOAT _fOp, orxFLOAT _fExp)
```

---

### **`round`**

* Signature:

```lua
r1 = round(op)
```

* Description:

> Gets a rounded value

* Params:

name | type | description 
--- | --- | ---
op | number | Input value

* Returns:

type | description 
--- | ---
number | Rounded value

* C signature:

```c
  orxFLOAT orxMath_Round(orxFLOAT _fOp)
```

---

### **`setRandomSeeds`**

* Signature:

```lua
setRandomSeeds(seeds)
```

* Description:

> Sets \(replaces\) the current random seeds

* Params:

name | type | description 
--- | --- | ---
seeds | table of integer | Seeds to set

* Returns:

* C signature:

```c
  void  orxMath_SetRandomSeeds(const orxU32 _au32Seeds[4])
```

---

### **`sin`**

* Signature:

```lua
r1 = sin(op)
```

* Description:

> Gets a sine

* Params:

name | type | description 
--- | --- | ---
op | number | Input radian angle value

* Returns:

type | description 
--- | ---
number | Sine of the given angle

* C signature:

```c
  orxFLOAT orxMath_Sin(orxFLOAT _fOp)
```

---

### **`smoothStep`**

* Signature:

```lua
r1 = smoothStep(min, max, value)
```

* Description:

> Gets smooth stepped value between two extrema

* Params:

name | type | description 
--- | --- | ---
min | number | Minimum value
max | number | Maximum value
value | number | Value to process

* Returns:

type | description 
--- | ---
number | 0.0 if _fValue <= _fMin, 1.0 if _fValue \>= _fMax, smoothed value between 0.0 & 1.0 otherwise

* C signature:

```c
  orxFLOAT orxMath_SmoothStep(orxFLOAT _fMin, orxFLOAT _fMax, orxFLOAT _fValue)
```

---

### **`smootherStep`**

* Signature:

```lua
r1 = smootherStep(min, max, value)
```

* Description:

> Gets smoother stepped value between two extrema

* Params:

name | type | description 
--- | --- | ---
min | number | Minimum value
max | number | Maximum value
value | number | Value to process

* Returns:

type | description 
--- | ---
number | 0.0 if _fValue <= _fMin, 1.0 if _fValue \>= _fMax, smooth\(er\)ed value between 0.0 & 1.0 otherwise

* C signature:

```c
  orxFLOAT orxMath_SmootherStep(orxFLOAT _fMin, orxFLOAT _fMax, orxFLOAT _fValue)
```

---

### **`sqrt`**

* Signature:

```lua
r1 = sqrt(op)
```

* Description:

> Gets a square root

* Params:

name | type | description 
--- | --- | ---
op | number | Input value

* Returns:

type | description 
--- | ---
number | Square root of the given value

* C signature:

```c
  orxFLOAT orxMath_Sqrt(orxFLOAT _fOp)
```

---

### **`tan`**

* Signature:

```lua
r1 = tan(op)
```

* Description:

> Gets a tangent

* Params:

name | type | description 
--- | --- | ---
op | number | Input radian angle value

* Returns:

type | description 
--- | ---
number | Tangent of the given angle

* C signature:

```c
  orxFLOAT orxMath_Tan(orxFLOAT _fOp)
```

---


---@meta

---@class lorx.math
lorx.math = {}

---
---Gets an arccosine
---
---@param _op number # Input radian angle value
---@return number # Arccosine of the given angle
function lorx.math.aCos(_op) end

---
---Gets an arcsine
---
---@param _op number # Input radian angle value
---@return number # Arcsine of the given angle
function lorx.math.aSin(_op) end

---
---Gets an arctangent
---
---@param _op1 number # First operand
---@param _op2 number # Second operand
---@return number # Arctangent of the given angle
function lorx.math.aTan(_op1, _op2) end

---
---Gets an absolute value
---
---@param _op number # Input value
---@return number # Absolute value
function lorx.math.abs(_op) end

---
---Gets a ceiled value
---
---@param _op number # Input value
---@return number # Ceiled value
function lorx.math.ceil(_op) end

---
---Gets a cosine
---
---@param _op number # Input radian angle value
---@return number # Cosine of the given angle
function lorx.math.cos(_op) end

---
---Gets a floored value
---
---@param _op number # Input value
---@return number # Floored value
function lorx.math.floor(_op) end

---
---Gets the count of bit in an orxU32
---
---@param _value integer # Value to process
---@return integer # Number of bits that are set in the value
function lorx.math.getBitCount(_value) end

---
---Gets next power of two of an orxU32
---
---@param _value integer # Value to process
---@return integer # If _u32Value is already a power of two, returns it, otherwise the next power of two
function lorx.math.getNextPowerOfTwo(_value) end

---
---Gets a random orxFLOAT value
---
---@param _min number # Minimum boundary (inclusive)
---@param _max number # Maximum boundary (exclusive)
---@return number # Random value
function lorx.math.getRandomFloat(_min, _max) end

---
---Gets a random orxS32 value
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@return integer # Random value
function lorx.math.getRandomS32(_min, _max) end

---
---Gets a random orxS64 value
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@return integer # Random value
function lorx.math.getRandomS64(_min, _max) end

---
---Gets the current random seeds
---
---@return integer[] # Current seeds
function lorx.math.getRandomSeeds() end

---
---Gets a random orxU32 value
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@return integer # Random value
function lorx.math.getRandomU32(_min, _max) end

---
---Gets a random orxU64 value
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@return integer # Random value
function lorx.math.getRandomU64(_min, _max) end

---
---Gets a random orxFLOAT value using step increments
---
---@param _min number # Minimum boundary (inclusive)
---@param _max number # Maximum boundary (inclusive)
---@param _step number # Step value, must be strictly positive
---@return number # Random value
function lorx.math.getSteppedRandomFloat(_min, _max, _step) end

---
---Gets a random S32 value using step increments
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@param _step integer # Step value, must be strictly positive
---@return integer # Random value
function lorx.math.getSteppedRandomS32(_min, _max, _step) end

---
---Gets a random S64 value using step increments
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@param _step integer # Step value, must be strictly positive
---@return integer # Random value
function lorx.math.getSteppedRandomS64(_min, _max, _step) end

---
---Gets a random U32 value using step increments
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@param _step integer # Step value, must be strictly positive
---@return integer # Random value
function lorx.math.getSteppedRandomU32(_min, _max, _step) end

---
---Gets a random U64 value using step increments
---
---@param _min integer # Minimum boundary (inclusive)
---@param _max integer # Maximum boundary (inclusive)
---@param _step integer # Step value, must be strictly positive
---@return integer # Random value
function lorx.math.getSteppedRandomU64(_min, _max, _step) end

---
---Gets the count of trailing zeros in an orxU32
---
---@param _value integer # Value to process
---@return integer # Number of trailing zeros
function lorx.math.getTrailingZeroCount(_value) end

---
---Gets the count of trailing zeros in an orxU64
---
---@param _value integer # Value to process
---@return integer # Number of trailing zeros
function lorx.math.getTrailingZeroCount64(_value) end

---
---Inits the random seed
---
---@param _seed integer # Value to use as seed for random number generation
function lorx.math.initRandom(_seed) end

---
---Is value a power of two?
---
---@param _value integer # Value to test
---@return boolean # true / false
function lorx.math.isPowerOfTwo(_value) end

---
---Gets a modulo value
---
---@param _op1 number # Input value
---@param _op2 number # Modulo value
---@return number # Modulo value
function lorx.math.mod(_op1, _op2) end

---
---Gets a powed value
---
---@param _op number # Input value
---@param _exp number # Exponent value
---@return number # Powed value
function lorx.math.pow(_op, _exp) end

---
---Gets a rounded value
---
---@param _op number # Input value
---@return number # Rounded value
function lorx.math.round(_op) end

---
---Sets (replaces) the current random seeds
---
---@param _seeds integer[] # Seeds to set
function lorx.math.setRandomSeeds(_seeds) end

---
---Gets a sine
---
---@param _op number # Input radian angle value
---@return number # Sine of the given angle
function lorx.math.sin(_op) end

---
---Gets smooth stepped value between two extrema
---
---@param _min number # Minimum value
---@param _max number # Maximum value
---@param _value number # Value to process
---@return number # 0.0 if _fValue <= _fMin, 1.0 if _fValue >= _fMax, smoothed value between 0.0 & 1.0 otherwise
function lorx.math.smoothStep(_min, _max, _value) end

---
---Gets smoother stepped value between two extrema
---
---@param _min number # Minimum value
---@param _max number # Maximum value
---@param _value number # Value to process
---@return number # 0.0 if _fValue <= _fMin, 1.0 if _fValue >= _fMax, smooth(er)ed value between 0.0 & 1.0 otherwise
function lorx.math.smootherStep(_min, _max, _value) end

---
---Gets a square root
---
---@param _op number # Input value
---@return number # Square root of the given value
function lorx.math.sqrt(_op) end

---
---Gets a tangent
---
---@param _op number # Input radian angle value
---@return number # Tangent of the given angle
function lorx.math.tan(_op) end


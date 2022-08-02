---@meta

---@class lorx.vector
lorx.vector = {}

---
---Gets 2D dot product of two vectors
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return number # 2D dot product
function lorx.vector._2DDot(_op1, _op2) end

---
---Adds vectors and stores result in a third one
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Resulting vector (Op1 + Op2)
function lorx.vector.add(_op1, _op2) end

---
---Are vectors equal?
---
---@param _op1 orxVECTOR # (const) First vector to compare
---@param _op2 orxVECTOR # (const) Second vector to compare
---@return boolean # true if both vectors are equal, false otherwise
function lorx.vector.areEqual(_op1, _op2) end

---
---Gets cross product of two vectors
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Cross product orxVECTOR / nil
function lorx.vector.cross(_op1, _op2) end

---
---Divides a vector by another vector and stores result in a third one
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Resulting vector (Op1 / Op2)
function lorx.vector.div(_op1, _op2) end

---
---Divides a vector by an orxFLOAT and stores result in another one
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 number # Second operand
---@return orxVECTOR # Resulting vector
function lorx.vector.divf(_op1, _op2) end

---
---Gets dot product of two vectors
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return number # Dot product
function lorx.vector.dot(_op1, _op2) end

---
---Gets distance between 2 positions
---
---@param _op1 orxVECTOR # (const) First position
---@param _op2 orxVECTOR # (const) Second position
---@return number # Distance
function lorx.vector.getDistance(_op1, _op2) end

---
---Gets squared distance between 2 positions
---
---@param _op1 orxVECTOR # (const) First position
---@param _op2 orxVECTOR # (const) Second position
---@return number # Squared distance
function lorx.vector.getSquareDistance(_op1, _op2) end

---
---Lerps from one vector to another one using a coefficient
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@param _op number # Lerp coefficient parameter
---@return orxVECTOR # Resulting vector
function lorx.vector.lerp(_op1, _op2, _op) end

---
---Gets maximum between two vectors
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Resulting vector MAX(Op1, Op2)
function lorx.vector.max(_op1, _op2) end

---
---Gets minimum between two vectors
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Resulting vector MIN(Op1, Op2)
function lorx.vector.min(_op1, _op2) end

---
---Multiplies a vector by another vector and stores result in a third one
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Resulting vector (Op1 * Op2)
function lorx.vector.mul(_op1, _op2) end

---
---Multiplies a vector by an orxFLOAT and stores result in another one
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 number # Second operand
---@return orxVECTOR # Resulting vector
function lorx.vector.mulf(_op1, _op2) end

---
---Substracts vectors and stores result in a third one
---
---@param _op1 orxVECTOR # (const) First operand
---@param _op2 orxVECTOR # (const) Second operand
---@return orxVECTOR # Resulting vector (Op1 - Op2)
function lorx.vector.sub(_op1, _op2) end

---
---Create a new orxVECTOR
---
---@param _fX number # 
---@param _fY number # 
---@param _fZ number # 
---@return orxVECTOR # The new instance
function lorx.vector.vector(_fX, _fY, _fZ) end


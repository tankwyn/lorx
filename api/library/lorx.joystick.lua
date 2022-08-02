---@meta

---@class lorx.joystick
lorx.joystick = {}

---
---Exits from the joystick module
---
function lorx.joystick.exit() end

---
---Gets axis literal name
---
---@param _axis orxJOYSTICK_AXIS # Concerned axis
---@return string # Axis's name
function lorx.joystick.getAxisName(_axis) end

---
---Gets joystick axis value
---
---@param _axis orxJOYSTICK_AXIS # Joystick axis to check
---@return number # Value of the axis
function lorx.joystick.getAxisValue(_axis) end

---
---Gets button literal name
---
---@param _button orxJOYSTICK_BUTTON # Concerned button
---@return string # Button's name
function lorx.joystick.getButtonName(_button) end

---
---Inits the joystick module
---
---@return orxSTATUS # Returns the status of the operation
function lorx.joystick.init() end

---
---Is joystick button pressed?
---
---@param _button orxJOYSTICK_BUTTON # Joystick button to check
---@return boolean # true if pressed / false otherwise
function lorx.joystick.isButtonPressed(_button) end

---
---Is joystick connected?
---
---@param _id integer # ID of the joystick, 1-based index
---@return boolean # true if connected / false otherwise
function lorx.joystick.isConnected(_id) end

---
---JOYSTICK module setup
---
function lorx.joystick.setup() end


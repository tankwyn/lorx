---@meta

---@class lorx.mouse
lorx.mouse = {}

---
---Exits from the mouse module
---
function lorx.mouse.exit() end

---
---Gets axis literal name
---
---@param _axis orxMOUSE_AXIS # Concerned axis
---@return string # Axis's name
function lorx.mouse.getAxisName(_axis) end

---
---Gets button literal name
---
---@param _button orxMOUSE_BUTTON # Concerned button
---@return string # Button's name
function lorx.mouse.getButtonName(_button) end

---
---Gets mouse move delta (since last call)
---
---@return orxVECTOR # orxVECTOR / nil
function lorx.mouse.getMoveDelta() end

---
---Gets mouse position
---
---@return orxVECTOR # orxVECTOR / nil
function lorx.mouse.getPosition() end

---
---Gets mouse wheel delta (since last call)
---
---@return number # Mouse wheel delta
function lorx.mouse.getWheelDelta() end

---
---Grabs the mouse
---
---@param _grab boolean # Grab / Release
---@return orxSTATUS # success / failure
function lorx.mouse.grab(_grab) end

---
---Inits the mouse module
---
---@return orxSTATUS # Returns the status of the operation
function lorx.mouse.init() end

---
---Is mouse button pressed?
---
---@param _button orxMOUSE_BUTTON # Mouse button to check
---@return boolean # true if pressed / false otherwise
function lorx.mouse.isButtonPressed(_button) end

---
---Sets mouse (hardware) cursor
---
---@param _name string # Cursor's name can be: a standard name (arrow, ibeam, hand, crosshair, hresize or vresize), a file name or nil to reset the hardware cursor to default
---@param _pivot orxVECTOR # (const) Cursor's pivot (aka hotspot), nil will default to (0, 0)
---@return orxSTATUS # success / failure
function lorx.mouse.setCursor(_name, _pivot) end

---
---Sets mouse position
---
---@param _position orxVECTOR # (const) Mouse position
---@return orxSTATUS # success / failure
function lorx.mouse.setPosition(_position) end

---
---Mouse module setup
---
function lorx.mouse.setup() end

---
---Shows mouse (hardware) cursor
---
---@param _show boolean # Show / Hide
---@return orxSTATUS # success / failure
function lorx.mouse.showCursor(_show) end


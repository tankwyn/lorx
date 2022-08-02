---@meta

---@class lorx.system
lorx.system = {}

---
---Delay the program for given number of seconds
---
---@param _seconds number # Number of seconds to wait
function lorx.system.delay(_seconds) end

---
---Exits from the system module
---
function lorx.system.exit() end

---
---Gets clipboard's content
---
---@return string # Clipboard's content / orxNULL, valid until next call to orxSystem_GetClipboard/orxSystem_SetClipboard
function lorx.system.getClipboard() end

---
---Gets real time (in seconds)
---
---@return integer # Returns the amount of seconds elapsed since reference time (epoch)
function lorx.system.getRealTime() end

---
---Gets current internal system time (in seconds)
---
---@return number # Current internal system time
function lorx.system.getSystemTime() end

---
---Gets current time (elapsed from the beginning of the application, in seconds)
---
---@return number # Current time
function lorx.system.getTime() end

---
---Gets orx version literal (compiled), including build number
---
---@return string # Compiled version literal
function lorx.system.getVersionFullString() end

---
---Gets orx version absolute numeric value (compiled)
---
---@return integer # Absolute numeric value of compiled version
function lorx.system.getVersionNumeric() end

---
---Gets orx version literal (compiled), excluding build number
---
---@return string # Compiled version literal
function lorx.system.getVersionString() end

---
---Inits the system module
---
---@return orxSTATUS # success / failure
function lorx.system.init() end

---
---Sets clipboard's content
---
---@param _value string # Value to set in the clipboard, nil to clear
---@return orxSTATUS # success / failure
function lorx.system.setClipboard(_value) end

---
---System module setup
---
function lorx.system.setup() end


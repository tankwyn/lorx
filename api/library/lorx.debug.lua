---@meta

---@class lorx.debug
lorx.debug = {}

---
---
---
function lorx.debug._break() end

---
---Enables/disables a given log level
---
---@param _level orxDEBUG_LEVEL # Debug level to enable/disable
---@param _enable boolean # Enable / disable
function lorx.debug.enableLevel(_level, _enable) end

---
---
---
function lorx.debug.exit() end

---
---Gets current debug flags
---
---@return integer # Current debug flags
function lorx.debug.getFlags() end

---
---Inits the debug module
---
---@return orxSTATUS # success / failure
function lorx.debug.init() end

---
---Is a given log level enabled?
---
---@param _level orxDEBUG_LEVEL # Concerned debug level
---@return boolean # 
function lorx.debug.isLevelEnabled(_level) end

---
---Logs given debug text
---
---@param _level orxDEBUG_LEVEL # Debug level associated with this output
---@param _function string # Calling function name
---@param _file string # Calling file name
---@param _line integer # Calling file line
---@param _format string # Printf formatted text
function lorx.debug.log(_level, _function, _file, _line, _format) end

---
---Sets debug file name
---
---@param _filename string # Debug file name
function lorx.debug.setDebugFile(_filename) end

---
---Sets current debug flags
---
---@param _add integer # Flags to add
---@param _remove integer # Flags to remove
function lorx.debug.setFlags(_add, _remove) end

---
---Sets log callback function, if the callback returns failure, the log entry will be entirely inhibited
---
---@param _func lorxLOG_CALLBACK # log callback function
function lorx.debug.setLogCallback(_func) end

---
---Sets log file name
---
---@param _filename string # Log file name
function lorx.debug.setLogFile(_filename) end


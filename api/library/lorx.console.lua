---@meta

---@class lorx.console
lorx.console = {}

---
---Enables/disables the console
---
---@param _enable boolean # Enable / disable
function lorx.console.enable(_enable) end

---
---Exits from the console module
---
function lorx.console.exit() end

---
---Gets completion
---
---@param _index integer # Index of the active completion
---@return string # Completion string if found, empty string otherwise
---@return boolean # Is completion active, nil to ignore
function lorx.console.getCompletion(_index) end

---
---Gets current completions count
---
---@return integer # Current completions count
---@return integer # Max completion length, nil to ignore
function lorx.console.getCompletionCount() end

---
---Gets the console font
---
---@return orxFONT # (const) Current in-use font, nil
function lorx.console.getFontConst() end

---
---Gets input text
---
---@return string # orxTRING / empty string
---@return integer # Index (ie. character position) of the cursor (any character past it has not been validated)
function lorx.console.getInput() end

---
---Gets the console log line length
---
---@return integer # Console log line length
function lorx.console.getLogLineLength() end

---
---Gets log line from the end (trail), using internal offset
---
---@param _traillineindex integer # Index of the line starting from end
---@return string # orxTRING / empty string
function lorx.console.getTrailLogLine(_traillineindex) end

---
---Gets log line offset from the end
---
---@return integer # Log line offset from the end
function lorx.console.getTrailLogLineOffset() end

---
---Inits the console module
---
---@return orxSTATUS # success / failure
function lorx.console.init() end

---
---Is the console enabled?
---
---@return boolean # true if enabled, false otherwise
function lorx.console.isEnabled() end

---
---Is the console input in insert mode?
---
---@return boolean # true if insert mode, false otherwise (overwrite mode)
function lorx.console.isInsertMode() end

---
---Logs to the console
---
---@param _text string # Text to log
---@return orxSTATUS # success / failure
function lorx.console.log(_text) end

---
---Sets the console font
---
---@param _font orxFONT # (const) Font to use
---@return orxSTATUS # success / failure
function lorx.console.setFont(_font) end

---
---Sets the console log line length
---
---@param _linelength integer # Line length to use
---@return orxSTATUS # success / failure
function lorx.console.setLogLineLength(_linelength) end

---
---Sets the console toggle
---
---@param _inputtype orxINPUT_TYPE # Type of input peripheral
---@param _inputid string # ID of button/key/axis
---@param _inputmode orxINPUT_MODE # Mode of input
---@return orxSTATUS # success / failure
function lorx.console.setToggle(_inputtype, _inputid, _inputmode) end

---
---Console module setup
---
function lorx.console.setup() end


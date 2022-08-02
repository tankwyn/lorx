---@meta

---@class lorx.command
lorx.command = {}

---
---Adds a command alias
---
---@param _alias string # Command alias
---@param _command string # Command name
---@param _args string # Command argument, nil for none
---@return orxSTATUS # success / failure
function lorx.command.addAlias(_alias, _command, _args) end

---
---Create a new orxCOMMAND_VAR
---
---@return orxCOMMAND_VAR # The new instance
function lorx.command.commandVar() end

---
---Evaluates a command
---
---@param _commandline string # Command name + arguments
---@return orxCOMMAND_VAR # Command result if found, nil otherwise
function lorx.command.evaluate(_commandline) end

---
---Evaluates a command with a specific GUID
---
---@param _commandline string # Command name + arguments
---@param _guid integer # GUID to use in place of the GUID markers in the command
---@return orxCOMMAND_VAR # Command result if found, nil otherwise
function lorx.command.evaluateWithGUID(_commandline, _guid) end

---
---Executes a command
---
---@param _command string # Command name
---@param _argnumber integer # Number of arguments sent to the command
---@param _arglist orxCOMMAND_VAR[] # List of arguments sent to the command
---@return orxCOMMAND_VAR # Command result if found, nil otherwise
function lorx.command.execute(_command, _argnumber, _arglist) end

---
---Exits from the command module
---
function lorx.command.exit() end

---
---Gets next command using an optional base
---
---@param _base string # Base name, can be set to nil for no base
---@param _previous string # Previous command, nil to get the first command
---@return string # Next command found, nil if none
---@return integer # Length of the common prefix of all potential results, nil to ignore
function lorx.command.getNext(_base, _previous) end

---
---Gets a command's (text) prototype (beware: result won't persist from one call to the other)
---
---@param _command string # Command name
---@return string # Command prototype / empty string
function lorx.command.getPrototype(_command) end

---
---Inits the command module
---
---@return orxSTATUS # success / failure
function lorx.command.init() end

---
---Is a command alias?
---
---@param _alias string # Command alias
---@return boolean # true / false
function lorx.command.isAlias(_alias) end

---
---Is a command registered?
---
---@param _command string # Command name
---@return boolean # true / false
function lorx.command.isRegistered(_command) end

---
---Parses numerical arguments, string arguments will be evaluated to vectors or float when possible
---
---@param _argnumber integer # Number of arguments to parse
---@param _arglist orxCOMMAND_VAR[] # List of arguments to parse
---@return orxSTATUS # success if all numerical arguments have been correctly interpreted, failure otherwise
---@return orxCOMMAND_VAR[] # List of parsed arguments
function lorx.command.parseNumericalArguments(_argnumber, _arglist) end

---
---Removes a command alias
---
---@param _alias string # Command alias
---@return orxSTATUS # success / failure
function lorx.command.removeAlias(_alias) end

---
---Comment on a Lorx sub-command
---
---@param _name string # Sub-command name
---@param _description string # description
---@param _ret string # Returning name
---@vararg string # arg name, must be specified multiple times to match with the number of args
---@return boolean # false if the sub-command is not yet registered
function lorx.command.sComment(_name, _description, _ret, ...) end

---
---Query if a Lorx sub-command is registered or not
---
---@param _name string # Sub-command name
---@return boolean # true or false
function lorx.command.sIsRegistered(_name) end

---
---Register a Lorx sub-command
---
---@param _func function # command function, just like any common lua functions, but conforms to registering prototype
---@param _name string # Sub-command name
---@param _rtype orxCOMMAND_VAR_TYPE # returning type
---@param _reqargs integer # number of required args
---@param _optargs integer # number of optional args
---@vararg orxCOMMAND_VAR_TYPE # arg type, must be specified multiple times to match with `reqargs + optargs`
---@return boolean # true on success, false on failure (e.g. if a sub-command with the specified name has already been registered)
function lorx.command.sRegister(_func, _name, _rtype, _reqargs, _optargs, ...) end

---
---Unregister a Lorx sub-command
---
---@param _name string # Sub-command name
---@return boolean # true on success, false on failure (e.g. if the sub-command is not yet registered)
function lorx.command.sUnregister(_name) end

---
---Command module setup
---
function lorx.command.setup() end

---
---Unregisters a command
---
---@param _command string # Command name
---@return orxSTATUS # success / failure
function lorx.command.unregister(_command) end


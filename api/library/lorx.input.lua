---@meta

---@class lorx.input
lorx.input = {}

---
---Binds an input to a mouse/joystick button, keyboard key or joystick axis
---
---@param _name string # Concerned input name
---@param _type orxINPUT_TYPE # Type of peripheral to bind
---@param _id string # ID of button/key/axis to bind
---@param _mode orxINPUT_MODE # Mode (only used for axis input)
---@param _bindingindex integer # Index of the desired binding, if < 0 the oldest binding will be replaced
---@return orxSTATUS # success / failure
function lorx.input.bind(_name, _type, _id, _mode, _bindingindex) end

---
---Enables/disables working set (without selecting it)
---
---@param _setname string # Set name to enable/disable
---@param _enable boolean # Enable / Disable
---@return orxSTATUS # success / failure
function lorx.input.enableSet(_setname, _enable) end

---
---Exits from Input module
---
function lorx.input.exit() end

---
---Gets active binding (current pressed key/button/...) so as to allow on-the-fly user rebinding
---
---@return orxSTATUS # success if one active binding is found, failure otherwise
---@return orxINPUT_TYPE # Active binding's type (mouse/joystick button, keyboard key or joystick axis)
---@return string # Active binding's ID (ID of button/key/axis to bind)
---@return number # Active binding's value (optional)
function lorx.input.getActiveBinding() end

---
---Gets an input binding (mouse/joystick button, keyboard key or joystick axis) at a given index
---
---@param _name string # Concerned input name
---@param _bindingindex integer # Index of the desired binding, should be less than orxINPUT_KU32_BINDING_NUMBER
---@return orxSTATUS # success if input exists, failure otherwise
---@return orxINPUT_TYPE # Binding type (if a slot is not bound, its value is orxINPUT_TYPE_NONE)
---@return string # Binding ID (button/key/axis)
---@return orxINPUT_MODE # Mode (only used for axis inputs)
function lorx.input.getBinding(_name, _bindingindex) end

---
---Get an input binding list (mouse/keyboard/joystick)
---
---@param _name string # Concerned input name
---@return orxSTATUS # success / failure
---@return orxINPUT_TYPE[] # List of binding types (if a slot is not bound, its value is orxINPUT_TYPE_NONE)
---@return string[] # List of binding IDs (button/key/axis)
---@return orxINPUT_MODE[] # List of modes (only used for axis inputs)
function lorx.input.getBindingList(_name) end

---
---Gets a binding name, don't keep the result as is as it'll get overridden during the next call to this function
---
---@param _type orxINPUT_TYPE # Binding type (mouse/joystick button, keyboard key or joystick axis)
---@param _id string # Binding ID (ID of button/key/axis to bind)
---@param _mode orxINPUT_MODE # Mode (only used for axis input)
---@return string # string (binding's name) if success, empty string otherwise
function lorx.input.getBindingName(_type, _id, _mode) end

---
---Gets a binding type and ID from its name
---
---@param _name string # Concerned input name
---@return orxSTATUS # success if input is valid, failure otherwise
---@return orxINPUT_TYPE # Binding type (mouse/joystick button, keyboard key or joystick axis)
---@return string # Binding ID (ID of button/key/axis to bind)
---@return orxINPUT_MODE # Binding mode (only used for axis input)
function lorx.input.getBindingType(_name) end

---
---Gets the input name to which a mouse/joystick button, keyboard key or joystick axis is bound (at given index)
---
---@param _type orxINPUT_TYPE # Type of peripheral to test
---@param _id string # ID of button/key/axis to test
---@param _mode orxINPUT_MODE # Mode (only used for axis input)
---@param _inputindex integer # Index of the desired input
---@return orxSTATUS # success if binding exists / failure otherwise
---@return string # Input name, mandatory
---@return integer # Binding index for this input, ignored if nil
function lorx.input.getBoundInput(_type, _id, _mode, _inputindex) end

---
---Gets the input count to which a mouse/joystick button, keyboard key or joystick axis is bound
---
---@param _type orxINPUT_TYPE # Type of peripheral to test
---@param _id string # ID of button/key/axis to test
---@param _mode orxINPUT_MODE # Mode (only used for axis input)
---@return integer # Number of bound inputs
function lorx.input.getBoundInputCount(_type, _id, _mode) end

---
---Gets current working set
---
---@return string # Current selected set
function lorx.input.getCurrentSet() end

---
---Gets input multiplier
---
---@param _inputname string # Concerned input name
---@return number # Input multiplier if found, -1.0f otherwise
function lorx.input.getMultiplier(_inputname) end

---
---Gets input threshold
---
---@param _inputname string # Concerned input name
---@return number # Input threshold
function lorx.input.getThreshold(_inputname) end

---
---Gets input value
---
---@param _inputname string # Concerned input name
---@return number # number
function lorx.input.getValue(_inputname) end

---
---Has input been activated (this frame)?
---
---@param _inputname string # Concerned input name
---@return boolean # true if newly activated since last frame, false otherwise
function lorx.input.hasBeenActivated(_inputname) end

---
---Has input been deactivated (this frame)?
---
---@param _inputname string # Concerned input name
---@return boolean # true if newly deactivated since last frame, false otherwise
function lorx.input.hasBeenDeactivated(_inputname) end

---
---Has a new active status since this frame?
---
---@param _inputname string # Concerned input name
---@return boolean # true if active status is new, false otherwise
function lorx.input.hasNewStatus(_inputname) end

---
---Initializes Input module
---
---@return orxSTATUS # success / failure
function lorx.input.init() end

---
---Is input active?
---
---@param _inputname string # Concerned input name
---@return boolean # true if active, false otherwise
function lorx.input.isActive(_inputname) end

---
---Is an input in combine mode?
---
---@param _name string # Concerned input name
---@return boolean # true if the input is in combine mode, false otherwise
function lorx.input.isInCombineMode(_name) end

---
---Is working set enabled (includes current working set)?
---
---@param _setname string # Set name to check
---@return boolean # true / false
function lorx.input.isSetEnabled(_setname) end

---
---Loads inputs from config
---
---@param _filename string # File name to load, will use current loaded config if orxSTRING_EMPTY/nil
---@return orxSTATUS # success / failure
function lorx.input.load(_filename) end

---
---Removes a set
---
---@param _setname string # Set name to remove
---@return orxSTATUS # success / failure
function lorx.input.removeSet(_setname) end

---
---Resets input value (peripheral inputs will then be used instead of code ones)
---
---@param _inputname string # Concerned input name
---@return orxSTATUS # success / failure
function lorx.input.resetValue(_inputname) end

---
---Saves inputs to config
---
---@param _filename string # File name
---@return orxSTATUS # success / failure
function lorx.input.save(_filename) end

---
---Selects (and enables) current working set
---
---@param _setname string # Set name to select
---@return orxSTATUS # success / failure
function lorx.input.selectSet(_setname) end

---
---Sets an input combine mode
---
---@param _name string # Concerned input name
---@param _combine boolean # If orxTRUE, all assigned bindings need to be active in order to activate input, otherwise input will be considered active if any of its binding is
---@return orxSTATUS # success / failure
function lorx.input.setCombineMode(_name, _combine) end

---
---Sets input multiplier, if not set the default global multiplier will be used
---
---@param _inputname string # Concerned input name
---@param _multiplier number # Multiplier value, can be negative
---@return orxSTATUS # success / failure
function lorx.input.setMultiplier(_inputname, _multiplier) end

---
---Sets permanent input value (will prevail on peripheral inputs till reset)
---
---@param _inputname string # Concerned input name
---@param _value number # Value to set, orxFLOAT_0 to deactivate
---@return orxSTATUS # success / failure
function lorx.input.setPermanentValue(_inputname, _value) end

---
---Sets input threshold, if not set the default global threshold will be used
---
---@param _inputname string # Concerned input name
---@param _threshold number # Threshold value (between 0.0f and 1.0f)
---@return orxSTATUS # success / failure
function lorx.input.setThreshold(_inputname, _threshold) end

---
---Sets current set's type flags, only set types will be polled when updating the set (use orxINPUT_GET_FLAG(TYPE) in order to get the flag that matches a type)
---
---@param _addtypeflags integer # Type flags to add
---@param _removetypeflags integer # Type flags to remove
---@return orxSTATUS # success / failure
function lorx.input.setTypeFlags(_addtypeflags, _removetypeflags) end

---
---Sets input value (will prevail on peripheral inputs only once)
---
---@param _inputname string # Concerned input name
---@param _value number # Value to set, orxFLOAT_0 to deactivate
---@return orxSTATUS # success / failure
function lorx.input.setValue(_inputname, _value) end

---
---Input module setup
---
function lorx.input.setup() end

---
---Unbinds an input
---
---@param _name string # Concerned input name
---@param _bindingindex integer # Index of the desired binding, if < 0 all the bindings will be removed
---@return orxSTATUS # success / failure
function lorx.input.unbind(_name, _bindingindex) end


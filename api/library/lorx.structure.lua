---@meta

---@class lorx.structure
lorx.structure = {}

---
---Creates a clean structure for given type
---
---@param _structureid orxSTRUCTURE_ID # Concerned structure ID
---@return orxSTRUCTURE # orxSTRUCTURE / nil
function lorx.structure.create(_structureid) end

---
---Decreases structure reference count
---
---@param _structure voidptr # Concerned structure
function lorx.structure.decreaseCount(_structure) end

---
---Deletes a structure (needs to be cleaned beforehand)
---
---@param _structure voidptr # Concerned structure
---@return orxSTATUS # success / failure
function lorx.structure.delete(_structure) end

---
---Exits from the structure module
---
function lorx.structure.exit() end

---
---Gets structure given its GUID
---
---@param _guid integer # Structure's GUID
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function lorx.structure.get(_guid) end

---
---Gets structure tree child
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getChild(_structure) end

---
---Gets given type structure count
---
---@param _structureid orxSTRUCTURE_ID # Concerned structure ID
---@return integer # integer (u32) / orxU32_UNDEFINED
function lorx.structure.getCount(_structureid) end

---
---Gets first stored structure (first list cell or tree root depending on storage type)
---
---@param _structureid orxSTRUCTURE_ID # Concerned structure ID
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getFirst(_structureid) end

---
---Gets structure flags
---
---@param _structure voidptr # (const) Concerned structure
---@param _mask integer # Mask to use for getting flags
---@return integer # integer (u32)
function lorx.structure.getFlags(_structure, _mask) end

---
---Gets structure GUID
---
---@param _structure voidptr # (const) Concerned structure
---@return integer # integer (u64)
function lorx.structure.getGUID(_structure) end

---
---Gets structure ID
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE_ID # orxSTRUCTURE_ID
function lorx.structure.getID(_structure) end

---
---Gets structure ID string
---
---@param _id orxSTRUCTURE_ID # Concerned ID
---@return string # Corresponding literal string
function lorx.structure.getIDString(_id) end

---
---Gets last stored structure (last list cell or tree root depending on storage type)
---
---@param _structureid orxSTRUCTURE_ID # Concerned structure ID
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getLast(_structureid) end

---
---Gets structure list next
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getNext(_structure) end

---
---Gets structure's owner
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE # orxSTRUCTURE / nil if not found/alive
function lorx.structure.getOwner(_structure) end

---
---Gets structure tree parent
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getParent(_structure) end

---
---Gets structure pointer / debug mode
---
---@param _structure voidptr # (const) Concerned structure
---@param _structureid orxSTRUCTURE_ID # ID to test the structure against
---@return orxSTRUCTURE # Valid orxSTRUCTURE, nil otherwise
function lorx.structure.getPointer(_structure, _structureid) end

---
---Gets structure list previous
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getPrevious(_structure) end

---
---Gets structure reference count
---
---@param _structure voidptr # (const) Concerned structure
---@return integer # integer (u32)
function lorx.structure.getRefCount(_structure) end

---
---Gets structure tree sibling
---
---@param _structure voidptr # (const) Concerned structure
---@return orxSTRUCTURE # orxSTRUCTURE
function lorx.structure.getSibling(_structure) end

---
---Gets structure storage type
---
---@param _structureid orxSTRUCTURE_ID # Concerned structure ID
---@return orxSTRUCTURE_STORAGE_TYPE # orxSTRUCTURE_STORAGE_TYPE
function lorx.structure.getStorageType(_structureid) end

---
---Increases structure reference count
---
---@param _structure voidptr # Concerned structure
function lorx.structure.increaseCount(_structure) end

---
---Initializess the structure module
---
---@return orxSTATUS # success / failure
function lorx.structure.init() end

---
---Logs all user-generated (& optionally private) active structures
---
---@param _private boolean # Include all private structures in the log
---@return orxSTATUS # success / failure
function lorx.structure.logAll(_private) end

---
---Sets structure flags
---
---@param _structure voidptr # Concerned structure
---@param _addflags integer # Flags to add
---@param _removeflags integer # Flags to remove
function lorx.structure.setFlags(_structure, _addflags, _removeflags) end

---
---Sets structure owner
---
---@param _structure voidptr # Concerned structure
---@param _owner voidptr # Structure to set as owner
---@return orxSTATUS # success / failure
function lorx.structure.setOwner(_structure, _owner) end

---
---Sets structure tree parent
---
---@param _structure voidptr # Concerned structure
---@param _parent voidptr # Structure to set as parent
---@return orxSTATUS # success / failure
function lorx.structure.setParent(_structure, _parent) end

---
---Structure module setup
---
function lorx.structure.setup() end

---
---Tests all flags against structure ones
---
---@param _structure voidptr # (const) Concerned structure
---@param _flags integer # Flags to test
---@return boolean # true / false
function lorx.structure.testAllFlags(_structure, _flags) end

---
---Tests flags against structure ones
---
---@param _structure voidptr # (const) Concerned structure
---@param _flags integer # Flags to test
---@return boolean # true / false
function lorx.structure.testFlags(_structure, _flags) end

---
---Unregisters a given ID
---
---@param _structureid orxSTRUCTURE_ID # Concerned structure ID
---@return orxSTATUS # success / failure
function lorx.structure.unregister(_structureid) end

---
---Updates structure if update function was registered for the structure type
---
---@param _structure voidptr # Concerned structure
---@param _caller voidptr # (const) Caller structure
---@param _clockinfo orxCLOCK_INFO # (const) Update associated clock info
---@return orxSTATUS # success / failure
function lorx.structure.update(_structure, _caller, _clockinfo) end


---@meta

---@class lorx.resource
lorx.resource = {}

---
---Adds a storage for a given resource group
---
---@param _group string # Concerned resource group
---@param _storage string # Description of the storage, as understood by one of the resource type
---@param _addfirst boolean # If true this storage will be used *before* any already added ones, otherwise it'll be used *after* all those
---@return orxSTATUS # success / failure
function lorx.resource.addStorage(_group, _storage, _addfirst) end

---
---Clears cache for specific resource group(s)
---
---@param _group string # Concerned resource group, nil for all groups
---@return orxSTATUS # success / failure
function lorx.resource.clearCache(_group) end

---
---Closes a resource
---
---@param _resource orxHANDLE # Concerned resource
function lorx.resource.close(_resource) end

---
---Deletes a resource, given its location
---
---@param _location string # Location of the resource to delete
---@return orxSTATUS # success upon success, failure otherwise
function lorx.resource.delete(_location) end

---
---Exits from the resource module
---
function lorx.resource.exit() end

---
---Gets resource group at given index
---
---@param _index integer # Index of resource group
---@return string # Resource group if index is valid, nil otherwise
function lorx.resource.getGroup(_index) end

---
---Gets number of resource groups
---
---@return integer # Number of resource groups
function lorx.resource.getGroupCount() end

---
---Gets the literal location of a resource
---
---@param _resource orxHANDLE # Concerned resource
---@return string # Literal location string
function lorx.resource.getLocation(_resource) end

---
---Gets the resource path from a location
---
---@param _location string # Location of the concerned resource
---@return string # Path string if valid, empty string otherwise
function lorx.resource.getPath(_location) end

---
---Gets pending operation count for a given resource
---
---@param _resource orxHANDLE # Concerned resource
---@return integer # Number of pending asynchronous operations for that resource
function lorx.resource.getPendingOpCount(_resource) end

---
---Gets the size, in bytes, of a resource
---
---@param _resource orxHANDLE # Concerned resource
---@return integer # Size of the resource, in bytes
function lorx.resource.getSize(_resource) end

---
---Gets storage at given index for a given resource group
---
---@param _group string # Concerned resource group
---@param _index integer # Index of storage
---@return string # Storage if index is valid, nil otherwise
function lorx.resource.getStorage(_group, _index) end

---
---Gets number of storages for a given resource group
---
---@param _group string # Concerned resource group
---@return integer # Number of storages for this resource group
function lorx.resource.getStorageCount(_group) end

---
---Gets the time of last modification of a resource
---
---@param _location string # Location of the concerned resource
---@return integer # Time of last modification, in seconds since epoch, if found, 0 otherwise
function lorx.resource.getTime(_location) end

---
---Gets total pending operation count
---
---@return integer # Number of total pending asynchronous operations
function lorx.resource.getTotalPendingOpCount() end

---
---Gets number of registered resource types
---
---@return integer # Number of registered resource types
function lorx.resource.getTypeCount() end

---
---Gets registered type info at given index
---
---@param _index integer # Index of storage
---@return string # Type tag string if index is valid, nil otherwise
function lorx.resource.getTypeTag(_index) end

---
---Inits the resource module
---
---@return orxSTATUS # success / failure
function lorx.resource.init() end

---
---Gets the location of an *existing* resource for a given group, location gets cached if found
---
---@param _group string # Concerned resource group
---@param _name string # Name of the resource to locate
---@return string # Location string if found, nil otherwise
function lorx.resource.locate(_group, _name) end

---
---Gets the location for a resource (existing or not) in a *specific storage*, for a given group. The location doesn't get cached and thus needs to be copied by the caller before the next call
---
---@param _group string # Concerned resource group
---@param _storage string # Concerned storage, if nil then the highest priority storage will be used
---@param _name string # Name of the resource
---@return string # Location string if found, nil otherwise
function lorx.resource.locateInStorage(_group, _storage, _name) end

---
---Opens the resource at the given location
---
---@param _location string # Location of the resource to open
---@param _erasemode boolean # If true, the file will be erased if existing or created otherwise, if false, no content will get destroyed when opening
---@return orxHANDLE # Handle to the open location, orxHANDLE_UNDEFINED otherwise
function lorx.resource.open(_location, _erasemode) end

---
---Reloads storage from config
---
---@return orxSTATUS # success / failure
function lorx.resource.reloadStorage() end

---
---Removes storage(s) for specific resource group(s)
---
---@param _group string # Concerned resource group, nil for all groups
---@param _storage string # Concerned storage, nil for all storages (except default one)
---@return orxSTATUS # success / failure
function lorx.resource.removeStorage(_group, _storage) end

---
---Seeks a position in a given resource (moves cursor)
---
---@param _resource orxHANDLE # Concerned resource
---@param _offset integer # Number of bytes to offset from 'origin'
---@param _whence orxSEEK_OFFSET_WHENCE # Starting point for the offset computation (start, current position or end)
---@return integer # Absolute cursor position if successful, -1 otherwise
function lorx.resource.seek(_resource, _offset, _whence) end

---
---Resource module setup
---
function lorx.resource.setup() end

---
---Syncs all cached resources for specific resource group(s): update, add or remove events will be sent for all resources that are not located in their original storage anymore
---
---@param _group string # Concerned resource group, nil for all groups
---@return orxSTATUS # success / failure
function lorx.resource.sync(_group) end

---
---Tells the position of the cursor in a given resource
---
---@param _resource orxHANDLE # Concerned resource
---@return integer # Position (offset), in bytes
function lorx.resource.tell(_resource) end


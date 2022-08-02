---@meta

---@class lorx.module
lorx.module = {}

---
---Adds dependencies between 2 modules
---
---@param _moduleid orxMODULE_ID # Concerned module ID
---@param _dependid orxMODULE_ID # Module ID of the needed module
function lorx.module.addDependency(_moduleid, _dependid) end

---
---Adds optional dependencies between 2 modules
---
---@param _moduleid orxMODULE_ID # Concerned module ID
---@param _dependid orxMODULE_ID # Module ID of the optionally needed module
function lorx.module.addOptionalDependency(_moduleid, _dependid) end

---
---Exits from a module
---
---@param _moduleid orxMODULE_ID # Concerned module ID
function lorx.module.exit(_moduleid) end

---
---Gets module name
---
---@param _moduleid orxMODULE_ID # Concerned module ID
---@return string # Module name / empty string
function lorx.module.getName(_moduleid) end

---
---Inits a module
---
---@param _moduleid orxMODULE_ID # Concerned module ID
---@return orxSTATUS # success / failure
function lorx.module.init(_moduleid) end

---
---Is module initialized?
---
---@param _moduleid orxMODULE_ID # Concerned module ID
---@return boolean # true / false
function lorx.module.isInitialized(_moduleid) end


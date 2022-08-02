---@meta

---@class lorx.animset
lorx.animset = {}

---
---Clears cache (if any animset is still in active use, it'll remain in memory until not referenced anymore)
---
---@return orxSTATUS # success / failure
function lorx.animset.clearCache() end

---
---Creates an empty AnimSet
---
---@param _size integer # Storage size
---@return orxANIMSET # 
function lorx.animset.create(_size) end

---
---Creates an animation set from config
---
---@param _configid string # Config ID
---@return orxANIMSET # orxANIMSET / nil
function lorx.animset.createFromConfig(_configid) end

---
---Exits from the AnimSet module
---
function lorx.animset.exit() end

---
---Inits the AnimSet module
---
---@return orxSTATUS # success / failure
function lorx.animset.init() end

---
---AnimSet module setup
---
function lorx.animset.setup() end


---@meta

---@class lorx.anim
lorx.anim = {}

---
---Create a new orxANIM_CUSTOM_EVENT
---
---@return orxANIM_CUSTOM_EVENT # The new instance
function lorx.anim.animCustomEvent() end

---
---Creates an empty animation
---
---@param _flags integer # Flags for created animation
---@param _keynumber integer # Number of keys for this animation
---@param _eventnumber integer # Number of events for this animation
---@return orxANIM # Created orxANIM / nil
function lorx.anim.create(_flags, _keynumber, _eventnumber) end

---
---Exits from the Anim module
---
function lorx.anim.exit() end

---
---Inits the Anim module
---
---@return orxSTATUS # 
function lorx.anim.init() end

---
---Anim module setup
---
function lorx.anim.setup() end


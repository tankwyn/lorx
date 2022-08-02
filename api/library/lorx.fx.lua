---@meta

---@class lorx.fx
lorx.fx = {}

---
---Clears cache (if any FX is still in active use, it'll remain in memory until not referenced anymore)
---
---@return orxSTATUS # success / failure
function lorx.fx.clearCache() end

---
---Creates an empty FX
---
---@return orxFX # orxFX / nil
function lorx.fx.create() end

---
---Creates an FX from config
---
---@param _configid string # Config ID
---@return orxFX # orxFX / nil
function lorx.fx.createFromConfig(_configid) end

---
---Exits from the FX module
---
function lorx.fx.exit() end

---
---Inits the FX module
---
---@return orxSTATUS # success / failure
function lorx.fx.init() end

---
---FX module setup
---
function lorx.fx.setup() end


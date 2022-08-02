---@meta

---@class lorx.spawner
lorx.spawner = {}

---
---Creates an empty spawner
---
---@return orxSPAWNER # orxSPAWNER / nil
function lorx.spawner.create() end

---
---Creates a spawner from config
---
---@param _configid string # Config ID
---@return orxSPAWNER # orxSPAWNER / nil
function lorx.spawner.createFromConfig(_configid) end

---
---Exits from the spawner module
---
function lorx.spawner.exit() end

---
---Inits the spawner module
---
---@return orxSTATUS # success / failure
function lorx.spawner.init() end

---
---Spawner module setup
---
function lorx.spawner.setup() end


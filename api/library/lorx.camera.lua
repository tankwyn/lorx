---@meta

---@class lorx.camera
lorx.camera = {}

---
---Creates a camera
---
---@param _flags integer # Camera flags (2D / ...)
---@return orxCAMERA # Created orxCAMERA / nil
function lorx.camera.create(_flags) end

---
---Creates a camera from config
---
---@param _configid string # Config ID
---@return orxCAMERA # orxCAMERA / nil
function lorx.camera.createFromConfig(_configid) end

---
---Exits from the Camera module
---
function lorx.camera.exit() end

---
---Gets camera given its name
---
---@param _name string # Camera name
---@return orxCAMERA # orxCAMERA / nil
function lorx.camera.get(_name) end

---
---Inits the Camera module
---
---@return orxSTATUS # 
function lorx.camera.init() end

---
---Camera module setup
---
function lorx.camera.setup() end


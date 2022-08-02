---@meta

---@class lorx.viewport
lorx.viewport = {}

---
---Creates a viewport
---
---@return orxVIEWPORT # Created orxVIEWPORT / nil
function lorx.viewport.create() end

---
---Creates a viewport from config
---
---@param _configid string # Config ID
---@return orxVIEWPORT # orxVIEWPORT / nil
function lorx.viewport.createFromConfig(_configid) end

---
---Exits from the viewport module
---
function lorx.viewport.exit() end

---
---Gets viewport given its name
---
---@param _name string # Camera name
---@return orxVIEWPORT # orxVIEWPORT / nil
function lorx.viewport.get(_name) end

---
---Inits the viewport module
---
---@return orxSTATUS # 
function lorx.viewport.init() end

---
---Viewport module setup
---
function lorx.viewport.setup() end


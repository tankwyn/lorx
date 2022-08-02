---@meta

---@class lorx.shader
lorx.shader = {}

---
---Clears cache (if any shader is still in active use, it'll remain in memory until not referenced anymore)
---
---@return orxSTATUS # success / failure
function lorx.shader.clearCache() end

---
---Creates an empty shader
---
---@return orxSHADER # orxSHADER / nil
function lorx.shader.create() end

---
---Creates a shader from config
---
---@param _configid string # Config ID
---@return orxSHADER # orxSHADER / nil
function lorx.shader.createFromConfig(_configid) end

---
---Exits from the shader module
---
function lorx.shader.exit() end

---
---Inits the shader module
---
---@return orxSTATUS # success / failure
function lorx.shader.init() end

---
---Shader module setup
---
function lorx.shader.setup() end


---@meta

---@class lorx.animpointer
lorx.animpointer = {}

---
---Creates an empty AnimPointer
---
---@param _animset orxANIMSET # AnimSet reference
---@return orxANIMPOINTER # orxANIMPOINTER / nil
function lorx.animpointer.create(_animset) end

---
---Creates an animation pointer from config
---
---@param _configid string # Config ID
---@return orxANIMPOINTER # orxANIMPOINTER / nil
function lorx.animpointer.createFromConfig(_configid) end

---
---Exits from the AnimPointer module
---
function lorx.animpointer.exit() end

---
---Inits the AnimPointer module
---
---@return orxSTATUS # success / failure
function lorx.animpointer.init() end

---
---AnimPointer module setup
---
function lorx.animpointer.setup() end


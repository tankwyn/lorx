---@meta

---@class lorx.graphic
lorx.graphic = {}

---
---Aligns a vector inside a box using flags
---
---@param _alignflags integer # Align flags
---@param _box orxAABOX # (const) Concerned box
---@return orxVECTOR # orxVECTOR
function lorx.graphic.alignVector(_alignflags, _box) end

---
---Creates an empty graphic
---
---@return orxGRAPHIC # Created orxGRAPHIC / nil
function lorx.graphic.create() end

---
---Creates a graphic from config
---
---@param _configid string # Config ID
---@return orxGRAPHIC # orxGRAPHIC / nil
function lorx.graphic.createFromConfig(_configid) end

---
---Exits from the Graphic module
---
function lorx.graphic.exit() end

---
---Gets alignment flags from literals
---
---@param _align string # Align literals
---@return integer # Align flags
function lorx.graphic.getAlignFlags(_align) end

---
---Inits the Graphic module
---
---@return orxSTATUS # 
function lorx.graphic.init() end

---
---Graphic module setup
---
function lorx.graphic.setup() end


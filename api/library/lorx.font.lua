---@meta

---@class lorx.font
lorx.font = {}

---
---Creates an empty font
---
---@return orxFONT # orxFONT / nil
function lorx.font.create() end

---
---Creates a font from config
---
---@param _configid string # Config ID
---@return orxFONT # orxFONT / nil
function lorx.font.createFromConfig(_configid) end

---
---Exits from the font module
---
function lorx.font.exit() end

---
---Gets default font
---
---@return orxFONT # (const) Default font / nil
function lorx.font.getDefaultFontConst() end

---
---Inits the font module
---
---@return orxSTATUS # success / failure
function lorx.font.init() end

---
---Setups the font module
---
function lorx.font.setup() end


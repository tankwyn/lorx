---@meta

---@class lorx.texture
lorx.texture = {}

---
---Clears cache (if any texture is still in active use, it'll remain in memory until not referenced anymore)
---
---@return orxSTATUS # success / failure
function lorx.texture.clearCache() end

---
---Creates an empty texture
---
---@return orxTEXTURE # orxTEXTURE / nil
function lorx.texture.create() end

---
---Creates a texture from a bitmap file
---
---@param _filename string # Name of the bitmap
---@param _keepincache boolean # Should be kept in cache after no more references exist?
---@return orxTEXTURE # orxTEXTURE / nil
function lorx.texture.createFromFile(_filename, _keepincache) end

---
---Exits from the texture module
---
function lorx.texture.exit() end

---
---Gets texture given its name
---
---@param _name string # Texture name
---@return orxTEXTURE # orxTEXTURE / nil
function lorx.texture.get(_name) end

---
---Gets pending load count
---
---@return integer # Pending load count
function lorx.texture.getLoadCount() end

---
---Gets screen texture
---
---@return orxTEXTURE # Screen texture / nil
function lorx.texture.getScreenTexture() end

---
---Inits the texture module
---
---@return orxSTATUS # success / failure
function lorx.texture.init() end

---
---Setups the texture module
---
function lorx.texture.setup() end


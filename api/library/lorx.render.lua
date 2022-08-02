---@meta

---@class lorx.render
lorx.render = {}

---
---Exits from the render module
---
function lorx.render.exit() end

---
---Get a screen position given a world one and a viewport (rendering position)
---
---@param _worldposition orxVECTOR # (const) Concerned world position
---@param _viewport orxVIEWPORT # (const) Concerned viewport, if nil then the last viewport with a camera will be used
---@return orxVECTOR # orxVECTOR if found (can be off-screen), nil otherwise
function lorx.render.getScreenPosition(_worldposition, _viewport) end

---
---Get a world position given a screen one (absolute picking)
---
---@param _screenposition orxVECTOR # (const) Concerned screen position
---@param _viewport orxVIEWPORT # (const) Concerned viewport, if nil then either the last viewport that contains the position (if any), or the last viewport with a camera in the list if none contains the position
---@return orxVECTOR # orxVECTOR if found *inside* the display surface, nil otherwise
function lorx.render.getWorldPosition(_screenposition, _viewport) end

---
---Inits the render module
---
---@return orxSTATUS # success / failure
function lorx.render.init() end

---
---Render module setup
---
function lorx.render.setup() end


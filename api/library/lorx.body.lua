---@meta

---@class lorx.body
lorx.body = {}

---
---Picks bodies in contact with the given axis aligned box.
---
---@param _box orxAABOX # (const) Box used for picking
---@param _selfflags integer # Selfs flags used for filtering (0xFFFF for no filtering)
---@param _checkmask integer # Check mask used for filtering (0xFFFF for no filtering)
---@param _bodylist orxBODY[] # List of bodies to fill
---@param _number integer # Number of bodies
---@return integer # Count of actual found bodies. It might be larger than the given array, in which case you'd need to pass a larger array to retrieve them all.
function lorx.body.boxPick(_box, _selfflags, _checkmask, _bodylist, _number) end

---
---Creates a body from config
---
---@param _owner orxSTRUCTURE # (const) Body's owner used for collision callbacks (usually an orxOBJECT)
---@param _configid string # Body config ID
---@return orxBODY # Created orxGRAPHIC / nil
function lorx.body.createFromConfig(_owner, _configid) end

---
---Exits from the Body module
---
function lorx.body.exit() end

---
---Inits the Body module
---
---@return orxSTATUS # 
function lorx.body.init() end

---
---Issues a raycast to test for potential bodies in the way
---
---@param _begin orxVECTOR # (const) Beginning of raycast
---@param _end orxVECTOR # (const) End of raycast
---@param _selfflags integer # Selfs flags used for filtering (0xFFFF for no filtering)
---@param _checkmask integer # Check mask used for filtering (0xFFFF for no filtering)
---@param _earlyexit boolean # Should stop as soon as an object has been hit (which might not be the closest)
---@param _contact orxVECTOR # If non-nil and a contact is found it will be stored here
---@param _normal orxVECTOR # If non-nil and a contact is found, its normal will be stored here
---@return orxBODY # Colliding orxBODY / nil
function lorx.body.raycast(_begin, _end, _selfflags, _checkmask, _earlyexit, _contact, _normal) end

---
---Body module setup
---
function lorx.body.setup() end


---@meta

---@class lorx.physics
lorx.physics = {}

---
---Picks bodies in contact with the given axis aligned box
---
---@param _box orxAABOX # (const) Box used for picking
---@param _selfflags integer # Selfs flags used for filtering (0xFFFF for no filtering)
---@param _checkmask integer # Check mask used for filtering (0xFFFF for no filtering)
---@param _userdatalist orxHANDLE[] # List of user data to fill
---@param _number integer # Number of user data
---@return integer # Count of actual found bodies. It might be larger than the given array, in which case you'd need to pass a larger array to retrieve them all.
function lorx.physics.boxPick(_box, _selfflags, _checkmask, _userdatalist, _number) end

---
---Enables/disables physics simulation
---
---@param _enable boolean # Enable / disable
function lorx.physics.enableSimulation(_enable) end

---
---Exits from the physics module
---
function lorx.physics.exit() end

---
---Gets collision flag literal name
---
---@param _flag integer # Concerned collision flag numerical value
---@return string # Flag's name
function lorx.physics.getCollisionFlagName(_flag) end

---
---Gets collision flag numerical value
---
---@param _flag string # Concerned collision flag literal name
---@return integer # Flag's value
function lorx.physics.getCollisionFlagValue(_flag) end

---
---Gets physics gravity
---
---@return orxVECTOR # orxVECTOR / nil
function lorx.physics.getGravity() end

---
---Inits the physics module
---
---@return orxSTATUS # success / failure
function lorx.physics.init() end

---
---Issues a raycast to test for potential physics bodies in the way
---
---@param _begin orxVECTOR # (const) Beginning of raycast
---@param _end orxVECTOR # (const) End of raycast
---@param _selfflags integer # Selfs flags used for filtering (0xFFFF for no filtering)
---@param _checkmask integer # Check mask used for filtering (0xFFFF for no filtering)
---@param _earlyexit boolean # Should stop as soon as an object has been hit (which might not be the closest)
---@param _contact orxVECTOR # If non-nil and a contact is found it will be stored here
---@param _normal orxVECTOR # If non-nil and a contact is found, its normal will be stored here
---@return orxHANDLE # Colliding body's user data / orxHANDLE_UNDEFINED
function lorx.physics.raycast(_begin, _end, _selfflags, _checkmask, _earlyexit, _contact, _normal) end

---
---Sets physics gravity
---
---@param _gravity orxVECTOR # (const) Gravity to set
---@return orxSTATUS # success / failure
function lorx.physics.setGravity(_gravity) end

---
---Physics module setup
---
function lorx.physics.setup() end


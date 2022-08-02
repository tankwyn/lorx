---@meta

---@class lorx.object
lorx.object = {}

---
---Picks the first active object with size in contact with the given box, withing a given group. Use orxObject_CreateNeighborList() to get all the objects in the box.
---
---@param _box orxOBOX # (const) Box to use for picking
---@param _groupid integer # Group ID to consider, orxSTRINGID_UNDEFINED for all
---@return orxOBJECT # orxOBJECT / nil
function lorx.object.boxPick(_box, _groupid) end

---
---Creates an empty object.
---
---@return orxOBJECT # orxOBJECT / nil
function lorx.object.create() end

---
---Creates an object from config.
---
---@param _configid string # Config ID
---@return orxOBJECT # orxOBJECT / nil
function lorx.object.createFromConfig(_configid) end

---
---Exits from the object module.
---
function lorx.object.exit() end

---
---Gets default group ID.
---
---@return integer # Default group ID
function lorx.object.getDefaultGroupID() end

---
---Get the neighboring objects
---
---@param _box orxOBOX # Box to select objects
---@param _groupid integer # Group ID, orxSTRINGID_UNDEFINED for all
---@return orxOBJECT[] # Objects in the box
function lorx.object.getNeighborList(_box, _groupid) end

---
---Gets next object in group.
---
---@param _object orxOBJECT # (const) Concerned object, nil to get the first one
---@param _groupid integer # Group ID to consider, orxSTRINGID_UNDEFINED for all
---@return orxOBJECT # orxOBJECT / nil
function lorx.object.getNext(_object, _groupid) end

---
---Gets next enabled object.
---
---@param _object orxOBJECT # (const) Concerned object, nil to get the first one
---@param _groupid integer # Group ID to consider, orxSTRINGID_UNDEFINED for all
---@return orxOBJECT # orxOBJECT / nil
function lorx.object.getNextEnabled(_object, _groupid) end

---
---Structure used by an object get accessor, given its structure ID. Structure must then be cast correctly. (see helper macro #orxOBJECT_GET_STRUCTURE())
---
---@param _object orxOBJECT # (const) Concerned object
---@param _structureid orxSTRUCTURE_ID # ID of the structure to get
---@return orxSTRUCTURE # orxSTRUCTURE / nil
function lorx.object.getStructure(_object, _structureid) end

---
---Inits the object module.
---
---@return orxSTATUS # success / failure
function lorx.object.init() end

---
---Picks the first active object with size "under" the given position, within a given group. See orxObject_BoxPick(), orxObject_CreateNeighborList() and orxObject_Raycast for other ways of picking objects.
---
---@param _position orxVECTOR # (const) Position to pick from
---@param _groupid integer # Group ID to consider, orxSTRINGID_UNDEFINED for all
---@return orxOBJECT # orxOBJECT / nil
function lorx.object.pick(_position, _groupid) end

---
---Issues a raycast to test for potential objects in the way.
---
---@param _begin orxVECTOR # (const) Beginning of raycast
---@param _end orxVECTOR # (const) End of raycast
---@param _selfflags integer # Selfs flags used for filtering (0xFFFF for no filtering)
---@param _checkmask integer # Check mask used for filtering (0xFFFF for no filtering)
---@param _earlyexit boolean # Should stop as soon as an object has been hit (which might not be the closest)
---@param _contact orxVECTOR # If non-nil and a contact is found it will be stored here
---@param _normal orxVECTOR # If non-nil and a contact is found, its normal will be stored here
---@return orxOBJECT # Colliding orxOBJECT / nil
function lorx.object.raycast(_begin, _end, _selfflags, _checkmask, _earlyexit, _contact, _normal) end

---
---Object module setup
---
function lorx.object.setup() end


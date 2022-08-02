if os.getenv("LOCAL_LUA_DEBUGGER_VSCODE") == "1" then
    require("lldebugger").start()
end

-- lorx modules
local loinput = lorx.input
local lovec = lorx.vector
local locfg = lorx.config
local loobj = lorx.object
local lovp = lorx.viewport
local lostrc = lorx.structure
local lostr = lorx.string
local loevent = lorx.event

-- variables
local currws = 0
local worldtable = nil
local universe = nil
local camobj = nil
local cammove = nil
local prevcampos = nil


local function applySettings()
    locfg.setParent("World", locfg.getListString("Settings", currws))
    locfg.getString("UpdateSettings")
    worldtable = {}
    lostrc.get(universe):toObject():delete()
    universe = loobj.createFromConfig("Universe"):getGUID()
end

---@param e lorxSPAWNER_EVENT
local function spawner_cb(e)
    if e.id == 'spawn' then
        e.recipient:setOwner(e.sender:getOwner())
    end
end

local function init()
    lovp.createFromConfig("MainViewport")
    locfg.pushSection("World")
    worldtable = {}
    camobj = loobj.createFromConfig("Camera")
    assert(camobj ~= nil)
    prevcampos = camobj:getPosition()
    universe = loobj.createFromConfig("Universe"):getGUID()
    loobj.createFromConfig("Scene")
    currws = math.floor(locfg.getListCount("Settings")/2)
    applySettings()

    lorx.registerSpawnerHandler(spawner_cb)
end

local dt = 0
local function update(ci)
    dt = dt + ci.dt
    if dt > 2 then print('lua memory usage (MB):', collectgarbage('count')/1024) dt = dt - 2 end

    local vx = loinput.getValue("Right") - loinput.getValue("Left")
    local vy = loinput.getValue("Down") - loinput.getValue("Up")
    cammove = ci.dt * lovec.vector(vx, vy, 0) * lovec.lerp(locfg.getListVector("CameraSpeed", 0), locfg.getListVector("CameraSpeed", 1), loinput.getValue("Fast"))

    -- update camera position
    local campos
    if cammove.x ~= 0 or cammove.y ~= 0 then
        campos= camobj:getPosition() + cammove:round()
        camobj:setPosition(campos)
    else
        campos = camobj:getPosition()
    end

    -- settings update
    if loinput.hasBeenActivated("CycleUp") or loinput.hasBeenActivated("CycleDown") then
        local newsettings
        if loinput.isActive("CycleUp") then
            newsettings = math.min(currws + 1, locfg.getListCount("Settings") - 1)
        else
            newsettings = math.max(currws - 1, 0)
        end
        if newsettings ~= currws then
            currws = newsettings
            applySettings()
            loobj.createFromConfig("ClearSnap")
        end
    end

    local cellsize = locfg.getFloat("CellSize")
    local cellpos = (campos/cellsize):round()
    local prevcellpos = (prevcampos/cellsize):round()

    for i=-1,1 do
        for j=-1,1 do
            -- create new neighboring cells
            local x = cellpos.x + i
            local y = cellpos.y + j
            local cellid = lostr.hash(string.format("%i,%i", x, y))
            local cell = worldtable[cellid]
            if cell == nil then
                cell = loobj.createFromConfig("Cell")
                cell:setPosition(lovec.vector(x*cellsize, y*cellsize, 0))
                worldtable[cellid] = cell
            else
                if not cell:isEnabled() then
                    cell:enableRecursive(true)
                end
            end

            -- disable out-of-range cells
            x = prevcellpos.x + i
            y = prevcellpos.y + j
            cellid = lostr.hash(string.format("%i,%i", x, y))
            if x < cellpos.x - 1 or x > cellpos.x + 1 or y < cellpos.y - 1 or y > cellpos.y + 1 then
                cell = worldtable[cellid]
                assert(cell)
                assert(cell:isEnabled())
                cell:enableRecursive(false)
            end
        end
    end

    prevcampos = campos

    if loinput.hasBeenActivated("Zoom") then
        camobj:addTimeLineTrack("ZoomOut")
    elseif loinput.hasBeenDeactivated("Zoom") then
        camobj:addTimeLineTrack("ZoomIn")
    end

    if loinput.hasBeenActivated("Snap") then
        lovp.createFromConfig("SnapViewport")
        locfg.pushSection("Runtime")
        locfg.setVector("SnapPos", prevcampos)
        locfg.popSection()
        loobj.createFromConfig("Snapshot")
    else
        local snapviewport = lovp.get("SnapViewport")
        if snapviewport ~= nil then
            snapviewport:delete()
        end

        if loinput.hasBeenActivated("Recall") then
            locfg.pushSection("Runtime")
            local pos = locfg.getVector("SnapPos")
            if pos ~= nil then
                camobj:addUniqueFX("Recall")
            end
            locfg.popSection()
        end
    end

    if loinput.isActive("Quit") then
        loevent.sendShort("system", "close")
    end
end

if lldebugger ~= nil then
    lldebugger.call(function()
        lorx.execute(init, update)
    end)
else
    lorx.execute(init, update)
end

-- load "Local lua debugger"
if os.getenv("LOCAL_LUA_DEBUGGER_VSCODE") == "1" then
    require("lldebugger").start()
end

local vector = lorx.vector

---@type orxOBJECT
local scene = nil
---@type orxOBJECT
local hero = nil
local herosgun = nil
local scoreobj = nil
local score = 0

local flip_left = vector.vector(-2, 2, 1)
local flip_right = vector.vector(2, 2, 1)
local left_impulse = vector.vector(-20, 0, 0)
local right_impulse = vector.vector(20, 0, 0)
local jump_impulse = vector.vector(0, -100, 0)


-- use emmy anno to enable auto-completion for callback params
---@param root orxOBJECT
---@param name string
local function findNode(root, name)
    if root:getName() == name then return root end

    local node = nil
    local child = root:getChild()
    while child ~= nil do
        node = findNode(child, name)
        if node ~= nil then break end
        child = child:getSibling()
    end
    return node
end


local function createExplosionAtObj(obj, ename)
    local pos = obj:getWorldPosition()
    pos.z = 0
    local explosion = lorx.object.createFromConfig(ename)
    explosion:setPosition(pos)
end


local function updateScore(inc)
    score = score + inc
    scoreobj:setTextString(string.format("%d", score))
end


---@param e lorxPHYSICS_EVENT
local function h_physics(e)
    if e.id == 'contact_add' then
        local sname = e.sender:getName()
        local rname = e.recipient:getName()
        if sname == "BulletObject" or rname == "BulletObject" then
            createExplosionAtObj(e.sender, 'JellyExploder')
            e.sender:setLifeTime(0)
            e.recipient:setLifeTime(0)
            updateScore(250)
        elseif sname == 'StarObject' then
            e.sender:setLifeTime(0)
            updateScore(1000)
        elseif rname == 'StarObject' then
            e.recipient:setLifeTime(0)
            updateScore(1000)
        elseif sname == 'Hero' and rname == 'MonsterObject' then
            createExplosionAtObj(e.sender, "HeroExploder")
            e.sender:enable(false)
            scene:addTimeLineTrack('PopUpGameOverTrack')
        elseif rname == 'Hero' and sname == 'MonsterObject' then
            e.recipient:enable(false)
            createExplosionAtObj(e.recipient, "HeroExploder")
            scene:addTimeLineTrack('PopUpGameOverTrack')
        end
    end
end


local function init()
    lorx.debug.enableLevel('all', true)
    lorx.debug.log('user', 'init', 'main.lua', 84, [[
* This template project creates a simple scene
* You can play with the config parameters in ../data/config/orx-demo.ini
* After changing them, relaunch the executable to see the changes.
]])

    -- load the game config file
    lorx.resource.addStorage("Config", "data/config", false)
    lorx.config.load("orx-demod.ini")

    -- create viewport
    lorx.viewport.createFromConfig("MainViewport")

    -- create scene and get some refs
    scene = lorx.object.createFromConfig("Scene")
    assert(scene)
    hero = findNode(scene, "Hero")
    assert(hero)
    herosgun = findNode(hero, "HerosGun")
    scoreobj = findNode(scene, "ScoreObject")

    lorx.registerPhysicsHandler(h_physics)
end


local function update()
    if lorx.input.isActive("Quit") then
        lorx.event.sendShort("system", 'close')
    end

    if hero:isEnabled() then
        if lorx.input.isActive("GoLeft") then
            hero:setScale(flip_left)
            hero:applyImpulse(left_impulse, nil)
            hero:setTargetAnim("HeroRun")
        elseif lorx.input.isActive("GoRight") then
            hero:setScale(flip_right)
            hero:applyImpulse(right_impulse, nil)
            hero:setTargetAnim("HeroRun")
        else
            hero:setTargetAnim("HeroIdle")
        end

        if lorx.input.isActive("Jump") then
            hero:applyImpulse(jump_impulse, nil)
        end

        if lorx.input.isActive("Shoot") then
            herosgun:enable(true)
        else
            herosgun:enable(false)
        end
    end
end

if lldebugger ~= nil then
    lldebugger.call(function()
        lorx.execute(init, update)
    end)
else
    lorx.execute(init, update)
end

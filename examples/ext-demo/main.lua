local mylib = require"mylib"

local function init()
  -- call functions in external C module
  print(mylib.foo())
  print(mylib.bar())
end

local function update()
  if lorx.input.isActive("Quit") then
    lorx.event.sendShort("system", 'close')
  end
end

if lldebugger ~= nil then
  lldebugger.call(function()
    lorx.execute(init, update)
  end)
else
  lorx.execute(init, update)
end

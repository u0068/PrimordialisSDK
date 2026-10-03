local dofile_once_cache = {}

---@param filename string
---@return any ...
function dofile_once(filename)
	local cached = dofile_once_cache[filename]
	if cached then
		return unpack(cached)
	end
	local result = { dofile(filename) }
	dofile_once_cache[filename] = result
	return unpack(result)
end

---Sometimes you just need a crash for testing
---@diagnostic disable-next-line: lowercase-global
function crash()
	require("ffi").cast("int *", 0)[0] = 0
end

local mods = get_mods_dir()
local Luasome = get_own_dir()
dofile_once(Luasome.."/key_codes.lua")
dofile_once(Luasome.."/mod_list.lua")
local api = dofile_once(Luasome.."/api.lua")

for _, v in ipairs(LUA_MODLOADER_MOD_LIST) do
    if type(v) ~= "string" and type(v) ~= "table" then
		table.insert(
			LUA_MODLOADER_ERRORS,
			"ERROR: invalid mod list, " .. tostring(v) .. ": " .. type(v) .. " is not a valid mod"
        )
	else
        local name = type(v) == "table" and v[1] or v
		LUA_MODLOADER_CONFIG = type(v) == "table" and v[2] or {}
        local path = mods .. "/" .. name .. "/"

		local chunk, err = loadfile(path.."/init.lua")
        if not chunk then
            table.insert(LUA_MODLOADER_ERRORS, "Error loading mod: " .. v .. " got the error " .. err)
        else
            local success, callbacks = pcall(chunk, name, path)
            if not success then
                table.insert(LUA_MODLOADER_ERRORS, "Error in mod: " .. v .. " got the error " .. callbacks)
            end
            table.insert(LUA_MODLOADER_LOADED_MODS, { name = v, callbacks = callbacks, config = LUA_MODLOADER_CONFIG })
        end
	end
end

api.log("Active mods:\n")
for _, v in ipairs(LUA_MODLOADER_LOADED_MODS) do
	api.log(v.name .. "\n")
end
for _, v in ipairs(LUA_MODLOADER_LOADED_MODS) do
	if (v.callbacks.api_version or 0) > LUA_MODLOADER_VERSION then
		table.insert(
			LUA_MODLOADER_ERRORS,
			"Mod '" .. v.name .. "' "
					.. "requires a newer version of the modloader, modloader version is v"
					.. LUA_MODLOADER_VERSION
					.. " mod requires v"
					.. v.callbacks.api_version
		)
	end
end

for _, v in ipairs(LUA_MODLOADER_LOADED_MODS) do
	if v.callbacks.pre then
		local success, err = pcall(v.callbacks.pre, api, v.config)
		if not success then
			table.insert(LUA_MODLOADER_ERRORS, "Error running prehook for mod " .. v.name .. " got an error: " .. err)
		end
	end
end

-- api_version should be the current version of the modloader, if your mod requires a more recent version than is installed we will error
local M = { api_version = 8 }
local MOD_NAME, MOD_FILEPATH = ...

function M.post(api, config)
	local old_creature_list = creature_list
	creature_list = function(...)

		register_creature(
			api.acquire_id(MOD_NAME..".jelly"),	-- Generate a unique id for the creature. This will ensure we dont accidentally override another creature.
			"body plans/mini_jelly.bod",	-- body plan of the little jellyfish. Note that we are accessing "body plans/" rather than "MOD_FILEPATH/bodies"
			"polychaete_tiny_brain",		-- this is run in the post hook, so we can use the brain function names directly
			"spawn_budding"				-- spawn function
		)

		local r = { old_creature_list(...) }
		return unpack(r)
	end

	local old_init_biomes = init_biomes
	init_biomes = function(...)
		local r = { old_init_biomes(...) }
		add_creature_spawn_chance("TEST", api.acquire_id(MOD_NAME..".jelly"), 1, 1)
		return unpack(r)
	end
end

return M

-- api_version should be the current version of the modloader, if your mod requires a more recent version than is installed we will error
-- version is the version number of your mod
local M = { api_version = 6, version = "1.2.5" }

-- For convenience, I made a variable to store the mod's name and filepath
-- If you change the mod's name or filepath, you only need to change these variables
-- Instead of having to change it in a hundred places scattered throughout the mod and then crashing because you missed one
local MOD_NAME = "simple_template"
local MOD_FILEPATH = "mods/"..MOD_NAME.."/" -- Make sure this matches your folder structure or else nothing will work

-- DON'T FORGET TO LOAD IN ANY EXTRA FILES THAT YOU MAY BE USING!
-- If you're making a big mod with lots of brains and functions, its good to organise it in multiple files.
-- Load in external files using a dofile like this:
--dofile(MOD_FILEPATH.."brains/example_brain.lua")

-- We can have brains and other functions directly in the init.lua file, which can be more convenient for very small mods
-- The following functions are minimal examples that explain how they work

-- This is a brain function. It is executed every tick for every creature with this brain.
-- It's defined with this unusual syntax to let us use a "." in the function name to keep everything organised and prevent conflicts between mods
-- However this isn't essential, you can define it like a normal function and it will still work fine.
-- You can name the functions whatever you want
_G[MOD_NAME..".no_brain"] = function(body)
	local brain = {} -- This is our brain table. See the end of api_documentation.txt for more details.
	
	brain.rotation = 1 -- We set the brain's rotation to 1. This will cause the creature to spin.
	
	return brain -- We return the brain.
	-- This passes our brain {"rotation"=1} to the core game.
	-- Then the game can see that we set rotation to 1, and move the creature accordingly.
end

_G[MOD_NAME..".passive_brain"] = function(body)
	local brain = {}
	
	local wall_avoid_range = 50
	
	-- here we use a built-in utility function to make the creature go forward with a bit of a wiggle and avoid walls
	passive_ai(body, brain, wall_avoid_range)
	
	return brain
end

-- This is a spawn function. It is executed once, when the creature spawns.
_G[MOD_NAME..".spawn_function"] = function(body_id, x, y)

	give_mutation(body_id, MUT_SMALLER) -- Here we use the api function to give us the smaller cells mutation
	-- See mutations.lua for the ids of all the other mutations.
	
	-- Send a message that the player will see when the creature is spawned
	game_print("If you see this message, everything is working correctly :D")
	
    local values = {} -- This table is the creature's memory
	-- Lets store the coords that the creature spawns on in the first 2 slots
    values[1] = x
    values[2] = y

    return values -- Return our memory values so that the game can store them in the creature's body
end

-- This is a death function. It is executed when the creature dies.
_G[MOD_NAME..".death_function"] = function(body_id)
	game_print("Body with id", body_id, "has died") -- Print a death message
end

-- pre hook is for changing how functions that everyone uses behaves
function M.pre(api, config)
	-- here we can use the config to set variables that the brains use

	-- we can also shadow functions here to change them, just like in the post hook
end

-- post hook is for defining creatures
function M.post(api, config)
	-- here we can use the config to set variables that add_creature_spawn_chance uses
	local spawn_rate = config.spawn_rate or 0.05
	
	-- we shadow the creature_list function to call our additional code after it
	local old_creature_list = creature_list
	creature_list = function(...)
		-- register our creature(s)
		
		-- we can add an entirely new creature to the game by registering it with a unique id.
		register_creature(
			api.acquire_id(MOD_NAME..".smile"),	-- Generate a unique id for the creature. This will ensure we dont accidentally override another creature.
			MOD_FILEPATH.."bodies/smile.bod",	-- body plan that the creature spawns with
			MOD_NAME..".no_brain",			-- brain function, optional
			MOD_NAME..".spawn_function",	-- spawn function, optional
			MOD_NAME..".death_function" 	-- death function, optional
		)
		
		-- we can replace an existing lua creature by registering using its id.
		register_creature(
			"SNYL",	-- Use the id of an existing lua creature, "SNYL", to override it with our creature.
			MOD_FILEPATH.."bodies/frown.bod",	-- body plan that the creature spawns with
			MOD_NAME..".passive_brain",		-- brain function, optional
			MOD_NAME..".spawn_function"		-- spawn function, optional
		)
		
		-- we can also use the bodies, brains and functions of existing creatures.
		register_creature(
			api.acquire_id(MOD_NAME..".jelly"),	-- Generate a unique id for the creature. This will ensure we dont accidentally override another creature.
			"body plans/mini_jelly.bod",	-- body plan of the little jellyfish. Note that we are accessing "body plans/" rather than "MOD_FILEPATH/bodies"
			"polychaete_tiny_brain",		-- this is run in the post hook, so we can use the brain function names directly
			"spawn_budding"				-- spawn function
		)

		-- call the original. Registering our creatures before the vanilla creatures means that we can override them with our creatures.
		local r = { old_creature_list(...) }

		-- return the result of the original, not strictly neccesary here but useful in some situations
		return unpack(r)
	end

	-- shadow init_biomes function to call our stuff afterwards
	local old_init_biomes = init_biomes
	init_biomes = function(...)
		local r = { old_init_biomes(...) }
		-- add our creatures to the starting biome, if spawn_rates are too high you will start to see issues where only some creatures can spawn
		-- to fix this make sure the sum isn't too high.
		add_creature_spawn_chance("SAFE", api.acquire_id(MOD_NAME..".smile"), spawn_rate, 1) -- make smiles spawn in the safe zone
		add_creature_spawn_chance("GYRE", api.acquire_id(MOD_NAME..".jelly"), spawn_rate, 1) -- make jellies spawn in the gyre zone
		-- we dont add a spawn chance for the frown because its already using the snail's spawn chance.
		return unpack(r)
	end
end

return M

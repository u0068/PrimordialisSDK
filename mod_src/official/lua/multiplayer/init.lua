local M = { api_version = 7 }
local MOD_NAME, MOD_FILEPATH = ...

-- Load in external files
local h_utils = dofile(MOD_FILEPATH.."utilities/h_utils.lua") 
local key_codes = dofile(MOD_FILEPATH.."utilities/simpler_key_codes.lua")

-- declare some pseudo-global variables
--local binds = {}
local config = dofile(MOD_FILEPATH.."config.txt")
local binds = config.binds
local player_spawnrate = config.player_spawnrate

local function kill(body_id)
	for _, cell_id in ipairs(get_all_body_cell_ids(body_id)) do
		local cell = get_cell_info(cell_id)
		if cell then
			set_plan_cell(body_id, cell.q, cell.r, 0)
		end
	end
end

local function initialise(body_id)

	local body = get_body_info(body_id)

	-- to allow multiple players, we need to somehow assign player indices to the creatures
	-- get a list of all the unused indices, and fill them in order of distance to host
	local indices = {}
	local index_offset = 1
	local player_dist = h_utils.distance_to_body(body_id, get_player_body_id())
	if player_dist > 300 then return 0 end
	local all_bodies = h_utils.get_all_bodies_up_to_id(math.max(get_player_body_id(), body_id)-1)
	for _, other in ipairs(all_bodies) do
		if other.id ~= body_id
		and other.creature_id == body.creature_id
		then
			other_dist = h_utils.distance_to_body(other.id, get_player_body_id())
			if other_dist < 500 then
				local other_index = other.values[1] 
				if other_index > 0 then
					indices[other_index] = 1
				else
					index_offset = index_offset + (other_dist<=player_dist and 1 or 0)
					--game_print("Incrementing offset to "..index_offset)
				end
			end
		end
	end
	local free_indices = {}
	for i = 1, #binds do
		if indices[i] ~= 1 then
			table.insert(free_indices, i)
		end
	end
	if index_offset > #free_indices then
		kill(body_id)
		return {0}
	end
	local player_index = free_indices[index_offset]
	
	local my_binds = binds[player_index]
	for i, mutation in ipairs(my_binds.MUTATIONS) do
		give_mutation(body_id, mutation)
	end

	game_print("Initialising extra player "..player_index)
	return player_index
end

_G[MOD_NAME..".other_player_brain"] = function(body)
	---@type brain
	local brain = {}
	brain.values = body.values
	-- brain values:
	-- 1: player index
	local player_index = brain.values[1]
	if player_index == 0 then
		if get_player_body_id() == nil then return {} end
		player_index = initialise(body.id)
		brain.values[1] = player_index
	end
	
	-- delete duplicates
	-- local player_dist = h_utils.distance_to_body(body.id, get_player_body_id())
	-- if player_dist < 500 and player_index > 0 then
		-- local bodies = get_visible_bodies(get_player_body_id(), 500)
		-- for _, other in ipairs(bodies) do
			-- if other.id ~= body.id
			-- and other.creature_id == body.creature_id
			-- and other.values[1] == player_index
			-- and other.dist < player_dist
			-- then
				-- game_print("Killing duplicate extra player "..player_index.." with id "..body.id)
				-- kill(body.id)
			-- end
		-- end
	-- end
	
	local my_binds = binds[player_index]
	if not my_binds then return brain end
	
	local function bind_pressed(bind)
		return h_utils.key_code_pressed(key_codes[my_binds[bind]])
	end
	
	brain.movement = 0
	brain.rotation = 0
	
	if bind_pressed("FORWARD") then
		brain.movement = brain.movement + 1
	end
	if bind_pressed("BACKWARD") then
		brain.movement = brain.movement - 1
	end
	if bind_pressed("LEFT") then
		brain.rotation = brain.rotation + 1
	end
	if bind_pressed("RIGHT") then
		brain.rotation = brain.rotation - 1
	end
	if bind_pressed("ABILITY1") then
		brain.ability1 = true
	end
	if bind_pressed("ABILITY2") then
		brain.ability2 = true
	end
	if bind_pressed("ABILITY3") then
		brain.ability3 = true
	end
	if bind_pressed("SEEK") then
		brain.grab_weight = 1
		brain.grab_dir = 1
	end
	if bind_pressed("HIDE") then
		brain.grab_weight = 1
		brain.grab_dir = -1
	end
	
	-- seek at host by default
	local host = get_body_info(get_player_body_id())
	if host then
		brain.grab_target_x, brain.grab_target_y = host.cost_center_x, host.cost_center_y
	end
	
	local p1_body_plan = {} --nested table, q,r,cell
	
	local function copy_cell(cell_id)
		local cell = get_cell_info(cell_id)
		if not p1_body_plan[cell.q] then p1_body_plan[cell.q] = {} end
		p1_body_plan[cell.q][cell.r] = true -- mark the cell as existing
		set_plan_cell(body.id, cell.q, cell.r, cell.cell_type_index, cell.color_r, cell.color_g, cell.color_b, cell.color_a)
	end
	
	local function remove_cell(cell_id)
		local cell = get_cell_info(cell_id)
		if not p1_body_plan[cell.q] or not p1_body_plan[cell.q][cell.r] then
			set_plan_cell(body.id, cell.q, cell.r, 0)
		end
	end
	
	if bind_pressed("COPY_BODYPLAN") then
		for _, cell_id in ipairs(get_all_body_cell_ids(get_player_body_id())) do
			copy_cell(cell_id)
		end

		for _, cell_id in ipairs(get_all_body_cell_ids(body.id)) do
			remove_cell(cell_id)
		end
	end
	
	return brain
end


---@type spawn_function
_G[MOD_NAME..".player_spawn_function"] = function(body_id, x, y)
	return {0}
end

-- pre hook is for changing how functions that everyone uses behaves
function M.pre(api, config)
	--binds = config.binds or {}
	--assert(#binds > 0, "CO-OP mod: 0 extra players are configured! Read the mod's README.md for details on configuration.")

	-- shadow the add_creature_spawn_chance function so we can modify it
	local old_add_creature_spawn_chance = add_creature_spawn_chance
	function add_creature_spawn_chance(...)
		local args = { ... } -- collect the arguments into a table for easy modification
		--args[4] = args[4] * 20 -- this arg is the xp drop amount, so make everything drop 20x xp
		return old_add_creature_spawn_chance(unpack(args)) -- call the original with the modified args
	end
end

-- post hook is for defining creatures
function M.post(api, config)
	--local player_spawnrate = config.player_spawnrate or 0
	-- we shadow the creature_list function to call our additional code after it
	local old_creature_list = creature_list
	creature_list = function(...)
		-- call the original
		local r = { old_creature_list(...) }

		-- register all the players
		register_creature(
			api.acquire_id(MOD_NAME..".player"),
			"body plans/start_player.bod",
			MOD_NAME..".other_player_brain",
			MOD_NAME..".player_spawn_function"
		)
		-- return the result of the original, not strictly neccesary here but useful in some situations
		return unpack(r)
	end

	if player_spawnrate > 0 then
		-- shadow init_biomes function to call our stuff afterwards
		local old_init_biomes = init_biomes
		init_biomes = function(...)
			local r = { old_init_biomes(...) }
			-- add our creatures to the starting biome, if spawn_rates are too high you will start to see issues where only some creatures can spawn
			-- to fix this make sure the sum isn't too high, i will perhaps add a prehook for compat with this in future

			add_creature_spawn_chance("STRT", api.acquire_id(MOD_NAME..".player"), player_spawnrate, 1, 1) -- team 1 is player team i think
			add_creature_spawn_chance("SAFE", api.acquire_id(MOD_NAME..".player"), player_spawnrate * 5, 1, 1) -- increasing safe zone spawnrate to compensate for its smaller size
			return unpack(r)
		end
	end
end

return M

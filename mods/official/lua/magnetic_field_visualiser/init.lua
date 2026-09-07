---@type mod_calllbacks
-- api_version should be the current version of the modloader, if your mod requires a more recent version than is installed we will error
-- version is the version number of your mod
local M = { api_version = 6, version = "1.2.0" }

-- For convenience, I made a variable to store the mod's name and filepath
local MOD_NAME = "magnetic_field_visualiser"
local MOD_FILEPATH = "mods/"..MOD_NAME.."/" -- Make sure this matches your folder structure or else nothing will work

dofile(MOD_FILEPATH.."brain_utils.lua") -- Load in the brain_utils

local field_line_length = 100
local field_line_step_size = 2
local field_line_count = 12

local grid_mode = 1
local grid_size = 16
local grid_spacing = 3
local grid_field_line_length = 3

local show_dir_fields = 1
local show_z_fields = 1

local flow_speed = 4
local max_dot_size = 1/8
local dot_saturation = 0.5
local dot_opacity = 1

_G[MOD_NAME..".visualiser_spawn"] = function(body_id, x, y)
	local origin_id = get_body_cell_id(body_id, 0, 0)
	local magnet_cell = get_cell_info(origin_id)
	local magnet_cell_type_index = 67 -- fallback to v0.1 index
	if magnet_cell then
		magnet_cell_type_index = magnet_cell.cell_type_index
	end
	return {magnet_cell_type_index}
end

_G[MOD_NAME..".visualiser_brain"] = function(body)
	---@type brain
	local brain = {}
	local magnet_cell_type_index = body.values[1]
	
	local magnets = {}
	local z_magnets = {}
	local all_magnets = {}
	
	
	local offset = (flow_speed * body.age / 120) % 1
	
	-- Get all the bodies that we can see
    local bodies = get_visible_bodies(body.id, 1000, false, nil, true)
	--table.insert(bodies, body)
    for i, other in ipairs(bodies) do
		-- we want to locate electromagnetic cells in the target body and run the correct code for them
		-- the simplest way to do that is to iterate through all the cells in the body and identify it
		local cell_ids = get_all_body_cell_ids(other.id)
		if cell_ids then
			for _, cell_id in ipairs(cell_ids) do
				-- first lets identify our cells of interest (any electromagnetic cells)
				local cell = get_cell_info(cell_id);
				if cell.cell_type_index == magnet_cell_type_index then
				
					--draw_circle(cell.x, cell.y, 1.5, 1, 1, 1, 0.1)
					
					local magnet = {}
					magnet.x, magnet.y = cell.x, cell.y
					
					magnet.dir_x, magnet.dir_y = get_cell_direction(cell)
					
					if cell.voltage < 0 then magnet.inv_mult = -1 else magnet.inv_mult = 1 end
					
					magnet.voltage = cell.voltage
					
					if magnet.dir_x and magnet.dir_y then
						if show_dir_fields then
							table.insert(magnets, magnet)
						end
					elseif show_z_fields then
						magnet.dir_x, magnet.dir_y = cell.rot_x, cell.rot_y
						magnet.z_facing = true
						magnet.voltage = magnet.voltage / 100
						table.insert(z_magnets, magnet)
					end
					table.insert(all_magnets, magnet)
				end
			end
		end
    end
	
	local function get_z_mag_field(sample_x, sample_y)
		local mag_field_x, mag_field_y = 0, 0
		local min_mag_dist = 1e9
		for _, magnet in ipairs(z_magnets) do
			local delta_x, delta_y = sample_x-magnet.x, sample_y-magnet.y
			local mag_dist = vec_length(delta_x, delta_y)
			min_mag_dist = math.min(min_mag_dist, mag_dist)
			mag_field_x, mag_field_y = mag_field_x + magnet.voltage*delta_x/(mag_dist^3), mag_field_y + magnet.voltage*delta_y/(mag_dist^3)
		end
		return mag_field_x, mag_field_y, min_mag_dist
	end
	
	local function get_mag_field(sample_x, sample_y)
		local mag_field_x, mag_field_y = 0, 0
		local min_mag_dist = 1e9
		for _, magnet in ipairs(magnets) do
			-- approximate dipole as 2 monopoles very close to each other
			local delta_x, delta_y = sample_x-magnet.x, sample_y-magnet.y
			min_mag_dist = math.min(min_mag_dist, vec_length(delta_x, delta_y))
			local separation = 0.01
			local offset_x, offset_y = magnet.dir_x*separation, magnet.dir_y*separation
			local delta_ax, delta_ay, delta_bx, delta_by = delta_x+offset_x, delta_y+offset_y, delta_x-offset_x, delta_y-offset_y
			local delta_a_mag3, delta_b_mag3 = math.pow(delta_ax*delta_ax + delta_ay*delta_ay, 1.5), math.pow(delta_bx*delta_bx + delta_by*delta_by, 1.5)
			mag_field_x, mag_field_y = 	mag_field_x + magnet.voltage*(delta_ax/delta_a_mag3 - delta_bx/delta_b_mag3),
										mag_field_y + magnet.voltage*(delta_ay/delta_a_mag3 - delta_by/delta_b_mag3)
		end
		return mag_field_x, mag_field_y, min_mag_dist
	end
	
	local function draw_field_line(sample_x, sample_y, length, fade_start, fade_end, step_mult, z)
		for step = 1, length do
			local p_sample_x, p_sample_y = sample_x, sample_y
			
			local mag_field_x, mag_field_y, mag_dist
			if not z then
				mag_field_x, mag_field_y, mag_dist = get_mag_field(sample_x, sample_y)
			else
				mag_field_x, mag_field_y, mag_dist = get_z_mag_field(sample_x, sample_y)
			end
			local mag_field_strength = vec_length(mag_field_x, mag_field_y)
			if mag_field_strength < 0.00001 or mag_dist < 1 then
				return
			end
			
			local strength = mag_field_strength+0.0001
			mag_field_x, mag_field_y = mag_field_x/strength, mag_field_y/strength
			
			local l_offset = offset
			if step_mult > 0 then
				l_offset = 1 - offset
			end
			
			mag_field_x, mag_field_y = mag_field_x*step_mult, mag_field_y*step_mult
			
			sample_x, sample_y = sample_x + mag_field_x*field_line_step_size, sample_y + mag_field_y*field_line_step_size
			
			local l_sample_x, l_sample_y = lerp(p_sample_x, sample_x, l_offset), lerp(p_sample_y, sample_y, l_offset)
			local l_mag_field_x, l_mag_field_y, l_mag_dist
			if not z then
				l_mag_field_x, l_mag_field_y, l_mag_dist = get_mag_field(l_sample_x, l_sample_y)
			else
				l_mag_field_x, l_mag_field_y, l_mag_dist = get_z_mag_field(l_sample_x, l_sample_y)
			end
			local l_mag_field_strength = vec_length(l_mag_field_x, l_mag_field_y)
			local r, g, b = HSV_to_RGB(0.5+math.atan2(l_mag_field_x, l_mag_field_y)/(2*math.pi), dot_saturation, 1)
			
			local opacity = math.max(math.min(1, l_mag_dist-1), 0)
			if fade_start and step == 1 then
				opacity = opacity * l_offset
			elseif fade_end and step == length then
				opacity = opacity * (1 - l_offset)
			end
			opacity = opacity*math.min(l_mag_field_strength * 4000, 1)
			
			local dot_size = math.min(max_dot_size, opacity)
			draw_circle(l_sample_x, l_sample_y, dot_size, r, g, b, opacity*dot_opacity)
		end
	end
	
	if not grid_mode then
		for _, magnet in ipairs(all_magnets) do
			-- draw field lines around each magnet
			for field_line = 1, field_line_count do
				-- pick an initial direction
				local sample_x, sample_y = rotate_by_angle(magnet.dir_x, magnet.dir_y, 2*math.pi*field_line/field_line_count)
				
				local step_mult = magnet.inv_mult
				if dot(magnet.dir_x, magnet.dir_y, sample_x, sample_y) > 0 and not magnet.z_facing then 
					step_mult = -step_mult
				end
				
				local sample_dist = 2
				sample_x, sample_y = magnet.x + sample_x*sample_dist, magnet.y + sample_y*sample_dist
				
				draw_field_line(sample_x, sample_y, field_line_length, true, true, step_mult, magnet.z_facing)
			end
		end
	else
		for x=-grid_size, grid_size do
			for y=-grid_size, grid_size do
			
				local sample_x, sample_y = body.com_x + x*grid_spacing, body.com_y + y*grid_spacing
				
				--draw_circle(sample_x, sample_y, 0.1, 1, 1, 1, 0.05)
				
				if show_dir_fields then
					draw_field_line(sample_x, sample_y, grid_field_line_length, false, true, 1, false)
					draw_field_line(sample_x, sample_y, grid_field_line_length, false, true, -1, false)
				end
				if show_z_fields then
					draw_field_line(sample_x, sample_y, grid_field_line_length, false, true, 1, true)
					draw_field_line(sample_x, sample_y, grid_field_line_length, false, true, -1, true)
				end
			end
		end
	end
	
	return brain;
end

-- post hook is for defining creatures
function M.post(api, config)
	-- here we can use the config to set variables that add_creature_spawn_chance uses
	field_line_length = config.field_line_length or field_line_length
	field_line_step_size = config.field_line_step_size or field_line_step_size
	field_line_count = config.field_line_count or field_line_count
	
	if config.grid_mode ~= nil then grid_mode = config.grid_mode end
	grid_size = config.grid_size or grid_size
	grid_spacing = config.grid_spacing or grid_spacing
	grid_field_line_length = config.grid_field_line_length or grid_field_line_length
	
	if config.show_dir_fields ~= nil then show_dir_fields = config.show_dir_fields end
	if config.show_z_fields ~= nil then show_z_fields = config.show_z_fields end
	
	flow_speed = config.flow_speed or flow_speed
	max_dot_size = config.max_dot_size or max_dot_size
	dot_saturation = config.dot_saturation or dot_saturation
	dot_opacity = config.dot_opacity or dot_opacity
	
	-- we shadow the creature_list function to call our additional code after it
	local old_creature_list = creature_list
	creature_list = function(...)
		-- call the original
		local r = { old_creature_list(...) }

		-- register our creatures
		register_creature(
			api.acquire_id(MOD_NAME..".visualiser"),	-- Generate a unique id for the creature
			MOD_FILEPATH.."bodies/visualiser.bod",		-- body plan that the creature spawns with
			MOD_NAME..".visualiser_brain",
			MOD_NAME..".visualiser_spawn"
		)
		-- return the result of the original, not strictly neccesary here but useful in some situations
		return unpack(r)
	end
end

return M

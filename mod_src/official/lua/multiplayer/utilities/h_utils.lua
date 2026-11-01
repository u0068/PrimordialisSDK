-------------------------------------------------------
---- h's utility pack
-------------------------------------------------------
-- A collection of various utility functions for making creature brains
-- Version 2.9.0

-- TODO:
-- Fix the broken stuff
-- Think of more useful stuff to add

-----------------------------------------------------------------------
-- FFI
-----------------------------------------------------------------------

-- use ffi to get user inputs
local ffi = require("ffi")

ffi.cdef([[
typedef unsigned short USHORT;
USHORT GetAsyncKeyState(int vKey);
]])

dofile("data/scripts/lua_mods/key_codes.lua") -- Get key codes list

local h_utils
h_utils = { -- contain everything inside the namespace h_utils

---Returns whether the key is currently pressed, not tied to the framerate.
key_pressed = function(key) -- this function takes the string name of the key, such as "A"
	local state = ffi.C.GetAsyncKeyState(KEY_CODES[key])
	local pressed = bit.band(state, bit.lshift(1, 15)) ~= 0
	return pressed
end,

---Returns whether the key code is currently pressed, not tied to the framerate.
key_code_pressed = function(code) -- this function takes the keycode, such as 0x41
	local state = ffi.C.GetAsyncKeyState(code)
	local pressed = bit.band(state, bit.lshift(1, 15)) ~= 0
	return pressed
end,

-----------------------------------------------------------------------
-- Math
-----------------------------------------------------------------------

sign = function(value)
	return value >= 0 and 1 or -1
end,

round = function(value, dp)
	dp = dp or 0
	return math.floor(value*10^dp + 0.5)*10^-dp
end,

randfloat = function(upper, lower)
	return lower + (upper-lower)*math.random()
end,

-- get distance between two points
distance_between = function(x1, y1, x2, y2)
	-- calculate displacement
	local dx = x2 - x1
	local dy = y2 - y1
	return math.sqrt(dx * dx + dy * dy) -- pythagoras theorem go brrr
end,

distance_squared = function(x1, y1, x2, y2)
	-- calculate displacement
	local dx = x2 - x1
	local dy = y2 - y1
	return dx * dx + dy * dy -- pythagoras theorem go brrr
end,

vec_length_squared = function(x, y)
	return x*x + y*y
end,

distance_to_ray = function(target_x, target_y, origin_x, origin_y, dir_x, dir_y) -- Assuming dir_x/y is normalised
	local disp_x, disp_y = target_x - origin_x, target_y - origin_y
	local cross_product = cross(disp_x, disp_y, dir_x, dir_y) -- cross product tells us how much to the left/right it is from the ray
	local ray_distance = math.abs(cross_product)  -- use abs to get only the positive distance
	local dot_product = dot(disp_x, disp_y, dir_x, dir_y)	-- dot product tells us how far in front/back it is
	local in_front = dot_product > 0
	return ray_distance, in_front
end,

-- signed angle between vectors
angle_difference = function(x1, y1, x2, y2)
	local dot_product = dot(x1, y1, x2, y2)
	local cross_product = cross(x1, y1, x2, y2)
	return math.atan2(cross_product, dot_product)
end,

-- unsigned angle between vectors
angle_between = function(x1, y1, x2, y2)
	x1, y1 = normalize(x1, y1)
	x2, y2 = normalize(x2, y2)
	local dot_product = dot(x1, y1, x2, y2)
	return math.acos(dot_product)
end,

is_within_sector = function(b1, b2, field_of_view_angle)
    local cos_half_fov = math.cos(field_of_view_angle / 2)
    local vector_to_body_x = b2.cost_center_x - b1.cost_center_x
    local vector_to_body_y = b2.cost_center_y - b1.cost_center_y
    local body_dir_x = b1.dir_x
    local body_dir_y = b1.dir_y
    local magnitude_to_body = math.sqrt(vector_to_body_x^2 + vector_to_body_y^2)
    local vector_to_body_norm_x = vector_to_body_x / magnitude_to_body
    local vector_to_body_norm_y = vector_to_body_y / magnitude_to_body
    local dot_product = body_dir_x * vector_to_body_norm_x + body_dir_y * vector_to_body_norm_y

    -- Check if the target is within the field of view
    return dot_product >= cos_half_fov
end,

quadratic_solver = function(a, b, c) -- quadratic formula go brrr
	local sqrt_discriminant = math.sqrt(b*b-4*a*c)
	local solution1 = (-b+sqrt_discriminant)/(2*a)
	local solution2 = (-b-sqrt_discriminant)/(2*a)
	return solution1, solution2
end,

-- I might make a nd version later if i need to
lerp_2d = function(a, b, t)
	return { lerp(a[1], b[1], t), lerp(a[2], b[2], t) }
end,

-----------------------------------------------------------------------
-- Colors
-----------------------------------------------------------------------

-- accepts hue mapped to 0-1
HSV_to_RGB = function(h, s, v, a)
    if s <= 0 then return v,v,v,a end
    h = h*6%6
    local c = v*s
    local x = (1-math.abs((h%2)-1))*c
    local m,r,g,b = (v-c), 0, 0, 0
    if h < 1 then
        r, g, b = c, x, 0
    elseif h < 2 then
        r, g, b = x, c, 0
    elseif h < 3 then
        r, g, b = 0, c, x
    elseif h < 4 then
        r, g, b = 0, x, c
    elseif h < 5 then
        r, g, b = x, 0, c
    else
        r, g, b = c, 0, x
    end
    return r+m, g+m, b+m, (a or 1)
end,

-- returns hue mapped to 0-1
RGB_to_HSV = function(r, g, b, a)
	local max, min = math.max(r, g, b), math.min(r, g, b)
	local h, s, v
	v = max

	local d = max - min
	if max == 0 then s = 0 else s = d / max end

	if max == min then
		h = 0 -- achromatic
	else
		if max == r then
			h = (g - b) / d
		if g < b then h = h + 6 end
		elseif max == g then h = (b - r) / d + 2
		elseif max == b then h = (r - g) / d + 4
		end
	h = h / 6
	end

	return h, s, v, a
end,

-- generate a color pallete according to specified parameters
-- hue in 0-1 range
-- returns a table of r, g, b, a values
generate_pallete = function(num_colors, center_hue, hue_range, center_val, val_variation, center_sat, sat_variation, center_alpha, alpha_variation)
	local colors = {}
	for i=1, num_colors do
		local hue = (center_hue + hue_range * (-1 + (i-1)/(num_colors-1)))%1 -- spread hue according to range and number of colors
		local val = clamp(h_utils.randfloat(center_val-val_variation, center_val+val_variation), 0, 1)	-- random variation for the rest because idk enough color theory
		local sat = clamp(h_utils.randfloat(center_sat-sat_variation, center_sat+sat_variation), 0, 1)
		local alpha = clamp(h_utils.randfloat(center_alpha-alpha_variation, center_alpha+alpha_variation), 0, 1)
		local color = {}
		color.r, color.g, color.b, color.a = HSV_to_RGB(hue, val, sat, alpha)
		table.insert(colors, color)
	end
	return colors
end,

-----------------------------------------------------------------------
-- Behaviours
-----------------------------------------------------------------------

add_behaviour = function(main_brain, other_brain, influence)
	for k, v in pairs(other_brain) do
		if type(v) == "number" then
			main_brain[k] = main_brain[k] or 0
			main_brain[k] = main_brain[k] + v * influence
		elseif type(v) == "boolean" then
			main_brain[k] = v -- set the ability trigger to the other brain's value
		end
	end
	return main_brain
end,

get_closest_enemy = function(body_id, view_range, use_line_of_sight)
	local body = get_body_info(body_id)
	-- set defaults
	use_line_of_sight = use_line_of_sight or true
	view_range = view_range or 1000
	
	-- Initialise variables
	local closest_enemy = nil
	local closest_enemy_id = 0
	local closest_dist = view_range
	
	-- Get all the bodies that we can see
    local bodies = get_visible_bodies(body.id, view_range, false, body.team, not use_line_of_sight)
	-- Search through the bodies to find the closest one
    for i, b in ipairs(bodies) do
		-- If the body b is the closest body that we have looped through so far, store it.
		closest_enemy = b
		closest_enemy_id = b.id
		closest_dist = b.dist
    end

	return closest_enemy, closest_enemy_id, closest_dist
end,

seek_towards = function(brain, target_x, target_y, grab_dir, grab_weight)
    brain.grab_target_x, brain.grab_target_y = target_x, target_y
	brain.grab_dir = grab_dir or 1
	brain.grab_weight = grab_weight or 1
end,

move_in_dir = function(body_id, brain, dir_x, dir_y, weight)
	local body = get_body_info(body_id)
    weight = weight or 1
    brain.movement = brain.movement + dot(body.dir_x, body.dir_y, dir_x, dir_y) * weight
    brain.rotation = brain.rotation + cross(body.dir_x, body.dir_y, dir_x, dir_y) * weight
end,

-- move towards a target with a weight, to not completely override previously set motion
move_towards_weighted = function(body_id, brain, target_x, target_y, weight)
	local body = get_body_info(body_id)

    weight = weight or 1
    brain.movement = brain.movement or 0
    brain.rotation = brain.rotation or 0
	
    local dir_x = target_x - body.cost_center_x
    local dir_y = target_y - body.cost_center_y
    dir_x, dir_y = normalize(dir_x, dir_y)
	h_utils.move_in_dir(body, brain, dir_x, dir_y, weight)
end,

distance_to_body = function(body_a_id, body_b_id)
	local body_a, body_b = get_body_info(body_a_id), get_body_info(body_b_id)
	if body_a and body_b then
		return h_utils.distance_between(body_a.cost_center_x, body_a.cost_center_y, body_b.cost_center_x, body_b.cost_center_y)
	else return end
end,

-- Predict the intercept position
intercept = function(body_id, target_body_id, speed)
	local body, target_body = get_body_info(body_id), get_body_info(target_body_id)
	-- clearly name all the variables we are going to use
	speed = speed or 1
	local body_x, body_y = body.cost_center_x, body.cost_center_y
	local body_vx, body_vy =  body.vel_x, body.vel_y
	local body_speed_sq = math.max(vec_length_squared(body_vx, body_vy), speed*speed) -- idk the creature's max speed so im gonna do this instead
	local target_x, target_y = target_body.cost_center_x, target_body.cost_center_y
	local target_vx, target_vy =  target_body.vel_x, target_body.vel_y
	local target_speed_sq = vec_length_squared(target_vx, target_vy)
	local delta_x, delta_y = body_x - target_x, body_y - target_y
	local distance_sq = vec_length_squared(delta_x, delta_y)
	
	-- construct and solve a quadratic formula (i just drew a triangle and used the cosine rule)
	local a, b, c = target_speed_sq - body_speed_sq, -2*dot(delta_x, delta_y, target_vx, target_vy), distance_sq
	local time1, time2 = h_utils.quadratic_solver(a, b, c) -- possible times of interception
	
	-- we want the shortest non-zero time
	-- time1 is always longer than time2, so we just need to check if time2 is positive
	local intercepion_time = time2 > 0 and time2 or time1
	if intercepion_time > 0 then 
		-- we are fast enough to intercept the target :D
		-- now that we know the time of the interception, we can predict where the target will be at that time, and go there
		local intercepion_x, intercepion_y = target_x + intercepion_time * target_vx, target_y + intercepion_time * target_vy
		return intercepion_x, intercepion_y
	else
		-- too slow, intercept not possible
		return nil, nil
	end
end,

-- return all bodies up to the given id
get_all_bodies_up_to_id = function(id)
	local bodies = {}
	for i = 1, id do
		local body = get_body_info(i)
		if body then table.insert(bodies, body) end
	end
	return bodies
end,

-----------------------------------------------------------------------
-- Bodyplan
-----------------------------------------------------------------------

-- gets the world direction vector of the cell based on the positions of its neighbors
get_cell_direction = function(cell)
	local sum_x, sum_y = 0, 0
	local neighbor_count = 0
	local neighbor_offsets = {{q=1, r=0}, {q=1, r=-1}, {q=0, r=-1}, {q=-1, r=0}, {q=-1, r=1}, {q=0, r=1}}
	for _, offset in ipairs(neighbor_offsets) do
		neighbor_id = get_body_cell_id(cell.body_id, cell.q + offset.q, cell.r + offset.r)
		if neighbor_id ~= nil and neighbor_id > 0 then
			neighbor_info = get_cell_info(neighbor_id)
			sum_x, sum_y = sum_x + neighbor_info.x, sum_y + neighbor_info.y
			neighbor_count = neighbor_count + 1
		end
	end
	local dir_x, dir_y = neighbor_count*cell.x-sum_x, neighbor_count*cell.y-sum_y
	local mag = vec_length(dir_x, dir_y)
	if mag < 0.1 then
		return nil, nil
	end
	return dir_x/mag, dir_y/mag
end,

cell_exists = function(cell_id) return (cell_id ~= nil and cell_id > 0) end,

-- THIS IS DEPRECATED, USE get_all_body_cell_ids API FUNCTION INSTEAD
-- attempts to find a living cell within a certain distance of a given coord and returns its id and coords
-- i recommend caching the result so that you dont need to run this repeatedly
-- everything except body_id is optional
find_living_cell_id = function(body_id, radius, init_q, init_r, max_tries)
	radius = radius or 30
	init_q, init_r = init_q or 0, init_r or 0
	max_tries = max_tries or 100
	-- initially, check the init coords
	local cell_id = get_body_cell_id(body_id, init_q, init_r, true)
	if h_utils.cell_exists(cell_id) then return cell_id, init_q, init_r end
	-- otherwise, check random coords around the init coords until a living cell is found
	for i=1, max_tries do
		local q, r = init_q + math.random(-radius, radius), init_r + math.random(-radius, radius)
		local cell_id = get_body_cell_id(body_id, q, r, true)
		if h_utils.cell_exists(cell_id) then return cell_id, q, r end
	end
	-- no cells found :(
	return nil, nil, nil
end,

-- UNLESS YOU REALLY NEED A CONDITIONAL FLOOD FILL, USE get_all_body_cell_ids API FUNCTION INSTEAD
-- attempt to use flood fill from an initial position to apply a function to all cells in the body
-- this is very performance intensive, i recommend against running it every tick
flood_fill = function(body_id, func, init_q, init_r, cell_limit, condition)
	local stack = {} -- a stack where we keep all the spans
	local visited = {} -- a list of all the cell ids we have visited so far
	local cell_count = 0 -- probably faster than using #visited every iteration
	local cell_id = 0
	
	local init_q, init_r = init_q or 0, init_r or 0 -- default to origin

	-- first we find the starting point
	local start_id = get_body_cell_id(body_id, init_q, init_r, true)
	if not h_utils.cell_exists(start_id) then return nil, nil end
	local start_cell = get_cell_info(start_id)
	table.insert(stack, {q=start_cell.q, r=start_cell.r}) -- start searching at the start
	
	local inside = function(q, r)
		cell_id = get_body_cell_id(body_id, q, r)
		return cell_id ~= nil and cell_id > 0 and not visited[cell_id] and (condition == nil or condition(cell_id))
	end
	
	local set_cell = function(cell_id)
		if visited[cell_id] == true then return end --already set this cell
		cell_count = cell_count + 1
		visited[cell_id] = true
		if func then func(cell_id) end
	end

	local scan = function(lq, rq, r)
		local span_added = false
		for q=lq, rq do -- go through the span from left to right
			if not inside(q, r) then
				span_added = false
			elseif not span_added then -- if the cell exists and the span hasnt already been added, add it
				table.insert(stack, {q=q, r=r})
				span_added = true
			end
		end
	end
	
	while #stack > 0 do
		local span = table.remove(stack)
		local q = span.q
		local r = span.r
		local lq = q
		
		-- go left
		while inside(lq-1, r) do
			set_cell(cell_id)
			if cell_limit and cell_count >= cell_limit then return cell_count, true end
			lq = lq-1
			--local cell = get_cell_info(cell_id)
			--draw_circle(cell.x, cell.y, 0.5, 1, 0, 0, 0.5) -- red circle
		end
		
		-- go right
		while inside(q, r) do
			set_cell(cell_id)
			if cell_limit and cell_count >= cell_limit then return cell_count, true end
			q = q+1
			--local cell = get_cell_info(cell_id)
			--draw_circle(cell.x, cell.y, 0.5, 0, 1, 0, 0.5) -- green circle
		end
		
		scan(lq-1,	q-1,	r+1) -- scan above
		scan(lq,	q,		r-1) -- scan below
	end
	return cell_count, false -- bool to indicate if the cell limit was reached
end,

-- THIS IS DEPRECATED, USE get_all_body_cell_ids API FUNCTION INSTEAD
-- attempt to find a living cell then flood fill to apply a function to all cells in the body
-- this is very performance intensive, i recommend against running it every tick
-- everything except body_id and func is optional
execute_for_each_cell = function(body_id, func, cell_limit, radius, init_q, init_r, max_tries)
	local cell_id, init_q, init_r = h_utils.find_living_cell_id(body_id, radius, init_q, init_r, max_tries)
	local cell_count, limit_reached = h_utils.flood_fill(body_id, func, init_q, init_r, cell_limit)
	return cell_id, init_q, init_r, cell_count, limit_reached
end,

-- THIS IS DEPRECATED, USE get_all_body_cell_ids API FUNCTION INSTEAD
-- attempt to find all the cells in the the body and return a table of them
-- this is very performance intensive, i recommend against running it every tick
-- everything except body_id is optional
get_all_cells = function(body_id, radius, init_q, init_r, max_tries)
	local cells = {}
	
	local add_cell_to_table = function(cell_id)
		table.insert(cells, get_cell_info(cell_id))
	end
	local cell_count = h_utils.execute_for_each_cell(body_id, add_cell_to_table)
	
	return cells, cell_count
end,

-----------------------------------------------------------------------
-- Axial Transforms
-----------------------------------------------------------------------
-- useful function for transforming axial coordinates

-- skew xy into qr
xy_to_qr = function(x, y)
    return x - y/math.sqrt(3), y*2/math.sqrt(3)
end,

-- skew qr into xy
qr_to_xy = function(q, r)
    return q + r*0.5, r*math.sqrt(3)*0.5
end,

rotate_by_hex_steps = function(q, r, steps)
	for step=1, steps%6 do
		q, r = -r, r+q -- rotate by a step
	end
	return q, r
end,

-- applies a transform to a coord, first rotation and then translation
transform_coord = function(q, r, t)
	t = t or {}
	t.q = t.q or 0
	t.r = t.r or 0
	t.rot = t.rot or 0
	q, r = h_utils.rotate_by_hex_steps(q, r, t.rot)
	return q + t.q, r + t.r
end,

-- applies transform u to transform t
-- the resultant transform is equivalent to applying t then u
transform_transform = function(t, u)
	t = t or {}
	u = u or {}
	t.q = t.q or 0
	t.r = t.r or 0
	t.rot = t.rot or 0
	u.rot = u.rot or 0
	t.q, t.r = h_utils.transform_coord(t.q, t.r, u)
	t.rot = t.rot + u.rot
	return t
end,

axial_round = function(q, r)
	-- convert to cube coords, a b c
    local a = q
    local b = -q-r
    local c = r

	-- round cube coords
    local ra = math.floor(a + 0.5)
    local rb = math.floor(b + 0.5)
    local rc = math.floor(c + 0.5)

	-- find the closest valid cube coord to the rounded coord
	
    local a_diff = math.abs(ra - a)
    local b_diff = math.abs(rb - b)
    local c_diff = math.abs(rc - c)

    if a_diff > b_diff and a_diff > c_diff then
        ra = -rb - rc
    elseif b_diff > c_diff then
        rb = -ra - rc
    else
        rc = -ra - rb
    end

	-- return axial coord
    return ra, rc
end,

hex_line = function(q1, r1, q2, r2)
	local N = math.max(math.abs(q1 - q2), math.abs(r1 - r2), math.abs((-q1 - r1) - (-q2 - r2)))
	if N == 0 then return({{q1, r1}}) end -- Edge case, avoid division by 0
	local results = {}
	for i = 0, N do
		local t = i / N
		local coord = h_utils.lerp_2d({q1, r1}, {q2, r2}, t)
		local q, r = h_utils.axial_round(coord[1], coord[2])
		table.insert(results, {q, r})
	end
	return results
end,

-----------------------------------------------------------------------
-- Shapes
-----------------------------------------------------------------------
-- These functions execude a given function of q and r of every hex cell within a shape

-- returns all the coords within the shape
get_coords = function(do_shape, arg1, arg2, arg3, arg4) -- simplest way to support all the shape functions
	local coords = {}
	local function append_coord(q, r)
		table.insert(coords, {q=q, r=r})
	end
	
	do_shape(append_coord, arg1, arg2, arg3, arg4)
	
	return coords
end,

-- executes a given function for a line of given length, starting at 0,0 and extruding in +q
do_line = function(func, length, t)
	for i=0, length-1 do
		func(h_utils.transform_coord(i, 0, t))
	end
end,

-- executes a given function for a parallelogram of given width and height, starting at 0,0 and extruding in +q +r
do_parallelogram = function(func, width, height, t)
	for i=0, width-1 do
		for j=0, height-1 do
			func(h_utils.transform_coord(j, i, t))
		end
	end
end,

-- executes a given function for a rhombus of given size, starting at 0,0 and extruding in +q +r
do_rhombus = function(func, size, t)
	return h_utils.do_parallelogram(func, size, size, t)
end,

-- executes a given function for a trapezium made from a truncated equilateral triangle according to the given lengths of its parallel sides
-- lower left corner at 0,0 extruding in +q +r
do_trapezium = function(func, small, large, t)
	for i=small-1, large-1 do
		for j=-i, 0 do
			func(h_utils.transform_coord(small+j-1, i-small+1, t))
		end
	end
end,

-- executes a given function for an equilateral triangle of a given side length
-- tip is at 0,0 extruding in the +2r-q direction (perpendicular to +q)
do_triangle = function(func, size, t)
	h_utils.do_trapezium(func, 1, size, t)
end,

-- executes a given function for a hexagon of a given side length
-- centered at 0,0
do_hexagon = function(func, size, t)
	local u = h_utils.transform_transform({r=1-size}, t)
	h_utils.do_trapezium(func, size, size*2-1, u)
	
	u = h_utils.transform_transform({q=0, r=2*size-2, rot=3}, u)
	h_utils.do_trapezium(func, size, size*2-2, u)
end,

-- executes a given function for a shape made from symmetrical slices with width specified by another given function
-- center of lower bound at 0,0 and extrudes in +2r-q (perpendicular to +q)
do_slices = function(func, width_func, lower, upper, t)
	for i=lower, upper do
		for j=math.ceil(0.5*(-i-width_func(i))), math.floor(0.5*(-i+width_func(i))) do
			func(h_utils.transform_coord(j, i-lower, t))
		end
	end
end,

-- executes a given function for a rectangle of given width and height
-- center of lower side at 0,0 and extrudes in +2r-q (perpendicular to +q)
do_rectangle = function(func, width, height, t)
	for i=0, height-1 do
		for j=math.ceil(0.5*(-i-width)), math.floor(0.5*(-i+width)) do
			func(h_utils.transform_coord(j, i, t))
		end
	end
end,

-- executes a given function for a ellipse of given width and height
-- centered at 0,0
do_ellipse = function(func, width, height, t)
	local function width_func(i)
		return width*math.sqrt(3*(1-(i/height)^2)) -- the sqrt(3) accounts for the squish of the hex grid
	end
	local u = h_utils.transform_transform({r=-height}, t)
	h_utils.do_slices(func, width_func, -height, height, u)
end,

-- executes a given function for a circle of given radius
-- centered at 0,0
do_circle = function(func, radius, t)
	h_utils.do_ellipse(func, radius, radius, t)
end,

-----------------------------------------------------------------------
-- Debug
-----------------------------------------------------------------------

-- draw a line of circle from (x1, y1) to (x2, y2)
draw_line = function(x1, y1, x2, y2, width, r, g, b, a)
	local dist = h_utils.distance_between(x1, y1, x2, y2)
	
	-- defaults
	width = width or 1
	r = r or 1
	g = g or 1
	b = b or 1
	a = a or 1
	
	if dist < width then -- line to short to draw
		return
	end
	
	for i = 0, dist, dist/width do
		local circle_x = lerp(x1, x2, i)
		local circle_y = lerp(y1, y2, i)
		draw_circle(circle_x, circle_y, width, r, g, b, a)
	end
end,

draw_ray = function(start_x, start_y, dir_x, dir_y, length, width, r, g, b, a)
	length = length or 10
	width = width or 1
	r = r or 1
	g = g or 1
	b = b or 1
	a = a or 1
	
	for i = 0, length*2, width*2 do
		local circle_x = start_x + dir_x * i
		local circle_y = start_y + dir_y * i
		draw_circle(circle_x, circle_y, width, r, g, b, a)
	end
end,

draw_view_cone = function(body, fov_angle, ray_length, ray_width)
	local lx, ly = rotate_by_angle(body.dir_x, body.dir_y, -fov_angle/2)
	local rx, ry = rotate_by_angle(body.dir_x, body.dir_y, fov_angle/2)
	draw_ray(body.cost_center_x, body.cost_center_y, lx, ly, 100, 10, 1, 0, 0, 0.5) -- left
	draw_ray(body.cost_center_x, body.cost_center_y, body.dir_x, body.dir_y, 100, 10, 1, 1, 1, 0.5) -- middle
	draw_ray(body.cost_center_x, body.cost_center_y, rx, ry, 100, 10, 0, 1, 0, 0.5) -- right
end,

-- if you want to do anything else with the cell's body table, just use draw_circle(cell.x, cell.y, radius, r, g, b, a) instead
draw_circle_at_cell = function(body_id, pos_q, pos_r, radius, r, g, b, a)
	-- color defaults
	r = r or 1
	g = g or 1
	b = b or 1
	a = a or 1
	
	local cell_id = get_body_cell_id(body_id, pos_q, pos_r, true);
	if cell_id ~= nil and cell_id > 0 then
		cell = get_cell_info(cell_id);
		draw_circle(cell.x, cell.y, radius, r, g, b, a)
	end
end,

} -- dont forget to close the table to contain everything inside h_utils

return h_utils -- return it to the user
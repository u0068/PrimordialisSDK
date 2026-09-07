-- A collection of various utility functions for making creature brains
-- Version 1.1.0

-----------------------------------------------------------------------
-- Math
-----------------------------------------------------------------------

function sign(value)
	return value >= 0 and 1 or -1
end

-- get distance between two points
function distance_between(x1, y1, x2, y2)
	-- calculate displacement
	local dx = x2 - x1
	local dy = y2 - y1
	return math.sqrt(dx * dx + dy * dy) -- pythagoras theorem go brrr
end

function distance_squared(x1, y1, x2, y2)
	-- calculate displacement
	local dx = x2 - x1
	local dy = y2 - y1
	return dx * dx + dy * dy -- pythagoras theorem go brrr
end

function vec_length_squared(x, y)
	return x*x + y*y
end

function distance_to_ray(target_x, target_y, origin_x, origin_y, dir_x, dir_y) -- Assuming dir_x/y is normalised
	local disp_x, disp_y = target_x - origin_x, target_y - origin_y
	local cross_product = cross(disp_x, disp_y, dir_x, dir_y) -- cross product tells us how much to the left/right it is from the ray
	local ray_distance = math.abs(cross_product)  -- use abs to get only the positive distance
	local dot_product = dot(disp_x, disp_y, dir_x, dir_y)	-- dot product tells us how far in front/back it is
	local in_front = dot_product > 0
	return ray_distance, in_front
end

-- signed angle between vectors
function angle_difference(x1, y1, x2, y2)
	local dot_product = dot(x1, y1, x2, y2)
	local cross_product = cross(x1, y1, x2, y2)
	return math.atan2(cross_product, dot_product)
end

-- unsigned angle between vectors
function angle_between(x1, y1, x2, y2)
	x1, y1 = normalize(x1, y1)
	x2, y2 = normalize(x2, y2)
	local dot_product = dot(x1, y1, x2, y2)
	return math.acos(dot_product)
end

function is_within_sector(b1, b2, field_of_view_angle)
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
end

function quadratic_solver(a, b, c) -- quadratic formula go brrr
	local sqrt_discriminant = math.sqrt(b*b-4*a*c)
	local solution1 = (-b+sqrt_discriminant)/(2*a)
	local solution2 = (-b-sqrt_discriminant)/(2*a)
	return solution1, solution2
end

function HSV_to_RGB(h, s, v, a)
    if s <= 0 then return v,v,v end
    h = h*6
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
end

-- gets the world direction vector of the cell based on the positions of its neighbors
function get_cell_direction(cell)
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
	if mag < 0.4 then
		return nil, nil
	end
	return dir_x/mag, dir_y/mag
end

-----------------------------------------------------------------------
-- Behaviours
-----------------------------------------------------------------------

function add_behaviour(main_brain, other_brain, influence)
	for k, v in pairs(other_brain) do
		if type(v) == "number" then
			main_brain[k] = main_brain[k] or 0
			main_brain[k] = main_brain[k] + v * influence
		elseif type(v) == "boolean" then
			main_brain[k] = v -- set the ability trigger to the other brain's value
		end
	end
	return main_brain
end

function get_closest_enemy(body, view_range, use_line_of_sight, ink_vulnerable)
	-- set defaults
	use_line_of_sight = use_line_of_sight or true
	ink_vulnerable = ink_vulnerable or true

	if ink_vulnerable then
		view_range = view_range * body.vision_radius / 1000 -- scale range by the creature's vision radius
		-- Since ink reduces the vision radius, this will make the creature vulnerable to ink
	end
	
	-- Initialise variables
	local closest_enemy = nil
	local closest_enemy_id = 0
	local closest_dist = view_range
	
	-- Get all the bodies that we can see
    local bodies = get_visible_bodies(body.id, view_range, use_line_of_sight)
	-- Search through the bodies to find the closest one
    for i, b in ipairs(bodies) do
		-- If the body b is the closest body that we have looped through so far, store it.
		-- Also ignore it if its on our team because we are searching only for enemies.
        if b.dist < closest_dist and b.team ~= body.team then
            closest_enemy = b
            closest_enemy_id = b.id
            closest_dist = b.dist
        end
    end

	return closest_enemy, closest_enemy_id, closest_dist
end

function seek_towards(brain, target_x, target_y, grab_dir, grab_weight)
    brain.grab_target_x, brain.grab_target_y = target_x, target_y
	brain.grab_dir = grab_dir or 1
	brain.grab_weight = grab_weight or 1
end

function move_in_dir(body, brain, dir_x, dir_y, weight)
    weight = weight or 1
    brain.movement = brain.movement + dot(body.dir_x, body.dir_y, dir_x, dir_y) * weight
    brain.rotation = brain.rotation + cross(body.dir_x, body.dir_y, dir_x, dir_y) * weight
end

-- move towards a target with a weight, to not completely override previously set motion
function move_towards_weighted(body, brain, target_x, target_y, weight)
    weight = weight or 1
    brain.movement = brain.movement or 0
    brain.rotation = brain.rotation or 0
	
    local dir_x = target_x - body.cost_center_x
    local dir_y = target_y - body.cost_center_y
    dir_x, dir_y = normalize(dir_x, dir_y)
	move_in_dir(body, brain, dir_x, dir_y, weight)
end

-- Predict the future position of the target, and move there
function intercept(body, brain, target_body, speed, weight)
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
	local time1, time2 = quadratic_solver(a, b, c) -- possible times of interception
	
	-- we want the shortest non-zero time
	-- time1 is always longer than time2, so we just need to check if time2 is positive
	local intercepion_time = time2 > 0 and time2 or time1
	if intercepion_time > 0 then 
		-- we are fast enough to catch the target :D
		-- now that we know the time of the interception, we can predict where the target will be at that time, and go there
		local intercepion_x, intercepion_y = target_x + intercepion_time * target_vx, target_y + intercepion_time * target_vy
		move_towards_weighted(body, brain, intercepion_x, intercepion_y, weight or 1)
		return true
	else
		-- cant catch the target without going back in time and intercepting it in the past :(
		-- so default to chasing normally, and return false
		-- i might remove the default behaviour from this so that the user can make their own backup, like activating boosters
		move_towards_weighted(body, brain, target_x, target_y, weight or 1)
		return false
	end
end

-----------------------------------------------------------------------
-- Debug
-----------------------------------------------------------------------

-- draw a line of circle from (x1, y1) to (x2, y2)
function draw_line(x1, y1, x2, y2, width, r, g, b, a)
	local dist = distance_between(x1, y1, x2, y2)
	
	-- color defaults
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
end

-- if you want to do anything else with the cell's body table, just use draw_circle(cell.x, cell.y, radius, r, g, b, a) instead
function draw_circle_at_cell(body_id, pos_q, pos_r, radius, r, g, b, a)
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
end
-- api_version should be the current version of the modloader, if your mod requires a more recent version than is installed we will error
local M = { api_version = 8 }
local MOD_NAME, MOD_FILEPATH = ...
local BODS_FILEPATH = MOD_FILEPATH.."bods/"

local function table_to_string(tbl)
    local result = "{"
    for k, v in pairs(tbl) do
        local keyStr = type(k) == "string" and string.format("%q", k) or k
        local valStr = type(v) == "table" and table_to_string(v) or tostring(v)
        result = result .. string.format("[%s] = %s, ", keyStr, valStr)
    end
    return result .. "}"
end

function body2lua(filename, body_id)
	body_id = body_id or get_player_body_id()
	assert(body_id, "No body was given!")
	filename = filename or "temp.lua"
	local bod_table = {}
	local cell_ids = get_all_body_cell_ids(body_id)
	assert(#cell_ids > 0, "No cells found!")
	for i, id in ipairs(cell_ids) do
		local cell = get_cell_info(id)
		if cell then
			local stripped_cell = {
				q = cell.q, r = cell.r,
				cell_type_index = cell.cell_type_index,
				cr = cell.color_r, cg = cell.color_g, cb = cell.color_b, ca = cell.color_a
			}
			table.insert(bod_table, stripped_cell)
		end
	end

	local file = io.open(BODS_FILEPATH..filename, "w")
	file:write("return "..table_to_string(bod_table))
	file:flush()
    file:close()

	game_print("Saved body with id "..body_id.." to "..filename)
end

function lua2body(filename, body_id)
	body_id = body_id or get_player_body_id()
	assert(body_id, "No body was given!")
	filename = filename or "temp.lua"
	local bod_table = dofile(BODS_FILEPATH..filename)
	for i, cell in ipairs(bod_table) do
		set_plan_cell(body_id, cell.q, cell.r, cell.cell_type_index, cell.cr, cell.cg, cell.cb, cell.ca)
	end
	game_print("Loaded "..filename.." to body with id "..body_id)
end

return M

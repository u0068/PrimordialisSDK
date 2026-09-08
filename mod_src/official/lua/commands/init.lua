dofile()
local ffi = require("ffi")

ffi.cdef[[
typedef struct {
    int type;
    int material_index;
    unsigned char data[72];
} cell_item;

void* GetModuleHandleA(const char* lpModuleName);
]]

local h = ffi.C.GetModuleHandleA("primordialis.exe")
local base = tonumber(ffi.cast("uintptr_t", h))

local function game_function(rva, signature)
    return ffi.cast(signature, base + rva)
end

local create_cell_item = game_function(
    0x18B040, "cell_item* (*)(cell_item*)"
)

function give_cell(index)
    local item = ffi.new("cell_item", { material_index = index })
    create_cell_item(item)
end
#pragma once
#include "math_utils.h"
#include "ui.h"

#include "generated/game_functions/essential.h"
#include "interface/cells.h"

// Gets the cell instance's extra fields (use this instead of cell->extra_fields)
inline Game::cell_extra* GetExtraFields(Game::cell* current_cell) {
    // TODO: fix member functions and use cell.extra
    union {
        Game::cell* ptr;
        __uint64 ptr_i;
    };
    union {
        Game::cell* rounded;
        __uint64 rounded_i;
    };
    ptr = current_cell;
    // This doesn't seem to be necessary
    // asm("" : "+r"(ptr)); //stop the compiler from assuming the pointer is 8 byte aligned and turning the &0xf into &0xe
    rounded_i = (ptr_i) & ~63;
    int index = (ptr_i >> 2) & 0xF;
    return rounded->extra_fields + index;
}

// Power a cell while respecting the voltage already present in it, and applying voltage multipliers
inline void PowerCell(Game::cell* current_cell, float power_voltage) {
    float output = current_cell->voltage_multiplier * power_voltage;
    if (abs(current_cell->voltage) < abs(output)) {
        current_cell->voltage = output;
    }
}

inline void AddCellDescription(const char* id, const char* desc) {
    char key[15];
    sprintf_s(key, "cell_%s_desc", id);
    AddTranslation(key, desc);
}

inline void SetCellNameAndDesc(Game::material_t& cell_type, const char* name, const char* desc) {
    cell_type.name = name;
    cell_type.id = HashId(name);
    AddCellDescription(A::MatRef{cell_type.id}, desc);
}

#pragma once
#include "math.h"
#include "ui.h"
#include "general.h"

#include "generated/game_functions/essential.h"
#include "generated/globals.h"
#include "include/logstream.h"

// A reference to a material
// Allows you to refer to a material using its pointer, index, name, numeric id, string id interchangeably
struct MatRef : Internal::ObjRef<Game::material_t> {
private:
    using ObjRef::ObjRef; // use the constructors
public:
    MatRef(int idx)
        : ObjRef(Game::materials_list, idx) {}

    MatRef(uint id)
        : ObjRef(Game::materials_list, id) {}

    MatRef(const char* id)
        : ObjRef(Game::materials_list, id) {}

    MatRef(Game::material_t* ptr)
        : ObjRef(Game::materials_list, ptr) {}

    int GetIndex() const override {
        if (index >= 0) {
            return index;
        }

        if (pointer) {
            numeric = pointer->id;
        }

        if (numeric) {
            index = Game::get_material_index(numeric);
            return index;
        }

        if (not IsInitialised() and name == nullptr) {
            P::ELog(COL_ERROR) << "MatRef not initialised!\n"
                    "Make sure that you are not trying to reference a material that hasn't been created yet.\n"
                    "Falling back to Basic cell.";
            return 1;
        }

        P::Log(COL_MUTED) << "Searching for material '" << name << "'";
        for (int i = 1; i < Game::n_materials; i++) {
            if (strcmp(list[i].name, name) == 0) {
                numeric = list[i].id;
                P::Log(COL_MUTED)
                        << "Found material '" << name << "' with id "
                        << GetString() << " (" << numeric << ")"
                        " at index " << i;
                if (numeric == 0)
                    numeric = HashId(name);
                index = i;
                return i;
            }
        }
        P::ELog(COL_ERROR) << "Failed to find material '" << name << "'\n"
                "Make sure that the name is spelled correctly "
                "and the material has been created before referencing it.\n"
                "You could also use the cell id such as \"HART\" instead of the name.\n"
                "Falling back to Basic cell.";
        return 1;
    }
};

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
    AddCellDescription(MatRef{cell_type.id}, desc);
}

#pragma once
#include "plasmid_log.h"
#include "math.h"
#include "ui.h"
#include "general.h"

#include "generated/game_functions/essential.h"
#include "generated/globals.h"

enum MATERIAL_TAGS {
    TAG_WEAPON = 1 << 0, // Weapons that spawn at the start
    TAG_UTILITY = 1 << 1, // Specialised, non-weapon cells
    TAG_MOVEMENT = 1 << 2, // Cells used for moving the creature
    TAG_DEFENCE = 1 << 3, // This seems to be intended for cells that heal the player
    TAG_STRUCTURE = 1 << 4, // Cells that are primarily used for their structural properties
    TAG_ELECTRICAL = 1 << 5, // Cells used in electrical circuits
    TAG_NEURON = 1 << 6, // Neuron cells
    TAG_START = 1 << 7, // Cells you start with
    TAG_NONLETHAL = 1 << 8, // Non-lethal weapons that spawn at the start. I think it's to make sure that you get at least one lethal weapon
    TAG_NOSTART = 1 << 9, // Weapons that do not spawn at the start
};

namespace P {
    // A reference to a material
    // Allows you to refer to a material using its pointer, index, name, numeric id, string id interchangeably
    struct MatRef : Internal::ObjRef<material_t> {
    private:
        using ObjRef::ObjRef; // use the constructors
    public:
        MatRef(int idx)
            : ObjRef(P::materials_list, idx) {}

        MatRef(uint id)
            : ObjRef(P::materials_list, id) {}

        MatRef(const char* id)
            : ObjRef(P::materials_list, id) {}

        MatRef(material_t* ptr)
            : ObjRef(P::materials_list, ptr) {}

        int GetIndex() const override {
            if (index >= 0) {
                return index;
            }

            if (numeric) {
                index = get_material_index(numeric);
                return index;
            }

            if (not IsInitialised() and name == nullptr) {
                Internal::PlasmidLog(COL_ERROR) << "MatRef not initialised!\n"
                        "Make sure that you are not trying to reference a material that hasn't been created yet.\n"
                        "Falling back to Basic cell.";
                P::AttentionToConsole();
                return 1;
            }

            Internal::PlasmidLog(COL_MUTED) << "Searching for material '" << name << "'";
            for (int i = 1; i < n_materials; i++) {
                if (strcmp(list[i].name, name) == 0) {
                    numeric = list[i].id;
                    Internal::PlasmidLog(COL_MUTED) << "Found material '" << name << "' with id " << numeric <<
                            " at index " <<
                            i;
                    if (numeric == 0)
                        numeric = HashId(name);
                    index = i;
                    return i;
                }
            }
            Internal::PlasmidLog(COL_ERROR) << "Failed to find material '" << name << "'\n"
                    "Make sure that the name is spelled correctly "
                    "and the material has been created before referencing it.\n"
                    "You could also use the cell id such as \"HART\" instead of the name.\n"
                    "Falling back to Basic cell.";
            P::AttentionToConsole();
            return 1;
        }
    };

    // Gets the cell instance's extra fields (use this instead of cell->extra_fields)
    inline cell_extra* GetExtraFields(cell* current_cell) {
        // TODO: fix member functions and use cell.extra
        union {
            cell* ptr;
            __uint64 ptr_i;
        };
        union {
            cell* rounded;
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
    inline void PowerCell(cell* current_cell, float power_voltage) {
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

    inline void SetCellNameAndDesc(material_t& cell_type, const char* name, const char* desc) {
        cell_type.name = name;
        cell_type.id = HashId(name);
        AddCellDescription(MatRef{cell_type.id}, desc);
    }
}

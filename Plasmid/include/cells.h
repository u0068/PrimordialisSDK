#pragma once
#include "plasmid_log.h"
#include "math.h"
#include "ui.h"

#include "generated/game_functions/essential.h"
#include "generated/resolve_data.h"
enum MATERIAL_TAGS {
    TAG_WEAPON      = 1 << 0, // Weapons that spawn at the start
    TAG_UTILITY     = 1 << 1, // Specialised, non-weapon cells
    TAG_MOVEMENT    = 1 << 2, // Cells used for moving the creature
    TAG_DEFENCE     = 1 << 3, // This seems to be intended for cells that heal the player
    TAG_STRUCTURE   = 1 << 4, // Cells that
    TAG_ELECTRICAL  = 1 << 5, // Cells used in electrical circuits
    TAG_NEURON      = 1 << 6, // Neuron cells
    TAG_START       = 1 << 7, // Cells you start with
    TAG_NONLETHAL   = 1 << 8, // Non-lethal weapons that spawn at the start. I think it's to make sure that you get at least one lethal weapon
    TAG_NOSTART     = 1 << 9, // Weapons that do not spawn at the start
};

namespace P {
    // A reference to a material
    // Allows you to refer to a material using its pointer, index, name, numeric id, string id interchangeably
    struct MatRef {
    private:
        // I'm making these private and enforcing getters so you can't accidentally use a thing that hasn't been set yet
        // Might change this later to find all the stuff on initialisation rather than doing lazy resolution, idk
        mutable int index{-1};
        mutable const char *name{nullptr};
        mutable material_t *pointer{nullptr};

        union {
            mutable uint numeric{0};
            mutable char string[5];
        };

    public:
        // No default constructor to force you to initialise
        // MatRef() = default;

        MatRef(int idx)
            : index(idx) {}

        MatRef(uint id)
            : numeric(id) {}

        MatRef(const char *id) {
            if (strlen(id) == 4)
                strcpy_s(string, id);
            else
                name = id;
        }

        MatRef(material_t *ptr)
            : pointer(ptr) {}

        bool IsInitialised() const {
            return index >= 0 or numeric > 0 or pointer != nullptr;
        }

        int GetIndex() const {
            if (index >= 0) {
                return index;
            }

            if (not IsInitialised()) {
                Internal::PlasmidLog() << "MatRef not initialised";
                return -1;
            }

            if (numeric) {
                index = get_material_index(numeric);
                return index;
            }

            Internal::PlasmidLog() << "Searching for cell type '" << name << "'";
            for (int i = 1; i < n_materials; i++) {
                if (strcmp(materials_list[i].name, name) == 0) {
                    numeric = materials_list[i].id;
                    Internal::PlasmidLog() << "Found cell type '" << name << "' with id " << numeric << " at index " <<
                            i;
                    if (numeric == 0)
                        numeric = HashCellId(name);
                    index = i;
                    return i;
                }
            }
            Internal::PlasmidLog() << "Failed to find cell type '" << name << "'";
            return -1;
        }

        uint GetNumeric() const {
            if (numeric == 0) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return 0;
                }
                numeric = materials_list[index].id;
            }
            return numeric;
        }

        const char* GetString() const {
            if (numeric == 0) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return nullptr;
                }
                numeric = materials_list[index].id;
            }
            string[4] = *"\0";
            return string;
        }

        const char* GetName() const {
            if (name == nullptr) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return nullptr;
                }
                name = materials_list[index].name;
                return name;
            }
            return name;
        }

        material_t* GetPointer() const {
            if (pointer == nullptr) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return nullptr;
                }
                pointer = &materials_list[index];
            }
            return pointer;
        }

        material_t GetCopy() const {
            if (pointer == nullptr) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return {};
                }
                pointer = &materials_list[index];
            }
            return *pointer;
        }

        operator int() const {
            return GetIndex();
        }

        operator const char *() const {
            return GetString();
        }

        operator uint() const {
            return GetNumeric();
        }

        operator material_t *() const {
            return GetPointer();
        }

        operator material_t () const {
            return GetCopy();
        }
    };

    // Gets the cell instance's extra fields (use this instead of cell->extra_fields)
    inline cell_extra *GetExtraFields(cell *current_cell) {
        // TODO: fix member functions and use cell.extra
        union {
            cell *ptr;
            __uint64 ptr_i;
        };
        union {
            cell *rounded;
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
    inline void PowerCell(cell *current_cell, float power_voltage) {
        float output = current_cell->voltage_multiplier * power_voltage;
        if (abs(current_cell->voltage) < abs(output)) {
            current_cell->voltage = output;
        }
    }

    inline void AddCellDescription(const char *id, const char *desc) {
        char key[15];
        sprintf_s(key, "cell_%s_desc", id);
        AddTranslation(key, desc);
    }

    inline void SetCellNameAndDesc(material_t &cell_type, const char *name, const char *desc) {
        cell_type.name = name;
        cell_type.id = HashCellId(name);
        AddCellDescription(MatRef{cell_type.id}, desc);
    }
}

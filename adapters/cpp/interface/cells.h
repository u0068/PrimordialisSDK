#pragma once
#include "general.h"

#include "../generated/game_functions/essential.h"
#include "../generated/globals.h"

namespace A {
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
                Internal::AELog(COL_ERROR) << "MatRef not initialised!\n"
                        "Make sure that you are not trying to reference a material that hasn't been created yet.\n"
                        "Falling back to Basic cell.";
                return 1;
            }

            Internal::ALog(COL_MUTED) << "Searching for material '" << name << "'";
            for (int i = 1; i < Game::n_materials; i++) {
                if (strcmp(list[i].name, name) == 0) {
                    numeric = list[i].id;
                    Internal::ALog(COL_MUTED)
                            << "Found material '" << name << "' with id "
                            << GetString() << " (" << numeric << ")"
                            " at index " << i;
                    if (numeric == 0)
                        numeric = HashId(name);
                    index = i;
                    return i;
                }
            }
            Internal::AELog(COL_ERROR) << "Failed to find material '" << name << "'\n"
                    "Make sure that the name is spelled correctly "
                    "and the material has been created before referencing it.\n"
                    "You could also use the cell id such as \"HART\" instead of the name.\n"
                    "Falling back to Basic cell.";
            return 1;
        }
    };
}
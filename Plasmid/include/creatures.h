#pragma once
#include "general.h"

namespace P {
    // Allows you to refer to a material using its pointer, index, filename, numeric id, string id interchangeably
    struct CreatureRef : Internal::ObjRef<creature_t> {
    private:
        using ObjRef::ObjRef; // use the constructors
    public:
        CreatureRef(int idx)
            : ObjRef(P::creature_list, idx) {}

        CreatureRef(uint id)
            : ObjRef(P::creature_list, id) {}

        CreatureRef(const char* id)
            : ObjRef(P::creature_list, id) {}

        CreatureRef(creature_t* ptr)
            : ObjRef(P::creature_list, ptr) {}

        int GetIndex() const override {
            if (index >= 0) {
                return index;
            }

            if (pointer) {
                numeric = pointer->id;
            }

            if (numeric) {
                index = get_creature_index(numeric);
                return index;
            }

            if (not IsInitialised() and name == nullptr) {
                Internal::PELog(COL_ERROR) << "CreatureRef not initialised!\n"
                        "Make sure that you are not trying to reference a creature that hasn't been created yet.\n"
                        "Falling back to index 1.";
                return 1;
            }

            Internal::PLog(COL_MUTED) << "Searching for creature '" << name << "'";
            for (int i = 1; i < n_creatures; i++) {
                if (std::filesystem::path(list[i].filename).filename().stem().compare(name) == 0) {
                    numeric = list[i].id;
                    Internal::PLog(COL_MUTED)
                            << "Found creature '" << name << "' with id "
                            << GetString() << " (" << numeric << ")"
                            " at index " << i;
                    if (numeric == 0)
                        numeric = HashId(name);
                    index = i;
                    return i;
                }
            }
            Internal::PELog(COL_ERROR) << "Failed to find creature '" << name << "'\n"
                    "Make sure that the name is spelled correctly "
                    "and the creature has been created before referencing it.\n"
                    "Falling back to index 1.";
            return 1;
        }
    };
}

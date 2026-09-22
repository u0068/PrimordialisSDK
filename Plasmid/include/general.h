#pragma once
#include "math.h"

#include "generated/game_functions/essential.h"
#include "generated/globals.h"

namespace P::Internal {
    // I hope that using inheritance and polymorphism here doesn't come back to bite me in the ass
    // I did it mostly to learn how to do it

    // A reference to an object
    // Allows you to refer to an object using its pointer, index, name, numeric id, string id interchangeably
    template<typename T>
    struct ObjRef {
    protected:
        T* list{nullptr};

        // I'm making these private and enforcing getters so you can't accidentally use a thing that hasn't been set yet
        // Might change this later to find all the stuff on initialisation rather than doing lazy resolution, idk
        mutable int index{-1};
        mutable const char* name{nullptr};
        mutable T* pointer{nullptr};

        union {
            mutable uint numeric{0};
            mutable char string[5];
        };

    public:
        virtual ~ObjRef() = default;

        // No default constructor to force you to initialise
        // ObjRef() = default;

        explicit ObjRef(T* object_list)
            : list(object_list), numeric(0) {}

        ObjRef(T* object_list, int idx)
            : list(object_list), index(idx), numeric(0) {}

        ObjRef(T* object_list, uint id)
            : list(object_list), numeric(id) {}

        ObjRef(T* object_list, const char* id)
            : list(object_list), numeric(0) {
            if (strlen(id) == 4)
                strcpy_s(string, id);
            else
                name = id;
        }

        ObjRef(T* object_list, T* ptr)
            : list(object_list), pointer(ptr), numeric(0) {}

        bool IsInitialised() const {
            return index >= 0 or numeric > 0 or pointer != nullptr;
        }

        virtual int GetIndex() const {
            P::Log(COL_CRITICAL) << "GetIndex() not implemented for this struct!\nFalling back to 1.";
            P::AttentionToConsole();
            return 1;
        }

        uint GetNumeric() const {
            if (numeric == 0) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return 0;
                }
                numeric = list[index].id;
            }
            return numeric;
        }

        const char* GetString() const {
            numeric = GetNumeric();
            string[4] = '\0';
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
                name = list[index].name;
                return name;
            }
            return name;
        }

        T* GetPointer() const {
            if (pointer == nullptr) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return nullptr;
                }
                pointer = &list[index];
            }
            return pointer;
        }

        T GetCopy() const {
            if (pointer == nullptr) {
                if (index == -1) {
                    index = GetIndex();
                }
                if (index == -1) {
                    return {};
                }
                pointer = &list[index];
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

        operator T *() const {
            return GetPointer();
        }

        operator T() const {
            return GetCopy();
        }
    };
}

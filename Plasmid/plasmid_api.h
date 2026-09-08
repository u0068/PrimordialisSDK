#pragma once
#include <filesystem>
#include <windows.h>
#include "hook_manager.h"
#include "module_manager.h"
#include "math_utils.h"
#include "generated/game_functions/essential.h"
#include "generated/resolve_data.h"

namespace P
{
    inline fs::path mod_path;

    struct CellRef
    {
        mutable int index{-1};
        mutable const char* name{nullptr};

        union
        {
            mutable uint numeric{0};
            mutable char string[5];
        };

        CellRef() = default;

        CellRef(int idx)
            : index(idx)
        {}

        CellRef(uint id)
            : numeric(id)
        {}

        CellRef(const char* id)
        {
            if (strlen(id) == 4)
                strcpy_s(string, id);
            else
                name = id;
        }

        bool IsInitialised() const
        {
            return index >= 0 or numeric > 0;
        }

        int GetIndex() const
        {
            if (index >= 0)
                return index;

            if (numeric == 0 && name == nullptr)
            {
                PlasmidLog()<<"CellRef not initialised";
                return -1;
            }

            if (numeric)
                return get_material_index(numeric);

            PlasmidLog()<<"Searching for cell type '"<<name<<"'";
            for (int i = 1; i < n_materials; i++)
                if (strcmp(materials_list[i].name, name) == 0)
                {
                    numeric = materials_list[i].id;
                    PlasmidLog()<<"Found cell type '"<<name<<"' with id "<<numeric<<" at index "<<i;
                    if (numeric == 0)
                        numeric = HashCellId(name);
                    index = i;
                    return i;
                }
            PlasmidLog()<<"Failed to find cell type '"<<name<<"'";
            return -1;
        }

        uint GetNumeric() const
        {
            if (numeric == 0)
            {
                if (index == -1)
                    index = GetIndex();
                if (index == -1)
                    return 0;
                numeric = materials_list[index].id;
            }
            return numeric;
        }

        const char* GetString() const
        {
            if (numeric == 0)
            {
                if (index == -1)
                    index = GetIndex();
                if (index == -1)
                    return nullptr;
                numeric = materials_list[index].id;
            }
            string[4] = *"\0";
            return string;
        }

        const char* GetName() const
        {
            if (name == nullptr)
            {
                if (index == -1)
                    index = GetIndex();
                if (index == -1)
                    return nullptr;
                name = materials_list[index].name;
                return name;
            }
            return name;
        }

        operator int() const
        {
            return GetIndex();
        }

        operator const char*() const
        {
            return GetString();
        }

        operator uint() const
        {
            return GetNumeric();
        }
    };

    static std::vector<char*> translation_values;

    inline void AddTranslation(const char* _key, char* _value)
    {
        char* key = new char[strlen(_key)+1]{};
        memcpy_s(key, strlen(_key)+1, _key, strlen(_key));

        translation_values.push_back(_value);
        char** value = &translation_values.back();

        translation_list t_list{};
        t_list.text = value;
        t_list.formatted = nullptr;
        t_list.max_formatted = 0;
        add_entry(&w->translations, key, &t_list);
    }

    inline void AddCellDescription(const char* id, char* desc)
    {
        char key[15];
        sprintf_s(key, "cell_%s_desc", id);
        AddTranslation(key, desc);
    }

    inline void SetCellNameAndDesc(material_t &cell_type, const char* name, const char* desc)
    {
        cell_type.name = (char*)name;
        cell_type.id = HashCellId(name);
        AddCellDescription(CellRef{cell_type.id}, (char*)desc);
    }

    inline bool IsThreadSafe()
    {
        auto tls_value = TlsGetValue(tls_index);
        if (tls_value == nullptr)
            return false;
        return *static_cast<int*>(tls_value) == 0;
    }

    inline void LaneSync()
    {
        auto tls_value = TlsGetValue(tls_index);
        EnterSynchronizationBarrier(LPSYNCHRONIZATION_BARRIER(*(longlong *) ((longlong) tls_value + 8) + 0x18),0);
    }

    // TODO: fix member functions and use extra_fields
    inline cell** GetNeighborTable(cell* current_cell)
    {
        constexpr uintptr_t CellAlignmentMask = ~uintptr_t(0x3F);
        constexpr uintptr_t NeighborTableOffset = 0x16B0;
        constexpr uintptr_t CellStride = 0xB0;

        const auto address = reinterpret_cast<uintptr_t>(current_cell);
        const auto block = address & CellAlignmentMask;
        const auto index = (address >> 2) & 0xF;

        return reinterpret_cast<cell**>(
            block + NeighborTableOffset + index * CellStride
        );
    }

    inline cell* GetNeighboringCell(cell* current_cell, int neighbor_index)
    {
        if ((current_cell->flags & (1 << neighbor_index)) != 0)
            return nullptr;

        return GetNeighborTable(current_cell)[neighbor_index];
    }

    inline void InitialiseMod();
};

extern"C" __declspec(dllexport)
inline void Initialise(Nucleus* api, const char* mod_path, const char* mod_name)
{
    nucleus = api;
    P::mod_path = mod_path;
    P::mod_name = mod_name;
    P::translation_values.reserve(2048);
    P::PlasmidLog()<<"Initialised Plasmid!";
    P::InitialiseMod();
    P::Log()<<"Initialised Mod!";
}
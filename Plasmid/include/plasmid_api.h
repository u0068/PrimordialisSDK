#pragma once
#include <filesystem>
#include <windows.h>
#include "hook_manager.h"
#include "nucleus_interface.h"
#include "generated/game_functions/essential.h"
#include "generated/resolve_data.h"

namespace P
{
    inline fs::path mod_path;

    // TODO: Make this human readable with something like base64
    inline uint32_t HashCellId(
        const char *cell
    )
    {
        uint32_t hash = 2166136261;

        auto hash_byte = [&](uint8_t c)
        {
            hash ^= c;
            hash *= 16777619;
        };

        for (char c : (std::string_view)mod_name)
            hash_byte(c);

        hash_byte(':');

        for (char c : (std::string_view)cell)
            hash_byte(c);

        PlasmidLog() << "Generated '"<<cell<<"' id: "<<hash<<"\n";

        return hash;
    }

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

        bool IsInitialised()
        {
            return index >= 0 or numeric > 0;
        }

        int GetIndex() const
        {
            if (index >= 0)
                return index;

            if (numeric == 0 && name == nullptr)
            {
                PlasmidLog()<<"CellRef not initialised\n";
                return -1;
            }

            PlasmidLog()<<"Searching for cell type '"<<name<<"' with id "<<numeric<<"\n";
            for (int i = 1; i < n_materials; i++)
            {
                if (numeric != 0 and materials_list[i].id == numeric)
                {
                    PlasmidLog()<<"Found cell type '"<<name<<"' with id "<<numeric<<" at index "<<i<<"\n";
                    index = i;
                    return i;
                }
                if (strcmp(materials_list[i].name, name) == 0)
                {
                    PlasmidLog()<<"Found cell type '"<<name<<"' with index "<<i<<"\n";
                    numeric = HashCellId(name);
                    index = i;
                    return i;
                }
            }
            PlasmidLog()<<"Failed to find cell type '"<<name<<"' with id "<<numeric<<"\n";
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

    inline void SetCellNameAndDesc(material_t &cell_type, char* name, char* desc)
    {
        cell_type.name = name;
        cell_type.id = HashCellId(name);
        AddCellDescription(CellRef{cell_type.id}, desc);
    }

    inline bool IsThreadSafe()
    {
        auto tls_value = TlsGetValue(tls_index);
        if (tls_value == nullptr)
            return false;
        return *static_cast<int*>(tls_value) == 0;
    }

    inline void InitialiseMod();
};

extern"C" __declspec(dllexport)
inline void Initialise(Nucleus* api, const char* mod_path)
{
    nucleus = api;
    P::mod_path = mod_path;
    P::mod_name = mod_path; // Path is better than nothing
    P::translation_values.reserve(2048);
    P::InitialiseMod();
    P::Log()<<"Initialised Mod!\n";
}
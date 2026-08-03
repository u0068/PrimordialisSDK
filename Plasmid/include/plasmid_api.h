#pragma once

#include "hook_manager.h"
#include "nucleus_interface.h"
#include "generated/properties/material_t.h"
#include <windows.h>

namespace APIUtil
{
    // #include "generated/resolve_functions.h"
    #include "generated/game_functions/essential.h"
    #include "generated/resolve_data.h"

    struct CellRef
    {
        mutable int index{-1};
        // mutable const char* name{nullptr};

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
            // if (strlen(id) == 4)
                strcpy_s(string, id);
            // else
            //     name = id;
        }

        bool IsInitialised()
        {
            return index >= 0 or numeric > 0;
        }

        int GetIndex() const
        {
            if (index >= 0)
                return index;

            if (numeric == 0)
            {
                printf("CellRef not initialised\n");
                return -1;
            }

            printf("Searching for cell %s with id %u\n", string, numeric);
            for (int i = 1; i < n_materials; i++)
            {
                if (materials_list[i].id == numeric)
                {
                    printf("Found cell %s with id %u at index %i\n", string, numeric, i);
                    index = i;
                    return i;
                }
                // if (materials_list[i].name == name)
                // {
                //     printf("Found cell %s with name %s at index %i\n", string, name, i);
                //     index = i;
                //     return i;
                // }
            }
            printf("Failed to find cell %s with id %u\n", string, numeric);
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

        // const char* GetName() const
        // {
        //     if (name==0)
        //     {
        //         if (index == -1)
        //             index = GetIndex();
        //         if (index == -1)
        //             return nullptr;
        //         name = materials_list[index].name;
        //     }
        //     return name;
        // }

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

    inline void AddTranslation(char* _key, char* _value)
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

    inline bool IsThreadSafe()
    {
        return *static_cast<int*>(TlsGetValue(tls_index)) == 0;
    }

    void OnInitMaterials();

    inline void InitMaterialsHook()
    {
        Next<void>();
        if (IsThreadSafe())
        {
            OnInitMaterials();
        }
    }

    struct UpdateWorkCall
    {
        char* traceName = const_cast<char*>("no trace name");
        void(*call)(){};
    };

    static std::vector<UpdateWorkCall> update_cells_work_append;

    inline void DoAllUpdateCellsWork() // called after vanilla cell-related update functions
    {
        for (auto & i : update_cells_work_append)
        {
           begin_trace_stage(i.traceName);
           i.call();
        }
    }

    static void AddAllWorkHook(render_context* param_1, render_context* param_2, user_input* param_3)
    {
        Next<void>(param_1, param_2, param_3);
        DoAllUpdateCellsWork();
    }

    static void APIHookAllUtil()
    {
        Hook<"init_materials_list">(InitMaterialsHook);
        // Hook("update_cells", AddAllWorkHook);
    };
};

extern"C" __declspec(dllexport)
inline void Initialise(NucleusRuntimeAPI* api)
{
    nucleus = api;
    printf("Mod Initialised!\n");
    APIUtil::APIHookAllUtil();
    APIUtil::translation_values.reserve(2048);
}
#pragma once

#include "hook_manager.h"
#include "nucleus_interface.h"
#include "generated/properties/material_t.h"

namespace APIUtil
{
    // #include "generated/resolve_functions.h"
    #include "generated/game_functions/plasmid_api.h"
    #include "generated/resolve_data.h"

    struct CellRef
    {
        mutable int index = -1;

        union
        {
            mutable uint numeric{0};
            char string[5];
        };

        CellRef() = default;

        CellRef(int idx)
            : index(idx)
        {}

        CellRef(uint id)
            : numeric(id)
        {}

        CellRef(const char id[5])
        {
            memcpy(string, id, 5);
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
            }
            printf("Failed to find cell %s with id %u\n", string, numeric);
            return -1;
        }

        uint GetNumeric() const
        {
            if (numeric == 0)
            {
                if (index == -1)
                {
                    printf("CellRef not initialised\n");
                    return 0;
                }
                numeric = materials_list[index].id;
            }
            return numeric;
        }

        const char* GetString() const
        {
            if (numeric == 0)
            {
                if (index == -1)
                {
                    printf("CellRef not initialised\n");
                    return string;
                }
                numeric = materials_list[index].id;
            }
            return string;
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

    struct AddCellCall
    {
        material_t_properties properties;
        CellRef replace{};
        CellRef copyFrom{};
    };

    struct UpdateWorkCall
    {
        char* traceName = const_cast<char*>("no trace name");
        void(*call)(){};
    };

    static std::vector<AddCellCall> cells2add;
    static std::vector<UpdateWorkCall> update_cells_work_append;

    static void QueueAddCell(const AddCellCall& add_cell)
    {
        cells2add.push_back(add_cell);
    }

    inline bool IsThreadSafe()
    {
        return *static_cast<int*>(TlsGetValue(tls_index)) == 0;
    }

    inline void AddAllCells()
    {
        Next<void>();
        if (IsThreadSafe())
        {
            for (auto & cell : cells2add)
            {
                if (n_materials >= 2048)
                {
                    printf("Cell count is at maximum !\n");
                    return;
                }

                int index = cell.replace.GetIndex();
                index = index == -1 ? n_materials : index;
                int copy_from_index = cell.copyFrom.GetIndex();
                copy_from_index = copy_from_index == -1 ? 1 : copy_from_index;

                materials_list[index] = materials_list[copy_from_index];
                printf("copy idx: %i\n",copy_from_index);
                printf("cell idx: %i\n",index);
                printf("int id: %u\n",CellRef{index}.GetNumeric());
                printf("str id: %s\n", CellRef{index}.GetString());
                materials_list[index].max_health = (float)index; // For debugging
                ApplyProperties(materials_list[index], cell.properties);
                if (cell.replace.GetIndex() == -1)
                    n_materials++;
            }
        }
    }

    inline void DoAllUpdateCellsWork() // called after vanilla cell-related update functions
    {
        for (auto & i : update_cells_work_append)
        {
           begin_trace_stage(i.traceName);
           i.call();
        }
    }

    static void AddAllCellsHook()
    {
        AddAllCells();
    }
    static void AddAllWorkHook(render_context* param_1, render_context* param_2, user_input* param_3)
    {
        Next<void>(param_1, param_2, param_3);
        DoAllUpdateCellsWork();
    }

    static void APIHookAllUtil()
    {
        Hook<"init_materials_list">(AddAllCellsHook);
        // Hook("update_cells", AddAllWorkHook);
    };
};

extern"C" __declspec(dllexport)
inline void Initialise(NucleusRuntimeAPI* api)
{
    nucleus = api;
    printf("Mod Initialised!\n");
    APIUtil::APIHookAllUtil();
}
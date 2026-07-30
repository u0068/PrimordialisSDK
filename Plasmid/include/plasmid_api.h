#pragma once

#include "hook_manager.h"
#include "nucleus_interface.h"
#include "generated/properties/material_t.h"

namespace APIUtil
{
    // #include "generated/resolve_functions.h"
    #include "generated/game_functions/plasmid_api.h"
    #include "generated/resolve_data.h"

    struct AddCellCall
    {
        material_t_properties properties;
        int index{-1};
        int copyFrom{-1};
    };

    struct UpdateWorkCall
    {
        char* traceName = const_cast<char*>("no trace name");
        void(*call)(){};
    };

    static std::vector<AddCellCall> cells2add;
    static std::vector<UpdateWorkCall> update_cells_work_append;

    static uint StrToCellIdx(const char* cell)
    {
        uint search = str_to_id(const_cast<char*>(cell));
        for (int i = 1; i < n_materials; i++)
        {
           if (materials_list[i].id == search)
              return i;
        }
        return 0;
    }
    static uint IdToCellIdx(uint search)
    {
        for (int i = 1; i < n_materials; i++)
        {
           if (materials_list[i].id == search)
              return i;
        }
        return 0;
    }

    static void QueueAddCell(const AddCellCall& add_cell)
    {
        cells2add.push_back(add_cell);
    }

    inline void AddAllCells()
    {
        Next<void>();
        int* threadsafe = static_cast<int*>(TlsGetValue(tls_index));
        if (*threadsafe == 0)
        {
            for (auto & cell : cells2add)
            {
                if (n_materials >= 2048)
                {
                    printf("Cell count is at maximum !\n");
                    return;
                }

                uint index = cell.index == -1 ? n_materials : cell.index;
                uint copy_from = cell.copyFrom == -1 ? (cell.index == -1 ? 1 : cell.index) : cell.copyFrom;

                materials_list[index] = materials_list[copy_from];
                materials_list[index].max_health = index;
                ApplyProperties(materials_list[index], cell.properties);
                if (cell.index == -1)
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
        Hook("init_materials_list", AddAllCellsHook);
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
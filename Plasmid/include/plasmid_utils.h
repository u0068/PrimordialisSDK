#pragma once
#include "hook_manager.h"

namespace APIUtil
{
    // #include "generated/resolve_functions.h"
    #include "generated/game_functions/plasmid_api.h"
    #include "generated/resolve_data.h"
    

    enum InitMatAddType
    {
        complex = 0,
        simple = 1,
        function = 2
    };

    struct AddCellCallSimple
    {
        int copyFrom = 1;
        void (*physics_update_fn)(struct cell*) = nullptr;
        void (*force_update_fn)(struct cell*) = nullptr;
        void (*electric_update_fn)(struct cell*) = nullptr;
        void (*connection_update_fn)(struct cell*) = nullptr;
        void (*brain_fn)(struct cell*) = nullptr;
        void (*destroyed_fn)(struct cell*) = nullptr;
        real_4_u_0_s_0 color = { 0.f, 0.f, 0.f, 1.f };
    };

    struct AddCellCallEx
    {
        uint copyFrom;
        void(*overwrite)(material_t*);
        uint newId;
    };

    struct CellFunctionOverwrite
    {
        void (*physics_update_fn)(struct cell*) = nullptr;
        void (*force_update_fn)(struct cell*) = nullptr;
        void (*electric_update_fn)(struct cell*) = nullptr;
        void (*connection_update_fn)(struct cell*) = nullptr;
        void (*brain_fn)(struct cell*) = nullptr;
        void (*destroyed_fn)(struct cell*) = nullptr;
        uint idx = 0;
    };

    struct AddCellCall
    {
        APIUtil::InitMatAddType type = APIUtil::InitMatAddType::simple;

        union context {
           AddCellCallSimple simple;
           AddCellCallEx extensive;
           CellFunctionOverwrite function;
        };

        context cell;
    };

    struct UpdateWorkCall
    {
        char* traceName = const_cast<char*>("no trace name");
        void(*call)(){};
    };

    static std::vector<AddCellCall> cells2add;
    static std::vector<UpdateWorkCall> update_cells_work_append;

    static uint GetCellIdxdByStr(const char* cell)
    {
        uint search = str_to_id(const_cast<char*>("MUSL"));
        for (int i = 1; i < *n_materials; i++)
        {
           if ((*materials_list)[i].id == search)
              return i;
        }
        return 0;
    }
    static uint GetCellIdxById(uint search)
    {
        for (int i = 1; i < *n_materials; i++)
        {
           if ((*materials_list)[i].id == search)
              return i;
        }
        return 0;
    }

    static void QueueAddCell(const AddCellCall& addcell)
    {
        cells2add.push_back(addcell);
    }

    static void AddCell(
        real_4_u_0_s_0 color,
        int copyFrom = 1,
        void (*physics_update_fn)(struct cell*) = nullptr,
        void (*force_update_fn)(struct cell*) = nullptr,
        void (*electric_update_fn)(struct cell*) = nullptr,
        void (*connection_update_fn)(struct cell*) = nullptr,
        void (*brain_fn)(struct cell*) = nullptr,
        void (*destroyed_fn)(struct cell*) = nullptr
    )
    {
        if (*n_materials >= 2048)
        {
           printf("Material count is at maximum !\n");
           return;
        }

        (*materials_list)[*n_materials] = (*materials_list)[copyFrom];
        (*materials_list)[*n_materials].base_cost = float(*n_materials);
        (*materials_list)[*n_materials].movement_force = 0.5f;
        (*materials_list)[*n_materials].base_color = real_4{real_4_u_0{color}};

        (*materials_list)[*n_materials].physics_update_fn = physics_update_fn;
        (*materials_list)[*n_materials].force_update_fn = force_update_fn;
        (*materials_list)[*n_materials].electric_update_fn = electric_update_fn;
        (*materials_list)[*n_materials].connection_update_fn = connection_update_fn;
        (*materials_list)[*n_materials].brain_fn = brain_fn;
        (*materials_list)[*n_materials].destroyed_fn = destroyed_fn;

        *n_materials = *n_materials + 1;
    }

    inline void AddAllCells()
    {
        printf("Before AddAllCells\n");
        Next<void>();
        printf("AddAllCells\n");
        int* threadsafe = static_cast<int*>(TlsGetValue(*tls_index));
        if (*threadsafe == 0)
        {
           for (auto & i : cells2add)
           {
              if (i.type == APIUtil::InitMatAddType::simple)
              {
                 APIUtil::AddCell(
                    i.cell.simple.color,
                    i.cell.simple.copyFrom,
                    i.cell.simple.physics_update_fn,
                    i.cell.simple.force_update_fn,
                    i.cell.simple.connection_update_fn,
                    i.cell.simple.brain_fn,
                    i.cell.simple.destroyed_fn
                 );
              }
              else if (i.type == APIUtil::InitMatAddType::complex)
              {
                 if (*n_materials >= 2048)
                 {
                    printf("Cell count is at maximum !\n");
                    return;
                 }

                 uint idx = GetCellIdxById(i.cell.extensive.copyFrom);
                 if (!idx)
                    continue;

                 (*materials_list)[*n_materials] = (*materials_list)[i.cell.extensive.copyFrom];
                 (*materials_list)[*n_materials].id = i.cell.extensive.newId;
                 i.cell.extensive.overwrite(&((*materials_list)[*n_materials]));
                 *n_materials += 1;
              }
              else
              {
                 /*
                 we have to search for a cell again because vanilla cells will never be loaded at the start of game
                 order of vanilla cells can change per version, if modder wants a faster method can add themselves easily
                 */

                 uint idx = GetCellIdxById(i.cell.function.idx);
                 if (!idx)
                    continue;

                 (*materials_list)[idx].physics_update_fn = i.cell.function.physics_update_fn;
                 (*materials_list)[idx].force_update_fn = i.cell.function.force_update_fn;
                 (*materials_list)[idx].electric_update_fn = i.cell.function.electric_update_fn;
                 (*materials_list)[idx].connection_update_fn = i.cell.function.connection_update_fn;
                 (*materials_list)[idx].brain_fn = i.cell.function.brain_fn;
                 (*materials_list)[idx].destroyed_fn = i.cell.function.destroyed_fn;
              }
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

    static void OverwriteCellFunction(const char* cell, const CellFunctionOverwrite& overwrite)
    {
        uint idx = str_to_id(const_cast<char*>(cell));
        if (idx)
        {
           AddCellCall ncall{};
           ncall.type = InitMatAddType::function;
           ncall.cell.function = overwrite;
           ncall.cell.function.idx = idx;
           cells2add.push_back(ncall);
        }
    }
};
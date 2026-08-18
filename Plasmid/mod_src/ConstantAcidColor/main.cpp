#define MOD_NAME "Constant Acid Color"
#include "plasmid_api.h"

namespace P
{
#include "../include/generated/game_functions/cells.h"
}

void acid(P::cell* cell)
{
    cell_acid(cell);
    int n_acid = P::w->n_acid_particles;
    int n_acid_per_tick = 5;
    for (int i=0; i<n_acid_per_tick; i++)
    {
        int n = n_acid - n_acid_per_tick + i;
        auto color = P::w->acid_particles[n/16].color_initial[n%16];
        color.w = 0.f;
        P::w->acid_particles[n/16].color_final[n%16] = color;
    }
}

void OnInitMats()
{
    Next<void>();
    if (!P::IsThreadSafe())
        return;
    P::material_t* mats = P::materials_list;
    P::material_t cell_type{};

    cell_type = mats[P::CellRef{"Acid cell"}.GetIndex()];
    cell_type.physics_update_fn = acid;
    mats[P::CellRef{"Acid cell"}.GetIndex()] = cell_type;
}

void P::InitialiseMod()
{
    mod_name = "Constant Acid Color";
    Log() << "Hello World!\n";
    Hook<"init_materials_list">(OnInitMats);
}
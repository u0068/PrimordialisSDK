#define MOD_NAME "Example Mod"
#include "plasmid_api.h"

void OnInitMats()
{
    if (!P::IsThreadSafe())
        return
    Next<void>();
    P::material_t* mats = P::materials_list;
    P::material_t cell_type = P::base_material;

    cell_type = mats[P::CellRef{"Basic cell"}.GetIndex()]; // Copy basic cell
    cell_type.base_color = {1,0.5,0.5,1}; // Make it pink
    mats[P::n_materials++] = cell_type; // Make it a new cell type
}

void P::InitialiseMod()
{
    Log("Hello World!\n");
    Hook<"init_materials_list">(OnInitMats);
}
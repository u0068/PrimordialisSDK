#define MOD_NAME "Example Mod"
#include "plasmid_api.h"

namespace P = APIUtil;

void P::OnInitMaterials()
{
    material_t* mats = materials_list;
    material_t cell_type = base_material;

    cell_type = mats[CellRef{"Basic cell"}.GetIndex()]; // Copy basic cell
    cell_type.base_color = {1,0.5,0.5,1}; // Make it pink
    mats[n_materials++] = cell_type; // Make it a new cell type
}

void P::InitialiseMod()
{
    Log("Hello World!\n");
}
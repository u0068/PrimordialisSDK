#define MOD_NAME "Example Mod"
#include "plasmid_api.h"

void APIUtil::OnInitMaterials()
{
    material_t* mats = materials_list;
    material_t cell_type = base_material;

    cell_type = mats[CellRef{"Speedy cell"}.GetIndex()];
    cell_type.name = (char*)"Cell Name";
    cell_type.id = HashCellId(cell_type.name);
    cell_type.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    AddCellDescription(CellRef{cell_type.id}, (char*)"Cell Description");
    mats[n_materials++] = cell_type;
}

extern"C" __declspec(dllexport)
void mod_main()
{
    APIUtil::Log("Hello World!\n");
}
#include "plasmid_api.h"

void APIUtil::OnInitMaterials()
{
    material_t* mats = materials_list;

    material_t cell = mats[CellRef{"BODY"}.GetIndex()];
    cell.name = (char*)"Cell Name";
    cell.id = CellRef{"NWCL"};
    cell.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    AddCellDescription(CellRef{"NWCL"}, (char*)"Cell Description");
    int index = n_materials++;
    mats[index] = cell;
}

extern"C" __declspec(dllexport)
void mod_main()
{
}
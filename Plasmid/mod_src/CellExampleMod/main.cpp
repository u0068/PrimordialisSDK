#define MOD_NAME "Example Mod"
#include "plasmid_api.h"
#include "../include/generated/material_printer.h"

void APIUtil::OnInitMaterials()
{
    material_t* mats = materials_list;
    material_t cell_type = base_material;

    cell_type = mats[CellRef{"Speedy cell"}.GetIndex()];
    cell_type.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    SetCellNameAndDesc(
        cell_type,
        (char*)"Cell Name",
        (char*)"Cell Description"
        );
    mats[n_materials++] = cell_type;
}

void APIUtil::InitialiseMod()
{
    Log("Hello World!\n");
}
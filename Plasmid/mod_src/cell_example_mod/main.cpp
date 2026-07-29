#include "plasmid_api.h"

extern"C" __declspec(dllexport)
void mod_main()
{
    // Halve the density of lightweight cell
    APIUtil::materials_list[APIUtil::GetCellIdxdByStr("LIGT")].density *= 0.5;

    APIUtil::AddCellCall newCell{};
    newCell.cell.simple.copyFrom = APIUtil::GetCellIdxdByStr("TRG0");
    newCell.cell.simple.color = {0.5, 0.6, 0.7, 1.0};
    QueueAddCell(newCell);
}
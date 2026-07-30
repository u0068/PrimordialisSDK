#include "plasmid_api.h"

extern"C" __declspec(dllexport)
void mod_main()
{
    APIUtil::AddCellCall newCell;
    newCell.copyFrom = APIUtil::StrToCellIdx("HARD");
    newCell.properties.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    QueueAddCell(newCell);
}
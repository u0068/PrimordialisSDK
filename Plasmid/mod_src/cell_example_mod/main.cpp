#include "plasmid_api.h"

// void hook()
// {
//     Next<void>();
// }
extern"C" __declspec(dllexport)
void mod_main()
{
    // Hook<"set_lava_walls">(hook);

    APIUtil::AddCellCall newCell;
    newCell.copyFrom = APIUtil::CellRef{"BODY"};
    newCell.props.name = const_cast<char *>("Cell Name");
    newCell.props.desc = const_cast<char *>("Cell Description");
    newCell.props.id = APIUtil::CellRef{"NWCL\0"};
    newCell.props.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    QueueAddCell(newCell);


    newCell.copyFrom = APIUtil::CellRef{"SWIM"};
    newCell.props.name = const_cast<char *>("Cell Name2");
    newCell.props.desc = const_cast<char *>("Cell Description2");
    newCell.props.id = APIUtil::CellRef{"NWC2\0"};
    newCell.props.base_color = real_4{1.0, 0.0, 0.0, 1.0};
    QueueAddCell(newCell);
}
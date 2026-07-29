#include "plasmid_utils.h"

void hooked_set_lava_walls()
{
    printf("Before the walls are lava!\n");
    Next<void>(); //call original function
    printf("After the walls are lava!\n");
}

extern"C" __declspec(dllexport)
void mod_main()
{
    printf("Hello World!\n");

    Hook("set_lava_walls", hooked_set_lava_walls);

    APIUtil::AddCellCall newCell{};
    newCell.cell.simple.copyFrom = 26;
    newCell.cell.simple.color = real_4_u_0_s_0(0.0, 0.0, 0.0, 1.0);
    QueueAddCell(newCell);

    APIUtil::APIHookAllUtil();
}
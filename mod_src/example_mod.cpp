#include "../include/api.h"

void hooked_set_lava_walls()
{
    APIUtil::Log("Before the walls are lava!");
    APIUtil::set_lava_walls(); //call original function
    APIUtil::Log("After the walls are lava!");
}
void hooked_set_lava_walls2()
{
    APIUtil::Log("Before the walls are lava2!");
    APIUtil::set_lava_walls(); //call original function
    APIUtil::Log("After the walls are lava2!");
}

extern"C" __declspec(dllexport)
void mod_main()
{
    APIUtil::Log("Hello World!\n");

    Hook("set_lava_walls", hooked_set_lava_walls);
    Hook("set_lava_walls", hooked_set_lava_walls2);

    // APIUtil::AddCellCall newCell{};
    // newCell.cell.simple.copyFrom = 26;
    // newCell.cell.simple.color = real_4_u_0_s_0(1.0, 0.5, 1.0, 1.0);
    // QueueAddCell(newCell);
    //
    // APIUtil::APIHookAllUtil();
}
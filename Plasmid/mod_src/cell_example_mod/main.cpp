#include "plasmid_api.h"

// void hook()
// {
//     Next<void>();
// }

namespace APIUtil
{
#include "generated/game_functions/world.h"
}

void cell_wall_sensor(cell* cell)
{
    wall_t wall_map;
    real_2 pos{cell->field32_0xbc0.x, cell->field33_0xc00.y};
    APIUtil::wall_map_extended(&wall_map,&APIUtil::w->map,pos);
    cell->field61_0x1440.equilibrium_voltage = 200.0/wall_map.dist;
}

extern"C" __declspec(dllexport)
void mod_main()
{
    // Hook<"set_lava_walls">(hook);

    APIUtil::AddCellCall newCell;
    newCell.copyFrom = APIUtil::CellRef{"FEEL"};
    newCell.properties.name = const_cast<char *>("Wall Sensor");
    newCell.properties.id = APIUtil::str_to_id((char*)"WSNS");
    newCell.properties.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    newCell.properties.electric_update_fn = cell_wall_sensor;
    QueueAddCell(newCell);
}
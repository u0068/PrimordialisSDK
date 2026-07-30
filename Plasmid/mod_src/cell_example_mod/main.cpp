#include "plasmid_api.h"

auto key = (char*)"cell_NWCL_desc";
auto desc = (char*)"Cell Description\0";
auto t_list = new translation_list{};

void hook()
{
    Next<void>();
}

extern"C" __declspec(dllexport)
void mod_main()
{
    // Hook<"set_lava_walls">(hook);

    APIUtil::AddCellCall newCell;
    newCell.copyFrom = APIUtil::CellRef{"BODY"};
    newCell.properties.name = const_cast<char *>("Cell Name");
    newCell.properties.id = APIUtil::str_to_id((char*)"NWCL");
    newCell.properties.base_color = real_4{0.0, 0.0, 0.0, 1.0};
    QueueAddCell(newCell);

    t_list->text = (char*[])desc;
    t_list->formatted = desc;
    t_list->max_formatted = strlen(desc);
    APIUtil::add_entry(&APIUtil::w->translations, key, t_list);
}
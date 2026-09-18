#include "plasmid_api.h"
#include "generated/game_functions/cells.h"
#include "generated/game_functions/creatures.h"

inline void Skeletonize(P::cell *cell)
{
    const int length = P::w->max_cells;
    const int player_id = cell->body_id;
    for (int index = 0; index < length; index++)
    {
        const int current_cell_id = P::w->cell_index_table[index].id;
        P::cell* current_cell = P::get_cell_by_id(current_cell_id);
        if (not current_cell) {
            continue;
        }
        if (current_cell->body_id == player_id) {
            continue;
        }
        if (P::materials_list[current_cell->material_index].is_hard) {
            current_cell->health = 1.0f;
            continue;
        }
        current_cell->temperature = 1.0f;
    }
}


void OnInitMats() {
    P::Next<void>();
    if (not P::IsThreadSafe()) {
        return;
    }

    // P::Log(MUTED_COL) << "MUTED_COL";
    // P::Log(NORMAL_COL) << "NORMAL_COL";
    // P::Log(ERROR_COL) << "ERROR_COL";
    // P::Log(WARNING_COL) << "WARNING_COL";
    // P::Log(SUCCESS_COL) << "SUCCESS_COL";
    // P::Log(CRITICAL_COL) << "SUCCESS_COL";

    P::material_t material{};
    material = P::MatRef{"Venomous cell"}.GetCopy();
    material.base_color = {1.0f, 0.0f, 0.0f, 1.0f};
    material.physics_update_fn = Skeletonize;
    material.id = 'TEST';
    P::materials_list[P::n_materials++] = material;
}

void P::InitialiseMod() {
    P::Hook<"init_materials_list">(OnInitMats);
}

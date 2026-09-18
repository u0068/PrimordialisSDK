#include "plasmid_api.h"
#include "generated/game_functions/cells.h"
#include "generated/game_functions/creatures.h"

void TestFunc(P::cell *cell) {
    auto player_body = P::get_element(&P::w->bodies, P::w->selected_body);
    P::give_mutation(player_body, P::mut_budding_index, nullptr, 0, false);
}

void OnInitMats() {
    P::Next<void>();
    if (not P::IsThreadSafe()) {
        return;
    }

    P::material_t material{};
    material = P::MatRef{"Venomous cell"}.GetCopy();
    material.base_color = {1.0f, 0.0f, 0.0f, 1.0f};
    material.brain_fn = TestFunc;
    P::materials_list[P::n_materials++] = material;
}

void P::InitialiseMod() {
    P::Hook<"init_materials_list">(OnInitMats);
}

#include "plasmid_api.h"
#include "generated/game_functions/cells.h"
#include "generated/game_functions/creatures.h"

inline void Skeletonize(P::cell* cell) {
    const int length = P::w->bodies.n_elements;
    const auto player = P::get_element(&P::w->bodies, cell->body_id);
    for (int index = 0; index < length; index++) {
        const auto NPC = &P::w->bodies.elements[index];
        if (NPC != nullptr && player != nullptr && NPC != player) {
            const int width = NPC->plan.region.l.x - NPC->plan.region.u.x;
            const int height = NPC->plan.region.l.y - NPC->plan.region.u.y;
            const int CellLength = width * height;
            for (int indexB = 0; indexB < CellLength; indexB++) {
                const auto NPCcells = NPC->cell_map;
                if (NPCcells != nullptr) {
                    const int CellID = NPCcells[indexB];
                    const auto CellToDestroy = P::get_cell_by_id(CellID);
                    if (CellToDestroy != nullptr) {
                        const auto TargetHard = P::MatRef{CellToDestroy->material_index}.GetCopy();
                        if (TargetHard.is_hard == false) {
                            CellToDestroy->temperature = 10000.0;
                        }
                        else {
                            CellToDestroy->temperature = 100.0;
                            CellToDestroy->health = 100.0;
                        }
                    }
                }
            }
        }
    }
}

inline void AddSkeletonizationCell() {
    auto material = P::MatRef{"Heart cell"}.GetCopy();
    material.brain_fn = Skeletonize;
    material.base_color = {0.5f, 0.0f, 0.0f, 1.0f};
    material.uv = P::MatRef{"Venomous cell"}.GetPointer()->uv;
    material.light_intensity = 100.0f;
    material.light_radius = 100.0f;
    material.texture_type = 1.0f;
    material.drop_weight = 0.01f;
    P::SetCellNameAndDesc(material, "Cell Of Instant Fucking Skeletonization",
                          "An EVIL and FUCKED UP cell that immolates all nearby creatures instantly.");
    P::materials_list[P::n_materials++] = material;
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

    AddSkeletonizationCell();
}

void P::InitialiseMod() {
    P::Hook<"init_materials_list">(OnInitMats);
}

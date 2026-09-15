#include "plasmid_api.h"
#include "generated/game_functions/world.h"

void OnInitBiomeTypes() {
    P::Next<void>();
    if (!P::IsThreadSafe())
        return;

    // Here we define the biome type, which controls *HOW* it generates
    auto* new_biome_type = P::new_biome_type();
    new_biome_type->id = P::str_to_id("TEST"); // TODO: Generate unique biome ids
    new_biome_type->color = {1.0, 1.0, 0.5}; // Background color, float RGB
    new_biome_type->light = 1.0f; // Ambient light brightness
    // new_biome_type->flags = 1; // Safe zone
    new_biome_type->bumpyness = 5.0f; // Fine wall bumpiness
    new_biome_type->ambient_music_id = 3;
    new_biome_type->battle_music_id = 2;
    new_biome_type->tracked = 1;

    // Terrain generation
    // Play around with the Property Editor mode to see what these do!
    new_biome_type->noise_amount = 0.15f; // Random dithering
    new_biome_type->fbm_amount = 0.10f; // Fractal noise amount
    new_biome_type->fbm_base_frequency = 0.1f; // 1 / noise scale
    new_biome_type->fbm_octives = 4.0f; // Number of fractal layers
    new_biome_type->fbm_gain = 0.5f; // Influence multiplier for each subsequent fmb octave
    new_biome_type->neighbor_fbm = 0.0f; // How much should terrain cells consider their neighbors
    new_biome_type->neighbor_amount = 0.0f; // Bias towards filled terrain cells also having filled neighbors
    new_biome_type->base_amount = 0.02f; // Base emptiness amount

    // Cell spawning
    new_biome_type->cell_chance = 0.5f;
    new_biome_type->cell_max_neighbors = 1;
    //new_biome_type->pool; // TODO: Figure out how cell pools work
}

// This controls when we insert the biome
static bool insert_biome = false;

P::biome_core *OnCreateBiomeCore(int id, int size) {
    // Here we define *WHERE* the biome generates

    auto result = P::Next<P::biome_core *>(id, size);
    // Boilerplate for executing the hook AFTER the specified biome is defined, so the last node is in a known location
    if (id == P::str_to_id("ICEE")) {
        insert_biome = true;
        return result;
    }
    if (not insert_biome)
        return result;
    insert_biome = false;

    auto biome_core = P::create_biome_core(P::str_to_id("TEST"), 1000);
    auto node_1 = &P::w->map.biome_nodes[P::w->map.n_biome_nodes - 1]; // Existing node at end of ICEE biome
    auto node_2 = P::add_biome_node(biome_core); // New node for our biome
    P::biome_edge new_edge{
        nullptr, nullptr,
        {1, 0},
        200,
        0.2,
        0.05f,
        0,
        0
    };
    P::add_biome_edge(node_1, node_2, {1, 0}, &new_edge);

    P::biome_entrance entrance{
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 1, 1, 0, 0
    };
    P::add_biome_entrance(biome_core, biome_core - 2, &entrance);

    return result;
}

void P::InitialiseMod() {
    P::Hook<"init_biome_types">(OnInitBiomeTypes);
    P::Hook<"create_biome_core">(OnCreateBiomeCore);
}

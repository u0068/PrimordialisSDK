#include "plasmid_api.h"

namespace P
{
#include "generated/game_functions/world.h"
}

void OnInitBiomeTypes()
{
    Next<void>();
    if (!P::IsThreadSafe())
        return;

    auto new_biome_type = P::new_biome_type();
    new_biome_type->id = P::str_to_id("TEST");
    new_biome_type->color = {1,1,1};
    new_biome_type->light = 1.f;
}

static bool insert_biome = false;
P::biome_core* OnCreateBiomeCore(int id, int size)
{
    auto result = Next<P::biome_core*>(id, size);
    if (id == P::str_to_id("ICEE"))
    {
        insert_biome = true;
        return result;
    }
    if (not insert_biome)
        return result;
    insert_biome = false;

    auto biome_core = P::create_biome_core(P::str_to_id("TEST"), 1000);
    auto node_1 = &P::w->map.biome_nodes[P::w->map.n_biome_nodes-1];
    auto node_2 = P::add_biome_node(biome_core);
    P::biome_edge new_edge{
        nullptr, nullptr,
        {1,0},
        200,
        0.2,
        0.05f,
        0,
        0
    };
    P::add_biome_edge(node_1, node_2, {1,0}, &new_edge);

    P::biome_entrance entrance{
        0,0,0,0,0,0,0,0,
        0,0,1,0, 1,1,0,0
    };
    P::add_biome_entrance(biome_core, biome_core-2, &entrance);

    return result;
}

void P::InitialiseMod()
{
    mod_name = "Biome Mod";
    Log() << "Hello World!\n";
    Hook<"init_biome_types">(OnInitBiomeTypes);
    Hook<"create_biome_core">(OnCreateBiomeCore);
}
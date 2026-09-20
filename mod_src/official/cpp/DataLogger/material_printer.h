#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <format>

constexpr int tag_count{11};
inline const char *tag_names[tag_count] = {
    "WEAPON", "UTILITY", "MOVEMENT", "DEFENCE",
    "STRUCTURE", "ELECTRICAL", "NEURON", "START", "NONLETHAL", "NOSTART", "UNKNOWN"
};

inline std::string PrintTags(uint tags) {
    std::stringstream stream{};
    for (auto i = 0; i < tag_count; i++) {
        if ((tags >> i) & 1) {
            stream << "        ";
            stream << tag_names[i];
            stream << "\n";
        }
    }
    return stream.str();
}

inline void PrintMaterialProperties() {
    std::string filename = "material_properties.txt";
    std::ofstream outFile(filename);

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    const auto &basic = P::materials_list[1];

    for (int i = 1; i < P::n_materials; i++) {
        P::material_t material = P::materials_list[i];
        outFile << std::format("---- {} ----\n", material.name);
        outFile << "General:\n";
        outFile << std::format("    id: {} {}\n", P::MatRef{material.id}.GetString(), material.id);
        outFile << std::format("    cell_type_index: {}\n", i);
        if (material.next_variant)
            outFile << std::format("    next_variant: {}\n", material.next_variant);
        outFile << "    tags:\n";
        outFile << PrintTags(material.tags);
        outFile << std::format("    tier: {}\n", material.tier);
        outFile << std::format("    drop_weight: {:.2g}\n", material.drop_weight);
        if (material.spawn_with[0])
            outFile << std::format("    spawn_with: {}\n", material.spawn_with[0]);
        // outFile << std::format("    spawn_with_1: {}\n", material.spawn_with[1]);
        // outFile << std::format("    spawn_with_2: {}\n", material.spawn_with[2]);
        // outFile << std::format("    spawn_with_3: {}\n", material.spawn_with[3]);
        outFile << "Biomass:\n";
        outFile << std::format("    base_cost: {:.2g}\n", material.base_cost);
        // outFile << std::format("    random_cost: {:.2g}\n", material.random_cost);
        outFile << std::format("    genome_size: {:.2g}\n", material.genome_size);
        if (i == 1 or material.growth_rate != basic.growth_rate)
            outFile << std::format("    growth_rate: {:.2g}\n", material.growth_rate);
        outFile << std::format("    max_health: {:.2g}\n", material.max_health);
        if (i == 1 or material.transfer_rate != basic.transfer_rate)
            outFile << std::format("    transfer_rate: {:.2g}\n", material.transfer_rate);
        if (i == 1 or material.regen != basic.regen)
            outFile << std::format("    regen: {:.2g}\n", material.regen);
        if (i == 1 or material.regen_delay_multiplier != basic.regen_delay_multiplier)
            outFile << std::format("    regen_delay_multiplier: {:.2g}\n", material.regen_delay_multiplier);
        if (material.flags) outFile << "Flags:\n";
        if (material.attach_to_cells) outFile << "    attach_to_cells\n";
        if (material.attach_to_walls) outFile << "    attach_to_walls\n";
        if (material.poison_immune) outFile << "    poison_immune\n";
        if (material.no_electric_growth) outFile << "    no_electric_growth\n";
        if (material.penetrate_walls) outFile << "    penetrate_walls\n";
        if (material.self_touching) outFile << "    self_touching\n";
        if (material.is_cancer) outFile << "    is_cancer\n";
        if (material.is_directional) outFile << "    is_directional\n";
        if (material.show_adjacency) outFile << "    show_adjacency\n";
        if (material.show_direction) outFile << "    show_direction\n";
        if (material.show_neighbor_direction) outFile << "    show_neighbor_direction\n";
        if (material.is_hard) outFile << "    is_hard\n";
        if (material.play_note) outFile << "    play_note\n";
        if (material.no_recolor) outFile << "    no_recolor\n";
        if (material.sync_health) outFile << "    sync_health\n";
        if (material.is_stem) outFile << "    is_stem\n";
        // outFile << std::format("    flags: {:b}\n", material.flags);
        outFile << "Contact:\n";
        if (material.sharpness != basic.sharpness)
            outFile << std::format("    sharpness: {:.2g}\n", material.sharpness);
        if (material.leeching != basic.leeching)
            outFile << std::format("    leeching: {:.2g}\n", material.leeching);
        if (material.hardness != basic.hardness)
            outFile << std::format("    hardness: {:.2g}\n", material.hardness);
        outFile << "Physics:\n";
        if (i == 1 or material.density != basic.density)
            outFile << std::format("    density: {:.2g}\n", material.density);
        if (i == 1 or material.max_radial_force != basic.max_radial_force)
            outFile << std::format("    max_radial_force: {:.2g}\n", material.max_radial_force);
        if (i == 1 or material.max_angular_force != basic.max_angular_force)
            outFile << std::format("    max_angular_force: {:.2g}\n", material.max_angular_force);
        if (i == 1 or material.radial_compliance != basic.radial_compliance)
            outFile << std::format("    radial_compliance: {:.2g}\n", material.radial_compliance);
        if (i == 1 or material.angular_compliance != basic.angular_compliance)
            outFile << std::format("    angular_compliance: {:.2g}\n", material.angular_compliance);
        if (i == 1 or material.base_radius != basic.base_radius)
            outFile << std::format("    base_radius: {:.2g}\n", material.base_radius);
        if (i == 1 or material.plasticity != basic.plasticity)
            outFile << std::format("    plasticity: {:.2g}\n", material.plasticity);
        if (i == 1 or material.friction != basic.friction)
            outFile << std::format("    friction: {:.2g}\n", material.friction);
        if (i == 1 or material.restitution != basic.restitution)
            outFile << std::format("    restitution: {:.2g}\n", material.restitution);
        if (i == 1 or material.drag != basic.drag)
            outFile << std::format("    drag: {:.2g}\n", material.drag);
        if (i == 1 or material.tangent_drag != basic.tangent_drag)
            outFile << std::format("    tangent_drag: {:.2g}\n", material.tangent_drag);
        if (i == 1 or material.movement_force != basic.movement_force)
            outFile << std::format("    movement_force: {:.2g}\n", material.movement_force);
        outFile << "Electricity:\n";
        if (material.conductivity != basic.conductivity)
            outFile << std::format("    conductivity: {:.2g}\n", material.conductivity);
        if (material.directional_conductivity != basic.directional_conductivity)
            outFile << std::format("    directional_conductivity: {:.2g}\n", material.directional_conductivity);
        if (i == 1 or material.leak_conductivity != basic.leak_conductivity)
            outFile << std::format("    leak_conductivity: {:.2g}\n", material.leak_conductivity);
        if (i == 1 or material.capacitance != basic.capacitance)
            outFile << std::format("    capacitance: {:.2g}\n", material.capacitance);
        if (i == 1 or material.inv_capacitance != basic.inv_capacitance)
            outFile << std::format("    inv_capacitance: {:.2g}\n", material.inv_capacitance);
        outFile << "Heat:\n";
        if (i == 1 or material.heat_conductivity != basic.heat_conductivity)
            outFile << std::format("    heat_conductivity: {:.2g}\n", material.heat_conductivity);
        if (i == 1 or material.leak_heat_conductivity != basic.leak_heat_conductivity)
            outFile << std::format("    leak_heat_conductivity: {:.2g}\n", material.leak_heat_conductivity);
        if (i == 1 or material.heat_capacity != basic.heat_capacity)
            outFile << std::format("    heat_capacity: {:.2g}\n", material.heat_capacity);
        if (i == 1 or material.inv_heat_capacity != basic.inv_heat_capacity)
            outFile << std::format("    inv_heat_capacity: {:.2g}\n", material.inv_heat_capacity);
        outFile << "Visual:\n";
        outFile << std::format("    base_color: {:.2g}, {:.2g}, {:.2g}\n",
                               material.base_color.x, material.base_color.y, material.base_color.z);
        if (material.light_radius != basic.light_radius)
            outFile << std::format("    light_radius: {:.2g}\n", material.light_radius);
        if (material.light_intensity != basic.light_intensity)
            outFile << std::format("    light_intensity: {:.2g}\n", material.light_intensity);
        if (material.emission.x and material.emission.y and material.emission.z)
            outFile << std::format("    emission: {:.2g}, {:.2g}, {:.2g}\n",
                                   material.emission.x, material.emission.y, material.emission.z);
        outFile << std::format("    texture_type: {}\n", material.texture_type);
        outFile << std::format("    uv: (({:.0f}, {:.0f}) + 0.5) / 32\n", (material.uv.x) * 32.0f - 0.5f,
                               material.uv.y * 32.0f - 0.5f);
        if (material.physics_update_fn or material.force_update_fn or material.electric_update_fn
            or material.connection_update_fn or material.brain_fn or material.destroyed_fn)
            outFile << "Functions:\n";
        if (material.physics_update_fn)
            outFile << "    physics_update_fn: " << material.physics_update_fn << "\n";
        if (material.force_update_fn)
            outFile << "    force_update_fn: " << material.force_update_fn << "\n";
        if (material.electric_update_fn)
            outFile << "    electric_update_fn: " << material.electric_update_fn << "\n";
        if (material.connection_update_fn)
            outFile << "    connection_update_fn: " << material.connection_update_fn << "\n";
        if (material.brain_fn)
            outFile << "    brain_fn: " << material.brain_fn << "\n";
        if (material.destroyed_fn)
            outFile << "    destroyed_fn: " << material.destroyed_fn << "\n";
        outFile << "\n\n";
    }

    outFile.close();
}

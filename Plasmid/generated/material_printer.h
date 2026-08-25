#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <format>

inline void print_material_properties()
{
    std::string filename = "output.txt";
    std::ofstream outFile(filename);

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    for (int i = 1; i < APIUtil::n_materials; i++)
    {
        APIUtil::material_t material = APIUtil::materials_list[i];
        outFile << std::format("id: {}\n", APIUtil::CellRef{material.id}.GetString());
        outFile << std::format("name: {}\n", material.name);
        outFile << std::format("next_variant: {}\n", material.next_variant);
        outFile << std::format("tags: {:b}\n", material.tags);
        outFile << std::format("tier: {}\n", material.tier);
        outFile << std::format("drop_weight: {:.2g}\n", material.drop_weight);
        outFile << std::format("spawn_with: {}\n", material.spawn_with[0]);
        // outFile << std::format("spawn_with_1: {}\n", material.spawn_with[1]);
        // outFile << std::format("spawn_with_2: {}\n", material.spawn_with[2]);
        // outFile << std::format("spawn_with_3: {}\n", material.spawn_with[3]);
        outFile << std::format("base_cost: {:.2g}\n", material.base_cost);
        // outFile << std::format("random_cost: {:.2g}\n", material.random_cost);
        outFile << std::format("genome_size: {:.2g}\n", material.genome_size);
        outFile << std::format("growth_rate: {:.2g}\n", material.growth_rate);
        outFile << std::format("max_health: {:.2g}\n", material.max_health);
        outFile << std::format("transfer_rate: {:.2g}\n", material.transfer_rate);
        outFile << std::format("regen: {:.2g}\n", material.regen);
        outFile << std::format("attach_to_cells: {}\n", (bool)material.attach_to_cells);
        outFile << std::format("attach_to_walls: {}\n", (bool)material.attach_to_walls);
        outFile << std::format("poison_immune: {}\n", (bool)material.poison_immune);
        outFile << std::format("no_electric_growth: {}\n", (bool)material.no_electric_growth);
        outFile << std::format("penetrate_walls: {}\n", (bool)material.penetrate_walls);
        outFile << std::format("self_touching: {}\n", (bool)material.self_touching);
        outFile << std::format("is_cancer: {}\n", (bool)material.is_cancer);
        outFile << std::format("is_directional: {}\n", (bool)material.is_directional);
        outFile << std::format("show_adjacency: {}\n", (bool)material.show_adjacency);
        outFile << std::format("show_direction: {}\n", (bool)material.show_direction);
        outFile << std::format("is_hard: {}\n", (bool)material.is_hard);
        outFile << std::format("play_note: {}\n", (bool)material.play_note);
        outFile << std::format("no_recolor: {}\n", (bool)material.no_recolor);
        // outFile << std::format("flags: {:b}\n", material.flags);
        outFile << std::format("density: {:.2g}\n", material.density);
        outFile << std::format("sharpness: {:.2g}\n", material.sharpness);
        outFile << std::format("leeching: {:.2g}\n", material.leeching);
        outFile << std::format("hardness: {:.2g}\n", material.hardness);
        outFile << std::format("max_radial_force: {:.2g}\n", material.max_radial_force);
        outFile << std::format("max_angular_force: {:.2g}\n", material.max_angular_force);
        outFile << std::format("radial_compliance: {:.2g}\n", material.radial_compliance);
        outFile << std::format("angular_compliance: {:.2g}\n", material.angular_compliance);
        outFile << std::format("plasticity: {:.2g}\n", material.plasticity);
        outFile << std::format("friction: {:.2g}\n", material.friction);
        outFile << std::format("restitution: {:.2g}\n", material.restitution);
        outFile << std::format("drag: {:.2g}\n", material.drag);
        outFile << std::format("tangent_drag: {:.2g}\n", material.tangent_drag);
        outFile << std::format("movement_force: {:.2g}\n", material.movement_force);
        outFile << std::format("conductivity: {:.2g}\n", material.conductivity);
        outFile << std::format("leak_conductivity: {:.2g}\n", material.leak_conductivity);
        outFile << std::format("capacitance: {:.2g}\n", material.capacitance);
        outFile << std::format("inv_capacitance: {:.2g}\n", material.inv_capacitance);
        outFile << std::format("directional_conductivity: {:.2g}\n", material.directional_conductivity);
        outFile << std::format("heat_conductivity: {:.2g}\n", material.heat_conductivity);
        outFile << std::format("leak_heat_conductivity: {:.2g}\n", material.leak_heat_conductivity);
        outFile << std::format("heat_capacity: {:.2g}\n", material.heat_capacity);
        outFile << std::format("inv_heat_capacity: {:.2g}\n", material.inv_heat_capacity);
        outFile << std::format("base_color.r: {:.2g}\n", material.base_color.x);
        outFile << std::format("base_color.g: {:.2g}\n", material.base_color.y);
        outFile << std::format("base_color.b: {:.2g}\n", material.base_color.z);
        outFile << std::format("light_radius: {:.2g}\n", material.light_radius);
        outFile << std::format("light_intensity: {:.2g}\n", material.light_intensity);
        outFile << std::format("emission.r: {:.2g}\n", material.emission.x);
        outFile << std::format("emission.g: {:.2g}\n", material.emission.y);
        outFile << std::format("emission.b: {:.2g}\n", material.emission.z);
        outFile << std::format("texture_type: {}\n", material.texture_type);
        outFile << std::format("\n");
    }

    outFile.close();
}

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <format>

inline void print_material_tags() {
    std::string filename = "material_tags.txt";
    std::ofstream outFile(filename);

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    constexpr int tag_count = 10;

    std::vector<const char*> names_per_tag[tag_count];

    outFile << "Tags per mat:\n";

    for (int i = 1; i < P::n_materials; i++) {
        P::material_t material = P::materials_list[i];
        outFile << std::format("{}:\n", material.name);
        outFile << std::format("    tags: {:0>{}b}\n", material.tags, tag_count);
        for (int j = 0; j < tag_count; j++) {
            if ((material.tags >> j) & 1) {
                names_per_tag[j].push_back(material.name);
            }
        }
    }

    outFile << "Mats per tag:\n";

    for (int i = 0; i < tag_count; i++) {
        outFile << "Tag Bit: " << i << "\n";
        for (const auto name : names_per_tag[i]) {
            outFile << "    " << name << "\n";
        }
    }

    outFile.close();
}

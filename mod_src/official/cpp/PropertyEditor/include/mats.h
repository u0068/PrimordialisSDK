#pragma once
#include "plasmid_api.h"

inline bool reset_mats_on_reload = false;
inline bool has_initialised_mats = false;
constexpr int n_vanilla_mats = 86;

inline P::material_t CopyMaterial(P::material_t mat) {
    auto buffer = new char{};
    strcpy_s(buffer, 32, mat.name);
    mat.name = buffer;
    mat.id = P::HashId(mat.name);
    return mat;
}

inline void SaveAllMats(const fs::path& file_path) {
    std::ofstream file(file_path, std::ios::out | std::ios::binary);

    if (!file) return;

    file.clear();

    int n_mats = P::n_materials;
    file.write((char*)&n_mats, sizeof(int));
    file.write((char*)&*P::materials_list, n_mats * sizeof(P::material_t));
    for (auto i = 0; i < n_mats; i++) {
        file.write(P::materials_list[i].name, 32);
    }
    P::Log() << n_mats;

    file.close();
}

inline void LoadAllMats(const fs::path& file_path) {
    std::ifstream file(file_path, std::ios::in | std::ios::binary);

    if (!file) return;

    file.clear();

    int n_mats{};
    file.read((char*)&n_mats, sizeof(int));
    file.read((char*)&*P::materials_list, n_mats * sizeof(P::material_t));
    for (auto i = 0; i < n_mats; i++) {
        if (i > n_vanilla_mats - 1) {
            P::materials_list[i].name = new char[32]{"Unnamed cell"};
        }
        file.read((char*)P::materials_list[i].name, 32);
    }
    P::Log() << n_mats;
    P::n_materials = n_mats;

    file.close();
}

inline void InitMaterialsHook() {
    if (not reset_mats_on_reload and has_initialised_mats) {
        // TO-DO: Get number of vanilla cells automatically
        P::next_icon_index = n_vanilla_mats-1;
        return;
    }
    P::Next<void>();
    if (!P::IsThreadSafe()) {
        return;
    }
    has_initialised_mats = true;
}

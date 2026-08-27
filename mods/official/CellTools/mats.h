#pragma once
#include "plasmid_api.h"

inline int n_vanilla_mats{};
inline bool reset_on_reload = false;

union material_u
{
    P::material_t mat;
    byte data[280];
};

inline P::material_t CopyMaterial(P::material_t mat)
{
    // Idk if this is a good way to unlink char* but it works
    mat.name = (char*)(new std::string(mat.name))->c_str();
    mat.id = P::HashCellId(mat.name);
    return mat;
}

inline std::string SaveMat(P::material_t& mat)
{
    std::stringstream output;
    output << mat.name << "\n";
    output << "{";
    for (int i = 0; i < 280; i++)
    {
        byte data = material_u{mat}.data[i];
        if (data < 100)
            output << "0";
        if (data < 10)
            output << "0";
        output << std::to_string(data);
        output << ",";
    }
    output << "}\n";
    return output.str();
}

inline void SaveAllMats()
{
    std::ofstream file("materials.txt");

    if (!file) return;

    file.clear();

    for (int idx = 0; idx < P::n_materials; idx++)
    {
        P::material_t& mat = P::materials_list[idx];
        file << SaveMat(mat);
    }

    file.close();
}

inline P::material_t LoadMat(std::string& data_string, std::string& name)
{
    material_u mat_data{};
    for (int i = 0; i < 280; i++)
    {
        byte data = std::stoi(data_string.substr(1+i*4, 3));
        mat_data.data[i] = data;
    }
    mat_data.mat.name = (char*)(new std::string(name))->c_str();
    return mat_data.mat;
}

inline void LoadAllMats()
{
    std::ifstream file("materials.txt");

    if (!file) return;

    file.clear();

    material_u mat_data{};
    int line_num{};
    std::string line{};
    std::string name;
    while (getline(file, line))
    {
        if (line_num % 2 == 0)
        {
            name = line;
        }
        else
        {
            LoadMat(line, name);
            P::materials_list[line_num/2] = mat_data.mat;
        }
        line_num++;
    }

    file.close();
}

inline void InitMaterialsHook()
{
    if (!reset_on_reload and n_vanilla_mats > 0)
        return;
    Next<void>();
    if (!P::IsThreadSafe())
        return;
    if (n_vanilla_mats == 0)
        n_vanilla_mats = P::n_materials;
}
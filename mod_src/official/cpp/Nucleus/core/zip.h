#pragma once
#include <zip_file.hpp>
#include "mods.h"

inline void ExtractZip(
    const fs::path& zip,
    const fs::path& destination) {
    A::Log(COL_MUTED) << "Extracting " << zip << " to " << destination << "\n";
    miniz_cpp::zip_file file(zip.string());
    for (const auto& name: file.namelist()) {
        fs::path output = destination / name;

        // Directory entry
        if (name.back() == '/') {
            create_directories(output);
            continue;
        }

        // Ensure parent directory exists
        create_directories(output.parent_path());
    }
    file.extractall(destination.string());
}

inline bool ExtractPDBs() {
    if (fs::exists("pdbs.zip")) {
        ExtractZip("pdbs.zip", ModParser::game_path);
        return true;
    }
    A::ELog(COL_CRITICAL) << "pdbs.zip not found.\nVerify integrity game files!";
    return false;
}
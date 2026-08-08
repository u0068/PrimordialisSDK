#pragma once
#include <filesystem>

int main(int argc, char** argv)
{
    // argv[1] = old Pilus path
    // argv[2] = downloaded new Pilus path

    const std::filesystem::path target = argv[1];
    const std::filesystem::path update = argv[2];

    // Wait for Pilus to exit.

    while (IsProcessRunning("Pilus.exe"))
        Sleep(50);

    std::filesystem::path backup =
        target.parent_path() / "Pilus.old.exe";

    std::filesystem::remove(backup);

    std::filesystem::rename(target, backup);

    std::filesystem::rename(update, target);

    // Start new Pilus.

    return 0;
}
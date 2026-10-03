#pragma once

// Windows console color palette colors
enum COLOR {
    FOREGROUND = 0x01, // Redundant. Usage: (FOREGROUND * RED)
    BACKGROUND = 0x10, // Usage: (BACKGROUND * RED)

    BLACK = 0x0,
    BLUE = 0x1,
    GREEN = 0x2,
    RED = 0x4,
    LIGHT = 0x8,

    WHITE = RED | GREEN | BLUE,
    YELLOW = RED | GREEN,
    CYAN = GREEN | BLUE,
    MAGENTA = BLUE | RED,
    GRAY = LIGHT | BLACK,

    COL_MUTED = GRAY,
    COL_NORMAL = WHITE,
    COL_ERROR = LIGHT | RED,
    COL_WARNING = YELLOW,
    COL_SUCCESS = LIGHT | GREEN,
    COL_INFO = CYAN,
    COL_CRITICAL = LIGHT | YELLOW | BACKGROUND * RED,
};

enum MATERIAL_TAGS {
    TAG_WEAPON = 1 << 0, // Weapons that spawn at the start
    TAG_UTILITY = 1 << 1, // Specialised, non-weapon cells
    TAG_MOVEMENT = 1 << 2, // Cells used for moving the creature
    TAG_DEFENCE = 1 << 3, // This seems to be intended for cells that heal the player
    TAG_STRUCTURE = 1 << 4, // Cells that are primarily used for their structural properties
    TAG_ELECTRICAL = 1 << 5, // Cells used in electrical circuits
    TAG_NEURON = 1 << 6, // Neuron cells
    TAG_START = 1 << 7, // Cells you start with
    TAG_NONLETHAL = 1 << 8, // Non-lethal weapons that spawn at the start. I think it's to make sure that you get at least one lethal weapon
    TAG_NOSTART = 1 << 9, // Weapons that do not spawn at the start
};
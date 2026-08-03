# Plasmid API
A WIP modding API for C++ mods, made for the [Pilus Modloader](https://github.com/u0068/Pilus)

## AIMS:
- C++ API (Plasmid)
- Runtime API (Nucleus)
- Extend the LUA API
## TODO:
- Lua API
- External mod config and assets
- Documentation
  - Examples
  - Tutorials
  - Comments
- Optimise if easy to do while remaining readable
- Helper functions
  - mod_main() (DONE)
  - Cell creation (DONE)
  - Advanced cell stuff
  - Make thread safety trivial (DONE)
  - Adding translation entries (DONE)
- Organisation
  - Organise directories (DONE)
  - Organise files (DONE)
    - Make file names make sense (DONE)
  - Organise code (DONE)
  - Organise function resolutions (DONE)
    - Easily find, enable/disable relevant functions to speed up build time (DONE)
  - Organise data label resolutions
  - Organise data types
  - Ghidra script to output already organised stuff (DONE)
  - Separate mod dev stuff from API dev (eg CMakeLists) (DONE)
  - Mod versioning
  - Plasmid API versioning
  - Nucleus API versioning
  - Collapse generated data types like field_0x1234 and _s_0 (DONE)
- Fix bugs
  - CMake find_package warning
## DONE:
- Log to file (DONE)
- Prefix mod name to log (DONE)
- Unscuff the super scuffed temporary solutions (DONE)
- Precompute relevant symbol ~~addresses~~ resolutions (DONE)
  - Functions (DONE)
  - Labels (DONE)
- Precompute data type definitions (DONE)
  - Structs (DONE)
  - Unions (DONE)
  - Enums (DONE)
- Make a DLL (DONE)
- Hook functions (DONE)
  - Simple hooks (DONE)
  - Multiple hooks per address (DONE)
  - Middleware (DONE)

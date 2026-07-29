Primordialis SDK is a modding SDK for Primordialis.<br>
# Contents:
- Pilus Modloader
- Nucleus Runtime API
- Plasmid Modding API
- Primordialis PDB files

# Loading Mods into Primordialis:
To load mods into Primordialis, you need to download Pilus.exe, NucleusRuntimeAPI.dll 
and primordialis.pbd from [Releases](https://github.com/u0068/PrimordialisSDK/releases) and
put them into the Primordialis folder in your steam library.<br>
Then launch Pilus.exe which will create a "mods" folder in Primordialis/mods.<br>
Then, put your installed mods in the "mods" folder, configure and enable them to your liking,
and launch Primordialis from Pilus by pressing "start".<br>

# Making Mods:
To make mods, you need the Plasmid Modding API source code, and any IDE that can build
C++ shared libraries such as Visual Studio, VScode, or Clion.<br>
You can download Plasmid.zip from releases, clone the entire SDK repo, 
or use the following git commands to get only Plasmid:
```bash
git clone --filter=blob:none --sparse https://github.com/u0068/PrimordialisSDK
cd PrimordialisSDK
git sparse-checkout set Plasmid
```
To peek into the game's code, use a decompiler, such as [Ghidra](http://ghidra.net/).<br>
Load the Primordialis PDB before decompiling, by following the steps given in the
Ghidra Docs (or just search it up).
# Contributing to the SDK
To contribute, clone the entire repo:
```bash
git clone https://github.com/you/PrimordialisSDK
```
Alternatively, you can sparsely checkout only the parts you want to contribute to.<br>
For example, this is how you would only get Nucleus and Plasmid source code,
without the Pilus source code:
```bash
git clone --filter=blob:none --sparse https://github.com/u0068/PrimordialisSDK
cd PrimordialisSDK
git sparse-checkout set Plasmid
git sparse-checkout set Nucleus
```

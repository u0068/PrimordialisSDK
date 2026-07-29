Primordialis SDK is a modding SDK for Primordialis.
It contains the Pilus Modloader, Nucleus Runtime API, and Plasmid Modding API
# Loading Mods into Primordialis:
To load mods into Primordialis, you need to download Pilus.exe, NucleusRuntimeAPI.dll and primordialis.pbd from Releases and put them into the Primordialis folder in your steam library.
Then launch Pilus.exe which will create a "mods" folder in Primordialis/mods.
Then, put your installed mods in the "mods" folder, configure and enable them to your liking, and launch Primordialis from Pilus by pressing "start" 
# Making Mods:
To make mods, you need the Plasmid Modding API source code, and any IDE that can build C++ shared libraries such as Visual Studio, VScode, or Clion. 
You can download Plasmid.zip from releases, clone the entire SDK repo, or use the following git commands to get only Plasmid
```bash
git clone --filter=blob:none --sparse https://github.com/u0068/PrimordialisSDK
cd PrimordialisSDK
git sparse-checkout set Plasmid
```
# Contributing to the SDK
To contribute, clone the entire repo
```bash
git clone https://github.com/you/PrimordialisSDK
```
or sparsely checkout only the parts you want to contribute to.
For example, this is how you would only get Nucleus and Plasmid source code, without the Pilus source code:
```bash
git clone --filter=blob:none --sparse https://github.com/u0068/PrimordialisSDK
cd PrimordialisSDK
git sparse-checkout set Plasmid
git sparse-checkout set Nucleus
```

# DIA Inline Dump
Dumps all the inline site info from the PDB using DIA
## How to use
1. Run this with `dia_inline_dump.exe <pdb> [output.json]`
   - Remember to save the output somewhere that the next script can access it
2. Run `Ghidra Scripts/PyGhidra/inline_annotator.py` in PyGhidra (may take a while).
3. Enjoy your annotated inlines!
4. If you also want code folding, run `Ghidra Scripts/PyGhidra/process_inline_region_markers.py`
which will replace the markers with collapsible `#pragma region`s.
   - Note that decompiled files are so full of errors that some IDEs' like CLion's code folding breaks.
   In that case, use VSCode instead.
# from ghidra.ghidra_builtins import currentProgram

from ghidra_types import TypeExporter
from cpp_emitter import CppEmitter
from util import *

exporter = TypeExporter(currentProgram)

types = exporter.get_types(currentProgram)

cpp = CppEmitter()

cpp.emit("#pragma once")
cpp.emit()

for t in sort_types(types):
    if t.getName() == "material_t":
        cpp.emit_printer(t)

cpp.write(r"C:\Users\g3nio\CLionProjects\PrimordialisSDK\Plasmid\include\generated\material_printer.h")
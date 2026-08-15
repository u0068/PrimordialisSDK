# from ghidra.ghidra_builtins import currentProgram

from cpp_emitter import CppEmitter
from ghidra_types import TypeExporter
from util import *

exporter = TypeExporter(currentProgram)

types = exporter.get_types(currentProgram)

cpp = CppEmitter()

cpp.emit("#pragma once")
cpp.emit()
cpp.emit("#include <windows.h>")
cpp.emit("#include \"typedefs.h\"")
cpp.emit()

# for t in types:
#     cpp.emit_forward_decl(t)

cpp.emit_forward_declarations(types)

for t in sort_types(types):
    cpp.emit_definition(t)

cpp.write(r"C:\Users\g3nio\CLionProjects\PrimordialisSDK\Plasmid\include\generated\data_types.h")
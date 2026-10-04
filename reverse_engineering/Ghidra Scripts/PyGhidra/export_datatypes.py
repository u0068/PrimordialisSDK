#@category PrimordialisSDK
# from ghidra.ghidra_builtins import currentProgram

from c_emitter import CEmitter
from ghidra_types import TypeExporter
from util import *

exporter = TypeExporter(currentProgram)

types = exporter.get_types(currentProgram)

c_emitter = CEmitter()

c_emitter.emit("#pragma once")
c_emitter.emit()
c_emitter.emit("#include <windows.h>")
c_emitter.emit("#include <stdint.h>")
c_emitter.emit("#include <stdbool.h>")
c_emitter.emit("#include <stddef.h>")
c_emitter.emit()

c_emitter.emit_forward_declarations(types)

for t in sort_types(types):
    c_emitter.emit_definition(t)

c_emitter.write(r"C:\Users\g3nio\CLionProjects\PrimordialisSDK\adapters\c\generated\data_types.h")
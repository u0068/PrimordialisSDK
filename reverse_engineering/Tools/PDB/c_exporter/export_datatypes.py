from PDB.codeview.tpi import TPI
from PDB.codeview.type_resolver import TypeResolver
from c_emitter import CEmitter
from util import *

resolver = TypeResolver(TPI.types())
types = resolver.types

c_emitter = CEmitter()

c_emitter.emit("#pragma once")
c_emitter.emit()
c_emitter.emit("#include <windows.h>")
c_emitter.emit("#include <stdint.h>")
c_emitter.emit("#include <stdbool.h>")
c_emitter.emit("#include <stddef.h>")
c_emitter.emit()

c_emitter.emit_forward_declarations(types)

for t in sort_types(types, resolver):
    c_emitter.emit_definition(t)

c_emitter.write(r"C:\Users\g3nio\CLionProjects\PrimordialisSDK\adapters\c\generated\data_types2.h")
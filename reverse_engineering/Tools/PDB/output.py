from PDB.c_exporter.util import sort_types
from PDB.c_exporter.c_emitter import CEmitter
from PDB.codeview.tpi import TPI, TYPE_NAMES, RECORD_PARSERS
from PDB.codeview.type_resolver import TypeResolver
from PDB.msf_stream import MSF
from PDB.binary_reader import PDBInfo

# print("Supported types: ")
# print([(TYPE_NAMES[key] if key in TYPE_NAMES else "") for key, value in RECORD_PARSERS.items()])

msf = MSF(r"C:\Program Files (x86)\Steam\steamapps\common\Primordialis\primordialis_avx.pdb")

pdb_info = PDBInfo(msf.read_stream(1))

tpi = TPI(msf.read_stream(2))

resolver = TypeResolver(tpi.types)

types = resolver.types

c_emitter = CEmitter(resolver)

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
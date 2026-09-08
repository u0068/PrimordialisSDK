from PDB.codeview.tpi import *
from dataclasses import dataclass

@dataclass
class ArgumentListType(Type):
	arguments: list[TypeRef]
def convert_arglist(index, fields, reader):
	count = reader.u32()

	arguments = [
		TypeRef(reader.u32())
		for _ in range(count)
	]

	return ArgumentListType(
		index=index,
		arguments=arguments,
	)
ARGLIST_PARSER = RecordParser(
	schema=RecordSchema(),
	converter=convert_arglist,
)
RECORD_PARSERS[LF_ARGLIST] = ARGLIST_PARSER
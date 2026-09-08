from PDB.codeview.tpi import *
from dataclasses import dataclass

@dataclass
class ModifierType(Type):
	underlying: TypeRef
	const: bool
	volatile: bool
	unaligned: bool
MODIFIER_CONST = 0x0001
MODIFIER_VOLATILE = 0x0002
MODIFIER_UNALIGNED = 0x0004
def convert_modifier(index, fields, reader):
	attributes = fields["attributes"]

	return ModifierType(
		index=index,
		underlying=fields["underlying"],
		const=bool(attributes & MODIFIER_CONST),
		volatile=bool(attributes & MODIFIER_VOLATILE),
		unaligned=bool(attributes & MODIFIER_UNALIGNED),
	)
MODIFIER_PARSER = RecordParser(
	schema=RecordSchema(
		type_index("underlying"),
		u32("attributes"),
	),
	converter=convert_modifier,
)
RECORD_PARSERS[LF_MODIFIER] = MODIFIER_PARSER

from PDB.codeview.tpi import *
from .registry import register_parser


@dataclass
class ProcedureType(Type):
	return_type: TypeRef
	calling_convention: int
	options: int
	parameter_count: int
	argument_list: TypeRef


LF_PROCEDURE = 0x1008
LF_MFUNCTION = 0x1009
PROCEDURE_SCHEMA = RecordSchema(
	type_index("return_type"),
	u8("calling_convention"),
	u8("options"),
	u16("parameter_count"),
	type_index("argument_list"),
)


def convert_procedure(index, fields, reader):
	result = ProcedureType(
		index=index,
		return_type=fields["return_type"],
		calling_convention=fields["calling_convention"],
		options=fields["options"],
		parameter_count=fields["parameter_count"],
		argument_list=fields["argument_list"],
	)
	print(result)
	return result


PROCEDURE_PARSER = RecordParser(
	schema=PROCEDURE_SCHEMA,
	converter=convert_procedure,
)
register_parser(LF_PROCEDURE, PROCEDURE_PARSER)

from PDB.codeview.tpi import *
from dataclasses import dataclass
@dataclass
class MemberFunctionType(Type):
	return_type: TypeRef
	class_type: TypeRef
	this_type: TypeRef
	calling_convention: int
	options: int
	parameter_count: int
	argument_list: TypeRef
	this_adjustment: int
MFUNCTION_SCHEMA = RecordSchema(
	type_index("return_type"),
	type_index("class_type"),
	type_index("this_type"),
	u8("calling_convention"),
	u8("options"),
	u16("parameter_count"),
	type_index("argument_list"),
	i32("this_adjustment"),
)
def convert_mfunction(index, fields, reader):
	return MemberFunctionType(
		index=index,
		return_type=fields["return_type"],
		class_type=fields["class_type"],
		this_type=fields["this_type"],
		calling_convention=fields["calling_convention"],
		options=fields["options"],
		parameter_count=fields["parameter_count"],
		argument_list=fields["argument_list"],
		this_adjustment=fields["this_adjustment"],
	)
MFUNCTION_PARSER = RecordParser(
	schema=MFUNCTION_SCHEMA,
	converter=convert_mfunction,
)
RECORD_PARSERS[LF_MFUNCTION] = MFUNCTION_PARSER
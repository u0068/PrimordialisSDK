from member import *
from dataclasses import dataclass

@dataclass
class RawMemberRecord:
	kind: int
	data: bytes
def parse_member_record(reader: BinaryReader):
	kind = reader.u16()

	parser = MEMBER_PARSERS.get(kind)

	if parser is None:
		raise NotImplementedError(
			f"Unknown member record {kind:#x}"
		)

	return parser(reader)

@dataclass
class FieldListType(Type):
	members: list
def convert_fieldlist(index, fields, reader):
	members = []

	while reader.remaining() > 0:
		members.append(parse_member_record(reader))

	return FieldListType(
		index=index,
		members=members,
	)
FIELDLIST_PARSER = RecordParser(
	schema=RecordSchema(),
	converter=convert_fieldlist,
)
RECORD_PARSERS[LF_FIELDLIST] = FIELDLIST_PARSER

LF_INDEX = 0x1404

@dataclass
class FieldListIndex:
	type: TypeRef
def parse_index(reader: BinaryReader):
	return FieldListIndex(
		type=TypeRef(reader.u32())
	)
MEMBER_PARSERS[LF_INDEX] = parse_index
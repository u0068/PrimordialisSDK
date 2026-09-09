from dataclasses import dataclass
from .base import *

@dataclass
class StaticDataMember:
	attributes: int
	type: TypeRef
	name: str


def parse_stmember(reader: BinaryReader):
	attributes = reader.u16()
	type_ = TypeRef(reader.u32())
	name = read_cstring(reader)

	return StaticDataMember(
		attributes=attributes,
		type=type_,
		name=name,
	)


MEMBER_PARSERS[LF_STMEMBER] = parse_stmember

from dataclasses import dataclass

from .base import *


@dataclass
class NestedTypeMember:
	type: TypeRef
	name: str


def parse_nest_type(reader: BinaryReader):
	padding = reader.u16()

	if padding != 0:
		raise ValueError(
			f"LF_NESTTYPE has non-zero padding: {padding:#x}"
		)

	type_ = TypeRef(reader.u32())
	name = read_cstring(reader)

	return NestedTypeMember(
		type=type_,
		name=name,
	)


MEMBER_PARSERS[LF_NESTTYPE] = parse_nest_type

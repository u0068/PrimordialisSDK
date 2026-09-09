from dataclasses import dataclass

from .base import *


@dataclass
class NestedTypeExMember:
	type: TypeRef
	attributes: int
	name: str


def parse_nesttypeex(reader: BinaryReader):
	type_ = TypeRef(reader.u32())
	attributes = numeric_leaf(reader)
	name = read_cstring(reader)

	return NestedTypeExMember(
		type=type_,
		attributes=attributes,
		name=name,
	)


MEMBER_PARSERS[LF_NESTTYPEEX] = parse_nesttypeex

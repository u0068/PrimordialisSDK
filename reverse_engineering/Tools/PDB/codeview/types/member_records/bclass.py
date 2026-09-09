from dataclasses import dataclass

from .base import *


@dataclass
class BaseClassMember:
	attributes: int
	type: TypeRef
	offset: int


def parse_bclass(reader: BinaryReader):
	attributes = reader.u16()
	type_ = TypeRef(reader.u32())
	offset = numeric_leaf(reader)

	return BaseClassMember(
		attributes=attributes,
		type=type_,
		offset=offset,
	)


MEMBER_PARSERS[LF_BCLASS] = parse_bclass

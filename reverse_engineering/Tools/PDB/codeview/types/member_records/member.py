from dataclasses import dataclass
from .base import *


@dataclass
class DataMember:
	attributes: int
	underlying: TypeRef
	offset: int
	name: str


def parse_member(reader):
	attributes = reader.u16()
	type_ = TypeRef(reader.u32())
	offset = numeric_leaf(reader)
	name = read_cstring(reader)

	return DataMember(
		attributes=attributes,
		underlying=type_,
		offset=offset,
		name=name,
	)


MEMBER_PARSERS[LF_MEMBER] = parse_member
from dataclasses import dataclass
from .base import *


@dataclass
class DataMember:
	attributes: int
	type: TypeRef
	offset: int
	name: str


def parse_member(reader):
	attributes = reader.u16()
	type_ = TypeRef(reader.u32())
	offset = numeric_leaf(reader)
	name = read_cstring(reader)

	return DataMember(
		attributes=attributes,
		type=type_,
		offset=offset,
		name=name,
	)


MEMBER_PARSERS[LF_MEMBER] = parse_member


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

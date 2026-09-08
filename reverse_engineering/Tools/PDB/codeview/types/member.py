from numeric_leaf import *
from dataclasses import dataclass

LF_MEMBER = 0x150D
LF_ONEMETHOD = 0x1511
LF_BCLASS = 0x1400

MEMBER_ACCESS_MASK = 0x0003
MEMBER_KIND_MASK = 0x001C
MEMBER_KIND_SHIFT = 2

MEMBER_PARSERS = {}

MEMBER_KIND = {
	0: "vanilla",
	1: "virtual",
	2: "static",
	3: "friend",
	4: "intro",
	5: "pure_virtual",
	6: "pure_intro",
}
def member_kind(attributes: int) -> int:
	return (
			(attributes & MEMBER_KIND_MASK)
			>> MEMBER_KIND_SHIFT
	)

def read_cstring(reader: BinaryReader) -> str:
	start = reader.offset

	while reader.remaining() > 0:
		if reader.data[reader.offset] == 0:
			result = reader.data[start:reader.offset]
			reader.offset += 1
			return result.decode("utf-8", errors="replace")

		reader.offset += 1

	raise EOFError("Unterminated CodeView string")

@dataclass
class MethodMember:
	attributes: int
	type: TypeRef
	vtable_offset: int | None
	name: str

def parse_one_method(reader: BinaryReader):
	attributes = reader.u16()
	type_ = TypeRef(reader.u32())

	kind = member_kind(attributes)

	vtable_offset = None

	if kind in (1, 4, 5, 6):
		vtable_offset = reader.i32()

	name = read_cstring(reader)

	return MethodMember(
		attributes=attributes,
		type=type_,
		vtable_offset=vtable_offset,
		name=name,
	)
MEMBER_PARSERS[LF_ONEMETHOD] = parse_one_method

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
MEMBER_PARSERS[LF_MEMBER] = parse_bclass
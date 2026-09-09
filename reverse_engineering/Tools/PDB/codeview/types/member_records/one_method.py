from dataclasses import dataclass

from .base import *


@dataclass
class OneMethodMember:
	attributes: int
	type: TypeRef
	vtable_offset: int | None
	name: str


def parse_one_method(reader: BinaryReader):
	attributes = reader.u16()
	type_ = TypeRef(reader.u32())

	kind = get_method_kind(attributes)

	vtable_offset = None

	if kind in (
			METHOD_INTRODUCING_VIRTUAL,
			METHOD_PURE_INTRODUCING_VIRTUAL,
	):
		vtable_offset = reader.i32()

	name = read_cstring(reader)

	return OneMethodMember(
		attributes=attributes,
		type=type_,
		vtable_offset=vtable_offset,
		name=name,
	)


MEMBER_PARSERS[LF_ONEMETHOD] = parse_one_method

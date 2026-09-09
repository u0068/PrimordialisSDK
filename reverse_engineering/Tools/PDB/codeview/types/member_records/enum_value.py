from dataclasses import dataclass

from .base import *


@dataclass
class EnumValue:
	attributes: int
	value: int
	name: str


def parse_enumerate(reader: BinaryReader):
	attributes = reader.u16()
	value = numeric_leaf(reader)
	name = read_cstring(reader)

	return EnumValue(
		attributes=attributes,
		value=value,
		name=name,
	)


MEMBER_PARSERS[LF_ENUMERATE] = parse_enumerate

from dataclasses import dataclass
from PDB.codeview.tpi import *
from .member_records.base import MEMBER_PARSERS
from .registry import register_parser


@dataclass
class RawMemberRecord:
	kind: int
	data: bytes


def parse_member_record(reader: BinaryReader):
	kind = reader.u16()
	name = TYPE_NAMES[kind] if kind in TYPE_NAMES else f"{kind:#x}"

	print(f"Parsing member record {name}")

	parser = MEMBER_PARSERS.get(kind)

	if parser is None:
		start = reader.offset - 2

		print(
			f"{len(reader.data):#x} bytes: " +
			reader.data[
			max(0, start - 16):
			min(len(reader.data), start + 32)
			].hex(" ")
		)

		raise NotImplementedError(
			f"Unimplemented member record {name} "
			f"at offset {start:#x}"
		)

	# Member records are aligned after their payload.
	# while reader.offset % 4 != 0:
	#     reader.u8()

	return parser(reader)


@dataclass
class FieldListType(Type):
	members: list


def is_padding_start(reader: BinaryReader) -> bool:
	if reader.remaining() == 0:
		return False

	value = reader.data[reader.offset]

	if 0xF0 <= value <= 0xFF:
		print(f"Found padding start: {value:#x}")
		return True
	return False


def consume_padding(reader: BinaryReader):
	expected = reader.u8()

	if not 0xF0 <= expected <= 0xFF:
		raise ValueError(
			f"Expected LF_PADn, got {expected:#x}"
		)

	# LF_PADn means n padding bytes remain,
	# including this byte.
	count = expected - 0xF0

	for i in range(1, count):
		value = reader.u8()

		print(f"Consumed padding: {value:#x}")

		expected -= 1

		if value != expected:
			raise ValueError(
				f"Invalid LF_PADn sequence: "
				f"expected {expected:#x}, got {value:#x}"
			)


def convert_fieldlist(index, fields, reader):
	members = []

	while reader.remaining() > 0:

		# print(f"Remaining bytes: {reader.data[-reader.remaining():].hex(' ')}")

		if is_padding_start(reader):
			consume_padding(reader)
			continue

		members.append(parse_member_record(reader))

	if reader.remaining() != 0:
		raise ValueError(
			f"LF_FIELDLIST has {reader.remaining()} "
			f"bytes after padding"
		)

	return FieldListType(
		index=index,
		members=members,
	)


FIELDLIST_PARSER = RecordParser(
	schema=RecordSchema(),
	converter=convert_fieldlist,
)
register_parser(LF_FIELDLIST, FIELDLIST_PARSER)

LF_INDEX = 0x1404


@dataclass
class FieldListIndex:
	type: TypeRef


def parse_index(reader):
	padding = reader.u16()

	if padding != 0:
		raise ValueError(
			f"LF_INDEX has non-zero padding: {padding:#x}"
		)

	type_ = TypeRef(reader.u32())

	return FieldListIndex(type=type_)


register_parser(LF_INDEX, parse_index)
MEMBER_PARSERS[LF_INDEX] = parse_index

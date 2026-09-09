from dataclasses import dataclass
from PDB.codeview.tpi import *
from .member_records.base import MEMBER_PARSERS
from .padding import is_padding_start, consume_padding
from .registry import register_parser


@dataclass
class RawMemberRecord:
	kind: int
	data: bytes


def parse_member_record(reader: BinaryReader):
	kind = reader.u16()

	print(f"Parsing member record {kind_name(kind)}")

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
			f"Unimplemented member record {kind_name(kind)} "
			f"at offset {start:#x}"
		)

	# Member records are aligned after their payload.
	# while reader.offset % 4 != 0:
	#     reader.u8()

	return parser(reader)


@dataclass
class FieldListType(Type):
	members: list


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

from PDB.binary_reader import BinaryReader, msf
from dataclasses import dataclass
from typing import Callable, Any
from PDB.codeview.types import *

class TPIHeader:
	def __init__(self, reader):
		self.version = reader.u32()
		self.header_size = reader.u32()
		self.minimum_type_index = reader.u32()
		self.maximum_type_index = reader.u32()
		self.type_record_bytes = reader.u32()

@dataclass(frozen=True)
class TypeRef:
	index: int

@dataclass
class Type:
	index: int

@dataclass
class RawTypeRecord:
	index: int
	kind: int
	data: bytes

def iter_type_records(data: bytes, first_index: int):
	reader = BinaryReader(data)
	index = first_index

	while reader.remaining() > 0:
		length = reader.u16()

		if length == 0:
			break

		kind = reader.u16()
		payload = reader.read(length - 2)

		yield RawTypeRecord(
			index=index,
			kind=kind,
			data=payload,
		)

		index += 1

@dataclass(frozen=True)
class FieldParser:
	name: str
	parser: Callable[[BinaryReader], Any]
def u8(name):
	return FieldParser(name, lambda r: r.u8())
def u16(name):
	return FieldParser(name, lambda r: r.u16())
def u32(name):
	return FieldParser(name, lambda r: r.u32())
def u64(name):
	return FieldParser(name, lambda r: r.u64())
def i32(name):
	return FieldParser(name, lambda r: r.i32())
def type_index(name):
	return FieldParser(
		name,
		lambda r: TypeRef(r.u32())
	)

class RecordSchema:
	def __init__(self, *fields: FieldParser):
		self.fields = fields

	def parse(self, reader: BinaryReader):
		result = {}

		for field in self.fields:
			result[field.name] = field.parser(reader)

		return result

@dataclass(frozen=True)
class RecordParser:
	schema: RecordSchema
	converter: Callable
	parse_remaining: Callable | None = None

LF_POINTER   = 0x1002
LF_PROCEDURE = 0x1008
LF_MFUNCTION = 0x1009
LF_MODIFIER  = 0x1001
LF_ARGLIST   = 0x1201

LF_FIELDLIST = 0x1203
LF_STRUCTURE = 0x1505
LF_CLASS     = 0x1504
LF_UNION     = 0x1506

LF_MEMBER    = 0x150D
LF_STMEMBER  = 0x150E
LF_METHOD    = 0x150F
LF_ONEMETHOD = 0x1511
LF_BCLASS    = 0x1400
LF_NESTTYPE = 0x1510
LF_INDEX = 0x1404

TYPE_NAMES = {
	LF_POINTER: "LF_POINTER",
	LF_PROCEDURE: "LF_PROCEDURE",
	LF_MFUNCTION: "LF_MFUNCTION",
	LF_MODIFIER: "LF_MODIFIER",
	LF_ARGLIST: "LF_ARGLIST",

	LF_FIELDLIST: "LF_FIELDLIST",
	LF_STRUCTURE: "LF_STRUCTURE",
	LF_CLASS: "LF_CLASS",
	LF_UNION: "LF_UNION",

	LF_MEMBER: "LF_MEMBER",
	LF_STMEMBER: "LF_STMEMBER",
	LF_METHOD: "LF_METHOD",
	LF_ONEMETHOD: "LF_ONEMETHOD",
	LF_BCLASS: "LF_BCLASS",
}
RECORD_PARSERS = {}

def parse_type_record(record):
	parser = RECORD_PARSERS.get(record.kind)

	if parser is None:
		return record

	reader = BinaryReader(record.data)

	fields = parser.schema.parse(reader)

	result = parser.converter(
		record.index,
		fields,
		reader,
	)

	if reader.remaining() != 0:
		raise ValueError(
			f"Parser for {record.kind:#x} left "
			f"{reader.remaining()} bytes"
		)

	return result

class TPI:
	def __init__(self, data):
		self.types = {}

		reader = BinaryReader(data)
		header = TPIHeader(reader)

		for record in iter_type_records(
				data[header.header_size:],
				header.minimum_type_index,
		):
			name = TYPE_NAMES[record.kind] if record.kind in TYPE_NAMES else "Unknown"
			print(
				f"{record.index:#x}: "
				f"kind={record.kind:#x}, "
				f"name={name}"
			)
			parsed_record = parse_type_record(record)
			self.types[record.index] = parsed_record
			# print(parsed_record)

tpi = TPI(msf.read_stream(2))

# for type, record in tpi.types.items():
# 	print(record)
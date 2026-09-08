from PDB.parse_info_stream import BinaryReader, msf
from dataclasses import dataclass
import struct

class TPIHeader:
	def __init__(self, reader):
		self.version = reader.u32()
		self.header_size = reader.u32()
		self.minimum_type_index = reader.u32()
		self.maximum_type_index = reader.u32()
		self.type_record_bytes = reader.u32()

@dataclass
class TypeRecord:
	index: int
	kind: int
	data: bytes

def read_type_records(data: bytes, first_index: int):
	reader = BinaryReader(data)
	index = first_index

	while reader.remaining() > 0:
		length = reader.u16()

		if length == 0:
			break

		kind = reader.u16()
		payload = reader.read(length - 2)

		yield TypeRecord(
			index=index,
			kind=kind,
			data=payload,
		)

		index += 1

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

@dataclass
class ModifierType:
	underlying: int
	const: bool
	volatile: bool
	unaligned: bool

def parse_modifier(record):
	reader = BinaryReader(record.data)

	underlying = reader.u32()
	attributes = reader.u16()

	return ModifierType(
		underlying=underlying,
		const=bool(attributes & 1),
		volatile=bool(attributes & 2),
		unaligned=bool(attributes & 4),
	)

@dataclass
class PointerType:
	pointee: int
	const: bool = False
	volatile: bool = False

def parse_pointer(record):
	reader = BinaryReader(record.data)

	underlying = reader.u32()
	attributes = reader.u16()

	return PointerType(
		pointee=underlying,
		const=bool(attributes & 1),
		volatile=bool(attributes & 2),
	)

@dataclass
class ProcedureType:
	return_type: int
	calling_convention: int
	attributes: int
	argument_list: int

def parse_procedure(record):
	reader = BinaryReader(record.data)

	unpacked = struct.unpack("<IIII", reader.data)

	return ProcedureType(
		return_type = unpacked[0],
		calling_convention = unpacked[1],
		attributes = unpacked[2],
		argument_list = unpacked[3]
	)

@dataclass
class MemberFunctionType:
	return_type: int
	class_type: int
	this_adjust: int
	calling_convention: int
	attributes: int
	argument_list: int

def parse_member_function(record):
	reader = BinaryReader(record.data)

	unpacked = struct.unpack("<IIIIII", reader.data)

	return MemberFunctionType(
		return_type = unpacked[0],
		class_type = unpacked[1],
		this_adjust = unpacked[2],
		calling_convention = unpacked[3],
		attributes = unpacked[4],
		argument_list = unpacked[5]
	)

@dataclass
class StructureType:
	count: int
	properties: int
	field_list: int
	derived_from: int
	vshape: int
	size: int
	name: str

def parse_structure(record):
	reader = BinaryReader(record.data)

	unpacked = struct.unpack("<IIIIIIs", reader.data)

	return StructureType(
		count = unpacked[0],
		properties = unpacked[1],
		field_list = unpacked[2],
		derived_from = unpacked[3],
		vshape = unpacked[4],
		size = unpacked[5],
		name = unpacked[6]
	)

@dataclass
class Field:
	name: str
	type: int
	offset: int

def parse_field(record):
	reader = BinaryReader(record.data)

	unpacked = struct.unpack("<sII", reader.data)

	return Field(
		name = unpacked[0],
		type = unpacked[1],
		offset = unpacked[2]
	)

@dataclass
class StructureType:
	name: str
	size: int
	fields: list[Field]

def parse_structure(record):
	reader = BinaryReader(record.data)

	unpacked = struct.unpack("<sIp", reader.data)

	return StructureType(
		name = unpacked[0],
		size = unpacked[1],
		fields = unpacked[2]
	)

tpi = BinaryReader(msf.read_stream(2))

header = TPIHeader(tpi)

print(f"Version:            {header.version:#x}")
print(f"Header size:        {header.header_size}")
print(f"Min type index:     {header.minimum_type_index:#x}")
print(f"Max type index:     {header.maximum_type_index:#x}")
print(f"Type index range:   {header.maximum_type_index - header.minimum_type_index:#x}")
print(f"Type record bytes:  {header.type_record_bytes}")

records = list(
	read_type_records(
		msf.read_stream(2)[header.header_size:],
		header.minimum_type_index,
	)
)

types = {
	record.index: record
	for record in records
}

for record in records[:20]:
	name = TYPE_NAMES.get(record.kind, f"{record.kind:#x}")
	print(
		f"{record.index:#x}: "
		f"{name=}, "
		f"kind={record.kind:#x}, "
		f"size={len(record.data)}"
	)


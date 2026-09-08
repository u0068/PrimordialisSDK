import struct
from msf_stream import MSF

class BinaryReader:
	def __init__(self, data: bytes):
		self.data = data
		self.offset = 0

	def read(self, size: int) -> bytes:
		if self.offset + size > len(self.data):
			raise EOFError("Unexpected end of stream")

		result = self.data[self.offset:self.offset + size]
		self.offset += size
		return result

	def u32(self) -> int:
		return struct.unpack("<I", self.read(4))[0]

	def u16(self) -> int:
		return struct.unpack("<H", self.read(2))[0]

	def u8(self) -> int:
		return self.read(1)[0]

	def remaining(self) -> int:
		return len(self.data) - self.offset

class PDBInfo:
	def __init__(self, data: bytes):
		reader = BinaryReader(data)

		self.version = reader.u32()
		self.signature = reader.u32()
		self.age = reader.u32()
		self.guid = reader.read(16)

		print(f"Version:   {self.version:#x}")
		print(f"Signature: {self.signature:#x}")
		print(f"Age:       {self.age}")
		print(f"GUID:      {self.guid.hex()}")

msf = MSF("primordialis_avx.pdb")

pdb_info = PDBInfo(msf.read_stream(1))
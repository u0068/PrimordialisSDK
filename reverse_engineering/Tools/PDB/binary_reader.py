from dataclasses import dataclass

from msf_stream import MSF


@dataclass(frozen=True)
class TypeRef:
    index: int


class BinaryReader:
    def __init__(self, data: bytes):
        self.data = data
        self.offset = 0

    def read(self, size: int) -> bytes:
        if self.offset + size > len(self.data):
            raise EOFError(
                f"Read past end of buffer at {self.offset:#x}\n"
                f"{len(self.data) - 1:#x} bytes: {self.data.hex(' ')}"
            )

        result = self.data[self.offset:self.offset + size]
        self.offset += size
        return result

    def u8(self) -> int:
        return self.read(1)[0]

    def u16(self) -> int:
        return int.from_bytes(self.read(2), "little")

    def u32(self) -> int:
        return int.from_bytes(self.read(4), "little")

    def u64(self) -> int:
        return int.from_bytes(self.read(8), "little")

    def i32(self) -> int:
        return int.from_bytes(
            self.read(4), "little", signed=True
        )

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


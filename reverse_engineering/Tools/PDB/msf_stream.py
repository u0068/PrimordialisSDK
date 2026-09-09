import struct
from dataclasses import dataclass

MSF_MAGIC = (
    b"Microsoft C/C++ MSF 7.00\r\n"
    b"\x1a\x44\x53\x00\x00\x00"
)


def blocks_for_size(size, block_size):
    return (size + block_size - 1) // block_size


@dataclass
class SuperBlock:
    block_size: int
    free_block_map: int
    num_blocks: int
    directory_bytes: int
    unknown: int
    block_map_addr: int


class MSF:
    def __init__(self, path):
        self.file = open(path, "rb")

        self.superblock = self._read_superblock()

        if self.superblock.block_size != 4096:
            raise NotImplementedError(
                "Only 4096-byte MSF files are currently supported"
            )

        self.directory = self._read_directory()

    def _read_superblock(self):
        self.file.seek(0)

        magic = self.file.read(32)

        if magic != MSF_MAGIC:
            raise ValueError("Invalid MSF magic")

        values = struct.unpack(
            "<6I",
            self.file.read(24),
        )

        return SuperBlock(*values)

    def _read_block(self, block):
        self.file.seek(
            block * self.superblock.block_size
        )

        return self.file.read(
            self.superblock.block_size
        )

    def _read_directory(self):
        sb = self.superblock

        block_count = blocks_for_size(
            sb.directory_bytes,
            sb.block_size,
        )

        block_map = self._read_block(
            sb.block_map_addr
        )

        directory_blocks = []

        for i in range(block_count):
            block, = struct.unpack_from(
                "<I",
                block_map,
                i * 4,
            )

            directory_blocks.append(block)

        data = b"".join(
            self._read_block(block)
            for block in directory_blocks
        )

        data = data[:sb.directory_bytes]

        offset = 0

        num_streams, = struct.unpack_from(
            "<I",
            data,
            offset,
        )

        offset += 4

        sizes = []

        for _ in range(num_streams):
            size, = struct.unpack_from(
                "<I",
                data,
                offset,
            )

            offset += 4
            sizes.append(size)

        streams = []

        for size in sizes:
            if size == 0xFFFFFFFF:
                streams.append(None)
                continue

            block_count = blocks_for_size(
                size,
                sb.block_size,
            )

            blocks = []

            for _ in range(block_count):
                block, = struct.unpack_from(
                    "<I",
                    data,
                    offset,
                )

                offset += 4
                blocks.append(block)

            streams.append(
                {
                    "size": size,
                    "blocks": blocks,
                }
            )

        return streams

    def read_stream(self, index):
        stream = self.directory[index]

        if stream is None:
            return None

        data = b"".join(
            self._read_block(block)
            for block in stream["blocks"]
        )

        return data[:stream["size"]]

    def close(self):
        self.file.close()

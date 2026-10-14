
from dataclasses import dataclass

@dataclass(frozen=True)
class PrimitiveType:
    index: int
    name: str

PRIMITIVE_TYPES = {
    0x0003: "void",

    0x0030: "bool",

    0x0070: "char",
    0x0071: "wchar",

    0x0068: "int8_t",
    0x0010: "uint8_t",
    0x0069: "uint8_t",
    0x0020: "uint8_t",

    0x0011: "int16_t",
    0x0072: "int16_t",
    0x0021: "uint16_t",
    0x0073: "uint16_t",

    0x0012: "int32_t",
    0x0074: "int32_t",
    0x0022: "uint32_t",
    0x0075: "uint32_t",

    0x0013: "int64_t",
    0x0076: "int64_t",
    0x0023: "uint64_t",
    0x0077: "uint64_t",

    0x0014: "int128_t",
    0x0078: "int128_t",
    0x0024: "uint128_t",
    0x0079: "uint128_t",

    0x0040: "float",
    0x0041: "double",
    0x0046: "_Float16",
}
from dataclasses import dataclass

from .base import *


@dataclass
class VFTableMember:
	underlying: TypeRef


def parse_vfunctab(reader):
	padding = reader.u16()

	if padding != 0:
		raise ValueError(
			f"LF_VFUNCTAB has non-zero padding: {padding:#x}"
		)

	type_ = TypeRef(reader.u32())

	return VFTableMember(
		underlying=type_,
	)


MEMBER_PARSERS[LF_VFUNCTAB] = parse_vfunctab

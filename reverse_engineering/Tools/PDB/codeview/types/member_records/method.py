from dataclasses import dataclass

from .base import *


@dataclass
class MethodMember:
	overload_count: int
	method_list: TypeRef
	name: str


def parse_method(reader):
	overload_count = reader.u16()
	method_list = TypeRef(reader.u32())
	name = read_cstring(reader)

	return MethodMember(
		overload_count=overload_count,
		method_list=method_list,
		name=name,
	)


MEMBER_PARSERS[LF_METHOD] = parse_method

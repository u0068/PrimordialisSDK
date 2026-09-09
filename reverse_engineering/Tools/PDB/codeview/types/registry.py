RECORD_PARSERS = {}


def register_parser(kind, parser):
	if kind in RECORD_PARSERS:
		raise ValueError(f"Parser already registered for {kind:#x}")

	RECORD_PARSERS[kind] = parser

class TypeExporter:

    def __init__(self, currentProgram):
        self.manager = currentProgram.getDataTypeManager()

    def get_types(self, currentProgram):

        root = self.manager.getRootCategory()

        primordialis_root = root
        for cat in root.getCategories():
            if "primordialis" in cat.getName():
                primordialis_root = cat
                print("Found primordialis root at %s" % cat)
                break

        result = []

        def recurse(cat):

            for dt in cat.getDataTypes():
                result.append(dt)

            for sub in cat.getCategories():
                recurse(sub)

        recurse(primordialis_root)

        return result

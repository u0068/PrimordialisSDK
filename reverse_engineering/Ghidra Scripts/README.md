# Ghidra scripts
Used mainly for exporting stuff from Ghidra and turning it into nice C++.<br>
The output sometimes needs manual cleanup, find+replace is great for that.<br>
If parts of the output are erroring you can usually just delete them and hope they weren't important.<br>
Ghidra scripts can be made in:
- Java
  - More convenient Ghidra api, but less convenient string operations
  - Use only if you prefer java to python, or are doing very minor edits to existing java scripts.
    - It's better to rewrite the old java scripts in python than keep tweaking them.
- Jython
  - Pretty much just lobotomised Python 2.7
  - Limited external packages
  - No reason to use this
- PyGhidra
  - ***I recommend you use this!***
  - Pretty much just modern python
  - Works with any external packages :D
  - Needs you to install Python 3.10+ and [PyGhidra](https://pypi.org/project/pyghidra/)
    - https://www.python.org/downloads/
    - ```bash
      pip install pyghidra
    - ```bash
      pip install ghidra-stubs==12.1.2
  - Needs you to launch Ghidra through PyGhidra.
    - `ghidra_installation_dir/support/pyghidraRun.bat`
    - ```py
      import pyghidra
      # Start Ghidra in headless mode
      pyghidra.start()
  - Default working directory is `ghidra_installation_dir/support/`

# TODO:
- Rewrite java scripts in PyGhidra

# DONE:
- Data type exporter
- Inline annotator
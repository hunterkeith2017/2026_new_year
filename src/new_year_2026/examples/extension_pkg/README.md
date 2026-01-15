# pybind11 extension package demo

This folder is a standalone Python package that builds a pybind11 extension:

- `hello_ext._core` (C++ extension with pybind11)

The `add` function is implemented in C (`hello_c.c`) and `mul` in C++ (`hello_cpp.cpp`).

On macOS/Linux you will get `.so` files; on Windows you will get `.pyd` files.

## Build and install

```bash
python -m venv .venv
source .venv/bin/activate
python -m pip install -U pip build pybind11
INCLUDES="$(python -m pybind11 --includes)"
CXXFLAGS="$INCLUDES" CPPFLAGS="$INCLUDES" python -m build --no-isolation
python -m pip install dist/*.whl
```

## Try it

```bash
python -c "import hello_ext; print(hello_ext.add(2, 3)); print(hello_ext.mul(3, 4))"
```

## Build from source (editable)

```bash
INCLUDES="$(python -m pybind11 --includes)"
CXXFLAGS="$INCLUDES" CPPFLAGS="$INCLUDES" python -m pip install --no-build-isolation -v .
```

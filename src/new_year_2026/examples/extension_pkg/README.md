# C/C++ extension package demo

This folder is a standalone Python package that builds two extensions:

- `hello_ext.hello_c` (C extension)
- `hello_ext.hello_cpp` (C++ extension)

On macOS/Linux you will get `.so` files; on Windows you will get `.pyd` files.

## Build and install

```bash
python -m venv .venv
source .venv/bin/activate
python -m pip install -U pip build
python -m build
python -m pip install dist/*.whl
```

## Try it

```bash
python -c "import hello_ext; print(hello_ext.add_c(2, 3)); print(hello_ext.mul_cpp(3, 4))"
```

## Build from source (editable)

```bash
python -m pip install -v .
```

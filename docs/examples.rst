Examples
========

ctypes Shared Library
---------------------

Build the shared library and run the ctypes demo:

.. code-block:: bash

   cd src/new_year_2026/examples/ctypes_shared
   cc -shared -fPIC -o libhello.so hello.c
   python hello_ctypes.py

C/C++ Extension Package (pybind11)
----------------------------------

Build the extension package and install the wheel:

.. code-block:: bash

   cd src/new_year_2026/examples/extension_pkg
   python -m pip install -U pip build pybind11 wheel
   python -m build
   python -m pip install dist/*.whl

Use the extension:

.. code-block:: bash

   python -c "import hello_ext; print(hello_ext.add(2, 3)); print(hello_ext.mul(3, 4))"

Packaging
=========

Main package:

.. code-block:: bash

   python -m pip install -U build
   python -m build

Extension demo package:

.. code-block:: bash

   cd src/new_year_2026/examples/extension_pkg
   python -m pip install -U build pybind11 wheel
   python -m build

Notes:

- The extension demo builds native binaries (.so/.pyd).
- A C/C++ compiler is required on the build machine.

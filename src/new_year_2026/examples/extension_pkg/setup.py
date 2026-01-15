from setuptools import Extension, setup

ext_modules = [
    Extension("hello_ext.hello_c", ["src/hello_ext/hello_c.c"]),
    Extension(
        "hello_ext.hello_cpp",
        ["src/hello_ext/hello_cpp.cpp"],
        language="c++",
    ),
]

setup(ext_modules=ext_modules)

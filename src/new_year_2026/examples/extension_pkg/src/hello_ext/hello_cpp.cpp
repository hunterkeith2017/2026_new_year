#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *mul(PyObject *self, PyObject *args) {
    long a;
    long b;
    if (!PyArg_ParseTuple(args, "ll", &a, &b)) {
        return NULL;
    }
    return PyLong_FromLong(a * b);
}

static PyMethodDef HelloMethods[] = {
    {"mul", mul, METH_VARARGS, "Multiply two integers."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef hello_module = {
    PyModuleDef_HEAD_INIT,
    "hello_cpp",
    "C++ extension demo.",
    -1,
    HelloMethods
};

PyMODINIT_FUNC PyInit_hello_cpp(void) {
    return PyModule_Create(&hello_module);
}

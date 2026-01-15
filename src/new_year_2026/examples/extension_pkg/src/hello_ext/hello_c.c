#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *add(PyObject *self, PyObject *args) {
    int a;
    int b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return PyLong_FromLong(a + b);
}

static PyMethodDef HelloMethods[] = {
    {"add", add, METH_VARARGS, "Add two integers."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef hello_module = {
    PyModuleDef_HEAD_INIT,
    "hello_c",
    "C extension demo.",
    -1,
    HelloMethods
};

PyMODINIT_FUNC PyInit_hello_c(void) {
    return PyModule_Create(&hello_module);
}

#include "Python.h"


static PyObject *__Pyx_UnpackItem(PyObject *, int);
static int __Pyx_EndUnpack(PyObject *, int);
static int __Pyx_PrintItem(PyObject *);
static int __Pyx_PrintNewline(void);
static void __Pyx_ReRaise(void);
static void __Pyx_RaiseWithTraceback(PyObject *, PyObject *, PyObject *);
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list);
static PyObject *__Pyx_GetExcValue(void);
static PyObject *__Pyx_GetName(PyObject *dict, char *name);

static PyObject *__pyx_m;
static PyObject *__pyx_d;
static PyObject *__pyx_b;


PyObject *__pyx_f_primes(PyObject *__pyx_self, PyObject *__pyx_args); /*proto*/
PyObject *__pyx_f_primes(PyObject *__pyx_self, PyObject *__pyx_args) {
  int __pyx_v_kmax;
  int __pyx_v_n;
  int __pyx_v_k;
  int __pyx_v_i;
  int (__pyx_v_p[1000]);
  PyObject *__pyx_v_result;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  int __pyx_3;
  int __pyx_4;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  if (!PyArg_ParseTuple(__pyx_args, "i", &__pyx_v_kmax)) return 0;
  __pyx_v_result = Py_None; Py_INCREF(__pyx_v_result);

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":2 */

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":3 */

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":4 */
  __pyx_1 = PyList_New(0); if (!__pyx_1) goto __pyx_L1;
  Py_DECREF(__pyx_v_result);
  __pyx_v_result = __pyx_1;
  __pyx_1 = 0;

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":5 */
  __pyx_2 = (__pyx_v_kmax > 1000);
  if (__pyx_2) {

    /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":6 */
    __pyx_v_kmax = 1000;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":7 */
  __pyx_v_k = 0;

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":8 */
  __pyx_v_n = 2;

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":9 */
  while (1) {
    __pyx_L3:;
    __pyx_2 = (__pyx_v_k < __pyx_v_kmax);
    if (!__pyx_2) break;

    /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":10 */
    __pyx_v_i = 0;

    /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":11 */
    while (1) {
      __pyx_L5:;
      if (__pyx_3 = (__pyx_v_i < __pyx_v_k)) {
        __pyx_3 = ((__pyx_v_n % (__pyx_v_p[__pyx_v_i])) != 0);
      }
      if (!__pyx_3) break;

      /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":12 */
      __pyx_v_i = (__pyx_v_i + 1);
    }
    __pyx_L6:;

    /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":13 */
    __pyx_4 = (__pyx_v_i == __pyx_v_k);
    if (__pyx_4) {

      /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":14 */
      (__pyx_v_p[__pyx_v_k]) = __pyx_v_n;

      /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":15 */
      __pyx_v_k = (__pyx_v_k + 1);

      /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":16 */
      __pyx_1 = PyObject_GetAttrString(__pyx_v_result, "append"); if (!__pyx_1) goto __pyx_L1;
      __pyx_5 = PyInt_FromLong(__pyx_v_n); if (!__pyx_5) goto __pyx_L1;
      __pyx_6 = PyTuple_New(1); if (!__pyx_6) goto __pyx_L1;
      PyTuple_SET_ITEM(__pyx_6, 0, __pyx_5);
      __pyx_5 = 0;
      __pyx_5 = PyObject_CallObject(__pyx_1, __pyx_6); if (!__pyx_5) goto __pyx_L1;
      Py_DECREF(__pyx_6); __pyx_6 = 0;
      Py_DECREF(__pyx_5); __pyx_5 = 0;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":17 */
    __pyx_v_n = (__pyx_v_n + 1);
  }
  __pyx_L4:;

  /* "ProjectsA:Python:Pyrex:Demos:primes.pyx":18 */
  Py_INCREF(__pyx_v_result);
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_result);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {"primes", (PyCFunction)__pyx_f_primes, METH_VARARGS, 0},
  {0, 0, 0, 0}
};

void initprimes(void); /*proto*/
void initprimes(void) {
  __pyx_m = Py_InitModule4("primes", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  __pyx_d = PyModule_GetDict(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  PyDict_SetItemString(__pyx_d, "__builtins__", __pyx_b);
}
/* Runtime support code */

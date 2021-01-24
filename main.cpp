#include <Python.h>

int main(int argc, char* argv[])
{
	Py_InitializeEx(0);
	PyRun_SimpleString("import math\n");
	Py_Finalize();
}



#include <Python.h>

int main(int argc, char* argv[])
{
	//Py_SetProgramName(argv[0]);
	Py_Initialize();
	PyRun_SimpleString("from PIL import Image\nim = Image.open('cat.jpg'); im.show()");
	Py_Finalize();
}



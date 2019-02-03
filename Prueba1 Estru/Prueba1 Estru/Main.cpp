#include <iostream>
#include "DataFile.h"
#include "DelimiterVarSize_Register.h"
#include "FixedSize_Register.h"
#include "KnownVarSize_Register.h"
#include <conio.h>

using namespace std;

int main()
{
	

	char direccion[20] = { "archivo.txt" };

	char *a = new char;
	strcpy_s(a, sizeof(direccion), direccion);
	
	char *p = a;

	DataFile f;
	DataFile novo(p);

	cout << a;

	f.setDireccion(a);

	f.abrir();
	f.cerrar();

	/*


	DataFile f;
	char direccion[15] = { "archivo.txt" };
	char *a = new char();
	strcpy_s(a, 15, direccion);
	f.setDireccion(a);

	f.abrir();


	bool run = true;
	int op;
	do
	{
		cout << "1. Fixed Size \n 2. Known Size \n 3. Delimeter size \n";
		//Register switch
		cin >> op;
		switch (op)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			cout << "Invalid option\n";
			break;
		}
	} while (run);
	return 0;
	*/
	system("pause");
}
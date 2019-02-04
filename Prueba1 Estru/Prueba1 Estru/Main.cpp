
#include <iostream>
using namespace std;

//Incluimos las clases
#include "FixedSize_Register.h"
#include "DelimiterVarSize_Register.h"
#include "KnownVarSize_Register.h"

void FixedRegistro() {

	Funciones f1;
	int opcion1 = 0;

	while (opcion1 != 9) {

		cout << "Selecciona la opcion a ejecutar: " << endl;
		cout << "1. print_rgister" << endl;
		cout << "2. toChar" << endl;
		cout << "3. fromChar" << endl;
		cout << "4. open_file" << endl;
		cout << "5. write_into_file" << endl;
		cout << "6. read_from_file" << endl;
		cout << "7. close_file" << endl;
		cout << "8. get_size" << endl;
		cout << "9. Atras" << endl;
		cin >> opcion1;

		switch (opcion1) {
		case 1:
			cout << endl;
			f1.print_register();
			cout << endl;
			break;
		case 2:
			cout << endl;
			f1.toChar();
			cout << endl;
			break;
		case 3:
			cout << endl;
			char * datos;
			f1.fromChar(datos);
			cout << endl;
			break;
		case 4:
			cout << endl;
			cout << "Ingresa el nombre del archivo: " << endl;
			char * archivo;
			cin >> archivo;
			f1.open_file(archivo);
			cout << endl;
			break;
		case 5:
			cout << endl;
			f1.write_into_file();
			cout << endl;
			break;
		case 6:
			cout << endl;
			cout << "Ingresa la posicion desde donde quieres empezar a leer: " << endl;
			int pos = 0;
			cin >> pos;
			f1.read_from_file(pos);
			cout << endl;
			break;
		case 7:
			cout << endl;
			f1.close_file();
			cout << endl;
			break;
		case 8:
			cout << endl;
			f1.get_size();
			cout << endl;
		case 9:
			break;
		}

	}

};  //Menu Registro FixedSize			

void KnownRegister() {

	FuncionesKnownSize f2;
	int opcion1 = 0;

	while (opcion1 != 9) {

		cout << "Selecciona la opcion a ejecutar: " << endl;
		cout << "1. print_rgister" << endl;
		cout << "2. toChar" << endl;
		cout << "3. fromChar" << endl;
		cout << "4. open_file" << endl;
		cout << "5. write_into_file" << endl;
		cout << "6. read_from_file" << endl;
		cout << "7. close_file" << endl;
		cout << "8. get_size" << endl;
		cout << "9. Atras" << endl;
		cin >> opcion1;

		switch (opcion1) {
		case 1:
			cout << endl;
			f2.print_register();
			cout << endl;
			break;
		case 2:
			cout << endl;
			f2.toChar();
			cout << endl;
			break;
		case 3:
			cout << endl;
			char * datos;
			f2.fromChar(datos);
			cout << endl;
			break;
		case 4:
			cout << endl;
			cout << "Ingresa el nombre del archivo: " << endl;
			char * archivo;
			cin >> archivo;
			f2.open_file(archivo);
			cout << endl;
			break;
		case 5:
			cout << endl;
			f2.write_into_file();
			cout << endl;
			break;
		case 6:
			cout << endl;
			cout << "Ingresa la posicion desde donde quieres empezar a leer: " << endl;
			int pos = 0;
			cin >> pos;
			f2.read_from_file(pos);
			cout << endl;
			break;
		case 7:
			cout << endl;
			f2.close_file();
			cout << endl;
			break;
		case 8:
			cout << endl;
			f2.get_size();
			cout << endl;
		case 9:
			break;
		}

	}

};		//Menu Registro KnownSize	

void DelimiterRegister() {

	Funciones f3;
	int opcion1 = 0;

	while (opcion1 != 9) {

		cout << "Selecciona la opcion a ejecutar: " << endl;
		cout << "1. print_rgister" << endl;
		cout << "2. toChar" << endl;
		cout << "3. fromChar" << endl;
		cout << "4. open_file" << endl;
		cout << "5. write_into_file" << endl;
		cout << "6. read_from_file" << endl;
		cout << "7. close_file" << endl;
		cout << "8. get_size" << endl;
		cout << "9. Atras" << endl;
		cin >> opcion1;

		switch (opcion1) {
		case 1:
			cout << endl;
			f3.print_register();
			cout << endl;
			break;
		case 2:
			cout << endl;
			f3.toChar();
			cout << endl;
			break;
		case 3:
			cout << endl;
			char * datos;
			f3.fromChar(datos);
			cout << endl;
			break;
		case 4:
			cout << endl;
			cout << "Ingresa el nombre del archivo: " << endl;
			char * archivo;
			cin >> archivo;
			f3.open_file(archivo);
			cout << endl;
			break;
		case 5:
			cout << endl;
			f3.write_into_file();
			cout << endl;
			break;
		case 6:
			cout << endl;
			cout << "Ingresa la posicion desde donde quieres empezar a leer: " << endl;
			int pos = 0;
			cin >> pos;
			f3.read_from_file(pos);
			cout << endl;
			break;
		case 7:
			cout << endl;
			f3.close_file();
			cout << endl;
			break;
		case 8:
			cout << endl;
			f3.get_size();
			cout << endl;
		case 9:
			break;
		}

	}

};		//Menu Registro Delimiter	

void Menu1() {

	int opcion = 0;

	while (opcion != 4) {

		cout << "		Bienvenido" << endl << endl;
		cout << "Ingresa la opcion que deseas ejecutar: " << endl;

		cout << "1. FixedSize_Register" << endl;
		cout << "2. KnownVarSize_Register" << endl;
		cout << "3. DelimiterVarSize_Register" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			cout << endl;
			FixedRegistro();
			cout << endl;
			break;
		case 2:
			cout << endl;
			KnownRegister();
			cout << endl;
			break;
		case 3:
			cout << endl;
			DelimiterRegister();
			cout << endl;
			break;
		case 4:
			break;

		}

	}

};	   //Menu Inicial

int main()
{

	Menu1();

	system("pause > null");
	cout << "Hasta Pronto!" << endl;
	return 0;
}
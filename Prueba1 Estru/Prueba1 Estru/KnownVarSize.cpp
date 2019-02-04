#include "pch.h"
#include "KnownVarSize_Register.h"
#include <iostream>
#include <string.h>
using namespace std;

KnownSize::KnownSize() {
	file = new DataFile((char*)"KnownVarSize.dat");
}

void FuncionesKnownSize::print_register() {

	KnownSize temporal;

	cout << "Nombre del Archivo: " << temporal.file << endl;
	cout << "Codigo: " << temporal.code << endl;
	cout << "Tamano del nombre: " << temporal.sizeName << endl;
	cout << "Nombre: " << temporal.name << endl;
	cout << "Salario: " << temporal.salary << endl;
	cout << "Tamano del salario: " << temporal.salary << endl;
	cout << "Tamano del puesto: " << temporal.sizeJob << endl;
	cout << "Puesto: " << temporal.job << endl;


}

char * FuncionesKnownSize::toChar() {

	char str[100];
	char * point;
	point = strtok_s(str, ";");

	while (point != NULL) {
		cout << point << endl;
		point = strtok_s(NULL, ";");
	}

	return point;
	
}

void FuncionesKnownSize::fromChar(char * datos) {

	const int size = 100;
	char from[size], to[size];

	strcpy_s(from, datos);
	memcpy(to, from, 100);
	printf(to);

}

void FuncionesKnownSize::open_file(char * archivos) {

	DataFile temporal;
	temporal.abrir;

}

void FuncionesKnownSize::write_into_file() {

	DataFile temporal;
	KnownSize registro;

	temporal.escribir(registro.name, registro.code, registro.salary);

}

void FuncionesKnownSize::read_from_file(int pos) {

	DataFile temporal;

	if (temporal.abrir) {
		temporal.leer;
	}

	temporal.cerrar;

}

void FuncionesKnownSize::close_file() {

	DataFile temporal;
	temporal.cerrar;

}

int FuncionesKnownSize::get_size() {
	int metadata = sizeof(KnownSize);
	return metadata;
}
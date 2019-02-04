#include "pch.h"
#include "DelimiterVarSize_Register.h"
#include <iostream>
#include <string.h>
using namespace std;

Registros::Registros() {
	file = new DataFile((char*)"DelimitedVarSize_Register.dat");
}

void Funciones::print_register() {

	Registros registro;

	cout << "Nombre del archivo: " << registro.file << endl;
	cout << "Codigo: " << registro.code << endl;
	cout << "Nombre: " << registro.name << endl;
	cout << "Salario: " << registro.salary << endl;
	cout << "Trabajo: " << registro.job << endl;

};

char * Funciones::toChar() {

	char str[100];
	char * point;
	point = strtok_s(str, ";");

	while (point != NULL) {
		cout << point << endl;
		point = strtok_s(NULL, ";");
	}

	return point;
	
}

void Funciones::fromChar(char * data) {

	const int size = 100;
	char from[size], to[size];

	strcpy_s(from, data);
	memcpy(to, from, 100);
	printf(to);

};

void Funciones::open_file(char * file) {

	DataFile temporal;
	temporal.abrir;

};

void Funciones::write_into_file() {

	DataFile temporal;
	Registros registro;

	temporal.escribir(registro.name, registro.code, registro.salary);

};

void Funciones::read_from_file(int pos) {

	DataFile temporal;

	if (temporal.abrir) {
		temporal.leer;
	}

	temporal.cerrar;

};

void Funciones::close_file() {

	DataFile temporal; 
	temporal.cerrar;

};

int Funciones::get_size() {
	int metadata = sizeof(Registros);
	return metadata;
};
#include "DataFile.h"

#include <iostream>

using namespace std;

DataFile::DataFile(): direccion(NULL)
{
}

DataFile::DataFile(char *d): direccion(d)
{
}

void DataFile::abrir()
{
	archivo = new std::fstream;
	archivo->open(direccion, ios::in | ios::out | ios::binary);

	if(!archivo)
	{
		std::cout << "¡Archivo no existe!\n";
	}

}

void DataFile::cerrar()
{
	archivo->close();
}

void DataFile::escribir(char *data, int pos_ini, int longitud)
{
	archivo->seekp(pos_ini, std::ios::end);
	archivo->write(data, longitud);
}

char* DataFile::leer(int pos_ini, int longitud)
{
	char *datos = new char[longitud];
	archivo->seekg(pos_ini, std::ios::beg);
	archivo->read(datos, longitud);
	return datos;
}

void DataFile::setDireccion(char *direccion)
{

	this->direccion = direccion;
}
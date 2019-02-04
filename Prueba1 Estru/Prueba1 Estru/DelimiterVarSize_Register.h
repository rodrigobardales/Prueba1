#pragma once
#ifndef DELIMITERVARSIZE_REGISTER_H
#define DELIMITERVARSIZE_REGISTER_H

#include "DataFile.h"

struct Registros {

	DataFile * file;
	int code;
	char * name;
	double salary;
	char * job;

	Registros();

};

class Funciones {

public:

	void print_register();
	char * toChar();
	void fromChar(char *);
	void open_file(char *);
	void write_into_file();
	void read_from_file(int);
	void close_file();
	int get_size();

};

#endif
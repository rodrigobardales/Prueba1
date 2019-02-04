#pragma once
#ifndef KNOWNVARSIZE_REGISTER_H
#define KNOWNVARSIZE_REGISTER_H

#include "DataFile.h"

struct KnownSize {

	DataFile * file;
	int code;
	int sizeName;
	char * name;
	double salary;
	int sizeJob;
	char * job;

	KnownSize();

};

class FuncionesKnownSize {

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

#endif // !KNOWNVARSIZE_REGISTER_H

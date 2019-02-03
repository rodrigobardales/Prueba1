#pragma once
#ifndef FIXEDSIZE_REGISTER_H
#define FIXEDSIZE_REGISTER_H
#include "DataFile.h"
#include <iostream>
#include <fstream>

using namespace std;

class FixedRegister
{
	
private:
	DataFile *file;
	int code;
	char *name = new char[30];
	double salary;
	char *job = new char[20];

	fstream archive;
public:
	FixedRegister();
	
	void print_register();
	char * toChar();
	void fromChar(char *);
	void open_file(char *);
	void write_into_file();
	void read_from_file(int);
	void close_file();
	int get_size();

	void Fixedmenu();
	
};

#endif // !FIXEDSIZE_REGISTER_H
#include "FixedSize_Register.h"

FixedRegister::FixedRegister() 
{
	file = new DataFile((char*)"Fixed.dat");
};


//Imprime en consola, los campos del registro actual
void FixedRegister::print_register()
{
	cout << toChar() << endl;
}

//Construye un buffer de datos con la estructura en bytes de campos del registro actual
char* FixedRegister::toChar()
{
	char *buffer = new char[get_size()];
	
	archive.seekg(0, ios::beg);

	archive.read(buffer,get_size());

	while (!archive.eof())
	{
		archive.read(buffer, get_size());
	}

	return buffer;
}

//Inserta en cada campo, los valores a partir del buffer de datos enviado por parametro
void FixedRegister::fromChar(char*)
{

}

//Abre el archive con la estructura de registro
void FixedRegister::open_file(char* name)
{
	archive.open(name, ios::app | ios::out | ios::in | ios::binary);
	if (!archive.is_open())
	{
		cout << "Error with file\n";
		return;
	}
}

//Escribe al final del archivo binario, la estructura de datos actual
void FixedRegister::write_into_file()
{
	archive.seekp(0, ios::end);
	archive.write(toChar(), sizeof(toChar()) );
}

//Cierra el archivo con la estructura de registro
void FixedRegister::close_file()
{
	archive.close();
}

//Lee a partir de una posición (índice) un registro dentro del archivo binario
void FixedRegister::read_from_file(int pos)
{
	FixedRegister tmep;
	archive.seekg((pos*62), ios::beg);
	archive.read(reinterpret_cast<char *>(&tmep), sizeof(FixedRegister));
}

//Obtiene el tamaño total en bytes de la estructura de registro
int FixedRegister::get_size()
{
	archive.seekg(0, ios::end);
	int size = archive.tellg();
	archive.seekg(0, ios::beg);
	return size;
}

void FixedRegister::Fixedmenu()
{
	bool run = true;
	int op = 0;
	do
	{
		cout << "";
	} while (run);
}
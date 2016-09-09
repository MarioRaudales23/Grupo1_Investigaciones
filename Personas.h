#pragma once
#include <string>

using std::string;

class Personas
{
private:

	string nombreReal;
	string usuario;
	string password;
	int edad;
	int ID;
	string fechaNacimiento;

public:
	
	Personas();
	Personas(string, string, string, int, int, string);
	virtual ~Personas();
	string getType();
	void setType(string);
	string getNombreReal();
	void setNombreReal(string);
	string getUsuario();
	void setUsuario(string);
	string getPassword();
	void setPassword(string);
	int getEdad();
	void setEdad(int);
	int getID();
	void setID(int);
	string getFechaNacimiento();
	void setFechaNacimiento(string);
	virtual string toString()const;
};

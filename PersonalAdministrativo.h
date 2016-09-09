#include "Personas.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;

class PersonalAdministrativo : public Personas
{

private:

	string password2;
	string puesto;

public:

	PersonalAdministrativo();
	~PersonalAdministrativo();
	PersonalAdministrativo(string, string, string, int, int, string, string, string);
	string getPuesto();
	void setPuesto(string);
	string getPassword2();
	void setPassword2(string);
	string toString()const;
};

#pragma once
#include "Personas.h"

class Forense : public Personas
{
private:
	string fechaIngreso;
	string horario; //Herbert, no especificaste :)
public:
	Forense();
	Forense(string, string, string, int, int, string, string, string);
	~Forense();
	string getFechaIngreso();
	void setFechaIngreso(string);
	string getHorario();
	void setHorario(string);
	string toString()const;
};
















































































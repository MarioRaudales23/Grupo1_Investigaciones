#pragma once
#include "Personas.h"

class Investigador : public Personas
{
private:
	int casosAtendidos;
	int casosSolucionados;
	int casosNoSolucionados;
public:
	Investigador();
	Investigador(string, string, string, int, int, string, int, int, int);
	~Investigador();
	int getCasosAtendidos();
	void setCasosAtendidos(int);
	int getCasosSolucionados();
	void setCasosSolucionados(int);
	int getCasosNoSolucionados();
	void setCasosNoSolucionados(int);
	string toString()const;
};
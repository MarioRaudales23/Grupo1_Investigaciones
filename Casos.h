#pragma once

#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
#include "evidencias.h"
#include "Investigador.h"

using namespace std;

class Casos{

	private:

		int numero;
		vector<evidencias*> lista;
		vector<Investigador*> investigadores;
		string hora;
		string fecha;
		bool cerrado;

	public:

		Casos(string,string,bool,int);
		Casos();
		virtual ~Casos();
		string getFecha();
		string getHora();
		bool getCerrado();
		void setFecha(string);
		void setHora(string);
		void setCerrado(bool);
		void setInvestigador(Investigador*);
		int getNumero();
		void setNumero(int);
		virtual string toString()const;
		void setEvidencia(evidencias*);

};
















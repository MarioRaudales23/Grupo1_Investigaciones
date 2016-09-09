#pragma once

#include <string>
#include "evidencias.h"
#include <vector>
#include "Casos.h"

using namespace std;

class Secuestro: public Casos{

	private:

		string lugar;
		string victima;
		double cantidad;
		bool Rescate;
		string estado;
		string Razon;

	public:

		Secuestro(string,string,bool,int,string,string,bool,string);
		~Secuestro();
		string getLugar();
		string getVictima();
		double getCantidad();
		string getEstado();
		bool getRescate();
		string getRazon();
		void setLugar(string);
		void setVictima(string);
		void setCantidad(double);
		void setEstado(string);
		void setRescate(bool);
		void setRazon(string);
		string toString()const;


};












#pragma once

#include <string>
#include "evidencias.h"
#include <vector>
#include "Casos.h"

using namespace std;

class Homicidio: public Casos{

	private:

		vector <string> sospechosos;
		string sospechoso;
		string victima;


	public:

		Homicidio(string,string,bool,int,string);
		~Homicidio();
		string getSospechoso();
		string getVictima();
		vector<string> getSospechosos();
		void setSospechoso(string);
		void setVictima(string);
		void setSospechosos(string);
		string toString()const;

};




#pragma once
#include <string>
using std::string;

class evidencias{
	private:
		string nombre;
		string tipo;
		string lugar;
		bool huellas;
		bool procesada;
	public:
		evidencias();
		evidencias(string,string,bool,bool);
		~evidencias();
		string getNombre();
		void setNombre(string);
		string getTipo();
		void setTipo();
		string getLugar();
		void setLugar(string);
		bool getHuellas();
		void setHuellas(bool);
		bool getProcesada();
		void setProcesada(bool);
		string toString()const;
};
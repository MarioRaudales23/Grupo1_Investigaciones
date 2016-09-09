#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <sstream>
#include "Secuestro.h"
#include "Casos.h"
using namespace std;
	Secuestro::Secuestro(string hora,string fecha,bool cerrado,int numero,string victima,string lugar,bool Rescate):Casos(hora,fecha,cerrado,numero)
	,victima(victima), lugar(lugar),Rescate(Rescate){

	}

	Secuestro::~Secuestro(){

	}
	string Secuestro::getLugar(){
		return lugar;
	}
	string Secuestro::getVictima(){
		return victima;
	}
	double Secuestro::getCantidad(){
		return cantidad;
	}
	string Secuestro::getEstado(){
		return estado;
	}
	bool Secuestro::getRescate(){
		return Rescate;
	}
	void Secuestro::setLugar(string l){
		lugar=l;
	}
	void Secuestro::setVictima(string v){
		victima = v;
	}

	void Secuestro::setCantidad(double c){
		if(Rescate){
			cantidad = c;
		}else{
			cantidad = 0;
		}
	}
	void Secuestro::setEstado(string e){
		if(Casos::getCerrado()){
			estado = e;
		}else{
			cout << "No se ha cerrado el caso";
		}
	}
	void Secuestro::setRescate(bool r){
		Rescate = r;
	}
	string Secuestro::toString()const{
		stringstream ss;
		ss << Casos::toString()<<"\n";
		ss << "Lugar: "<<lugar<<"\n";
		ss << "Victima: "<<victima<<"\n";
		ss << "Cantidad: "<<cantidad<<"\n";
		ss << "Rescate: "<<Rescate<<"\n";
		ss << "Estado: "<<estado<<"\n";	
		return ss.str();
	}
	




























	
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "Homicidio.h"
#include <sstream>
using namespace std;

	Homicidio::Homicidio(string hora,string fecha,bool cerrado,int numero,string victima):Casos(hora,fecha,cerrado,numero)
	,victima(victima){

	}


	Homicidio::~Homicidio(){

	}


	string Homicidio::getSospechoso(){
		if(Casos::getCerrado()){
			return sospechoso;
		}
		else{
			return "No se conoce el sospechoso";
		}
	}


	string Homicidio::getVictima(){
		return victima;
	
	}

	void Homicidio::setSospechoso(string sos){
		if(!Casos::getCerrado()){
			sospechoso = sos;
		}else{
			cout << "Ya se ha descubierto el sospechoso";
		}
	}


	void Homicidio::setVictima(string vic){
		victima = vic;
	
	}

	void Homicidio::setSospechosos(string sosp){
			sospechosos.push_back(sosp);
	
	}

	vector<string> Homicidio::getSospechosos(){
		return sospechosos;
	}


	string Homicidio::toString()const{
		stringstream ss;
		ss << Casos::toString()<<"\n";
		ss << "Victima: "<<victima<<"\n";
		ss << "sospechoso principal: "<<sospechoso<<"\n";
		for (int i = 0; i < sospechosos.size(); ++i){
			ss<<"sospechosos: "<<sospechosos.at(i)<<"\n";
		}
		return ss.str();

	}



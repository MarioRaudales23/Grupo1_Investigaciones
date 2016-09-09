#include <iostream>
#include <string>
#include <stdio.h>
#include "Casos.h"
using namespace std;

Casos::Casos(string hr,string fch,bool crr,int num){
	hora =hr;
	fecha = fch;
	cerrado = crr;
	numero = num;
}

Casos::~Casos(){

}

string Casos::getFecha(){
	return fecha;
}

string Casos::getHora(){
	return hora;
}
bool Casos::getCerrado(){
	return cerrado;
}

int Casos::getNumero(){
	return numero;
}

void Casos::setFecha(string fch){
	fecha = fch;
}

void Casos::setHora(string hra){
	hora = hta;
}

void Casos::setCerrado(bool crr){
	cerrado = crr;
}
		
void Casos::setNumero(int num){
	numero = num;
}
string Casos::toString()const{
	stringstream ss;
	ss << "Numero de caso: "<<numero<<"\n";
	ss << "Fecha: "<<fecha<<"\n";
	ss << "Hora: "<<hora<<"\n";
	ss << "Estado: "<<cerrado<<"\n";
	for (int i = 0; i < evidencias.size(); ++i){
		ss <<"Evidencia "<<i<<" : "<< evidencias.at(i)<<"\n";
	}
	return ss.str();
}

void Casos::setEvidencia(evidencias e){

}
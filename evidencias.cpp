#include "evidencias.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
#include <iostream>
using namespace std;

evidencias::evidencias(){

}
evidencias::evidencias(string nombre,string lugar,bool huellas,bool procesada){
	setNombre(nombre);
	setTipo();
	setLugar(lugar);
	setHuellas(huellas);
	setProcesada(procesada);
}
evidencias::~evidencias(){

}
string evidencias::getNombre(){
	return nombre;
}
void evidencias::setNombre(string name){
	this->nombre = name;
}
string evidencias::getTipo(){
	return this->tipo;
}
void evidencias::setTipo(){
	int eleccion;
	do{
		cout<<"1-Arma Blanca\n2-Arma de Fuego\n3-Evidencias Circunstancial\n....";
		cin>>eleccion;
	}while(eleccion != 1 || eleccion != 2 || eleccion != 3);
	switch(eleccion){
		case 1:{
			tipo = "Arma Blanca";
			break;
		}
		case 2:{
			tipo = "Arma de Fuego";
			break;
		}
		case 3:{
			tipo = "Evidencias Circunstancial";
		}
	}
}

void evidencias::setLugar(string place){
	this->lugar = place;
}
string evidencias::getLugar(){
	return this->lugar;
}
void evidencias::setHuellas(bool digit){
	this->huellas = digit;
}
bool evidencias::getHuellas(){
	return this->huellas;
}
void evidencias::setProcesada(bool pros){
	this->procesada = pros;
}
bool evidencias::getProcesada(){
	return this->procesada;
}
string evidencias::toString(){
	stringstream ss;
	string pros,huel;
	if (procesada)
	{
		pros = "Si";
	}else{
		pros = "No";
	}
	if (huellas)
	{
		huel = "Si";
	}else{
		huel = "No";
	}
	ss<<"Evidencia: Nombre: "<<nombre<<" Tipo: "<<tipo<<" Lugar: "<<lugar<<" Procesada: "<<pros<<"Huellas: "<<huel;
	return ss.str();
}
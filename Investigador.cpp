#include "Personas.h"
#include "Investigador.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::cout;


Investigador::Investigador() : Personas::Personas(){


}


Investigador::Investigador(string nombreReal, string usuario, string password, int edad, int ID, string fechaNacimiento, int casosAtendidos, int casosSolucionados, int casosNoSolucionados) : Personas(nombreReal, usuario, password, edad, ID, fechaNacimiento), casosAtendidos(casosAtendidos), casosSolucionados(casosSolucionados), casosNoSolucionados(casosNoSolucionados) {


}


Investigador::~Investigador() {


}


int Investigador::getCasosAtendidos() {

	return this -> casosAtendidos;
}


void Investigador::setCasosAtendidos(int casosAtendidos) {
	if (casosAtendidos > 0)
	{
		this -> casosAtendidos = casosAtendidos;
	}else{
		cout<<"Numero de casos invalidos";
	}

	
}


int Investigador::getCasosSolucionados() {

	return this -> casosSolucionados;
}


void Investigador::setCasosSolucionados(int casosSolucionados) {
	if (casosSolucionados > 0)
	{
		this -> casosSolucionados = casosSolucionados;
	}else{
		cout<<"Numero de casos invalidos";
	}

}


int Investigador::getCasosNoSolucionados() {
	
	return this -> casosNoSolucionados;
}


void Investigador::setCasosNoSolucionados(int casosNoSolucionados) {
	if (casosNoSolucionados > 0)
	{
		this -> casosNoSolucionados = casosNoSolucionados;
	}else{
		cout<<"Numero de casos invalidos";
	}


}


string Investigador::toString()const {
	
	stringstream ss;
	ss << Personas::toString() << ", Investigador; Casos Atendidos:" << casosAtendidos << "Casos Resueltos: " << casosSolucionados;
	ss << ", Casos Sin Solucionar: " << casosNoSolucionados;
	return ss.str();
	
}
#include "Forense.h"
#include "Personas.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;


Forense::Forense() : Personas::Personas(){


}


Forense::Forense(string nombreReal, string usuario, string password, int edad, int ID, string fechaNacimiento, string fechaIngreso, string horario) : Personas(nombreReal, usuario, password, edad, ID, fechaNacimiento), fechaIngreso(fechaIngreso), horario(horario) {


}


Forense::~Forense() {


}


string Forense::getFechaIngreso() {

	return this -> fechaIngreso;

}

void Forense::setFechaIngreso(string fechaIngreso) {

	this -> fechaIngreso = fechaIngreso;
}

string Forense::getHorario() {
	return this -> horario;

}

void Forense::setHorario(string horario) {

	this -> horario = horario;

}

string Forense::toString() {
	
}
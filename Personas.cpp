#include "Personas.h"
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::stringstream;
using std::cout;


Personas::Personas() {


}


Personas::Personas(string nombreReal, string usuario, string password, int edad, int ID, string fechaNacimiento) : nombreReal(nombreReal), usuario(usuario), password(password), edad(edad), ID(ID), fechaNacimiento(fechaNacimiento){


}


Personas::~Personas() {


}


string Personas::getNombreReal() {

	return this -> nombreReal;
}


void Personas::setNombreReal(string nombreReal) {

	/*bool validName = false;

	for (int i = 0; i < nombreReal.size(); ++i)
	{
		if (nombreReal[i] > 65 && nombreReal[i] < 122)
		{
			validName = true;
		}
	}

	if (validName == true)
	{
		this -> nombreReal = nombreReal;
	} else {
		cout << "No se hicieron cambios.";
	}*/

	this -> nombreReal = nombreReal;
}


string Personas::getUsuario() {

	return this -> usuario;
}


void Personas::setUsuario(string usuario) {

	this -> usuario = usuario;
}


string Personas::getPassword() {

	return this -> password;
}


void Personas::setPassword(string password) {

	this -> password = password;
}


int Personas::getEdad() {

	return this -> edad;
}


void Personas::setEdad(int edad) {

	if (edad > 18)
	{
		this -> edad = edad;
	} else {
		cout << "Debe ser mayor de edad y menor a 10 decadas.";
	}
}


int Personas::getID() {

	return this -> ID;
}


void Personas::setID(int ID) {

	if (ID < 10000000) {
		cout << "NO se hicieron cambios (debe ser un numero de 8 digitos).";
	} else {
		this -> ID = ID;
	}
}

string Personas::getFechaNacimiento() {

	return this -> fechaNacimiento;
}


void Personas::setFechaNacimiento(string fechaNacimiento) {

	this -> fechaNacimiento = fechaNacimiento;
}


string Personas::toString()const {

	stringstream ss;
	ss << "Persona: Nombre: " << nombreReal << ", ID:" << ID << "Edad: " << edad;
	return ss.str();
}

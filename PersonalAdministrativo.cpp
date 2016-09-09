#include "Personas.h"
#include "PersonalAdministrativo.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

PersonalAdministrativo::PersonalAdministrativo() {

}

PersonalAdministrativo::PersonalAdministrativo(string nombreReal, string usuario, string password, int edad, int ID, string fechaNacimiento, string password2, string puesto) : Personas(nombreReal, usuario, password, edad, ID, fechaNacimiento), password2(password2), puesto(puesto) {

}

PersonalAdministrativo::~PersonalAdministrativo() {

}

string PersonalAdministrativo::getPassword2() {
	return this -> password2;
}

void PersonalAdministrativo::setPassword2(string password2) {
	this -> password2 = password2;
}

string PersonalAdministrativo::getPuesto() {
	return this -> puesto;
}

void PersonalAdministrativo::setPuesto(string puesto) {
	this -> puesto = puesto;
}

string PersonalAdministrativo::toString()const {
	stringstream ss;
	ss << Personas::toString() << ", P.A.; Puesto:" << puesto;
	return ss.str();
}
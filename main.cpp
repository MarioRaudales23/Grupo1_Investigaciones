#include "evidencias.h"
#include "Personas.h"
#include "PersonalAdministrativo.h"
#include "Investigador.h"
#include "Forense.h"
#include "Casos.h"
#include "Homicidios.h"
#include "Secuestro.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::vector;
using namespace std:
using std::string;
using std::stringstream;

int main(int argc, char const *argv[])
{
	vector<Personas*> personas;
	vector<Casos*> casos;
	vector<evidencias*> evidencia;
	int submenu;
	while(submenu != 0){
		cout<<"1-Agregar\n2-Modificar\n3-Eliminar\n4-Reportes\n5-salir";
		cin>>submenu;
		switch(submenu){
			case 1:{
				int subbmenu;
				cout<<"1-Personas\n2-Casos-\n3-Evidencias\n....";
				cin>>subbmenu;
				switch(subbmenu){
					case 1:{
						int subbbmenu;
						string nombre,nombreuser,contra,identidad,fecha;
						int edad;
						cout<<"1-Personal Administrativo\n2-Investigador\n3-Forense\n....";
						cin>>subbbmenu;
						cout<<"Ingrese el nombre: ";
						cin>>nombre;
						cout<<"Ingrese el nombre de usuario: ";
						cin>>nombreuser;
						cout<<"Ingrese la contraseña: ";
						cin>>contra;
						cout<<"Ingrese la edad: ";
						cin>>edad;
						cout<<"Ingrese la identidad: ";
						cin>>ident;
						cout<<"Ingrese la fecha de nacimineto: ";
						cin>>fecha;
						switch(subbbmenu){
							case 1:{
								string clave,puesto;
								cout<<"Ingrese su clave: ";
								cin>>clave;
								cout<<"Ingrese su puesto";
								cin>>puesto;
								personas.push_back(new PersonalAdministrativo());
								break;
							}
							case 2:{
								int casoa,casosc,casosin;
								cout<<"Ingrese el numero de casos atendidos: ";
								cin>>casoa;
								cout<<"Ingrese el numero de casos cerrados: ";
								cin>>casosc;
								cout<<"Ingrese el numero de casos sin resolver: ";
								cin>>casosin;
								personas.push_back(new Investigador());
								break;
							}	
							case 3:{
								string fecha,horario;
								cout<<"Ingrese la Fecha de ingreso: ";
								cin>>fecha;
								cout<<"Ingrese su horario de trabajo: ";
								cin>>horario;
								personas.push_back(new Forense());
								break;
							}
						}
						break;
					}
					case 2:{
						int numerocas;
						break;
					}
					case 3:{
						string nombre,lugar;
						char huella,procesada;
						bool huel,pros;
						cout<<"Ingrese el nombre de la evidencia: ";
						cin>>nombre;
						cout<<"Ingrese el lugar";
						cin>>lugar;
						cout>>"Tiene huellas[s/n]:";
						cin>>huella;
						cout<<"Fue Procesada[s/n]: ";
						cin>>procesada;
						if (huella == 's' || huella == 'S')
						{
							huel = true;
						}else{
							huel = false;
						}
						if (procesada == 's' || procesada == 'S')
						{
							pros = true;
						}else{
							pros = false;
						}
						evidencia.push_back(new evidencias(nombre,lugar,huel,pros));
						break;
					}
				}
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				int subbmenu;
				cout<<"1-Personas\n2-Casos-\n3-Evidencias\n....";
				cin>>subbmenu;
				switch(subbmenu){
					case 1:{
						break;
					}
					case 2:{
						break;
					}
					case 3:{
						for (int i = 0; i < evidencia.size(); ++i)
						{
							cout<<i<<" "<<evidencia.at(i)->toString()<<endl;
						}
						cout<<"Ingrese la posicion: ";
						cin>>pos;
						evidencia.erase(pos);
						break;
					}
				}
				break;
			}
			case 4:{

			}
		}
	}
	
	return 0;
}
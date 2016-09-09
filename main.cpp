#include "evidencias.h"
#include "Personas.h"
#include "PersonalAdministrativo.h"
#include "Investigador.h"
#include "Forense.h"
#include "Casos.h"
#include "Homicidio.h"
#include "Secuestro.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::vector;
using namespace std;
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
				cout<<"1-Personas\n2-Casos\n....";
				cin>>subbmenu;
				switch(subbmenu){
					case 1:{
						int subbbmenu;
						string nombre,nombreuser,contra,fecha;
						int edad, identidad;
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
						cin>>identidad;
						cout<<"Ingrese la fecha de nacimineto: ";
						cin>>fecha;
						switch(subbbmenu){
							case 1:{
								string clave,puesto;
								cout<<"Ingrese su clave: ";
								cin>>clave;
								cout<<"Ingrese su puesto";
								cin>>puesto;
								personas.push_back(new PersonalAdministrativo(nombre, nombreuser, contra, edad, identidad, fecha, clave, puesto));
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
								personas.push_back(new Investigador(nombre, nombreuser, contra, edad, identidad, fecha, casoa, casosc, casosin));
								break;
							}	
							case 3:{
								string fecha1,horario;
								cout<<"Ingrese la Fecha de ingreso: ";
								cin>>fecha;
								cout<<"Ingrese su horario de trabajo: ";
								cin>>horario;
								personas.push_back(new Forense(nombre, nombreuser, contra, edad, identidad, fecha, fecha1, horario));
								break;
							}
						}
						break;
					}
					case 2:{
						int numerocas,submenu;
						string lugarh,horain,fechain;
						char cerr;
						bool cerra;
						char insertInv = 's';
						cout<<"1-Homicidio\n2-Secuestro\n.....";
						cin>>submenu;
						cout<<"Ingrese el numero del caso: ";
						cin>>numerocas;
						cout<<"Ingrese la hora del incidente: ";
						cin>>horain;
						cout<<"Fecha del incidente: ";
						cin>>fechain;
						cout<<"El caso esta cerrado[s/n]: ";
						cin>>cerr;
						while(insertInv=='s'||insertInv=='S'){
							for
						}
						if (cerr == 's' || cerr == 'S')
						{
							cerra = true;
						}else{
							cerra = false;
						}
						switch(submenu){
							case 1:{
								string victima;
								string sospechoso;
								int opSosp;
								char respo = 's';
								cout << "Ingrese el nombre de la victima: ";
								cin >> victimaHom;
								Casos* hom = new Homicidio(horain,fechain,cerra,numrocas,victimaHom);
								while(respo== 's'|| respo== 'S'){
									cout << "Ingrese un nombre para el sospechoso:";
									cin >> sospechoso;
									hom -> setSospechosos(sospechosos);
									cout <<"Quiere seguir ingresando sospechosos[s/n]: ";
									cin >> respo;
								}
								if(cerra){
									for (int i = 0; i < hom->getSospechosos().size(); ++i){
										cout << i<<" --- "<< hom->getSospechosos.at(i)<<"\n";
									}
									cout<<"Ingrese el sospechoso principal: ";
									cin <<opSosp;
									hom -> setSospechoso(hom->getSospechosos.at(opSosp));
								}
								break;
							}
							case 2:{
								break;
							}
						}
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
						cout<<"Tiene huellas[s/n]:";
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
				int choice;
				cout << "1. Modificar Personas \n";
				cout << "2. Modificar Casos \n";
				cin >> choice;
				if (choice == 1) {
					int modChoice;
					cout << "1. Modificar Personal Administrativo \n";
					cout << "2. Modificar Investigadores \n";
					cout << "3. Modificar Personal Forense \n";
					cin >> modChoice;

					if (modChoice == 1)
					{
						int target;
						cout << "A quien?";
						cin >> target;

						if (dynamic_cast<PersonalAdministrativo*>(personas.at(target)) != NULL) {
							PersonalAdministrativo* temp = personas.at(target);
							string name;
							cout << "Ingrese nuevo nombre: ";
							cin >> name;
							temp -> setNombreReal(name);
							string username;
							cout << "Ingrese nombre de usuario: ";
							cin >> username;
							temp -> setUsername(username);
							string password;
							cout << "Ingrese nueva clave de acceso regular: ";
							cin >> password;
							temp -> setPassword(password);
							int edad;
							cout << "Ingrese nueva edad: ";
							cin >> edad;
							temp -> setEdad(edad);
							int ID;
							cout << "Ingrese nuvo ID";
							cin >> ID;
							temp -> setID(ID);
							string fechaNacimiento;
							cout << "Ingrese fecha de nacimiento: ";
							cin >> fechaNacimiento;
							temp -> setFechaNacimiento(fechaNacimiento);
							string password2;
							cout << "Ingrese segunda contraseña: ";
							cin >> password2;
							temp -> setPassword2(password2);
							string puesto;
							cout << "Ingrese puesto: ";
							cin >> puesto;
							temp -> setPuesto(puesto);
							personas.erase(personas.begin()+target);
							personas.insert(target, temp);
						} else {
							cout << "Esa persona no es parte del personal Administrativo.";
						}

					} else if (modChoice == 2)
					{
						if (dynamic_cast<Investigador*>(personas.at(target)) != NULL) {
							Investigador* temp = personas.at(target);
							string name;
							cout << "Ingrese nuevo nombre: ";
							cin >> name;
							temp -> setNombreReal(name);
							string username;
							cout << "Ingrese nombre de usuario: ";
							cin >> username;
							temp -> setUsername(username);
							string password;
							cout << "Ingrese nueva clave de acceso regular: ";
							cin >> password;
							temp -> setPassword(password);
							int edad;
							cout << "Ingrese nueva edad: ";
							cin >> edad;
							temp -> setEdad(edad);
							int ID;
							cout << "Ingrese nuvo ID";
							cin >> ID;
							temp -> setID(ID);
							string fechaNacimiento;
							cout << "Ingrese fecha de nacimiento: ";
							cin >> fechaNacimiento;
							temp -> setFechaNacimiento(fechaNacimiento);
							int casosAtendidos;
							cout << "Ingrese numero de casos atendidos: ";
							cin >> casosAtendidos;
							temp -> setCasosAtendidos(casosAtendidos);
							int casosSolucionados;
							cout << "Ingrese numero de casos solucionados: ";
							cin >> casosSolucionados;
							temp -> setCasosSolucionados(casosSolucionados);
							int casosNoSolucionados;
							cout << "Ingrese numero de casos no solucionados: ";
							cin >> casosNoSolucionados;
							temp -> setCasosNoSolucionados(casosNoSolucionados);
							ersonas.erase(personas.begin()+target);
							personas.insert(target, temp);
						}
					} else if (modChoice == 3)
					{

						if (dynamic_cast<Forense*>(temp) != NULL) {
							Forense* temp = personas.at(target);
							string name;
							cout << "Ingrese nuevo nombre: ";
							cin >> name;
							temp -> setNombreReal(name);
							string username;
							cout << "Ingrese nombre de usuario: ";
							cin >> username;
							temp -> setUsername(username);
							string password;
							cout << "Ingrese nueva clave de acceso regular: ";
							cin >> password;
							temp -> setPassword(password);
							int edad;
							cout << "Ingrese nueva edad: ";
							cin >> edad;
							temp -> setEdad(edad);
							int ID;
							cout << "Ingrese nuvo ID";
							cin >> ID;
							temp -> setID(ID);
							string fechaNacimiento;
							cout << "Ingrese fecha de nacimiento: ";
							cin >> fechaNacimiento;
							temp -> setFechaNacimiento(fechaNacimiento);
							string fechaIngreso;
							cout << "Fecha de Ingreso: ":
							cin >> fechaIngreso;
							temp -> setFechaIngreso(fechaIngreso);
							string horario;
							cout << "Ingrese nuevo horario: ";
							cin >> horario;
							temp -> setHorario(horario);
							ersonas.erase(personas.begin()+target);
							personas.insert(target, temp);
						}
					} else {
						cout << "Ingreso numero no valido.";
					}
				} else if (choice == 2) {
					/* code */
				}

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
						
					}
				}
				break;
			}
			case 4:{
				string nom,contr;
				cout<<"Ingrese el nombre de usuario: ";
				cin>>nom;
				cout<<"Ingrese el contraseña: ";
				cin>>contr;
				Personas* temp;
				for (int i = 0; i < personas.size(); ++i)
				{
					if (personas.at(i)->getUsuario() == nom && personas.at(i)->getPassword() == contr)
					{
						temp = personas.at(i);
					}
				}

				if (dynamic_cast<Investigador*>(temp) != NULL)
				{
					do
					{
						switch(continuar){
							case 1:{
								int submenu;
								switch(submenu){
									case 1:{
										string nombre,lugar;
										char huella,procesada;
										bool huel,pros;
										cout<<"Ingrese el nombre de la evidencia: ";
										cin>>nombre;
										cout<<"Ingrese el lugar";
										cin>>lugar;
										cout<<"Tiene huellas[s/n]:";
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
									case 2:{
										int submenu,pos;
										cout<<"1-Nombre evidencia\n2-Lugar\n3-Tipo\n4-Huella\n5-Procesada\n....";
										cin>>submenu;
										cout<<"Posicion de la evidencia: ";
										cin>>pos;
										string nombre,lugar;
										char huella,procesada;
										bool huel,pros;
										switch(submenu){
											case 1:{
												cout<<"Ingrese el nombre de la evidencia: ";
												cin>>nombre;
												evidencia.at(pos)->setNombre(nombre);
												break;
											}
											case 2:{
												cout<<"Ingrese el lugar";
												cin>>lugar;
												evidencia.at(pos)->setLugar(lugar);
												break;
											}
											case 3:{
												evidencia.at(pos)->setTipo();
												break;
											}
											case 4:{
												cout<<"Tiene huellas[s/n]:";
												cin>>huella;
												if (huella == 's' || huella == 'S')
												{
													huel = true;
												}else{
													huel = false;
												}
												evidencia.at(pos)->setHuellas(huella);
												break;
											}
											case 5:{
												cout<<"Fue Procesada[s/n]: ";
												cin>>procesada;
												if (procesada == 's' || procesada == 'S')
												{
													pros = true;
												}else{
													pros = false;
												}
												evidencia.at(pos)->setProcesada(pros);
												break;
											}
										}
									}
									case 3:{
										for (int i = 0; i < evidencia.size(); ++i)
										{
											cout<<i<<" "<<evidencia.at(i)->toString()<<endl;
										}
										int pos;
										cout<<"Ingrese la posicion: ";
										cin>>pos;
										evidencia.erase(evidencia.begin()+pos);
										break;
									}
								}
								break;
							}
							case 2:{
								int pos;
								cout<<"Ingrese el caso que desea ver: ";
								cin>>pos;
								cout<<casos.at(pos)->toString()<<endl;
								break;
							}
						}
					} while (continuar != 3);
				}
				if (dynamic_cast<Forense*>(temp) != NULL)
				{
					int opc;
					do
					{
						cout<<"1-Ver Homicidio\n2-Salir";
						cin>>opc;
						if (opc == 1)
						{
							int pos;
							if (dynamic_cast<Homicidio*>(casos.at(pos)))
							{
								Homicidio* homi = dynamic_cast<Homicidio*>(casos.at(pos));
								cout<<homi->toString()<<endl;

							}else{
								cout<<"El caso no es un Homicidio"<<endl;
							}
						}
					} while (continuar != 2);
				}
				if (dynamic_cast<PersonalAdministrativo*>(temp) != NULL)
				{
					int opc;
					do
					{
						cout<<"1-Ver Secuestro\n2-Salir";
						cin>>opc;
						if (opc == 1)
						{
							int pos;
							if (dynamic_cast<Secuestro*>(casos.at(pos)))
							{
								Secuestro* homi = dynamic_cast<Secuestro*>(casos.at(pos));
								cout<<homi->toString()<<endl;
							}else{
								cout<<"El caso no es un Secuestro"<<endl;
							}
						}
					} while (continuar != 2);
				}
			}
		}
	}
	return 0;
}
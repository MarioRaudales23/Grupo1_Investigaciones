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
						int numerocas,submenu;
						string lugarh,horain,fechain;
						char cerr;
						bool cerra;
						char insertInv = 's';
						int opDet;
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
						if (cerr == 's' || cerr == 'S')
						{
							cerra = true;
						}else{
							cerra = false;
						}
						switch(submenu){
							case 1:{
								string victimaHom;
								string sospechoso;
								vector<string> listaSos;
								int opSosp;
								char respo = 's';
								cout << "Ingrese el nombre de la victima: ";
								cin >> victimaHom;
								Homicidio* hom = new Homicidio(horain,fechain,cerra,numerocas,victimaHom);
								while(insertInv=='s'||insertInv=='S'){
									for (int i = 0; i < personas.size(); ++i){
										if (dynamic_cast<Investigador*>(personas.at(i)) != NULL){
											cout <<i<<" --- "<< personas[i]->toString()<<"\n";
										}
										cout << "Ingrese un detective: ";
										cin >> opDet;
										Investigador * inv = dynamic_cast<Investigador*>(personas.at(opDet));
										hom -> setInvestigador(inv);
										cout << "Desea ingresar otro detective[s/n]: ";
										cin >> insertInv;
									}
								}
								while(respo== 's'|| respo== 'S'){
									cout << "Ingrese un nombre para el sospechoso:";
									cin >> sospechoso;
									hom -> setSospechosos(sospechoso);
									cout <<"Quiere seguir ingresando sospechosos[s/n]: ";
									cin >> respo;
								}
								if(cerra){
									for (int i = 0; i < hom->getSospechosos().size(); ++i){
										cout << hom->getSospechosos()[i]<<"\n";
									}
									cout<<"Ingrese el sospechoso principal: ";
									cin >> opSosp;
									hom -> setSospechoso(hom->getSospechosos()[opSosp]);
									casos.push_back(hom);
								}
								break;
							}
							case 2:{
								string lugarSec;
								char Resc;
								bool rescate;
								string razon;
								double cantidad;
								string victimaSec;
								string estadoSec;
								cout <<"Ingrese el nombre de la victima: ";
								cin >> victimaSec; 
								cout << "Ingrese el lugar del secuestro: ";
								cin >> lugarSec;
								cout << "Ingrese la razon: ";
								cin >> razon;
								cout << "Piden rescate[s/n]: ";
								cin >> Resc;
								if(Resc=='s'||Resc=='s'){
									rescate == true;
								}else{
									rescate == false;
								}
								Secuestro* secu = new Secuestro(horain,fechain,cerra,numerocas,victimaSec,lugarSec,rescate,razon);
								while(insertInv=='s'||insertInv=='S'){
									for (int i = 0; i < personas.size(); ++i){
										if (dynamic_cast<Investigador*>(personas.at(i)) != NULL){
											cout <<i<<" --- "<< personas[i]->toString()<<"\n";
										}
										cout << "Ingrese un detective: ";
										cin >> opDet;
										Investigador * inv = dynamic_cast<Investigador*>(personas.at(opDet));
										secu -> setInvestigador(inv);
										cout << "Desea ingresar otro detective[s/n]: ";
										cin >> insertInv;
									}
								}
								if(secu->getRescate()){
									cout<< "Ingrese la cantidad que piden: ";
									cin >> cantidad;
									secu -> setCantidad(cantidad);
								}else{
									cout << "no estan pidiendo rescate";
								}
								if(secu->getCerrado()){
									cout << "Ingrese el estado[vivo/muerto]: ";
									cin >> estadoSec;
									secu -> setEstado(estadoSec);
								}else{
									cout << "Sigue abierto";
								}
								casos.push_back(secu);

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
				int continuar;
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

								break;
							}
						}
					} while (continuar != 3);
				}
				if (dynamic_cast<Forense*>(temp) != NULL)
				{
					do
					{
						
					} while (continuar != 2);
				}
				if (dynamic_cast<Personas*>(temp) != NULL)
				{
					do
					{
						
					} while (continuar != 2);
				}
			}
		}
	}
	return 0;
}
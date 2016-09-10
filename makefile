Temp:	main.o Personas.o Casos.o PersonalAdministrativo.o Investigador.o Forense.o Secuestro.o Homicidio.o evidencias.o
	g++ main.o Personas.o Casos.o PersonalAdministrativo.o Investigador.o Forense.o Secuestro.o Homicidio.o evidencias.o -o Temp

main.o:	main.cpp Homicidio.h PersonalAdministrativo.h Personas.h Casos.h Investigador.h Forense.h Secuestro.h evidencias.h
	g++ -c main.cpp

Personas.o:	Personas.h Personas.cpp
	g++ -c Personas.cpp

Casos.o:	Casos.cpp Casos.h
	g++ -c Casos.cpp

PersonalAdministrativo.o:	PersonalAdministrativo.cpp PersonalAdministrativo.h Personas.h
	g++ -c PersonalAdministrativo.cpp

Investigador.o:	Investigador.cpp Investigador.h Personas.h
	g++ -c Investigador.cpp

Forense.o:	Forense.h Forense.cpp Personas.h
	g++ -c Forense.cpp

Homicidio.o:	Homicidio.h Homicidio.cpp Casos.h
	g++ -c Homicidio.cpp

Secuestro.o:	Secuestro.h Secuestro.cpp Casos.h
	g++ -c Secuestro.cpp

evidencias.o:	evidencias.h evidencias.cpp
	g++ -c evidencias.cpp
clean:
	rm -f *.o temp

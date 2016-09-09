temp: inicio.o persona.o persona.o caso.o personal.o invest.o forense.o secues.o homi.o
		g++ inicio.o persona.o persona.o  caso.o personal.o invest.o forense.o secues.o homi.o -o temp
inicio.o: main.cpp Homicidio.h PersonalAdministrativo.h Personas.h Casos.h Investigador.h Forense.h Secuestro.h
		g++ -c main.cpp
invest.o: Investigador.cpp Investigador.h Personas.h
		g++ -c Investigador.cpp
forense.o:	Forense.h Forense.cpp Personas.h 
		g++ -c Forense.cpp
personal.o: PersonalAdministrativo.cpp PersonalAdministrativo.h Personas.h
		g++ -c PersonalAdministrativo.cpp
persona.o:	Personas.h Personas.cpp
		g++ -c Personas.cpp
homi.o:	Homicidio.h Homicidio.cpp Casos.h 
		g++ -c Homicidio.cpp
secues.o:	Secuestro.h Secuestro.cpp Casos.h 
		g++ -c Secuestro.cpp
caso.o:	Casos.cpp Casos.h
		g++ -c Casos.cpp
clean:
	rm -f *.o temp

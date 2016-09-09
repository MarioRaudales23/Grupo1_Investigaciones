temp:	inicio.o persona.o persona.o caso.o personal.o invest.o forense.o
		g++ inicio.o persona.o persona.o  caso.o personal.o invest.o forense.o -o temp
inicio.o:	main.cpp Homicidio.h PersonalAdministrativo.h Persona.h Casos.h Investigador.h Forense.h Secuestro.h
		g++ -c main.cpp -o inicio.o
persona.o:	Persona.h Persona.cpp
		g++ -c Persona.cpp -o rectangle.o
caso.o:	Casos.cpp Casos.h
		g++ -c Casos.cpp -o caso.o
personal.o:	PersonalAdministrativo.cpp PersonalAdministrativo.h Persona.h
		g++ -c PersonalAdministrativo.cpp -o personal.o
invest.o:	Investigador.cpp Investigador.h Persona.h
		g++ -c Investigador.cpp -o invest.o
forense.o:	Forense.h Forense.cpp Persona.h 
		g++ -c Forense.cpp -o forense.o
homi.o:	Homicidio.h Homicidio.cpp Casos.h 
		g++ -c Homicidio.cpp -o homi.o
secues.o:	Secuestro.h Secuestro.cpp Casos.h 
		g++ -c Secuestro.cpp -o forense.o
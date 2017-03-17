#ifndef Carrera_h
#define Carrera_h
using namespace std;
#include "Tortuga.h"
#include "Liebre.h"

class Carrera {
	
public:
	void setPista();
	void mostrarPista();
	void borrar();
	void avanza();
	bool ganador();

private:	
	string arrTortuga[73];
	string arrLiebre[73];
	Tortuga tortuga;
	Liebre liebre;
	int posT;
	int posL;
};

#endif
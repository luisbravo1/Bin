#include <iostream>
#include <string>
#include "Carrera.h"
#include "Caballo.h"
using namespace std;


int main() {

	Carrera carrera;
	Caballo *caballo;

	caballo = new Caballo("Pinto");
	carrera.agregar(caballo);

	caballo = new Caballo("Centella");
	carrera.agregar(caballo);
	

	while ( !carrera.hayGanador() ) {
		carrera.avanzar();
	}
	cout << "Ganador: " << carrera.quienGano() << endl;
	carrera.terminar();

	return 0;
}

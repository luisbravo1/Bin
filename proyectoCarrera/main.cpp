#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <unistd.h>

using namespace std::chrono;
using namespace std;

#include "Carrera.h"
#include "Tortuga.h"
#include "Liebre.h"

int main() {

	srand(time(NULL));

	Carrera carrera;
	Tortuga tortuga;
	Liebre liebre;

	carrera.setPista();
	cout << "PUM!!!" << endl;
	cout << "Y ARRANCAN!!!" << endl;
	while (carrera.ganador() == false) {
		//system("clear");
		carrera.borrar();
		carrera.avanza();
		carrera.mostrarPista();
		usleep(100000);
	}

	return 0;
}
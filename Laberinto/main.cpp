#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#include "Laberinto.h"
#include "Robot.h"




int main() {
	ifstream archivo;
	char casilla;
	string enter;

	Laberinto laberinto;
	Robot robot;

	archivo.open("laberinto.txt");
	laberinto.setLaberinto(archivo);
	archivo.close();
	do {
		system("clear");
		laberinto.print();
		cout << "Presiona ENTER para continuar.";
		getline(cin, enter);
		casilla = robot.avanzar();
	} while (casilla != 'S');


	return 0;
}

#include "Laberinto.h"
#include "Robot.h"
#include <cstdlib>


using namespace std;

int main() {
	ifstream archivo;
	char casilla;
	string enter;

	Laberinto laberinto;
	Robot robot;

	archivo.open("laberinto.txt");
	robot.setLaberinto(archivo);
	archivo.close();
	do {
		system("clear");
		robot.print();
		cout << "Presiona ENTER para continuar.";
		getline(cin, enter);
		casilla = robot.avanzar();
	} while (casilla != 'S');


	return 0;
}
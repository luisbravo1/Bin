
#include "Laberinto.h"
#include "Robot.h"

using namespace std;

int main() {
	ifstream archivo;

	Laberinto laberinto;

	archivo.open("laberinto.txt");
	laberinto.setLaberinto(archivo);
	archivo.close();
	laberinto.printLaberinto();

	return 0;
}
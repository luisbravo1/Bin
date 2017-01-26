#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("calificaciones.txt");

	string sMatricula;
	int iTrabajos, iCalificacion;
	double dSuma, dPromedio;

	while (!archivoEntrada.eof()) {
		sMatricula = "";
		iTrabajos = 0;
		iCalificacion = 0;
		dSuma = 0;
		dPromedio = 0;

		archivoEntrada >> sMatricula >> iTrabajos;

		for(int n=0; n < iTrabajos; n++) {
			iCalificacion = 0;
			archivoEntrada >> iCalificacion;
			dSuma = iCalificacion + dSuma;
		}
		dPromedio = dSuma/iTrabajos;

		cout << sMatricula << " " << dPromedio << endl;
	}


	return 0;
}
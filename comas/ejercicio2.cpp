#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("calificaciones.txt");

	ofstream archivoSalida;
	archivoSalida.open("promedios.txt");

	string sMatricula;
	int iTrabajos, iCalificacion, iEntregados;
	double dSuma, dPromedio;

	cout << "Cuantos trabajos son? ";
	cin >> iTrabajos;

	while (!archivoEntrada.eof()) {
		sMatricula = "";
		iCalificacion = 0;
		dSuma = 0;
		dPromedio = 0;

		archivoEntrada >> sMatricula >> iEntregados;

		for(int n=0; n < iEntregados; n++) {
			archivoEntrada >> iCalificacion;
			dSuma = iCalificacion + dSuma;
		}
		dPromedio = dSuma/iTrabajos;

		archivoSalida << sMatricula << " " << dPromedio << endl;
	}

	archivoEntrada.close();

	return 0;
}
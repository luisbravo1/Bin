#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("numeros.txt");

	ofstream archivoSalida;
	archivoSalida.open("resultados.txt");

	string sNumero;


	string sUltimosDigitos;
	string sResultado = "";


	while(!archivoEntrada.eof()) {
		archivoEntrada >> sNumero;
		sResultado = "";

		while(sNumero.length() > 3) {
			sUltimosDigitos = sNumero.substr(sNumero.length()-3,3);
			sResultado = "," + sUltimosDigitos + sResultado;
			sNumero.erase(sNumero.length()-3,3);
		}

		if (sNumero.length() > 0) {
			sResultado = sNumero + sResultado;
		} else {
			sResultado.erase(0,1);
		}

		archivoSalida << sResultado << endl;
	}
		archivoEntrada.close();
}

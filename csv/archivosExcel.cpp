#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main() {

	ifstream archivoEntrada; 
	archivoEntrada.open("saep-2016.csv");

	string sLinea;

	int iLargo;
	int iPosComa;
	int iPosComaPas = 0;
	string sNumero;
	int iNumero, iSuma = 0, iPromedio;
	int i = 0;

	for(int n=0; n < 15; n++) {
		getline(archivoEntrada, sLinea);
		iLargo = sLinea.length();



		while (i < iLargo - 1) {
			iPosComa = sLinea.find(",");
			sNumero = sLinea.substr(iPosComaPas, iPosComa - iPosComaPas);
			sLinea.erase(iPosComa, 1);
			iPosComaPas = iPosComa;
			iLargo = sLinea.length();
			i++;

			iNumero = atoi(sNumero.c_str());
			iSuma += iNumero;

		}
		iPromedio = iSuma/i;
		cout << iPromedio << endl;
	}

	archivoEntrada.close();

	return 0;
}

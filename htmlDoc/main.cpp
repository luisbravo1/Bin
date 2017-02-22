#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void leerDatos(ifstream &archivoEntrada) {
	string sLinea, sElemento;
	int iPos, iLargo, iTam;

	string sProgName, sAuthor, sDate, sFuncName, sDesc, sParam, sReturn;

	while (!archivoEntrada.eof()) {
		do {
			getline(archivoEntrada, sLinea);
		} while (sLinea != "/**");

		while (sLinea != "*/") {
			getline(archivoEntrada, sLinea);
			if (sLinea != "*/") {
				iLargo = sLinea.find(" ");
				sElemento = sLinea.substr(1,iLargo);
				sLinea.erase(0, iLargo);
				iTam = sLinea.length();

				if (sElemento == "progName ") {
					sProgName = sLinea.substr(1, iTam);
					cout << "Programa: " << sProgName << endl;
				} else if (sElemento == "author ") {
					sAuthor = sLinea.substr(1, iTam);
					cout << "Autor: " << sAuthor << endl;
				} else if (sElemento == "date ") {
					sDate = sLinea.substr(1, iTam);
					cout << "Fecha de elaboracion: " << sDate << endl;
				} else if (sElemento == "funcName ") {
					sFuncName = sLinea.substr(1, iTam);
					cout << "Funcion: " << sFuncName << endl;
				} else if (sElemento == "desc ") {
					sDesc = sLinea.substr(1, iTam);
					cout << "Descripcion: " << sDesc << endl;
				} else if (sElemento == "param ") {
					sParam = sLinea.substr(1, iTam);
					cout << "Parametros: " << sParam << endl;
				} else if (sElemento == "return ") {
					sReturn = sLinea.substr(1, iTam);
					cout << "Valor de retorno: " << sReturn << endl;
				}
			}
		}
		cout << endl;
	} 
}

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("factorial.cpp");
	
	leerDatos(archivoEntrada);

	archivoEntrada.close();

	return 0;
}
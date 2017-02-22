#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

//Funcion para leer los datos del archivo factorial.cpp
void leerDatos(ifstream &archivoEntrada, ofstream &archivoSalida) {
	string sLinea, sElemento;
	int iPos, iLargo, iTam, n=0;
	string sProgName, sAuthor, sDate, sFuncName, sDesc, sParam, sReturn;

	//Loop principal para conseguir las lineas de codigo del archivo
	while (!archivoEntrada.eof()) {
		n=0;
		//Loop para buscar el comienzo de la documentacion buscando el "/**"
		do {
			getline(archivoEntrada, sLinea);
			//Break para salir del loop y terminar el programa
			if (sLinea == "}")
				n++;
			if (n > 3)
				//archivoSalida << "</body>" << endl;
				//archivoSalida << "</html>" << endl;
				exit(0);
		} while (sLinea != "/**");

		//Una vez que se encuentra la documentacion empieza a buscar los elementos
		while (sLinea != "*/") {
			getline(archivoEntrada, sLinea);
			if (sLinea != "*/") {
				iLargo = sLinea.find(" ");
				sElemento = sLinea.substr(1,iLargo);
				sLinea.erase(0, iLargo);
				iTam = sLinea.length();

				//Identifica los elementos
				if (sElemento == "progName ") {
					sProgName = sLinea.substr(1, iTam);
					archivoSalida << "<h2> Programa: " << sProgName << "</h2>" << endl;
				} else if (sElemento == "author ") {
					sAuthor = sLinea.substr(1, iTam);
					archivoSalida << "<strong> Autor: </strong>" << sAuthor << "<br>" <<endl;
				} else if (sElemento == "date ") {
					sDate = sLinea.substr(1, iTam);
					archivoSalida << "<strong> Fecha de elaboracion: </strong>" << sDate << "<br>" << endl;
				} else if (sElemento == "funcName ") {
					sFuncName = sLinea.substr(1, iTam);
					archivoSalida << "<h3><hr><br> Funcion: " << sFuncName << "<br></h3>" << endl;
				} else if (sElemento == "desc ") {
					sDesc = sLinea.substr(1, iTam);
					archivoSalida << "<strong> Descripcion: </strong>" << sDesc << "<br>" << endl;
				} else if (sElemento == "param ") {
					sParam = sLinea.substr(1, iTam);
					archivoSalida << "<strong> Parametros: </strong>" << sParam << "<br>" << endl;
				} else if (sElemento == "return ") {
					sReturn = sLinea.substr(1, iTam);
					archivoSalida << "<strong> Valor de retorno: </strong>" << sReturn << "<br>" << endl;
				}
			}
		}
	} 
}

//Funcion para comenzar el archivo html con las tags iniciales
void htmlStart(ofstream &archivoSalida) {
	archivoSalida << "<!DOCTYPE html>" << endl;
	archivoSalida << "<html>" << endl;
	archivoSalida << "<head>" << endl;
	archivoSalida << "<title>" << endl;
	archivoSalida << "Documentaci&oacute;n del archivo factorial.cpp" << endl;
	archivoSalida << "</title>" << endl;
	archivoSalida << "</head>" << endl;
	archivoSalida << "<body>" << endl;
}

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("factorial.cpp");

	ofstream archivoSalida;
	archivoSalida.open("factorial.html");

	htmlStart(archivoSalida);
	leerDatos(archivoEntrada, archivoSalida);

	archivoEntrada.close();

	return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("alumnosEM2017.csv");
	string sLinea, sMatricula, sSemestre, sCurso;
	int iLargo;
	int pCol=0, pRow=0, iP=0, mCol=0, mRow=0, iM=0, oCol=0, oRow=0, iO=0;

	string sArrProg[99][99], sArrOrg[99][99], sArrMate[99][99];
	
//Get variables from file
	while(!archivoEntrada.eof()) {
		iLargo=0;
		getline(archivoEntrada, sLinea);
		sMatricula = sLinea.substr(0, 9);
		sLinea.erase(0, 10);
		sSemestre = sLinea.substr(0,1);
		sLinea.erase(0, 2);
		iLargo = sLinea.find(",");
		sCurso = sLinea.substr(0, iLargo);

		if (sCurso == "Programacion") {
			sArrProg[pRow][pCol] = sMatricula;
			pCol++;
			sArrProg[pRow][pCol] = sSemestre;
			pRow++;
			iP++;
		}
		if (sCurso == "Matematicas") {
			sArrMate[mRow][mCol] = sMatricula;
			mCol++;
			sArrMate[mRow][mCol] = sSemestre;
			mRow++;
			iM++;
		}
		if (sCurso == "Organizacion") {
			sArrOrg[oRow][oCol] = sMatricula;
			oCol++;
			sArrOrg[oRow][oCol] = sSemestre;
			oRow++;
			iO++;
		}
	}

	cout << "Los alumnos inscritos en Programacion son:" << endl;

	for(int row=0; row < 4; row++){
		for(int col=0; col < 2; col++){
			cout << sArrProg[row][col] << ",";
		}
		cout << endl;
	}

	archivoEntrada.close();

	return 0;
}
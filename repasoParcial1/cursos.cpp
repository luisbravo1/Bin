#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("alumnosEM2017.csv");
	string sLinea, sMatricula, sSemestre, sCurso;
	int iLargo;
	int iP=0, iM=0, iO=0;

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
			sArrProg[iP][0] = sMatricula;
			sArrProg[iP][1] = sSemestre;
			iP++;
		}
		if (sCurso == "Matematicas") {
			sArrMate[iM][0] = sMatricula;
			sArrMate[iM][1] = sSemestre;
			iM++;
		}
		if (sCurso == "Organizacion") {
			sArrOrg[iO][0] = sMatricula;
			sArrOrg[iO][1] = sSemestre;
			iO++;
		}
	}

	

	cout << "Los alumnos inscritos en Programacion son:" << endl;
	cout << "Matricula   Semestre" << endl;

	for(int row=0; row < iP; row++){
		for(int col=0; col < 2; col++){
			cout << sArrProg[row][col];
			if (col%2==0)
				cout << "      ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Los alumnos inscritos en Matematicas son:" << endl;
	cout << "Matricula   Semestre" << endl;

	for(int row=0; row < iM; row++){
		for(int col=0; col < 2; col++){
			cout << sArrMate[row][col];
			if (col%2==0)
				cout << "      ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Los alumnos inscritos en Organizacion son:" << endl;
	cout << "Matricula   Semestre" << endl;

	for(int row=0; row < iO; row++){
		for(int col=0; col < 2; col++){
			cout << sArrOrg[row][col];
			if (col%2==0)
				cout << "      ";
		}
		cout << endl;
	}
	cout << endl;

	archivoEntrada.close();

	return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Pone datos del archivo a una matriz y despliega los asientos
void leeDatos(string sMatAsientos[99][99], string sLinea, ifstream &archivoEntrada) {
	int iRow=0, iCol=0, iLargo;
	while (!archivoEntrada.eof()){
		getline(archivoEntrada, sLinea);
		iLargo = sLinea.length();
		while (iLargo != 0){
			sMatAsientos[iRow][iCol] = sLinea.substr(0,1);
			sLinea.erase(0,1);
			cout << sMatAsientos[iRow][iCol];
			iCol++;
			iLargo = sLinea.length();
  		}
  		cout << endl;
  		iRow++;
  		iCol = 0;
	}
}

void asiento(int &iFila, int &iColumna, string sMatAsientos[99][99]) {
	string sSeleccion, sColumna, sFila;
	iFila=0, iColumna=0;
	char cColumna;

	do {
		cout << "Selecciona tu asiento: ";
		cin >> sSeleccion;

		sFila = sSeleccion.substr(0,1);
		iFila = atoi(sSeleccion.c_str());
		cColumna = toupper(sSeleccion[1]);

		switch(cColumna) {
			case 'A':
				iColumna = 2;
				break;
			case 'B':
				iColumna = 4;
				break;
			case 'C':
				iColumna = 6;
				break;
			case 'D':
				iColumna = 8;
				break;
			case 'E':
				iColumna = 10;
				break;
			case 'F':
				iColumna = 12;
				break;
			case 'G':
				iColumna = 14;
				break;
			case 'H':
				iColumna = 16;
				break;
			case 'I':
				iColumna = 18;
				break;
			case 'J':
				iColumna = 20;
				break;
			case 'K':
				iColumna = 22;
				break;
			case 'L':
				iColumna = 24;
				break;
			case 'M':
				iColumna = 26;
				break;
			case 'N':
				iColumna = 28;
				break;
			case 'O':
				iColumna = 30;
				break;
			case 'P':
				iColumna = 32;
				break;
			case 'Q':
				iColumna = 34;
				break;
			case 'R':
				iColumna = 36;
				break;
			case 'S':
				iColumna = 38;
				break;
		}
	} while (sMatAsientos[iFila-1][iColumna] == "X");

	sMatAsientos[iFila-1][iColumna] = 'X';
	cout << endl;
}

void display(string sMatAsientos[99][99]){
	for(int row=0; row < 7; row++){
		for(int col=0; col < 39; col++){
			cout << sMatAsientos[row][col];
		}
		cout << endl;
	}
}

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("JB02142017.txt");
	string sMatAsientos[99][99];
	string sLinea;
	int iFila, iColumna;
	char cContinuar;

//	ofstream archivoSalida;
//	archivoSalida.open("JB02142017.txt");

	leeDatos(sMatAsientos, sLinea, archivoEntrada);
	while (cContinuar != 'T') {
		asiento(iFila, iColumna, sMatAsientos);
		display(sMatAsientos);
		cout << "Deseas terminar? (T/N) ";
		cin >> cContinuar;
		cContinuar = toupper(cContinuar);
		cout << endl;
	}

/*	for(int row=0; row < 7; row++){
		for(int col=0; col < 39; col++){
			archivoSalida << sMatAsientos[row][col];
		}
		archivoSalida << endl;
	}
*/


	archivoEntrada.close();
	
	return 0;
}
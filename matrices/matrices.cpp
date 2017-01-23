#include <iostream>
#include <fstream>

using namespace std;

int main() {

	int iMatA[20][20];
	int iMatB[20][20];
	int iMatC[20][20];

	ifstream archivoEntrada;
	archivoEntrada.open("matrices.txt");
	int iTam;
	archivoEntrada >> iTam;

	ofstream archivoSalida;
	archivoSalida.open("resultados.txt");

//Asignar valores para matriz A
	int iValor;
	archivoSalida << "Matriz A" << endl;
 	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			archivoEntrada >> iValor;
			iMatA[row][col] = iValor;
			archivoSalida << iMatA[row][col];	
		}
		archivoSalida << endl;
	}
	archivoSalida << endl;

//Asignar valores para matriz B
	archivoEntrada >> iTam;
	archivoSalida << "Matriz B" << endl;
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			archivoEntrada >> iValor;
			iMatB[row][col] = iValor;
			archivoSalida << iMatB[row][col];	
		}
		archivoSalida << endl;
	}
	archivoSalida << endl;

//Suma de matrices
	archivoSalida << "Suma" << endl;
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = iMatA[row][col] + iMatB[row][col];
			archivoSalida << iMatC[row][col];
		}
		archivoSalida << endl;
	}
	archivoSalida << endl;


//Resta de matrices
	archivoSalida << "Resta" << endl;
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = iMatA[row][col] - iMatB[row][col];
			archivoSalida << iMatC[row][col];
		}
		archivoSalida << endl;
	}
	archivoSalida << endl;

//Transpuesta de matrices
	archivoSalida << "Transpuesta" << endl;
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = iMatA[col][row];
			archivoSalida << iMatC[row][col];
		}
		archivoSalida << endl;
	}
	archivoSalida << endl;

//Multiplicacion de matrices
	archivoSalida << "Multiplicacion" << endl;
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = 0;
			for(int c = 0; c < iTam; c++) {
				iMatC[row][col] += iMatA[row][c] * iMatB[c][col]; 
			}
			archivoSalida << iMatC[row][col] << " ";
		}
		archivoSalida << endl;
	}

	archivoEntrada.close();

	return 0;
}
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

//Asignar valores para matriz A
	int iValor;
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			archivoEntrada >> iValor;
			iMatA[row][col] = iValor;
			cout << iMatA[row][col];	
		}
		cout << endl;
	}

//Asignar valores para matriz B
	archivoEntrada >> iTam;

	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			archivoEntrada >> iValor;
			iMatB[row][col] = iValor;
			cout << iMatB[row][col];	
		}
		cout << endl;
	}

//Suma de matrices
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = iMatA[row][col] + iMatB[row][col];
			cout << iMatC[row][col];
		}
		cout << endl;
	}


//Resta de matrices
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = iMatA[row][col] - iMatB[row][col];
			cout << iMatC[row][col];
		}
		cout << endl;
	}

//Transpuesta de matrices
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			iMatC[row][col] = iMatA[col][row];
			cout << iMatC[row][col];
		}
		cout << endl;
	}

//Multiplicacion de matrices
	int iSuma;
	for(int row=0; row < iTam; row++) {
		iSuma = 0;
		for(int col=0; col < iTam; col++) {
			iSuma = iMatA[row][col] * iMatB[col][row]; 
			iSuma += iSuma;

			iMatC[row][col] = iSuma;
			
		}
		cout << iSuma << endl;
	}

	archivoEntrada.close();

	return 0;
}
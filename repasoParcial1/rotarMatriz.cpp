#include <iostream>
#include <fstream>

using namespace std;

void rotar(int iMatriz[12][12], int iTam) {
	int iRenglon1[12][12];

	for(int i=0; i < iTam; i++) {
		iRenglon1[0][i] = iMatriz[0][i];
	}

	for(int ren=0; ren < iTam; ren++) {
		for(int col=0; col < iTam; col++) {
			iMatriz[ren][col] = iMatriz[ren+1][col];
			if(ren == (iTam-1))
				iMatriz[ren][col] = iRenglon1[0][col];
		}
	} 
//Mostrar matriz
	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			cout << iMatriz[row][col] << " ";	
		}
		cout << endl;
	}
	cout << endl;
}

int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("matriz.txt");
	
	int iTam;
	cout << "Tamaño de la matriz: ";
	cin >> iTam;

	int iMatriz[12][12];
	int iValor;

 	for(int row=0; row < iTam; row++) {
		for(int col=0; col < iTam; col++) {
			archivoEntrada >> iValor;
			iMatriz[row][col] = iValor;
			cout << iMatriz[row][col] << " ";	
		}
		cout << endl;
	}
	cout << endl;

	for(int i=0; i < (iTam-1); i++) {
		rotar(iMatriz, iTam);
	}

	archivoEntrada.close();

	return 0;
}
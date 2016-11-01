#include <iostream>
using namespace std;

void leeDatos (int iMatNum[10][10], int &iSizeR, int &iSizeC)
{
	cout << "Cuantos renglones: ";
	cin >> iSizeR;
	cout << "Cuantas columnas: ";
	cin >> iSizeC;

	for (int reng=0; reng < iSizeR; reng++) {
		for (int col=0; col < iSizeC; col++)
		{
			cout << "Ingresa dato (" << reng << "," << col << ")";
			cin >> iMatNum[reng][col];
		}
	}
}

void mostrarDatos (int iMatNum[10][10], int &iSizeR, int &iSizeC)
{
	for (int reng=0; reng < iSizeR; reng++) {
		for (int col=0; col < iSizeC; col++)
		{
			cout << iMatNum[reng][col] << "\t";
		}
		cout << endl;
	}

}

int main() 
{
	int iMatNum[10][10];
	int iSizeR, iSizeC;

	leeDatos(iMatNum, iSizeR, iSizeC);
	mostrarDatos(iMatNum, iSizeR, iSizeC);


	return 0;
}
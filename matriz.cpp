#include <iostream>
using namespace std;

int main() 
{
	int iMatNum[10][10];
	int iSizeR, iSizeC;

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

	for (int reng=0; reng < iSizeR; reng++) {
		for (int col=0; col < iSizeC; col++)
		{
			cout << iMatNum[reng][col];
		}
	}

	return 0;
}
#include <iostream>
using namespace std;

void leeDatos (int iArrNum[], int iTam) 
{
	for (int i=0; i < iTam; i++) 
	{
		cout << "Ingresar numero " << i << ": ";
		cin >> iArrNum[i];
	}
}

void casillasPares (int iArrA[], int iTamA, int iArrB[], int &iTamB)
{
	iTamB = 0;
	for (int i=0; i < iTamA; i += 2) 
	{
		iArrB[iTamB] = iArrA[i];
		iTamB++;
	}
}

void mostrarDatos (int iArrNum[], int iTam)
{
	for (int i=0; i < iTam; i++)
	{
		cout << iArrNum[i] << endl;
	}
}

int main()
{
	int iArrA[20], iTamA, iArrB[20], iTamB;

	cout << "Cuantos elementos usara? ";
	cin >> iTamA;
	leeDatos(iArrA, iTamA);
	casillasPares(iArrA, iTamA, iArrB, iTamB);
	cout << "Los numeros en las casillas pares son: " << endl;
	mostrarDatos(iArrB, iTamB);

	return 0;
}
/*
Luis Gerardo Bravo Ramones A01282014
*/

#include <iostream>
using namespace std;

//Funcion que lee la cantidad de datos para el arreglo
void leeDatos (int iArrNum[], int n) 
{
	for (int i=0; i < n; i++) 
	{
		cout << "Ingresar numero " << i+1 << ": ";
		cin >> iArrNum[i];
	}
}

void limites (int iArrA[], int iTamA, int iLimInf, int iLimSup, int iArrB[], int &iTamB)
{
	for (int i=0; i < iTamA; i++) 
	{
		if ((iArrA[i] >= iLimInf) && (iArrA[i] <= iLimSup))
		{
			iArrB[iTamB] = iArrA[i];
			iTamB++;
		}

	}
}

void mostrarDatos (int iArrNum[], int n)
{
	for (int i=0; i < n; i++)
	{
		cout << iArrNum[i] << endl;
	}

	cout << "El tamaño del arreglo final es: " << n << endl;
}

int main()
{
	int iArrA[20], iTamA, iLimInf, iLimSup;
	int iArrB[20], iTamB = 0; 

	cout << "Ingresa el tamaño del arreglo" << endl;
	cin >> iTamA;
	leeDatos(iArrA, iTamA);

	cout << "Ingresa el limite inferior: ";
	cin >> iLimInf;
	cout << "Ingresa el limite superior: ";
	cin >> iLimSup;

	limites(iArrA, iTamA, iLimInf, iLimSup, iArrB, iTamB);

	cout << "Los numeros dentro de los limites son: " << endl;
	mostrarDatos(iArrB, iTamB);

	return 0;
}
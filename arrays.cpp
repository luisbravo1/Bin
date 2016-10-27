/*
Luis Gerardo Bravo Ramones A01282014

Casos de prueba:

Ingresa el tamaño del arreglo
5
Ingresar numero 1: 1
Ingresar numero 2: 2
Ingresar numero 3: 3
Ingresar numero 4: 4
Ingresar numero 5: 5
Ingresa el limite inferior: 2
Ingresa el limite superior: 4
Los numeros dentro de los limites son:
2
3
4
El tamaño del arreglo final es: 3

Ingresa el tamaño del arreglo
8
Ingresar numero 1: 10
Ingresar numero 2: 40
Ingresar numero 3: 20
Ingresar numero 4: 23
Ingresar numero 5: 40
Ingresar numero 6: 56
Ingresar numero 7: 67
Ingresar numero 8: 70
Ingresa el limite inferior: 40
Ingresa el limite superior: 69
Los numeros dentro de los limites son:
40
40
56
67
El tamaño del arreglo final es: 4
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
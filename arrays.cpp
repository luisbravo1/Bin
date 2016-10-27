/*
Luis Gerardo Bravo Ramones A01282014
*/

#include <iostream>
using namespace std;

//Funcion que lee la cantidad de datos para el arreglo
void leeDatos (int dArrNum[], int n) 
{
	for (int i=0; i < n; i++) 
	{
		cout << "Ingresar numero " << i+1 << ": ";
		cin >> dArrNum[i];
	}
}

int main()
{
	int iArrA[20], iTamA, iLimInf, iLimSup;
	int iArrB[20], iTamB; 

	cout << "Ingresa el tamaño del arreglo" << endl;
	cin >> iTamA;

	leeDatos(iArrA, iTamA);

	cout << "Ingresa el limite inferior" << endl;
	cin >> iLimInf;
	cout << "Ingresa el limite superior" << endl;
	cin >> iLimSup;



	return 0;
}
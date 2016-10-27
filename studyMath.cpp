/*
Luis Gerardo Bravo Ramones A01282014
*/

#include <iostream>
using namespace std;


void leeDatos (int dArrNum[], int n)
{
	for (int i=0; i < n; i++) 
	{
		cout << "Ingresar numero " << i+1 << ": ";
		cin >> dArrNum[i];
		if (dArrNum[i] <= dArrNum[i-1])
		{
			cout << "Error, porfavor ingresa un numero valido" << endl;
			cout << "Ingresar numero " << i+1 << ": ";
			cin >> dArrNum[i];
		}
	}
}

int main()
{
	int ArrNumeros[100], n;

	cout << "Cuantos elementos usara? ";
	cin >> n;

	leeDatos(ArrNumeros, n);

	return 0;
}
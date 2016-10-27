/*
Luis Gerardo Bravo Ramones A01282014

Casos de prueba:

Cuantos elementos usara? 5
Ingresar numero 1: 3
Ingresar numero 2: 6
Ingresar numero 3: 90
Ingresar numero 4: 3
Error, porfavor ingresa un numero valido
Ingresar numero 4: 96
Ingresar numero 5: 98
Los valores son:
3
6
90
96
98

Cuantos elementos usara? 3
Ingresar numero 1: -15
Error, porfavor ingresa un numero valido
Ingresar numero 1: 40
Ingresar numero 2: 80
Ingresar numero 3: 110
Error, porfavor ingresa un numero valido
Ingresar numero 3: 100
Los valores son:
40
80
100
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

		while ((iArrNum[i] <= iArrNum[i-1]) || (iArrNum[i] < 0) || (iArrNum[i] > 100)) //Para verificar que el numero no sea menor al anterior
		{
			cout << "Error, porfavor ingresa un numero valido" << endl;
			cout << "Ingresar numero " << i+1 << ": ";
			cin >> iArrNum[i];
		}
	}
}

void mostrarDatos (int iArrNum[], int n)
{
	for (int i=0; i < n; i++)
	{
		cout << iArrNum[i] << endl;
	}
}

int main()
{
	int ArrNumeros[100], n;

	cout << "Cuantos elementos usara? ";
	cin >> n;

	leeDatos(ArrNumeros, n);
	cout << "Los valores son: " << endl;
	mostrarDatos(ArrNumeros, n);

	return 0;
}
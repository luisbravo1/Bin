#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

#include "Cuenta.h"

Cuenta::Cuenta() {numero=0; nombre=""; fecha=""; saldo=0; }

void Cuenta::leerCuenta(istream &archivoEntrada) {
	archivoEntrada >> numero;
	archivoEntrada.ignore();
	getline(archivoEntrada, nombre);
	getline(archivoEntrada, fecha);
	archivoEntrada >> saldo;
	archivoEntrada.ignore();
}

void Cuenta::printCuenta() {
	cout << "Numero de cuenta: " << numero << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Fecha de expiracion: " << fecha << endl;
	cout << "Saldo: $" << saldo << endl; 
}

void Cuenta::operacionCuenta() {
	string operacion;
	int monto;

	cout << "Quieres añadir fondos o retirar fondos? ";
	cin >> operacion;

	if (operacion == "añadir") {
		cout << "Ingresar monto: ";
		cin >> monto;
		saldo = saldo + monto;
		cout << "Saldo total: $" << saldo << endl;
	}

	if (operacion == "retirar") {
		cout << "Ingresar monto: ";
		cin >> monto;
		saldo = saldo - monto;
		cout << "Saldo total: $" << saldo << endl;
	}

}

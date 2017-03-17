#include <iostream>
#include <fstream>
#include <string>
#include "Cuenta.h"
using namespace std;



int main() {

	ifstream archivoEntrada;
	archivoEntrada.open("info.txt");

	Cuenta miCuenta;
	miCuenta.leerCuenta(archivoEntrada);
	miCuenta.printCuenta();
	miCuenta.operacionCuenta();

	archivoEntrada.close();
	
	return 0;
}
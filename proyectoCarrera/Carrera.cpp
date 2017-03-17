#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Carrera.h"
#include "Tortuga.h"

void Carrera::setPista() {
	for (int i=0; i < 72; i++) {
		if ((i==0) || (i==71)) {
			arrTortuga[i] = "|";
			arrLiebre[i] = "|";
		} else {
			arrTortuga[i] = "-";
			arrLiebre[i] = "-";
		}
	}
}

void Carrera::mostrarPista() {
	for (int i=0; i < 72; i++) {
		cout << arrTortuga[i];
	}
	cout << posT;
	cout << endl;
	for (int i=0; i < 72; i++) {
		cout << arrLiebre[i];
	}
	cout << posL;
	cout << endl;
	cout << endl;
}

void Carrera::borrar() {
	for (int i=0; i < 72; i++) {
		if (arrTortuga[i] == "T")
			arrTortuga[i] = "-";
	}
	for (int i=0; i < 72; i++) {
		if (arrLiebre[i] == "L")
			arrLiebre[i] = "-";
	}
}

void Carrera::avanza() {
	posT = tortuga.getPosicion()+1;
	posL = liebre.getPosicion()+1;

	if (posT == posL) {
		if ((posT != 1) && (posL != 1))
			cout << "OUCH!!!" << endl;
	}

	arrTortuga[posT] = "T";
	tortuga.numRandom();

	arrLiebre[posL] = "L";
	liebre.numRandom();
}

bool Carrera::ganador() {
	if (posT >= 70) {
		cout << "LA TORTUGA GANA!!! YAY!!!" << endl;
		return true;
	}
	if (posL >= 70) {
		cout << "La liebre gana. Que mal." << endl;
		return true;
	}
}


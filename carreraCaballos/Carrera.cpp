#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Carrera.h"

Carrera::Carrera() { n=0;}

void Carrera::agregar(string caballo) {
	arrCaballos[n] = caballo;
	n++;
}

void Carrera::avanzar() {

}

bool Carrera::hayGanador() {

}

string Carrera::quienGano () {

}

void Carrera::terminar() {

}
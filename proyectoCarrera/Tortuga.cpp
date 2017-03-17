#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <stdlib.h>
using namespace std;

#include "Tortuga.h"

Tortuga::Tortuga() { posicion = 0;}

void Tortuga::numRandom() {

	i = rand() % 10 + 1;

	if (i <= 5) 
		pasoRapido();
	if ((i >= 6) && (i <= 7))
		resbalon();
	if ((i >= 8) && (i <= 10))
		pasoLento();
} 

void Tortuga::pasoRapido() {
	posicion += 3;
	limite();
}

void Tortuga::resbalon() {
	posicion -= 6;
	limite();
}

void Tortuga::pasoLento() {
	posicion += 1;
	limite();
}

void Tortuga::limite() {
	if (posicion < 1)
		posicion = 1;
	if (posicion > 70)
		posicion = 69;
}

int Tortuga::getPosicion() {
	return posicion;
}



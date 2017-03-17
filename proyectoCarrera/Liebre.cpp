#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

#include "Liebre.h"

Liebre::Liebre() { posicion = 0;}

void Liebre::numRandom() {
	i = rand() % 10 + 1;

	if ((i >= 1) && (i <= 2)) 
		dormir();
	if ((i >= 3) && (i <= 4))
		granSalto();
	if (i == 5)
		granResbalon();
	if ((i >= 6) && (i <= 8))
		pequeSalto();
	if ((i >= 9) && (i <= 10))
		pequeResbalon();
} 

void Liebre::dormir() {

}

void Liebre::granSalto() {
	posicion += 9;
	limite();
}

void Liebre::granResbalon() {
	posicion -= 12;
	limite();
}

void Liebre::pequeSalto() {
	posicion += 1;
	limite();
}

void Liebre::pequeResbalon() {
	posicion -= 2;
	limite();
}

void Liebre::limite() {
	if (posicion < 1)
		posicion = 1;
	if (posicion > 70)
		posicion = 69;
}

int Liebre::getPosicion() {
	return posicion;
}


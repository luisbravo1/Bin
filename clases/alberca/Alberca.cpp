#include <iostream>
#include <iomanip>
using namespace std;

#include "Alberca.h"

Alberca::Alberca() {largo=0; ancho=0; prof=0; tam=0; vel=20; agua=1000; }

void Alberca::setSize(int l, int a, int p) {
	largo = l;
	ancho = a;
	prof = p;
}

int Alberca::getSize() {

	return largo*ancho*prof;
}

int Alberca::getTime() {
	return ((largo*ancho*prof) - agua )/vel;
}
int Alberca::getWater() {
	return ((largo*ancho*prof) - agua );
}
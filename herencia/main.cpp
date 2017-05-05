#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "alumno.h"
#include "profesor.h"

int main() {

	string nom, dir, mail;
	Persona miPersona;

	cout << "Ingresa tu nombre: ";
	cin >> nom;
	cout << "Ingresa tu direccion: ";
	cin >> dir;
	cout << "Ingresa tu email: ";
	cin >> mail;

	miPersona.setNombre(nom);
	miPersona.setDireccion(dir);
	miPersona.setEmail(mail);

	return 0;
}
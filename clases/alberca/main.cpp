#include <iostream>
#include "Alberca.h"

using namespace std;

int main() {
	int t, time, agua;
	Alberca miAlberca;
	miAlberca.setSize(10,20,30);
	t = miAlberca.getSize();
	cout << "Tamaño de la alberca: " << t << endl;

	agua = miAlberca.getWater();
	cout << "Cantidad a llenar: " << agua << endl;

	time = miAlberca.getTime();
	cout << "Tiempo que tardara en llenar: " << time << endl;
	
	return 0;
}
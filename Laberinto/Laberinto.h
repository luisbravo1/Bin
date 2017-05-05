#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//#define MAX 40

class Laberinto {
	private:
		//int MAX;
		//char *laberinto;
		char laberinto[20][20];
		int size;
		int posInicial;

	public:
		Laberinto();
		//virtual ~Laberinto();
		void setLaberinto(istream&);

};

Laberinto::Laberinto() {
	//MAX = 10;
	//laberinto = new char[MAX];
}

void Laberinto::setLaberinto(istream &archivo) {
	string linea;

	for(int i=0; i<2; i++) {
		getline(archivo, linea);
		linea = linea.substr(0,2);
		if (i==0)
			size = atoi(linea.c_str());
		else
			posInicial = atoi(linea.c_str());
	}

	for(int ren=0; ren < size; ren++) {
		for(int col=0; col < size; col++) {
			archivo >> laberinto[ren][col];
			if(laberinto[ren][col] == '-')
				laberinto[ren][col] = ' ';
		}
	}

	//delete [] laberinto;
}


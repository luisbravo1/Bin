#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//#define MAX 40

class Robot {
	private:
		//int MAX;
		//char *laberinto;
		char laberinto[20][20];
		int size;
		int posInicial;
		int posX;
		int posY;
		bool back;

	public:
		Robot();
		void setLaberinto(istream&);
		void print();
		char der();
		char abajo();
		char izq();
		char arriba();
		char avanzar();

};

Robot::Robot() {
	//MAX = 10;
	//laberinto = new char[MAX];
	back=false;
}

void Robot::setLaberinto(istream &archivo) {
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
		}
	}

	posX = posInicial;
	posY = 1;
	//delete [] laberinto;

}

void Robot::print() {
	laberinto[posY][posX] = 'R';
	for(int ren=0; ren < size; ren++) {
		for(int col=0; col < size; col++) {
			if (laberinto[ren][col]=='r' || laberinto[ren][col]=='-' || laberinto[ren][col]=='V')
				cout << " ";
			else
				cout << laberinto[ren][col];
		}
		cout << endl;
	}
	laberinto[posY][posX] = 'V';
}

char Robot::der() {
	return laberinto[posY][posX+1];
}

char Robot::abajo() {
	return laberinto[posY+1][posX];
}

char Robot::izq() {
	return laberinto[posY][posX-1];
}

char Robot::arriba() {
	return laberinto[posY-1][posX];
}

char Robot::avanzar() {
	int x = posX;
	int y = posY;
	int stuck;


	if (der()=='X')
		stuck++;
	if (izq()=='X')
		stuck++;
	if (arriba()=='X')
		stuck++;
	if (abajo()=='X')
		stuck++;

	if (stuck >= 3)
		back = true;


	if (!back) {
		if (der()=='-')
			posX++;
		else if (abajo()=='-')
			posY++;
		else if (izq()=='-')
			posX--;
		else if (arriba()=='-')
			posY--; 
	} else {
		laberinto[posY][posX] = 'r';
		if (der()=='V')
			posX++;
		else if (abajo()=='V')
			posY++;
		else if (izq()=='V')
			posX--;
		else if (arriba()=='V')
			posY--;

		if (der()=='-' || abajo()=='-' || izq()=='-' || arriba()=='-')
			back=false;
	}

	if (der()=='S' || abajo()=='S' || izq()=='S' || arriba()=='S')
		return 'S';

	return 'N';
}






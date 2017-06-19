#ifndef Laberinto_H
#define Laberinto_H


class Laberinto {
	private:
		//Robot robot;
		char laberinto[20][20];
		int size;
		int posInicial;
		int posX;
		int posY;

	public:
		Laberinto();
		void setLaberinto(istream&);
		void print();
		char getChar(int, int);
		int getPosX();

};

Laberinto::Laberinto() {

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
		}
	}

	posX = posInicial;
	posY = 1;
	//robot.setPos(posInicial, 1);
}

void Laberinto::print() {
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

char Laberinto::getChar(int x, int y) {
	return laberinto[y][x];
}

int Laberinto::getPosX() {
	return posX;
}

#endif

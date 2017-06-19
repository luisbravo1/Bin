#ifndef Robot_H
#define Robot_H


class Robot {
	private:
		char claberinto[20][20];
		int size;
		bool back;
		int posY;
		int posX;
		Laberinto laberinto;

	public:
		Robot();
		void print();
		char der();
		char abajo();
		char izq();
		char arriba();
		char avanzar();

};

Robot::Robot() {
	back=false;
	posX = laberinto.getPosX();
	posY = 1;
}

void Robot::print() {
	laberinto.print();
}

char Robot::der() {
	return laberinto.getChar(posX+1, posY); //laberinto[posY][posX+1];
}

char Robot::abajo() {
	return laberinto.getChar(posX, posY+1); //laberinto[posY+1][posX];
}

char Robot::izq() {
	return laberinto.getChar(posX-1, posY); //laberinto[posY][posX-1];
}

char Robot::arriba() {
	return laberinto.getChar(posX, posY-1); //laberinto[posY-1][posX];
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
		claberinto[posY][posX] = 'r';
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

#endif





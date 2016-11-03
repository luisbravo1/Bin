#include <iostream>
using namespace std;


void mostrarTablero (char MatTablero[6][6]) //Muestra el tablero cada turno
{
	for (int reng=0; reng < 6; reng++) {
		for (int col=0; col < 6; col++)
		{
			cout << MatTablero[reng][col] << "\t";
		}
		cout << endl;
	}

}

void leeSeleccion (char MatTablero[6][6], int &selecRen, int &selecCol, bool seleccion) //Lee los datos de seleccion
{

	cout << "Jugador 1 X" << endl;

	while (seleccion == false){ //Verificar que la seleccion sea correcta
		cout << "Renglon -> ";
		cin >> selecRen;
		cout << "Coumna -> ";
		cin >> selecCol;

		if (MatTablero[selecRen][selecCol] == 'X'){
			seleccion = true;
		} else {
			seleccion = false;
		}
	}
}

void movimiento (int selecRen, int selecCol, bool seleccion, char MatTablero[6][6]) //Mueve al jugador
{
	char destino;

	cout << "a - izq	x - aba		w - arr		d - der" << endl;
	cout << "q - arriba a la izq	e - arriba a la der" << endl;
	cout << "z - abajo a la izq	c - abajo a la der" << endl;
	cin >> destino;

	switch (destino){
		case 'a':
			if (MatTablero[selecRen][selecCol-1] == '_')
				MatTablero[selecRen][selecCol-1] = 'X';
			break;
		case 'x':
			if (MatTablero[selecRen+1][selecCol] == '_')
				MatTablero[selecRen+1][selecCol] = 'X';
			break;
		case 'w':
			if (MatTablero[selecRen-1][selecCol] == '_')
				MatTablero[selecRen-1][selecCol] = 'X';
			break;
		case 'd':
			if (MatTablero[selecRen][selecCol+1] == '_')
				MatTablero[selecRen][selecCol+1] = 'X';
			break;
		case 'q':
			if (MatTablero[selecRen-1][selecCol-1] == '_')
				MatTablero[selecRen-1][selecCol-1] = 'X';
			break;
		case 'e':
			if (MatTablero[selecRen-1][selecCol+1] == '_')
				MatTablero[selecRen-1][selecCol+1] = 'X';
			break;
		case 'z':
			if (MatTablero[selecRen+1][selecCol-1] == '_')
				MatTablero[selecRen+1][selecCol-1] = 'X';
			break;
		case 'c':
			if (MatTablero[selecRen+1][selecCol+1] == '_')
				MatTablero[selecRen+1][selecCol+1] = 'X';
			break;
	}
}

void seguirJugando (bool &continuar)
{
	char respuesta;

	do {
		cout << "Seguir (s/n) ->";
		cin >> respuesta;

		respuesta = tolower(respuesta);

		if (respuesta == 'n')
			continuar = false;

	} while ((respuesta != 'n') && (respuesta != 's'));
}

int main() 
{
	char MatTablero[6][6] = {{'0','1','2','3','4','5'},{'1','X','_','_','_','X'},{'2','_','_','_','_','_'},\
	{'3','_','_','_','_','_'},{'4','_','_','_','_','_'},{'5','O','_','_','_','O'}};
	int selecRen, selecCol;
	bool seleccion = false, continuar = true, player1 = true;

	do {
		mostrarTablero(MatTablero);
		leeSeleccion(MatTablero, selecRen, selecCol, seleccion);
		movimiento(selecRen, selecCol, seleccion, MatTablero);
		mostrarTablero(MatTablero);
		seguirJugando(continuar);
		player1 = !player1;
	} while (continuar == true);

	return 0;
}
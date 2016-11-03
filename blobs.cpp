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

void leeSeleccion (char MatTablero[6][6], int &selecRen, int &selecCol, bool seleccion, char &cPlayer) //Lee los datos de seleccion
{
	int jugador;
	if (cPlayer == 'X')
		jugador = 1;
	else 
		jugador = 2;

	cout << "Jugador " << jugador << " " << cPlayer << endl;

	while (seleccion == false){ //Verificar que la seleccion sea correcta
		cout << "Renglon -> ";
		cin >> selecRen;
		cout << "Coumna -> ";
		cin >> selecCol;

		if (MatTablero[selecRen][selecCol] == cPlayer)
			seleccion = true;
	}
}

void movimiento (int selecRen, int selecCol, bool seleccion, char MatTablero[6][6], char cPlayer) //Mueve al jugador
{
	char destino;

	cout << "a - izq	x - aba		w - arr		d - der" << endl;
	cout << "q - arriba a la izq	e - arriba a la der" << endl;
	cout << "z - abajo a la izq	c - abajo a la der" << endl;
	cin >> destino;

	switch (destino){
		case 'a':
			if (MatTablero[selecRen][selecCol-1] == '_') 	 //Se ponen limites en el movimiento, no pueden moverse si
				MatTablero[selecRen][selecCol-1] = cPlayer;	 //no esta vacia la casilla
			break;
		case 'x':
			if (MatTablero[selecRen+1][selecCol] == '_')
				MatTablero[selecRen+1][selecCol] = cPlayer;
			break;
		case 'w':
			if (MatTablero[selecRen-1][selecCol] == '_')
				MatTablero[selecRen-1][selecCol] = cPlayer;
			break;
		case 'd':
			if (MatTablero[selecRen][selecCol+1] == '_')
				MatTablero[selecRen][selecCol+1] = cPlayer;
			break;
		case 'q':
			if (MatTablero[selecRen-1][selecCol-1] == '_')
				MatTablero[selecRen-1][selecCol-1] = cPlayer;
			break;
		case 'e':
			if (MatTablero[selecRen-1][selecCol+1] == '_')
				MatTablero[selecRen-1][selecCol+1] = cPlayer;
			break;
		case 'z':
			if (MatTablero[selecRen+1][selecCol-1] == '_')
				MatTablero[selecRen+1][selecCol-1] = cPlayer;
			break;
		case 'c':
			if (MatTablero[selecRen+1][selecCol+1] == '_')
				MatTablero[selecRen+1][selecCol+1] = cPlayer;
			break;
	}
}

void seguirJugando (bool &continuar) //Verifica si quiere seguir jugando el usuario
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

void turnoJugador (bool &player1, char &cPlayer) //Cambia el turno del jugador 1 o jugador 2
{
	if (player1 == false)
		cPlayer = 'X';
	else
		cPlayer = 'O';

	player1 = !player1;

}

int main() 
{
	char MatTablero[6][6] = {{'0','1','2','3','4','5'},{'1','X','_','_','_','X'},{'2','_','_','_','_','_'},\
	{'3','_','_','_','_','_'},{'4','_','_','_','_','_'},{'5','O','_','_','_','O'}};
	int selecRen, selecCol;
	bool seleccion = false, continuar = true, player1 = true;
	char cPlayer = 'X';

	mostrarTablero(MatTablero);

	do {
		leeSeleccion(MatTablero, selecRen, selecCol, seleccion, cPlayer);
		movimiento(selecRen, selecCol, seleccion, MatTablero, cPlayer);
		mostrarTablero(MatTablero);
		seguirJugando(continuar);
		turnoJugador(player1, cPlayer);
	} while (continuar == true);

	return 0;
}
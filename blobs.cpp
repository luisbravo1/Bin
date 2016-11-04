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
	selecRen = 0;
	selecCol = 0;
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

void convertirBlobs (char MatTablero[6][6], int selecRen, int selecCol, char cPlayer, char cOpponent) //Si hay algun enemigo en una casilla adyacente
{																									  //lo captura
	if (MatTablero[selecRen][selecCol-1] == cOpponent) 
		(MatTablero[selecRen][selecCol-1] = cPlayer);

	if (MatTablero[selecRen+1][selecCol] == cOpponent)
		(MatTablero[selecRen+1][selecCol] = cPlayer);

	if (MatTablero[selecRen-1][selecCol] == cOpponent)
		(MatTablero[selecRen-1][selecCol] = cPlayer);

	if (MatTablero[selecRen][selecCol+1] == cOpponent)
		(MatTablero[selecRen][selecCol+1] = cPlayer);

	if (MatTablero[selecRen-1][selecCol-1] == cOpponent)
		(MatTablero[selecRen-1][selecCol-1] = cPlayer);

	if (MatTablero[selecRen+1][selecCol+1] == cOpponent)
		(MatTablero[selecRen+1][selecCol+1] = cPlayer);

	if (MatTablero[selecRen+1][selecCol-1] == cOpponent)
		(MatTablero[selecRen+1][selecCol-1] = cPlayer);

	if (MatTablero[selecRen-1][selecCol+1] == cOpponent)
		(MatTablero[selecRen-1][selecCol+1] = cPlayer);
}

void movimiento (int &selecRen, int &selecCol, bool seleccion, char MatTablero[6][6], char cPlayer) //Mueve al jugador
{
	char destino;

	do {
	cout << "a - izq		x - aba		w - arr		d - der" << endl;
	cout << "q - arriba a la izq	e - arriba a la der" << endl;
	cout << "z - abajo a la izq	c - abajo a la der" << endl;
	cin >> destino;
	} while ((destino != 'a') && (destino != 'x') && (destino != 'w') && (destino != 'd') && (destino != 'q')\
		&& (destino != 'e') && (destino != 'z') && (destino != 'c'));

	switch (destino){
		case 'a':
			if (MatTablero[selecRen][selecCol-1] == '_') 	 //Se ponen limites en el movimiento, no pueden moverse si
				MatTablero[selecRen][selecCol-1] = cPlayer;	 //no esta vacia la casilla
				selecCol--;
			break;
		case 'x':
			if (MatTablero[selecRen+1][selecCol] == '_')
				MatTablero[selecRen+1][selecCol] = cPlayer;
				selecRen++;
			break;
		case 'w':
			if (MatTablero[selecRen-1][selecCol] == '_')
				MatTablero[selecRen-1][selecCol] = cPlayer;
				selecRen--;
			break;
		case 'd':
			if (MatTablero[selecRen][selecCol+1] == '_')
				MatTablero[selecRen][selecCol+1] = cPlayer;
				selecCol++;
			break;
		case 'q':
			if (MatTablero[selecRen-1][selecCol-1] == '_')
				MatTablero[selecRen-1][selecCol-1] = cPlayer;
				selecRen--;
				selecCol--;
			break;
		case 'e':
			if (MatTablero[selecRen-1][selecCol+1] == '_')
				MatTablero[selecRen-1][selecCol+1] = cPlayer;
				selecRen--;
				selecCol++;
			break;
		case 'z':
			if (MatTablero[selecRen+1][selecCol-1] == '_')
				MatTablero[selecRen+1][selecCol-1] = cPlayer;
				selecRen++;
				selecCol--;
			break;
		case 'c':
			if (MatTablero[selecRen+1][selecCol+1] == '_')
				MatTablero[selecRen+1][selecCol+1] = cPlayer;
				selecRen++;
				selecCol++;
			break;
	}
}

void ganador (char MatTablero[6][6], int &iPuntaje1, int &iPuntaje2, bool &continuar)
{
	iPuntaje1=0;
	iPuntaje2=0;
	int iCasillas=0;

	for (int ren=0; ren < 6; ren++){
		for (int col=0; col < 6; col++){
			if (MatTablero[ren][col] != '_')
				iCasillas++;
		}
	}

	for (int ren=0; ren < 6; ren++){
		for (int col=0; col < 6; col++){
			if (MatTablero[ren][col] == 'X')
				iPuntaje1++;
			else if (MatTablero[ren][col] == 'O')
				iPuntaje2++;
		}
	}

	if (iCasillas == 36)
		continuar = false;
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

void turnoJugador (bool &player1, char &cPlayer, char &cOpponent) //Cambia el turno del jugador 1 o jugador 2
{
	if (player1 == false){
		cPlayer = 'X';
		cOpponent = 'O';
	} else {
		cPlayer = 'O';
		cOpponent = 'X';
	}

	player1 = !player1;
}

int main() 
{
	char MatTablero[6][6] = {{'0','1','2','3','4','5'},{'1','X','_','_','_','X'},{'2','_','_','_','_','_'},\
	{'3','_','_','_','_','_'},{'4','_','_','_','_','_'},{'5','O','_','_','_','O'}};
	int selecRen, selecCol, iPuntaje1, iPuntaje2;
	bool seleccion = false, continuar = true, player1 = true;
	char cPlayer = 'X', cOpponent = cOpponent;

	mostrarTablero(MatTablero);

	do {
		leeSeleccion(MatTablero, selecRen, selecCol, seleccion, cPlayer);
		movimiento(selecRen, selecCol, seleccion, MatTablero, cPlayer);
		convertirBlobs(MatTablero, selecRen, selecCol, cPlayer, cOpponent);
		mostrarTablero(MatTablero);
		ganador(MatTablero, iPuntaje1, iPuntaje2, continuar);
		seguirJugando(continuar);
		turnoJugador(player1, cPlayer, cOpponent);
	} while (continuar == true);

	if (iPuntaje1 > iPuntaje2)
		cout << "Jugador 1 X gana (" << iPuntaje1 << ") vs Jugador 2 O (" << iPuntaje2 << ")" << endl;
	else if (iPuntaje2 > iPuntaje1)
		cout << "Jugador 2 O gana (" << iPuntaje2 << ") vs Jugador 1 X (" << iPuntaje1 << ")" << endl;
	else if (iPuntaje1 == iPuntaje2)
		cout << "Empate Jugador 1 X (" << iPuntaje1 << ") y Jugador 2 O (" << iPuntaje2 << ")" << endl;

	return 0;
}
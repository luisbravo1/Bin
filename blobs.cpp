#include <iostream>
using namespace std;



void leeDatos (char MatTablero[6][6]) //Lee los datos de seleccion y de movimiento del jugador
{
	int selecRen, selecCol;
	bool seleccion = false;

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

	cout << "a - izq	x - aba		w - arr		d - der" << endl;
	cout << "q - arriba a la izq	e - arriba a la der" << endl;
	cout << "z - abajo a la izq	c - abajo a la der" << endl;

}


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

int main() 
{
	char MatTablero[6][6] = {{'0','1','2','3','4','5'},{'1','X','_','_','_','X'},{'2','_','_','_','_','_'},\
	{'3','_','_','_','_','_'},{'4','_','_','_','_','_'},{'5','O','_','_','_','O'}};

	mostrarTablero(MatTablero);
	leeDatos(MatTablero);

	return 0;
}
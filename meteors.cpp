#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <thread>
#include <cstdlib>

using namespace std::chrono;
using namespace std;

void randomMeteor(int number, char board[15][30]) {
	for (int n = 0; n < 3; n++) {
		number = rand() % 30;
		board[0][number] = '*';
	}
}

void copyRow (char board[15][30]) {
	for (int a = 14; a > 0; a--) {
		for (int b = 0; b < 30; b++) {
			board[a][b] = board[a-1][b];
		}
	}
}

void eraseRow (char board[15][30]) {
	for (int n = 0; n < 30; n++) {
		board[0][n] = ' ';
	}
}


int main() {

	srand(time(NULL));

	int row;
	int col;
	int number;
	char stop;

	char board[15][30] = { {" "} };


	do {

		system("clear");

		randomMeteor(number, board);
		for (int a = 0; a < 15; a++){
			for (int b = 0; b < 30; b++){
				cout << board[a][b] << " ";
			}
			cout << endl;
		}

		copyRow(board);

		eraseRow(board);

		this_thread::sleep_for(milliseconds(100));

	} while (stop != 'q');

}
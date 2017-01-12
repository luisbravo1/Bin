#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

void randomMeteor(int number, char board[99][99]) {

	for (int n = 0; n < 3; n++) {
	number = rand() % 30;

	board[0][number] = '*';

	}

}

/*
void copyRow () {

	for()	
}
*/

int main() {

	srand(time(NULL));

	int row;
	int col;
	int number;
	int num1, num2, num3;
	char stop;

	char board[99][99] = { {" "} };

//	while (stop != 'q') {
//		system("clear");

		for (int a = 0; a < 15; a++){
			randomMeteor(number, board);

			for (int b = 0; b < 30; b++){
				cout << board[a][b] << " ";

			}
			cout << endl;
		}
			cout << endl;

		for (int n = 0; n < 3; n++) {

		board[row+1][number] = board[0][number];

		}	
//	}
	


}
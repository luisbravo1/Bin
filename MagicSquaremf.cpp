#include <iostream>

using namespace std;

int main(){

	int N;
	int col,row;

	cin >> N;
	col = N / 2;
	row = 0;
	int col2,row2;


	
	
	int square[20][20] = { { } };

	for (int i = 0; i < N*N; i++){

		square[row][col] = i + 1;

		if (square[row-1 < 0 ? N-1 : row-1][(col + 1) % N] != 0){
		col = col2;
		row++;
		} else {
		col = (col + 1) % N;
 
		row = (row-1 < 0 ? N-1 : row-1);	

		col2 = col;
		row2 = row;	
		}

		

		//Ingore this hsit dumb

		for (int a = 0; a < N; a++){
			for (int b = 0; b < N; b++){
				cout << square[a][b] << " ";
			}
			cout << endl;
		}
		cout << endl;
		
	}



}
#include <iostream>

using namespace std;

int main(){

	int n = 0;
	int array [10][10]; 
	

	cout << "How many cells and columns" << endl;
	cin >> n;

	int y = n / 2, x = 0;

	for (int reng=0; reng < n; reng++) {
		for (int col=0; col < n; col++)
		{
			cout << array[reng][col] << "\t";
		}
		cout << endl;
	}	

	int num = 1;
	int y2 = 0;
	int x2 = 0;

	for (int i=0; i < n * n; i++){

		if (array[x-1][y+1] != 0){
		    y = y2;
			x = x2;
			x++;
			array[x][y] = num;

		} else {
			y++;
			x--;
			array[x][y] = num;
			
		    y2 = y;
		    x2 = x;
		}
			
			
		x = (x + 1) % n;
		y = (y-1 < 0 ? n-1 : y-1);

		
			num++;
	for (int reng=0; reng < n; reng++) {
		for (int col=0; col < n; col++)
		{
			cout << array[reng][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;

	}	
}
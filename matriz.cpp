#include <iostream>
using namespace std;

int main() 
{
	int iMatNum[2][3];

	for (int reng=0; reng < 2; reng++) {
		for (int col=0; col < 3; col++)
		{
			cout << "Ingresa dato (" << reng << "," << col << ")";
			cin >> iMatNum[reng][col];
		}
	}

	for (int reng=0; reng < 2; reng++) {
		for (int col=0; col < 3; col++)
		{
			cout << iMatNum[reng][col];
		}
	}

	return 0;
}
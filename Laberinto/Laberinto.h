#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//#define MAX 40

class Laberinto {
	private:
		//int MAX;
		//char *laberinto;
		char laberinto[20][20];
		int size;
		int posInicial;

	public:
		Laberinto();
		//virtual ~Laberinto();
		void setLaberinto(istream&);

};

Laberinto::Laberinto() {
	//MAX = 10;
	//laberinto = new char[MAX];
}




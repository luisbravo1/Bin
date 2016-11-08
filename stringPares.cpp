#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string sPalabra, sPalPares = "";

	cout << "Teclea la palabra: ";
	getline(cin,sPalabra);

	for (int i=0; i < sPalabra.length(); i=i+2){
		sPalPares += sPalabra[i];
	}

	cout << sPalPares << endl;


	return 0;
}
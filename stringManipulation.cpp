#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string sPalabra, sPalReves = "";

	cout << "Teclea la palabra: ";
	getline(cin,sPalabra);

	for (int i=sPalabra.length()-1; i >= 0; i--){
		sPalReves += sPalabra[i];
	}

	cout << sPalReves << endl;

	if (sPalabra == sPalReves)
		cout << "Si es palindrome" << endl;
	else
		cout << "No es palindrome" << endl;


	return 0;
}
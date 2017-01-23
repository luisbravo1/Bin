#include <iostream>
#include <thread>

using namespace std::chrono;
using namespace std;

int main() {

	double iDistancia = 0;
	double iVelocidad;
	double iValor;
	double iSuma = 0; 

	cout << "Velocidad: ";
	cin >> iVelocidad;

	iDistancia = iVelocidad * 0.6385508568;
	iValor = iDistancia/10;
	iSuma = iValor;

	for(int i=0; i < 10; i++) {
		cout << "Posicion: " << iSuma << endl;
		iSuma = iSuma + iValor;
		this_thread::sleep_for(milliseconds(1000));
	}

	if ((iDistancia >= 2.9) && (iDistancia <= 3.1)) {
		cout << "Acertaste!" << endl;
	} else if (iDistancia < 2.9) {
		cout << "Fallaste: la pokebola cayo ANTES del pokemon" << endl;
	} else if (iDistancia > 3.1) {
		cout << "Fallaste: la pokebola cayo DESPUES del pokemon" << endl;
	}

	return 0;
}
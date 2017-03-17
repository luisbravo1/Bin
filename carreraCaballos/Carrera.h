#ifndef Carrera_h
#define Carrera_h
using namespace std;


class Carrera {

public:
	Carrera();
	void agregar(string);
	void avanzar();
	bool hayGanador();
	string quienGano();
	void terminar();

private:
	int numCaballos;
	string arrCaballos[numCaballos];
	int n;
};

#endif
#ifndef Caballo_h
#define Caballo_h
using namespace std;


class Caballo {

public:
	Caballo(string);
	void avanzar(); 
	string getNombre();
  	int getPosicion();

private:
  	string nombre;
  	int posicion;
};

#endif

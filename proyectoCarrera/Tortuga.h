#ifndef Tortuga_h
#define Tortuga_h
using namespace std;

class Tortuga {
	
public:
	Tortuga();
	void numRandom();
	void pasoRapido();
	void resbalon();
	void pasoLento();
	void limite();
	int getPosicion();


private:	
	int posicion;
	int i;
};

#endif
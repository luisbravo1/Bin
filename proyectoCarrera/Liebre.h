#ifndef Liebre_h
#define Liebre_h
using namespace std;

class Liebre {
	
public:
	Liebre();
	void numRandom();
	void dormir();
	void granSalto();
	void granResbalon();
	void pequeSalto();
	void pequeResbalon();
	void limite();
	int getPosicion();


private:	
	int posicion;
	int i;
};

#endif
#ifndef Cuenta_h
#define Cuenta_h
using namespace std;

class Cuenta {

public:
	Cuenta(); 
	void leerCuenta(istream&);
	void printCuenta();
	void operacionCuenta();

private:
	long numero;
	string nombre;
	string fecha;
	double saldo;
};

#endif
#ifndef Alberca_h
#define Alberca_h

class Alberca {
public:
	Alberca(); //Constructor default
	void setSize(int, int, int);
	int getSize();
	int getTime();
	int getWater();
private:
	int largo;
	int ancho;
	int prof;
	int tam;	
	int vel;
	int time;
	int agua;
};

#endif
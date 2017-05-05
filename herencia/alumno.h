class Alumno : public Persona {

private:
	int calificaciones[5];

public:
	Alumno : Persona() { }
	Alumno();
	~Alumno();
	int calculaPromedio();
};


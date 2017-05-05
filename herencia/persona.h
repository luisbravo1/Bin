class Persona {

private:
	string nombre;
	string direccion;
	string email;

public:
	Persona(string, string, string);
	virtual ~Persona();
	string getNombre();
	string getDireccion();
	string getEmail();
	void setNombre(string);
	void setDireccion(string);
	void setEmail(string);
	void print();

};

Persona::Persona(string nom, string dir, string mail) {
	nombre = nom;
	direccion = dir;
	email = mail;
}

string Persona::getNombre() {
	return nombre;
}

string Persona::getDireccion() {
	return direccion;
}

string Persona::getEmail() {
	return email;
}

void setNombre(string nom) {
	nombre = nom;
}

void setDireccion(string dir) {
	direccion = dir;
}

void setEmail(string mail) {
	email = mail;
}

void print() {
	cout << "Soy una persona" << endl;
}
#include <iostream>
//Maria Andrea Garcia
//Luis Gerardo Bravo

using namespace std;

class Pepperoni {
private:
   float precio;
public:
   Pepperoni(){
      precio = 5;
   }
   void print(){
       cout << "   Pepperoni"<< endl;
   }
   float getPrecio(){ return precio;}
};

class Extraqueso {
private:
   float precio;
public:
   Extraqueso(){
      precio = 10;
   }
   void print(){
       cout << "   Extraqueso"<< endl;
   }
   float getPrecio(){ return precio;}
};

class Pollo {
private:
   float precio;
public:
   Pollo(){
      precio = 15;
   }
   void print(){
       cout << "   Pollo"<< endl;
   }
   float getPrecio(){ return precio;}
};

class Jamon {
private:
   float precio;
public:
   Jamon(){
      precio = 5;
   }
   void print(){
       cout << "   Jamon"<< endl;
   }
   float getPrecio(){ return precio;}
};

class Pina {
private:
   float precio;
public:
   Pina(){
      precio = 5;
   }
void print(){
       cout << "   Piña"<< endl;
   }
   float getPrecio(){ return precio;}
};

class Pizza {
private:
    Pepperoni  *pepperoni;
    Extraqueso  *extraqueso;
    Pollo  *pollo;
    Jamon  *jamon;
    Pina  *pina;
public:
    Pizza(){
       pepperoni = nullptr;
       extraqueso = nullptr;
       pollo = nullptr;
       jamon = nullptr;
       pina = nullptr;
    }
    void print(){
       cout << "\n\n\nSu pizza contiene:" << endl;
       if (pepperoni != nullptr) pepperoni->print();
       if (extraqueso != nullptr) extraqueso->print();
       if (pollo != nullptr) pollo->print();
       if (jamon != nullptr) jamon->print();
       if (pina != nullptr) pina->print();
    }
    void agregaPepperoni(){
       if (pepperoni == nullptr) pepperoni = new Pepperoni();
    }
    void agregaExtraqueso(){
       if (extraqueso == nullptr) extraqueso = new Extraqueso();
    }
    void agregaPollo(){
       if (!pollo) pollo = new Pollo();
    }
    void agregaJamon(){
       if (!jamon) jamon = new Jamon();
    }
    void agregaPina(){
       if (!pina) pina = new Pina();
    }
    float getTotal(){
       float total=55;
       if (pepperoni != nullptr) total += pepperoni->getPrecio();
       if (extraqueso != nullptr) total += extraqueso->getPrecio();
       if (pollo != nullptr) total += pollo->getPrecio();
       if (jamon != nullptr) total += jamon->getPrecio();
       if (pina != nullptr) total += pina->getPrecio();
       return total;
    }
};

int main(){
   Pizza pizza;
   int opcion = 0;
   cout << "Bienvenido a PizzaExpress"<< endl;
   while(opcion != 6){
      cout << "Indique, los numeros de sus ingrediente, o 6 para terminar." << endl;
      cout << "1 -  Pepperoni" << endl;
      cout << "2 -  Extraqueso" << endl;
      cout << "3 -  Pollo" << endl;
      cout << "4 -  Jamon" << endl;
      cout << "5 -  Piña" << endl;
      cout << "6 -  Terminar pedido" << endl;
      cin >> opcion;
      if (opcion == 1) pizza.agregaPepperoni();
      if (opcion == 2) pizza.agregaExtraqueso();
      if (opcion == 3) pizza.agregaPollo();
      if (opcion == 4) pizza.agregaJamon();
      if (opcion == 5) pizza.agregaPina();
   }
   pizza.print();
   cout << "Su precio total es: "<< pizza.getTotal() << endl;
   cout << "Gracias por su compra!" << endl;
   return 0;
}
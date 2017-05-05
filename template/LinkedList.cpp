///Implementación de una lista lineal con comportamiento circular
#include <iostream>
#include <string>

using namespace std;

template <typename TElem, int MAX>
class LinkedList {
private:
   TElem dato[MAX];
   int primero; ///Primer elemento en la lista
   int ultimo;  ///Ultimo elemento en la lista
public:
   LinkedList(){
      primero = ultimo = 0;
   }

   bool estaVacia() {
      return (primero == ultimo);
   }

   void agrega(TElem elem);
   TElem extrae();
};

template <typename TElem, int MAX>
void LinkedList<TElem, MAX>::agrega(TElem elem) {
   dato[ultimo] = elem;
   ultimo = (ultimo + 1) % MAX;
}

template <typename TElem, int MAX>
TElem LinkedList<TElem, MAX>::extrae() {
   TElem temp = dato[primero];
   primero = (primero + 1) % MAX;
   return temp;
}

class Cliente {
private:
   string nombre;
public:
   Cliente() {}

   Cliente(string n) { nombre = n; }

   string getNombre() { return nombre; }
};


int main(){
   typedef LinkedList<Cliente, 20> ListaClientes;

   ListaClientes lista;

   Cliente c1("Pablo Marmol");
   Cliente c2("Pedro Picapiedra");

   lista.agrega(c1);
   lista.agrega(c2);

   c2 = lista.extrae();
   cout << c2.getNombre()<< endl;
   return 0;
}

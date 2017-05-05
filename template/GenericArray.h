#ifndef GENERIC_ARRAY
#define GENERIC_ARRAY

#include <iostream>
using namespace std;

template <typename T, int MAX>
class GenericArray {
public:
   GenericArray();
   void imprimir(); /// imprime los valores almacenados en el arreglo
   void insertar(T); /// inserta un elemento en la posición adecuada.
   void borrar(T);   /// si existe, borrar el elemento del arreglo.
   int buscar(T);    /// busca un elemento en el arreglo, regresa su posición o -1.

private:
   T arreglo[MAX];
   int n;
};

template <typename T, int MAX>
GenericArray<T,MAX>::GenericArray(){
   arreglo[0] = T(0); ///Inicializar elemento inicial a cero
   n=0;
}

template <typename T, int MAX>
void GenericArray<T,MAX>::insertar(T elem) {
   if(n==0){
      arreglo[n] = elem;
   } else {
      int i = n;
      while ((i>0) && (arreglo[i-1]>= elem)) {
         arreglo[i] = arreglo[i-1];
         i--;
      }
      arreglo[i] = elem;
   }
   n++;
}

template <typename T, int MAX>
void GenericArray<T,MAX>::imprimir() {
   for( int i=0; i<n; i++){
      cout << arreglo[i] << " ";
   }
   cout << endl;
}

template <typename T, int MAX>
void GenericArray<T,MAX>::borrar(T elem) {
   for(int i=0; i<n; i++){
      if (arreglo[i] == elem) {
         for(int y=i; i < n; i++) {
            arreglo[i] = arreglo[i+1];
            arreglo[n-1] = 0;
            n--;
         } 
      }
   }
}

template <typename T, int MAX>
int GenericArray<T,MAX>::buscar(T elem) {
   for(int i=0; i<n; i++) {
      if (arreglo[i] == elem) {
         cout << "La posicion del numero " << elem << " es: " << i+1 << endl;
         return i;
      }
   }
   cout << "No existe el numero: " << elem << endl;
   return -1;
}

#endif // GENERIC_ARRAY










#include "GenericArray.h"

int main(){
   GenericArray<int,50> arreglo1;
   arreglo1.insertar(15);
   arreglo1.insertar(7);
   arreglo1.insertar(10);
   arreglo1.insertar(5);
   arreglo1.insertar(9);
   arreglo1.borrar(10);
   arreglo1.buscar(16);
   arreglo1.buscar(15);

   arreglo1.imprimir();
   return 0;
}

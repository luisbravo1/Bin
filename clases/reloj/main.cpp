#include <iostream>
#include <iomanip>
using namespace std;
#include "Reloj.h"


int main() {
   Reloj miReloj;
   miReloj.setTime(4,30,00);
   miReloj.printTime();
   miReloj.incrementMinutes();
   miReloj.printTime();
   return 0;
}

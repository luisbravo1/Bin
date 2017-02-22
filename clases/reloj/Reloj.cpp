#include <iostream>
#include <iomanip>
using namespace std;
#include "Reloj.h"

Reloj::Reloj() { hr=0; min = 0; sec = 0; }

void Reloj::setTime(int h, int m, int s) {
   hr = h;
   min = m;
   sec = s;
}

void Reloj::printTime() const {
   cout << setfill ('0') << std::setw (2);
   cout << hr << ":" <<min<< ":" << sec; 
}

void Reloj::getTime(int& hr, int& min, int& sec) const {
   hr  = this->hr;
   min = this->min;
   sec = this->sec;
}


bool Reloj::equalTime(const Reloj& r) const {
   return (hr  == r.hr) &&
          (min == r.min) &&
          (sec == r.sec);
}

void Reloj::incrementHours(){
   hr = (hr + 1) % 24;
}

void Reloj::incrementMinutes(){
 if (min == 59)
    incrementHours();
    min = (min + 1) % 60;
}

void Reloj::incrementSeconds(){
 if (sec == 59)
    incrementMinutes();
    sec = (sec + 1) % 60;
}



#include "Turtle.h"

int main() {
   	Turtle turtle("solidGun.txt");
   	int instr=0;

   	turtle.clearArea() ; //Clear the drawing area
   	while (instr != 9)
   		instr = turtle.move();

   	turtle.printArea();
   	return 0;
}



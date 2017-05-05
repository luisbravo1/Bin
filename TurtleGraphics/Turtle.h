//Turtle commands:
//1 Pen up
//2 Pen down
//3 Turn right
//4 Turn left
//9 Finish
// dir : up=1, right=2, down = 3, left=4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define MAX 40

class Turtle {
private:
   int xPos; //Horizontal position
   int yPos; //Vertical position
   int pen;  //Is the pen up=1 or down=2
   int dir;  //Direction the turtle is facing
   int area[MAX][MAX];
   ifstream inFile;
public:

   Turtle(string fileName){ //Start at position (MAX-1,0)
      xPos = 0;
      yPos = MAX-1; //The bottom left position in the drawing area
      pen = 1; //Penup and
      dir = 1; //facing upwards
      inFile.open( fileName.c_str() );
   }

   void clearArea(){ //Put a zero in every element of the drawing area
      for(int row=0; row < 40; row++) {
         for(int col=0; col < 40; col++) {
            area[row][col] = 0;
         }
      }
   }

   void printArea(){ //Shows the contents of the drawing area
      for(int row=0; row < 40; row++) {
         for(int col=0; col < 40; col++) {
            if (area[row][col] == 0) {
               cout << " ";
            } else if (area[row][col] == 1) {
               cout << "#";
            }
         }
         cout << endl;
      }
   }

   int move(){ //Takes a line from the input file and executes the command in it
      string command;
      int steps;
      int instruccion=0;
      string comment;

	   inFile >> command;


      string instrucciones[] = {"", "PENUP", "PENDOWN", "RIGHT", "LEFT", "FORWARD", "", "", "", "END"};

      while (!command == instrucciones[instruccion])
         instruccion++;
 

      switch (instruccion) {
         case 1: //PenUp
            pen = 1;
            break;
         case 2: //PenDown
            pen = 2;
            break;
         case 3: // Turn right (up=1; right=2; down = 3; left=4)
            dir = dir % 4 + 1;
            break;
	     case 4: //Turn left (up=1; right=2; down = 3; left=4)
            dir = ( dir == 1 ?  4 : dir-1);
            break;
         case 9: //END
             inFile.close(); //Finished
            break;
         case 5: //Advance forward X steps
            inFile >> steps;
            switch(dir) { //Move and take care of the area limits
               case 1: //up
               	  for(int i =0; i<steps; i++ ) {
               	     yPos = ( yPos == 0 ?  (MAX-1) : yPos-1); //If at the top, appear in the bottom
               	     if (pen == 2)
						area[yPos][xPos] = 1;
				  }
			      break;

			   case 2: //right
               	  for(int i =0; i<steps; i++ ) {
               	     xPos = (++xPos) % MAX;  //If at the right most position, appear at the left
               	     if (pen == 2) // If pen in down
						area[yPos][xPos] = 1;
				  }
			      break;

			   case 3: //down
               	  for(int i =0; i<steps; i++ ) {
               	     yPos = (++yPos) % MAX; //If at the bottom position, appear at the top
               	     if (pen == 2)
						area[yPos][xPos] = 1;
				  }
			      break;

			   case 4: //left
               	  for(int i =0; i<steps; i++ ) {
               	     xPos = ( xPos == 0 ?  (MAX-1) : xPos-1); //If at the left most position, appear at the right
               	     if (pen == 2)
						area[yPos][xPos] = 1;
				  }
			      break;
			}
      }
     // inFile >> comment;	// Discard the comment
      return instruccion;
   }
};

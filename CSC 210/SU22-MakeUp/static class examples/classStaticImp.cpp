#include <iostream>
#include "classStatic.h"

using namespace std;

int myclass::counter = 100;

myclass::myclass(){

 individualCounter = counter;
 counter++;


}

void myclass::printCounter() {

   cout << "counter: " << counter << endl;
   cout << "individualCounter: " << individualCounter << endl;
}

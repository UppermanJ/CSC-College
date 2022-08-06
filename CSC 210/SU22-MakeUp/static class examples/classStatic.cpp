#include <iostream>
#include "classStatic.h"

using namespace std;

int main() {

  myclass manyMy[10];  /// <----- object creation

  for (int i=0; i<10; i++) {

    manyMy[i].printCounter();

  }

}

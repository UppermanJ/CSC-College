#include <iostream>
#include "student.h"

using namespace std;

int main(){
    student stdnt1;
    student stdnt2("Josiah", "Upperman", "1105 Norcova Ct.", "Chesapeake", "23320");
    student stdnt3("Isabella", "Flores", "1221 Clubpoint Rd.", "Chesapeak", "23322", 33.3, 9);

    stdnt1.set_A(9);
    stdnt2.set_A(9);

    stdnt1.set_E((9*1.30));
    stdnt2.set_E((9*3.33));

    stdnt1.calcGPA();
    stdnt2.calcGPA();
    stdnt3.calcGPA();

    stdnt1.display();
    stdnt2.display();
    stdnt3.display();
    system("pause");
}
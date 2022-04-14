#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    char myChar01, myChar02, myChar03;
    cout << "Enter three letters: ";
    cin.get(myChar01);
    cin.get(myChar02);
    cin.get(myChar03);
    cout << "The letter you entered is: " << myChar01 <<endl << endl;
    cout << "The letter you entered is: " << myChar02 <<endl << endl;
    cout << "The letter you entered is: " << myChar03 <<endl << endl;
    cout << endl << endl;

    return 0;

}

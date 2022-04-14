#include<iostream>

using namespace std;

void getTheNumber();
void cube();

float myNumber = 0;

int main()
{
    getTheNumber();
    cube();
    cout << endl << endl;
    return 0;

}

/**
Method Documentation
**/

void getTheNumber()
{
    cout << "This program calculates the cube of a number" << endl;
    cout << "Please enter a number: ";
    cin >> myNumber;
    // Test line -- cout << "The number entered was: " << myNumber << endl;
}

/**
Method Documentation
**/
void cube()
{
    cout << "The cube of the number " << myNumber << " is = " << myNumber*myNumber*myNumber;
}

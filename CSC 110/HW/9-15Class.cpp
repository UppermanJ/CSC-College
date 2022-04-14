#include<iostream>

using namespace std;

int main (int argc, char**)
{

   int number;


    cout << "Please enter a number between 1 and 1000, the system will output if the number is even or odd. ";
    cin >> number;

    if((number > 1000) || (number < 1))
    {
        cout << "ERROR: -- INVALID NUMBER " << endl;
    }

    else if(number % 2 != 0)
    {
        cout << "This number is odd. " << endl;
    }
    else
    {
        cout << "This number is even. " << endl;
    }
    return 0;
}

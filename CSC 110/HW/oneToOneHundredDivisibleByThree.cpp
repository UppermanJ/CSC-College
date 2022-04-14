//***
// file name: oneToOneHundrdDivisibleByThree.cpp
// author:    Josiah Upperman
// date:      4 Oct 2020
// version    1.0
// program description: This program prints
// all the numbers from 1 – 100 that are divisible by 3
//***
#include<iostream>

using namespace std;

// methods' prototypes
void printDivisibleByThree();

int number = 1;

int main(int argc, char** argv)
{

    printDivisibleByThree();

    return 0;
} //End of method main()

//***
// method name:  printDivisibleByThree
// author:       Josiah Upperman
// date:         4 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method checks if the integer
// is divisible by three, if it is then it is printed
// if it is not then it is not printed, at the end it is incremented by one.
//***
void printDivisibleByThree()
{
    do
    {
        if(number % 3 == 0)
        {
        cout << number << endl;
        }
        number++;
    }
    while(number <= 100);

} // end of method printDivisibleByThree

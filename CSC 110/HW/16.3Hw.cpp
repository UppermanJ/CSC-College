//***
// file name: 16.3Hw.cpp
// author:    Josiah Upperman
// date:      17 November 2020
// version    1.0
// program description: This program requests
// a positive integer from the user and then
// outputs it in binary.
//***
#include<iostream>

using namespace std;

// methods' prototypes
void runApplication();
void integerRequest(int& integer);
void binaryInterpretation(int& integer, int& ELEMENTS);

int main()
{
    runApplication();

    return 0;
}// end of method main

//***
// method name:  runApplication
// author:       Josiah Upperman
// date:         17 November 2020
// version:      1.0
// parameter(s): void
// method description: This method calls
// the methods required to run the application.
//***
void runApplication()
{
    int integer = 0;
    int ELEMENTS = 0;

    integerRequest(integer);
    binaryInterpretation(integer, ELEMENTS);

    cout << endl << endl;
}// end of method runApplication

//***
// method name:  integerRequest
// author:       Josiah Upperman
// date:         17 November 2020
// version:      1.0
// parameter(s): void
// method description: This method requests
// the user to enter a positive integer.
//***
void integerRequest(int& integer)
{

    while(integer >= 0)
    {
        cout << "Enter a positive integer and its binary interpretation will be outputted. " << endl;
        cin >> integer;
        if(integer < 0)
        {
            cout << "That integer value is negative, please try again. " << endl;
            system("pause");
            system("CLS");
            runApplication();
        }else
        {
            break;
        }
    }
}// end of method integerRequest

//***
// method name:  integerRequest
// author:       Josiah Upperman
// date:         17 November 2020
// version:      1.0
// parameter(s): void
// method description: This method takes
// the integer inputted by the user and interprets
// and outputs it in binary.
//***
void binaryInterpretation(int& integer, int& ELEMENTS)
{
    int temporaryInteger = integer;

    for(int elementDeterminingInteger = integer; elementDeterminingInteger > 0; elementDeterminingInteger = elementDeterminingInteger / 2)
    {
        ELEMENTS++;

    }
    int binaryArray[ELEMENTS];

    for(int index = 0; index <= (ELEMENTS - 1); index++)
    {

        binaryArray[index] = temporaryInteger % 2;
        temporaryInteger = temporaryInteger / 2;
    }
    system("CLS");
    cout << "The binary interpretation of " << integer << " is ";
    for(int index = (ELEMENTS - 1); index >= 0; index--)
    {
        cout << binaryArray[index];
    }
}// end of method binaryInterpretation

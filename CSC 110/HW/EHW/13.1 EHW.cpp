//***
// file name: 13.1 extra homework.cpp || decimal_to_hexadecimal.cpp
// author:    Josiah Upperman
// date:      17 November 2020
// version    1.0
// program description: This program requests
// a positive integer from the user and then
// outputs it in hexadecimal.
//***
#include<iostream>
#include<cmath>

using namespace std;

// methods' prototypes
void runApplication();
void integerRequest(int& integer);
void hex_Interpreter(int& integer, int& ELEMENTS);

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
    hex_Interpreter(integer, ELEMENTS);

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
        cout << "Enter a positive integer and its hexadecimal interpretation will be outputted. " << endl;
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
// method name:  hex_Interpreter
// author:       Josiah Upperman
// date:         11 December 2020
// version:      1.0
// parameter(s): void
// method description: This method takes
// the integer inputted by the user and interprets
// and outputs it in hexadecimal.
//***
void hex_Interpreter(int& integer, int& ELEMENTS)
{
    int temporaryInteger = integer;
    int tempVal = 0;
    for(int elementDeterminingInteger = integer; elementDeterminingInteger > 0; elementDeterminingInteger = elementDeterminingInteger / 16)
    {

        ELEMENTS++;
        cout << ELEMENTS << endl;
    }
    system("Pause");
    int binaryArray[ELEMENTS];

    for(int index = 0; index < ELEMENTS; index++)
    {
        binaryArray[index] = 0;
    }

    for(int index = (ELEMENTS - 1); index >= 0; index--)
    {
        tempVal = pow(16, index);
        binaryArray[index] = temporaryInteger / tempVal;

        cout << binaryArray[index] << endl;

        temporaryInteger %= tempVal;
    }
   system("CLS");
    cout << "The hexadecimal interpretation of " << integer << " is ";
    for(int index = (ELEMENTS - 1); index >= 0; index--)
    {
        if(binaryArray[index] >= 0 && binaryArray[index] <= 9)
        {
            cout << binaryArray[index];
        }else if (binaryArray[index] == 10)
        {
            cout << "A";
        }else if (binaryArray[index] == 11)
        {
            cout << "B";
        }else if (binaryArray[index] == 12)
        {
            cout << "C";
        }else if (binaryArray[index] == 13)
        {
            cout << "D";
        }else if (binaryArray[index] == 14)
        {
            cout << "E";
        }else if (binaryArray[index] == 15)
        {
            cout << "F";
        }
    }
}// end of method binaryInterpretation



//***
// Program Name: twoDimensionalArray
// Date:         26 Oct 2020
// Programmer:   JS UPPERMAN
// Description:  This program demonstrates the use of two-dimensional array.
//***
#include<iostream>
#include<string>

using namespace std;

// Methods prototype
void twoDimensionArray();
void runApp();

int main(int argc, char** argv)
{
  runApp();
  return 0;

} // End of function main()

//***
// Method Name:  twoDimensionArray()
// Parameter(s): none
// Return Type:  void
// Date:         26 Oct 2020
// Programmer:   JS UPPERMAN
// Description:  This method calls the void method that the
// application works on.
//***
void runApp()
{
    twoDimensionArray();
    cout << endl << endl;
} // End of method

//***
// Method Name:  twoDimensionArray()
// Parameter(s): none
// Return Type:  void
// Date:         26 Oct 2020
// Programmer:   JS UPPERMAN
// Description:  This method collects and  displays the names entered.
//***
void twoDimensionArray()
{
    int const ROWS = 4;
    int const COLUMNS = 4;
    string myArray[ROWS][COLUMNS];
    int index;

    for(int row = 0; row < ROWS; row++)
    {
        for(int column = 0; column < COLUMNS; column++)
        {
            if(row == 0)
            {
                index = column + 1;
            }else if(row == 1)
            {
                index = column + 5;
            }else if(row == 2)
            {
                index = column + 9;
            }else if(row == 3)
            {
                index = column + 13;
            }
            system("CLS");
            if(index == 1)
            {
            cout << "Enter the " << index << "st name: ";
            }else if(index == 2)
            {
            cout << "Enter the " << index << "nd name: ";
            }else if(index == 3)
            {
            cout << "Enter the " << index << "rd name: ";
            }else if(index > 3)
            {
            cout << "Enter the " << index << "th name: ";
            }
            cin >> myArray[row][column];
        }
    }
    system("CLS");
    cout << "NAMES ENTERED:" << endl << endl;
    for(int row = 0; row < ROWS; row++)
    {
        for(int column = 0; column < COLUMNS; column++)
        {
            cout << myArray[row][column] << endl << endl; // print each element of the array
        }
    }
} // End of method twoDimensionArray



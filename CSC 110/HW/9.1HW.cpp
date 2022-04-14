//***
// file name: 9.1HW.cpp
// author:    Josiah Upperman
// date:      13 Oct 2020
// version    1.0
// program description: This program continuously requests
// a positive number to be entered. When the number -1 is
// entered, the program should exit the repetition loop and
// compute and display how many numbers were entered and the
// average of the numbers entered.
//***
#include<iostream>

using namespace std;

// method prototype
void enterAPositive();

int posNumber;
int Total;
int numberOfNumbers;

int main(int argc, char** argv)
{

  enterAPositive();

  return 0;

} // End of method main()

//***
// method name:  enterAPositive
// author:       Josiah Upperman
// date:         13 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method requests
// a number, if positive, then it is outputted
// if not, then the total number of numbers is outputted, as is the avg.
//***
void enterAPositive()
{
    int Total = 0;
    int numberOfNumbers = 0;

    do
    {
      cout << endl;
      cout << "Enter a positive number: ";
      cin >> posNumber;

      if(posNumber >= 0)
      {
          Total += posNumber;
          numberOfNumbers++;
          cout << endl;
          cout << "The number you entered was: " << posNumber << endl;
          cout << endl;

          continue;
      }else if(posNumber < -1)
      {
          cout << endl;
          cout << "Please refrain from negative numbers. " << endl;

          continue;
      }

    }while(posNumber != -1);

    cout << endl;
    cout << "You entered " << numberOfNumbers << " numbers, the average of which is: " << Total / numberOfNumbers << endl;
}// end of method enterAPositive()

//***
// Program Name: oneDimensionalArray
// Date:         8 Nov 2018
// Programmer:   FH BERMUDEZ
// Description:  This program demonstrates the use of one dimensional array
//***
#include<iostream>
#include<string>

using namespace std;

// Methods prototype
void oneDimensionArray();

int main(int argc, char** argv)
{
  oneDimensionArray();
  cout << endl << endl;

  return 0;

} // End of function main()


//***
// Method Name:  oneDimensionArray()
// Parameter(s): none
// Return Type:  void
// Date:         22 Oct 2020
// Programmer:   JS Upperman
// Description:  This method shows all the values in an array and then
// shows all the values after two are changed.
//***
void oneDimensionArray()
{
  int const ELEMENTS = 12;
  int myArray[] = {7, 4, 6, 8, 12, 55, 66, 99, 30, 1, 8, 10};

  cout << "Before the values are updated: " << endl;
  for(int index = 0; index < ELEMENTS; index++)
  {
    cout << "index " << index << " = ";
    cout << myArray[index] << endl; // print each element of the array
  }

  cout << endl << endl;
  cout << "After the values are updated: " << endl;
  for(int index = 0; index < ELEMENTS; index++)
  {
      if(myArray[index] == 66)
      {
          myArray[index] = 33;
      }else if(myArray[index] == 99)
      {
          myArray[index] = 44;
      } // Updating the value
    cout << "index " << index << " = ";
    cout << myArray[index] << endl; // print each element of the array
  }

} // End of method oneDimensionArray

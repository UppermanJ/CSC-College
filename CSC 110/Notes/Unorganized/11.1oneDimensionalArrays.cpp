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
// Date:         20 Feb 2019
// Programmer:   FH BERMUDEZ
// Description:  This method show how to declare one dimension array
// and how to traverse the array. For loop are the most appropriate
// way to traverse array of dimension.
//***
void oneDimensionArray()
{
  int const ELEMENTS = 6;
  int myArray[] = {10, 20, 30, 40, 50, 60}; // Array declaration
  string myNames[] = {"Einstein", "Newton", "Bohr", "Feynman", "Curie", "Dirac" };

  cout << "Traversing the one dimension integer array:" << endl;
  for(int index = 0; index < ELEMENTS; index++)
  {
    cout << "index " << index << " = ";
    cout << myArray[index] << endl; // print each element of the array
  }

  cout << endl << endl;
  cout << "Traversing the one dimension string array:" << endl;

  for(int index = 0; index < ELEMENTS; index++)
  {
    cout << "index " << index << " = ";
    cout << myNames[index] << endl;  // print each element of the array
  }

  cout << endl << endl;
  cout << "Updating the values in the one dimension integer array:" << endl;
  for(int index = 0, number = 5; index < ELEMENTS; index++, number *= 5)
  {
    myArray[index] = number; // Updating the value
    cout << "index " << index << " = ";
    cout << myArray[index] << endl; // print each element of the array
  }

} // End of method oneDimensionArray

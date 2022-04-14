//***
// Program Name: twoDimensionalArray
// Date:         8 Nov 2018
// Programmer:   FH BERMUDEZ
// Description:  This program demonstrates the use of two-dimensional array
//***
#include<iostream>
#include<string>

using namespace std;

// Methods prototype
void twoDimensionArray();

int main(int argc, char** argv)
{
  twoDimensionArray();
  cout << endl << endl;

  return 0;

} // End of function main()


//***
// Method Name:  twoDimensionArray()
// Parameter(s): none
// Return Type:  void
// Date:         20 Feb 2019
// Programmer:   FH BERMUDEZ
// Description:  This method shows how to declare two-dimension array
// and how to traverse the array. For loop are the most appropriate
// way to traverse array of dimension.
//***
void twoDimensionArray()
{
  int const ROWS = 3;
  int const COLUMNS = 4;

  // Array declaration
  int myArray[ROWS][COLUMNS] = {
      {10, 20, 30, 40},
      {11, 22, 33, 44},
      {15, 25, 35, 45}
  };

  string myNames[ROWS][COLUMNS] = {
      {"Einstein", "Newton", "Bohr", "Feynman"},
      {"Curie", "Dirac", "Galilei", "Kepler"},
      {"Copernicus", "Hubble", "Brahe", "Eddington"}
  };


  cout << "Traversing the two-dimension integer array:" << endl;
  for(int row = 0; row < ROWS; row++)
  {
    for(int column = 0; column < COLUMNS; column++)
    {
       cout << "[row][column] = [" << row << ']' << '[' << column << ']' << " = ";
       cout << myArray[row][column] << endl; // print each element of the array
    }
  }

  cout << endl << endl;
  cout << "Traversing the two-dimension string array:" << endl;
  for(int row = 0; row < ROWS; row++)
  {
    for(int column = 0; column < COLUMNS; column++)
    {
       cout << "[row][column] = [" << row << ']' << '[' << column << ']' << " = ";
       cout << myNames[row][column] << endl; // print each element of the array
    }
  }
} // End of method twoDimensionArray

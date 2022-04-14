//**
// Program Name: cppTextFileReading
// Date:         18 Apr 2019
// Version:      1.0
// Programmer:   FH BERMUDEZ
// Description:  This program demonstrates how to read text files in C++.
//**
#include <iostream>
#include <fstream> // Library for file IO
#include <string>

using namespace std;

// Function Prototype
void readTextFile(string);

int main()
{
   readTextFile("data1.txt");
   cout << "============================================";
   readTextFile("data2.txt");
   cout << "============================================";
   readTextFile("");

   return 0;
} // End of method main

 

 
//***
// Method Name:  readTextFile
// Parameter(s): string textFile
// Return Type:  void
// Date:         3 Mar 2019
// Programmer:   FH BERMUDEZ
// Description:  This method reads the text file entered as parameter.
//***
void readTextFile(string textFile)
{
   string line;
   ifstream inputFile; // Declare an ifstream object to read file
   inputFile.open(textFile); // Initialize object to the text file

   if ( inputFile.is_open() ) // If the file is currently opened
   {
      while ( getline(inputFile, line) ) // Read one line at the time
      {
         cout << line << '\n'; // Display each line
      }

      inputFile.close(); // Close file
   }
   else // The file cannot be opened
   {
      cout << "Unable to open file";
   }

} // End of method readTextFile
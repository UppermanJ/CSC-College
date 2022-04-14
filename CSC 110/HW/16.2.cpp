//**
// Program Name: cppTextFileWriting
// Date:         18 Apr 2019
// Version:      1.0
// Programmer:   FH BERMUDEZ
// Description:  This program demonstrates how to write to text files in C++.
//**
#include <iostream>
#include <fstream> // Library for file IO
#include <string>

using namespace std;

// Function Prototype
void writeToTextFile(string);
void appendToTextFile(string);

int main()
{
   writeToTextFile("data4.txt");
   cout << "==================================";
   appendToTextFile("file.txt");

   return 0;
} // End of method main
 

 

//***
// Method Name:  writeToTextFile
// Parameter(s): string textFile
// Return Type:  void
// Date:         3 Mar 2019
// Programmer:   FH BERMUDEZ
// Description:  This method writes to text file entered as parameter.
// I will start writing the data at the beggining of the file overriding
// all the data in the file.
//***
void writeToTextFile(string textFile)
{
   string line;
   ofstream myFile; // Declare an ofstream object "myFile"

   myFile.open(textFile); // Open the textFile given as parameter
                          // for writing with default mode "out"
   if ( myFile.is_open() ) // If the file is currently opened
   {
      do{
         cout << "Enter a line to write to the text file: ";
         getline(cin, line);
         myFile << line << endl;
         cout << endl;
      }while(line.length() != 0);

      myFile.close(); // Close file
   }
   else // The file cannot be opened
   {
      cout << "Unable to open file";
   }

} // End of method writeToTextFile

 

 

//***
// Method Name:  appendToTextFile
// Parameter(s): string textFile
// Return Type:  void
// Date:         3 Mar 2019
// Programmer:   FH BERMUDEZ
// Description:  This method writes to the text file entered as parameter.
// I will append the data at the end of the file.
//***
void appendToTextFile(string textFile)
{
   string line;
   ofstream myFile; // Declare an ofstream object "myFile"
                    // for writing with mode app for append
   myFile.open(textFile, ios::app); // Open file for appending text

   if ( myFile.is_open() ) // If the file is currently opened
   {
      do{
         cout << "Enter a line to append to the text file: ";
         getline(cin, line);
         myFile << line << endl;
         cout << endl;
      }while(line.length() != 0);

      myFile.close(); // Close file
   }
   else // The file cannot be opened
   {
      cout << "Unable to open file";
   }

} // End of method appendToTextFile
// Programmer: Josiah Upperman

/***This lab will exercise your understanding of some of the 
concepts covered in Chapter 4:  interactive input and output, file input and output, char array and
  string file names, idiosyncrasies of input. 

Create a program that:

1.  Has a main()

2.  includes the proper header and namespace declarations
***/

#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>

using namespace std;

void storingIntegers(string);
void regardingInputFile4(string);


int main()
{
    
    storingIntegers("File.txt");
    regardingInputFile4("inputFile4.txt");
    return 0;
}

 /**
3.  Create a program using the following requirements.  
    If you code the program using the EXACT steps I've indicated, you will run into a couple of
    problems.  See if you can solve these problems.  We'll cover the solution in class.
    
    a.  Output a message requesting the user enter an integer value; input and store the value.
    
    b.  Output a message and the value the user entered.
***/

void storingIntegers(string textFile)
{
    string line;
    string lineOfText;
    string threeCString;
    string threeDString;
    int threeDInt;
    float threeDFloat;
    char threeDChar;
    ofstream myFile; // Declare an ofstream object "myFile"
    ifstream inputFile; // Declare an ifstream object to read file
   
    myFile.open(textFile); // Open the textFile given as parameter
  // for writing with default mode "out"
    if ( myFile.is_open() ) // If the file is currently opened
    {
       do{
          cout << "Enter an integer : ";
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

    inputFile.open(textFile); // Initialize object to the text file

    if ( inputFile.is_open() ) // If the file is currently opened
    {
        cout << "The numbers you have entered are: " << endl;
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

    /***
        c.  
            Output a message requesting the user enter a line of text.  This line of text (for
            the purpose of THIS experience) should contain spaces.  That is, enter a line of text 
            such as <without the quotes> "I am taking a programming class".  Input the line
            of text using the    getline   function.  Output the line the user entered.
          ------------------------------------------------------------------------------------  
        d.  
            Output a message requesting the user enter a string, an integer, a floating point number
            and a character as individual items.  The string should not contain spaces.
          --------------------------------------------------------------------------------  
        e.  
            Output a message and the values the user entered.
    ***/

    cout << "Enter a line of text: ";
    getline(cin, lineOfText);
    cout << endl;
    cout << lineOfText << endl << endl;
    cout << "Enter a string: ";
    cin >> threeCString;
    cin.ignore(' ', '\n');
    cout << "Enter an integer: ";
    cin >> threeDInt;
    cout << "Enter a decimal value: ";
    cin >> threeDFloat;
    cout << "Enter a  charater: ";
    cin >> threeDChar;

    system("CLS");
    cout << "The data entered is as follows: " << endl;
    cout << threeCString << endl;
    cout << threeDInt << endl;
    cout << threeDFloat << endl;
    cout << threeDChar << endl << endl;


}

void regardingInputFile4(string textFile)
{
    /***    
    f.  Download the attached file:  inputFile.txt.  Place it in the SAME directory as your
        program.  Open and look at the file.  Create 5 different variables, one for each
        line in the code.  Create a proper datatype for each.
        
    g.  Open the file using the filename as a string literal (hard coded), i.e., "inputFile4.txt",
        in the open statement.
        
    h.  Close the file.
***/
    ifstream inputFile4; // Declare an ifstream object to read file
    string line;
    string lines[5];
    string newFileName;
    int index = 0;
    inputFile4.open(textFile);
    if ( inputFile4.is_open() ) // If the file is currently opened
    {
        cout << "The 5 lines in inputFile4.txt are: " << endl;
        while ( getline(inputFile4, line) ) // Read one line at the time
        {
            cout << line << '\n'; // Display each line
        }

       inputFile4.close(); // Close file
    }
    else // The file cannot be opened
    {
       cout << "Unable to open file";
    }
    cin.ignore();
    cout << "Enter the file name: ";
    getline(cin, newFileName);
    string text = newFileName + ".txt";
    inputFile4.open(text.c_str());
    if(inputFile4.is_open())
    {

        for(int index = 0; index < 5; index++)
        {
            getline(cin, lines[index]);
        }

        
      //  inputFile4.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    cout << "The lines retrieved are: " << endl << endl;
    for(int index = 0; index < 5; index++)
    {
        cout << lines[index] << endl;
    }
/*** 
    i.  Output a message requesting the user enter the file name.  Input the file name and
        store in a STRING datatype.
        
        
    j.  Open the file using the STRING variable defined.
    
    k.  Read the data in inputFile4.txt, storing each line in proper data types created above.
        For this, you do NOT need to use looping. Read each line in a different input statement using
        the extraction operator >> .
        
    l.  Output a message and the values read from the file.
    
    m.  Close the file.
***/

}



/***    
    n.  Output a message requesting the user enter the file name.  Input the file name and
        store in a character string array, i.e., char fileName[30].
        
    o.  Open the file using file name stored in the array variable defined.
    
    p.  Read the data in inputFile4.txt, storing each line in proper data types created above.
        For this, you do NOT need to use looping. Read each line in a different input statement
        using the getline function.
        
    q.  Output a message and the values read from the file.
    
    r.  Close the file.
    
    s.  Open a DIFFERENT file for OUTPUT.  Hard code the file name in the open statement, i.e.,
        outputFile.txt.  If the open is successful, it will be created in the same directory
        as your program.
        
    t.  Output (write) to the output file the values read from the input file in step p.
    
    u.  Close the output file.
    
    


If you like to include the following line of code:  system("pause");
You MAY need to:  #include <cstdlib>

Complete as much as you can before you submit ensuring what you've completed compiles.  You do not have to correctly
solve the coding exercise, however, you MUST include code that ATTEMPTS to solve the problem to get credit.

The program may be named any name of your choice and must have a .cpp extention.  Do NOT include
spaces in program names; variables may be any name of your choice.

You DO NOT have to comment these programs, however, please include your NAME as a comment in ALL code files.

SUBMIT the code file only (*.cpp). 

The program MUST compile and run and to get credit. 

You MAY zip the files and submit the zipped files.

MUST be submitted before end of class unless otherwise stated.

Questions will be entertained; solution may be discussed in class. This is a collaborative effort to provide examples
and practice for your understanding.
***/
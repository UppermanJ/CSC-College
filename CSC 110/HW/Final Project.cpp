//**************************************************************************
// Program Name: Final_Project.cpp
// Date:         15 Dec 2020
// Version:      1.0
// Programmer:   JS UPPERMAN
// Description:  This program requests input from the user to be transcribed
// into an ICAO interpretation and is then appended to a .txt file.
//**************************************************************************
// Libraries
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function Prototype
void appendToTextFile(string, string[], int);
void main_menu(string);
void descriptive_menu();
void operation(string, int);
void request_Input(string, int);
void translate(string, int);
void fill_array_with_ICAO(string, string[], int);

int main()
{
    string statement;
    main_menu(statement);

   return 0;
} // End of method main


//**************************************************************************
// Method Name:  main_menu
// Parameter(s): string statement
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method outputs a menu for the user to interface with.
//**************************************************************************
void main_menu(string statement)
{
    system("CLS");
    int is_It_Descriptive = 0;
    cout << " __________________________" << endl;
    cout << "|           MENU           |" << endl;
    cout << "|--------------------------|" << endl;
    cout << "|     0. Exit Program      |" << endl;
    cout << "|                          |" << endl;
    cout << "|    1. Enter Statement    |" << endl;
    cout << "|                          |" << endl;
    cout << "|  2. Translate & Append   |" << endl;
    cout << "|                          |" << endl;
    cout << "|  3. Program Description  |" << endl;
    cout << "|                          |" << endl;
    cout << "|__________________________|" << endl;
    if(statement.length() != 0)
    {
        cout << statement << endl;
    }
    cout << "Enter: ";
    operation(statement, is_It_Descriptive);
}// End of method main_menu

//**************************************************************************
// Method Name:  descriptive_menu
// Parameter(s): string statement
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method outputs a menu interface for the user to
// interact with along with a side panel that describes the program.
//**************************************************************************
void descriptive_menu(string statement)
{
    system("CLS");
    int is_It_Descriptive = 1;
    cout << " ______________________________________________" << endl;
    cout << "|           MENU           |                   |" << endl;
    cout << "|--------------------------| Following the     |" << endl;
    cout << "|     0. Exit Program      | input of a line   |" << endl;
    cout << "|                          | or statement,     |" << endl;
    cout << "|    1. Enter Statement    | this program      |" << endl;
    cout << "|                          | will output the   |" << endl;
    cout << "|  2. Translate & Append   | same statement,   |"<< endl;
    cout << "|                          | but with every    |" << endl;
    cout << "|  3. Program Description  | letter replaced   |" << endl;
    cout << "|                          | by an ICAO word   |" << endl;
    cout << "|__________________________|___________________|" << endl;
    if(statement.length() != 0)
    {
        cout << statement << endl;
    }
    cout << "Enter: ";
    operation(statement, is_It_Descriptive);
}// End of method descriptive_menu

//**************************************************************************
// Method Name:  operation
// Parameter(s): string statement, int is_It_Descriptive
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method takes the users input from the menu and enacts
// whichever option the user intended.
//**************************************************************************
void operation(string statement, int is_It_Descriptive)
{
    int operation;
    cin >> operation;
    system("CLS");
        switch(operation)
        {
            case 0: cout << "Have a good one! " << endl << endl;
                break;
            case 1: request_Input(statement, is_It_Descriptive);
            case 2: translate(statement, is_It_Descriptive);
            case 3: if(is_It_Descriptive == 0)
                    {
                        descriptive_menu(statement);
                    }else if(is_It_Descriptive == 1)
                    {
                        main_menu(statement);
                    }
        }

}// End of method operation

//**************************************************************************
// Method Name:  request_Input
// Parameter(s): string statement, int is_It_Descriptive
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method requests an input statement from the user.
//**************************************************************************
void request_Input(string statement, int is_It_Descriptive)
{
    cout << "Enter a message for later translation: ";
    do{
    getline(cin,statement);
    }while(statement.length() == 0);

    if(is_It_Descriptive == 1)
    {
        descriptive_menu(statement);
    }else if(is_It_Descriptive == 0)
    {
        main_menu(statement);
    }
}// End of method request_Input

//**************************************************************************
// Method Name:  translate
// Parameter(s): string statement, int is_It_Descriptive
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method takes the statement inputted by the user
// and it translates it to ICAO as well as calls a function to append
// the message to a .txt file.
//**************************************************************************
void translate(string statement,int is_It_Descriptive)
{
    string character;
    string ICAO_Characters[statement.length()];
    int statement_length = statement.length();

    for(int index = 0; index < statement.length(); index++)
    {
        character = statement.at(index);
        fill_array_with_ICAO(character, ICAO_Characters, index);

    }
    for(int index = 0; index < statement_length; index++)
    {
        cout << ICAO_Characters[index] << " ";
    }

    appendToTextFile("file.txt", ICAO_Characters, statement_length);

    cout << endl << endl;
    system("pause");
    system("CLS");
    if(is_It_Descriptive == 1)
    {
        descriptive_menu(statement);
    }else if(is_It_Descriptive == 0)
    {
        main_menu(statement);
    }
}// End of method translate

//**************************************************************************
// Method Name:  fill_array_with_ICAO
// Parameter(s): string character, string ICAO_Characters[], int index
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method tests each character as the translate methods first for
// loop progresses, testing each character for which ICAO word it goes with.
//**************************************************************************
void fill_array_with_ICAO(string character, string ICAO_Characters[], int index)
{
    if(character.compare("A") == 0|| character.compare("a")== 0)
    {
        ICAO_Characters[index] = "Alpha";
    }else    if(character.compare("B") == 0|| character.compare("b")== 0)
    {
        ICAO_Characters[index] = "Bravo";
    }else    if(character.compare("C")== 0|| character.compare("c")== 0)
    {
        ICAO_Characters[index] = "Charlie";
    }else    if(character.compare("D")== 0 || character.compare("d")== 0)
    {
        ICAO_Characters[index] = "Delta";
    }else    if(character.compare("E") == 0|| character.compare("e")== 0)
    {
        ICAO_Characters[index] = "Echo";
    }else    if(character.compare("F") == 0|| character.compare("f")== 0)
    {
        ICAO_Characters[index] = "Foxtrot";
    }else    if(character.compare("G") == 0|| character.compare("g")== 0)
    {
        ICAO_Characters[index] = "Golf";
    }else    if(character.compare("H") == 0|| character.compare("h")== 0)
    {
        ICAO_Characters[index] = "Hotel";
    }else    if(character.compare("I") == 0|| character.compare("i")== 0)
    {
        ICAO_Characters[index] = "India";
    }else    if(character.compare("J") == 0|| character.compare("j")== 0)
    {
        ICAO_Characters[index] = "Juliet";
    }else    if(character.compare("K") == 0|| character.compare("k")== 0)
    {
        ICAO_Characters[index] = "Kilo";
    }else    if(character.compare("L") == 0|| character.compare("l")== 0)
    {
        ICAO_Characters[index] = "Lima";
    }else    if(character.compare("M") == 0|| character.compare("m")== 0)
    {
        ICAO_Characters[index] = "Mike";
    }else    if(character.compare("N") == 0|| character.compare("n")== 0)
    {
        ICAO_Characters[index] = "November";
    }else    if(character.compare("O") == 0|| character.compare("o")== 0)
    {
        ICAO_Characters[index] = "Oscar";
    }else    if(character.compare("P") == 0|| character.compare("p")== 0)
    {
        ICAO_Characters[index] = "Papa";
    }else    if(character.compare("Q") == 0|| character.compare("q")== 0)
    {
        ICAO_Characters[index] = "Quebec";
    }else    if(character.compare("R") == 0|| character.compare("r")== 0)
    {
        ICAO_Characters[index] = "Romeo";
    }else    if(character.compare("S") == 0|| character.compare("s")== 0)
    {
        ICAO_Characters[index] = "Sierra";
    }else    if(character.compare("T") == 0|| character.compare("t")== 0)
    {
        ICAO_Characters[index] = "Tango";
    }else    if(character.compare("U") == 0|| character.compare("u")== 0)
    {
        ICAO_Characters[index] = "Uniform";
    }else    if(character.compare("V") == 0|| character.compare("v")== 0)
    {
        ICAO_Characters[index] = "Victor";
    }else    if(character.compare("W") == 0|| character.compare("w")== 0)
    {
        ICAO_Characters[index] = "Whiskey";
    }else    if(character.compare("X") == 0|| character.compare("x")== 0)
    {
        ICAO_Characters[index] = "X-ray";
    }else    if(character.compare("Y") == 0|| character.compare("y")== 0)
    {
        ICAO_Characters[index] = "Yankee";
    }else    if(character.compare("Z") == 0|| character.compare("z") == 0)
    {
        ICAO_Characters[index] = "Zulu";
    }else    if(character.compare(" ") == 0)
    {
        ICAO_Characters[index] = " ";
    }else
    {
        ICAO_Characters[index] = character;
    }
}// End of method fill_array_with_ICAO

//**************************************************************************
// Method Name:  appendToTextFile
// Parameter(s): string textFile, string ICAO_Characters[], int statement_length
// Return Type:  void
// Date:         15 Dec 2020
// Programmer:   JS UPPERMAN
// Description:  This method appends to the .txt file entered as a parameter.
//**************************************************************************
void appendToTextFile(string textFile, string ICAO_Characters[], int statement_length)
{
   ofstream myFile; // Declare an ofstream object "myFile"
                    // for writing with mode app for append
   myFile.open(textFile, ios::app); // Open file for appending text

   if ( myFile.is_open() ) // If the file is currently opened
   {
      for(int index = 0; index < statement_length; index++)
      {
         myFile << ICAO_Characters[index] << " ";

      }

      myFile.close(); // Close file
   }
   else // The file cannot be opened
   {
      cout << "Unable to open file";
   }

} // End of method appendToTextFile

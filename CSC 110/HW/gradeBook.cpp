//***
// Program Name: gradeBook
// Date:         21 Oct 2020
// Programmer:   JS Upperman
// Description:  This program demonstrates the use of one dimensional array
// in the form of a grade book that a teacher might use.
//***
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// Methods' prototypes
void runGradeBook();
void gradeBook();
void displayMenu();
void executeOperation();
void oneDimensionArray();
void getKidsAndGrades();
void showKidsAndGrades();

int main(int argc, char** argv)
{
  gradeBook();

  return 0;
} // End of function main()


//***
// Program Name: gradeBook
// Date:         21 Oct 2020
// Programmer:   JS Upperman
// Description:  This method calls forth the functions that allow the user
// to use this program.
//***
void gradeBook()
{
  displayMenu();
  executeOperation();
  cout << endl << endl;
}// End of function gradeBook()

//***
// method name:  displayMenu
// author:       JS Upperman
// date:         21 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method display a simple menu,
// and ask the user to enter the operation to perform and
// calls the executeOperation method.
//***
void displayMenu()
{
    system("CLS");
    cout << " _____________________________________________________" << endl;
    cout << "|            THIS APPLICATION PRINTS STUDENT'S        |" << endl;
    cout << "|                      NAMES AND GRADES               |" << endl;
    cout << "|                 ALONG WITH THE CLASS AVG.           |" << endl;
    cout << "|_____________________________________________________|" << endl;
    cout << "|                                                     |" << endl;
    cout << "|                        1. START                     |" << endl;
    cout << "|                                                     |" << endl;
    cout << "|                        0. EXIT                      |" << endl;
    cout << "|                                                     |" << endl;
    cout << "|_____________________________________________________|" << endl;
    cout << " Enter your choice: ";

} // End of method displayMenu()

//***
// method name:  executeOperation
// author:       JS Upperman
// date:         21 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method get the user choice
// and execute the selected operation
//***
void executeOperation()
{
    int operation = 0;

    cin >> operation;

    switch(operation)
    {
       case 0: cout << "Exiting Program" << endl;
               break;
       case 1: runGradeBook();
               break;
      default: cout << "Invalid Choice, Try Again" << endl <<endl;
               break;
    } // End of switch
    cout << endl << endl;

} // End of method executeOperation()


//***
// Method Name:  runGradeBook()
// Parameter(s): none
// Return Type:  void
// Date:         21 Oct 2020
// Programmer:   JS Upperman
// Description:  This method requests the # of students and then
// asks for each student's name and grade in the class, then it
// computes and prints this data along with the average of the class.
//***
void runGradeBook()
{
    int ELEMENTS;
    float totalCombined;
    float averageGrade;
    float combiner;

    cout << "# of students: ";
    cin >> ELEMENTS;
    float kidGrades[ELEMENTS];
    string kidNames[ELEMENTS];

    for(int index = 0; index < ELEMENTS; index++)
    {
        system("CLS");
        cout << "NAME: ";
        cin >> kidNames[index];
        cout << endl;

       cout << "GRADE: ";
        cin >> kidGrades[index];
        cout << endl;

    }

    system("CLS");;
    system("pause");
    system("CLS");

    cout << "   _____   ______              _____    ______   _____" << endl;
    cout << "  / ____| |  __  \\     /\\     |  __ \\  |  ____| /  ___|" << endl;
    cout << " | |  __  | |__) |    /  \\    | |  | | | |__   (  |__  " << endl;
    cout << " | | |_ | |  _   /   / /\\ \\   | |  | | |  __|   \\___  \\ " << endl;
    cout << " | |__| | | | \\ \\   / ____ \\  | |__| | | |____   ___|  )" << endl;
    cout << "  \\_____| |_|  \\_\\ /_/    \\_\\ |_____/  |______| |_____/ " << endl;
    cout << endl << endl;

    for(int index = 0; index < ELEMENTS; index++, totalCombined += combiner)
    {
        combiner = kidGrades[index];
        cout << left << setw(27) << kidNames[index] << right << setw(27) << kidGrades[index] << endl << endl;
    }

    averageGrade = totalCombined / ELEMENTS;
    cout << left << setw(27) << "AVG. " << right << setw(27) << averageGrade << endl << endl;
}// End of function runGradeBook()

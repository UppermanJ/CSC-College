//***
// file name: aSimpleCalculator.cpp
// author:    FH Bermudez
// date:      1 Jun 2020
// version    1.0
// program description: This program demonstrates implementation
// of a simple (+, -, *, and /) calculator using modular design
// and proper documentation.
//***
#include<iostream>

using namespace std;

// methods' prototypes
void runApplication();
void displayMenu();
void executeOperation();
void addNumbers();
void subtractNumbers();
void multiplyNumbers();
void divideNumbers();
void remainder();

int main()
{
    runApplication();

} // End of method main()



//***
// method name:  runApplication
// author:       FH Bermudez
// date:         1 Jun 2020
// version:      1.0
// parameter(s): void
// method description: This method is the hear of the application,
// it calls the methods requied to run the application.
//***
void runApplication()
{
    displayMenu();

    executeOperation();

} // End of method runApplication



//***
// method name:  displayMenu
// author:       FH Bermudez
// editor:       JS Upperman
// date:         1 Jun 2020
// last update:  23 Sept 2020
// version:      1.2
// parameter(s): void
// method description: This method display a simple menu,
// and ask the user to enter the operation to perform and
// calls the executeOperation method.
//***
void displayMenu() {
    cout << " ___________________________________" << endl;
    cout << "|         A SIMPLE CALCULATOR       |" << endl;
    cout << "|SELECT ONE OF THE FOLLOWING CHOICES|" << endl;
    cout << "|___________________________________|" << endl;
    cout << "|          1. + ADD                 |" << endl;
    cout << "|          2. - SUBTRACT            |" << endl;
    cout << "|          3. * MULTIPLY            |" << endl;
    cout << "|          4. / DIVIDE              |" << endl;
    cout << "|          5. % MODULUS/REMAINDER   |" << endl;
    cout << "|          0. Exit Program          |" << endl;
    cout << "|___________________________________|" << endl;
    cout << " Enter your choice: ";

} // End of method displayMenu




//***
// method name:  executeOperation
// author:       FH Bermudez
// date:         1 Jun 2020
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
       case 1: addNumbers();
               break;
       case 2: subtractNumbers();
               break;
       case 3: multiplyNumbers();
               break;
       case 4: divideNumbers();
               break;
       case 5: remainder();
               break;
      default: cout << "Invalid Choice, Try Again" << endl <<endl;
               break;
    } // End of switch
    cout << endl << endl;

} // End of method executeOperation



//***
// method name:  addNumbers
// author:       FH Bermudez
// date:         1 Jun 2020
// version:      1.0
// parameter(s): void
// method description: This method ask the user to enter
// two numbers to add.
//***
void addNumbers()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "This is the addition operation" << endl;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber;
    cout << endl << endl;
} // End of method addNumbers




//***
// method name:  subtractNumbers
// author:       FH Bermudez
// date:         1 Jun 2020
// version:      1.0
// parameter(s): void
// method description: This method ask the user to enter
// two numbers to subtract.
//***
void subtractNumbers()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "This is the subtraction operation" << endl;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber;
    cout << endl << endl;
} // End of method subtractNumbers




//***
// method name:  multiplyNumbers
// author:       FH Bermudez
// date:         1 Jun 2020
// version:      1.0
// parameter(s): void
// method description: This method ask the user to enter
// two numbers to multiply.
//***
void multiplyNumbers()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "This is the multiplication operation" << endl;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << firstNumber << " x " << secondNumber << " = " << firstNumber * secondNumber;
    cout << endl << endl;
} // End of method multiplyNumbers


//***
// method name:  divideNumbers
// author:       FH Bermudez
// date:         1 Jun 2020
// version:      1.0
// parameter(s): void
// method description: This method ask the user to enter
// two numbers to divide.
//***
void divideNumbers ()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "This is the integer division operation" << endl;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;
    cout << endl << endl;
} // End of method divideNumbers

//***
// method name: remainder
// author:       JS Upperman
// date:         23 Sept 2020
// version:      1.0
// parameter(s): void
// method description: This method ask the user to enter two numbers
// so the computer may find the remainder
//***
void remainder ()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "This is the integer remainder operation, it will show the remainder of a division statement" << endl;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber;
    cout << endl << endl;
} // End of method remainder

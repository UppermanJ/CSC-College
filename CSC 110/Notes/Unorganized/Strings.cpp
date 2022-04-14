#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    //This line declares a string type variable
    string myStringVariable;
    cout << "The value stored in myStringVariable after declaration is = " << myStringVariable << endl;
    //This line initializes the integer type variable
    myStringVariable = "This is my first string.";
    cout << "The value stored in myStringVariable after initialization is = " << myStringVariable << endl;
    cout << endl;

    //To combine or concatenate two strings use the '+' operator
    string mySecondString = "This is the second";
    cout << "The value stored in mySecondString is = " << mySecondString << endl;
    cout << "Concatenating myStringVariable + mySecondString = " << myStringVariable + mySecondString << endl;
    cout << endl;

    //The length() method returns with the number of characters in the string
    cout << "The number characters in mySecondString is: " << mySecondString.length() << endl;
    cout << endl;

    //The clear() method deletes all of the characters in the string
    mySecondString.clear();
    cout << "The number of characters in mySecondString after using the clear() method is: " << mySecondString.length() << endl;
    cout << endl;

    //The at(x) method returns with the character at location(x). 0 = the first character
    mySecondString = "Rosa Parks";
    cout << "The 5th letter in mySecondString is: " << mySecondString.at(5) << endl;
    cout << endl;

    //The substr(x, y) method returns the substring from location x to y, not to include the character at location y
     mySecondString = "Rosa Parks";
     cout << "The substring from 0 to 4 in mySecondString is : " << mySecondString.substr(0, 4) << endl;
     cout << endl;
     cout << endl << endl;

     return 0;
}

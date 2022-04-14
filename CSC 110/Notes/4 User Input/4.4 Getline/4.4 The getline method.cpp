#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    string myFullName;
    string myFirstname;
    string myLastname;

    cout << "Enter your full name: ";
    getline(cin, myFullName);
    cout << "The name you entered is: " << myFullName << endl << endl;

    cout << "Enter your first name: ";
    getline(cin, myFirstname);
    cout << "Enter your last name: ";
    getline (cin, myLastname);
    cout << "The name you entered is: " << myFirstname + " " + myLastname << endl << endl;

    cout << endl << endl;

    return 0;
}

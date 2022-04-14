#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    string myName;
    cout << "Enter your Name: ";
    cin >> myName;
    cout << "The name you entered is : " << myName << endl << endl;

    int myAge;
    cout << "Enter your age: ";
    cin >> myAge;
    cout << "The age you entered is: " << myAge << endl << endl;

    cout << "Enter your name and age: ";
    cin >> myName >> myAge;
    cout << "The name and age you entered are: " << myName << " " << myAge << endl << endl;

    cout << endl << endl;

    return 0;
}

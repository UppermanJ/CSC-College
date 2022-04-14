#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;

    char first, last;

    cout << "Please, enter first name followed by your surname: ";

    first = cin.get();
    cin.ignore(50,' ');
    last = cin.get();

    cout << "Your initials are " << first << last << '\n';

    return 0;
 }

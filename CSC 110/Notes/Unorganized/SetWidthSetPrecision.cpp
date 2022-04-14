#include<iostream>
#include<iomanip> //The iomanip library contains the setw() and setprecision() definitions

using namespace std;

int main()
{
    float yearly;
    yearly = 35000;
    cout << endl;
    cout << " Sets two fields of 10 characters with values printed right-justify " << endl;
    cout << "012345678901234567890123456789012345678901234567890123456789" << endl;
    cout << setw(10) << 123 << setw(10) << 12345 << endl;
    cout << endl;
    cout << " Sets two fields of 10 characters with values printed left-justify " << endl;
    cout << "012345678901234567890123456789012345678901234567890123456789" << endl;
    cout << left << setw(10) << "Peter" << setw(10) << "Benjamin" << endl;
    cout << endl;

    cout << endl;
    cout << " Prints the number pi with the various number of total digits. Values are rounded up." << endl;
    cout << setprecision(11) << 3.1415926535 << endl;
    cout << setprecision(10) << 3.1415926535 << endl;
    cout << setprecision(5) << 3.1415926535 << endl;
    cout << setprecision(3) << 3.1415926535 << endl;
    cout << endl;

    cout << endl;
    // To set the number of decimal places to be displayed
    // you will have to set an ios flag. The flag is set as follows
    cout << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    cout << '$' << yearly << endl;
    cout << endl;

    return 0;
}

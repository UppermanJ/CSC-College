#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << endl;
    cout << fixed << showpoint << setprecision(3);
    cout << setw(20);
    cout << left << "Sun" << right << 1.9891 << endl << endl;
    cout << setw(20);
    cout << left << "Jupiter" << right <<  1.8986 << endl << endl;
    cout << setw(20);
    cout << left << "Saturn" << right <<  5.6846 << endl << endl;
    cout << setw(19);
    cout << left << "Neptune" << right <<  10.243 << endl << endl;
    cout << setw(20);
    cout << left << "Uranus" << right <<  8.6810 << endl << endl;
    cout << setw(20);
    cout << left << "Earth" << right <<  5.9736 << endl << endl;
    cout << setw(20);
    cout << left << "Venus" << right << 4.8685 << endl << endl;
    cout << setw(20);
    cout << left << "Mars" << right << 6.4185 << endl << endl;
    cout << setw(20);
    cout << left << "Mercury" << right << 3.3022 << endl << endl;
    cout << setw(20);
    cout << left << "Moon" << right << 7.3490 << endl << endl;
    cout << setw(20);
    cout << left << "Pluto" << right << 1.2500 << endl << endl;
    cout << endl;


    return 0;
}

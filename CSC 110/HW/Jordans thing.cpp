#include<iostream>
#include<iomanip>


using namespace std;
void OutputValueAndName(string name, float value);

int main()
{
    cout << endl;
    cout << fixed << showpoint << setprecision(3);
    OutputValueAndName("Sun", 1.9891);
    OutputValueAndName("Jupiter", 1.8986);
    OutputValueAndName("Saturn", 5.6846);
    OutputValueAndName("Neptune", 10.243);
    OutputValueAndName("Uranus", 8.6810);
    OutputValueAndName("Earth", 5.9736);
    OutputValueAndName("Venus", 4.8685);
    OutputValueAndName("Mars", 6.4185);
    OutputValueAndName("Mercury", 3.3022);
    OutputValueAndName("Moon", 7.3490);
    OutputValueAndName("Pluto", 1.2500);
    cout << endl;


    return 0;
}

void OutputValueAndName(string name, float value) {
cout << setw(20);
    cout << left << name << right << value << endl << endl;
}

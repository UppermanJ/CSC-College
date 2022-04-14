#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int number = 1;

    cout << endl << endl;
    cout << "------ THE IF() STATEMENT ------" << endl << endl;
    cout << "number before the if() = " << number << endl;

    if(number <= 3)
    {
        number = 5;
        cout << "Printing if the condition is true" << endl;
        cout << "number inside the if() = " << number << endl;
    }

    cout << "Print this regardless of the if(condition) value. " << endl;
    cout << "number after the if() = " << number << endl;
    cout << endl << endl;

    return 0;

} // End of method main()

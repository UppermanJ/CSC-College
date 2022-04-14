#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    cout << "------ THE LOGICAL OPERATORS ------" << endl;
    cout << endl;
    cout << "The && (AND) operator truth table " << endl;
    cout << "  A " << "    &&    " << " B " << endl;
    cout << "true    " << (true && true) << "    true" << endl;
    cout << "true    " << (true && false) << "    false" << endl;
    cout << "false   " << (false && true) << "    true" << endl;
    cout << "false   " << (false && false) << "    false" << endl;

    cout << endl << endl;
    cout << "The || (OR) operator truth table " << endl;
    cout << "  A " << "    ||    " << " B " << endl;
    cout << "true    " << (true || true) << "    true" << endl;
    cout << "true    " << (true || false) << "    false" << endl;
    cout << "false   " << (false || true) << "    true" << endl;
    cout << "false   " << (false || false) << "    false" << endl;

    cout << endl << endl;
    cout << "The ! (NOT) operator truth table " << endl;
    cout << "  A " << "   NOT A " << endl;
    cout << "true     " << (!true) << endl;
    cout << "false    " << (!false) << endl;
    cout << endl << endl;

    return 0;
} // End of function main()

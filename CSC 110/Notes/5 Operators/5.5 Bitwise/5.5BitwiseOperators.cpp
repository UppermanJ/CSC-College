#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    cout << "------ THE BITWISE OPERATORS ------" << endl;
    cout << endl;
    cout << "The & (AND) bitwise operator rule" << endl;
    cout << "  A  " << "  &  " << "  B" << endl;
    cout << "  1    " << (1 & 1) << "    1" << endl;
    cout << "  1    " << (1 & 0) << "    0" << endl;
    cout << "  0    " << (0 & 1) << "    1" << endl;
    cout << "  0    " << (0 & 1) << "    0" << endl;

    cout << endl << endl;
    int A = 2, B = 4;
    cout << "A = 2 = 00000010" << endl;
    cout << "B = 4 = 00000100" << endl;
    cout << "A & B = " << (A & B) << endl;

    cout << endl << endl;
    cout << "The | (OR) bitwise operator rule" << endl;
    cout << "  A  " << "  |  " << "  B" << endl;
    cout << "  1    " << (1 | 1) << "    1" << endl;
    cout << "  1    " << (1 | 0) << "    0" << endl;
    cout << "  0    " << (0 | 1) << "    1" << endl;
    cout << "  0    " << (0 | 0) << "    0" << endl;

    cout << endl << endl;
    cout << "A = 2 = 00000010" << endl;
    cout << "B = 4 = 00000100" << endl;
    cout << "A | B = " << (A | B) << endl;

    cout << endl << endl;
    cout << "The ^ (XOR) bitwise operator rule" << endl;
    cout << "  A  " << "  ^  " << "  B" << endl;
    cout << "  1    " << (1 ^ 1) << "    1" << endl;
    cout << "  1    " << (1 ^ 0) << "    0" << endl;
    cout << "  0    " << (0 ^ 1) << "    1" << endl;
    cout << "  0    " << (0 ^ 0) << "    0" << endl;

    cout << endl << endl;
    cout << "A = 2 = 00000010" << endl;
    cout << "B = 4 = 00000100" << endl;
    cout << "A ^ B = " << (A ^ B) << endl;

    cout << endl << endl;
    cout << "The ~ (NOT) bitwise operator rule" << endl;
    cout << "Bit " << "   NOT Bit" << endl;
    cout << " 1       " << 0 << endl;
    cout << " 0       " << 1 << endl;

    cout << endl << endl;
    cout << "A = 2 = 00000010 " << endl;
    cout << "~A = " << ~A << endl;

    cout << endl << endl;
    cout << "The >> (RIGHT SHIFT) bitwise operator behavior" << endl;
    A = 16;
    int count = 1;
    cout << "A = 16 = 00010000" << "  RIGHT SHIFT A by " <<  count << endl;
    cout << (A >> count) << endl;

    cout << endl << endl;
    cout << "The << (LEFT SHIFT) bitwise operator behavior" << endl;
    B = 8;
    cout << "B = 8 = 00001000" << "  LEFT SHIFT B by " << count << endl;
    cout << (B << count) << endl;
    cout << endl << endl;

    return 0;
} // End of function main()

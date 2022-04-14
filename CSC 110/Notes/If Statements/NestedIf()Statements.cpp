#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int number = 3;

    cout << endl << endl;
    cout << "Code before the 'if' selection" << endl;

    if(number <= 10)
    {
        cout << "Printing the first 'if' the selection is true. Value of number is: " << number << endl;

        if(number >= 5)
        {
            cout << "Printing the nested 'if' selection if is true. Value of number is: " << number << endl;
        } // End of nested 'if()'

     } // End of first 'if()'

     cout << "Code after the 'if' selection, printing regardless of the if selection execution" << endl;
     cout << endl << endl;

     return 0;

} // End of function main()

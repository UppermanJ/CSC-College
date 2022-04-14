#include<iostream>

using namespace std;

int main (int argc, char**)
{

   int number;


    cout << "Enter a number from 0 - 9: ";
    cin >> number;

if((number <= 9) && (number >= 0))
{
    cout << number << endl;
}
else if((number > 9) || (number < 0))
{
cout << "The number you entered is not between 0 - 9, please try it again: " << endl;
}


    return 0;

}

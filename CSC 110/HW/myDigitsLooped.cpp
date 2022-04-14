#include<iostream>

using namespace std;

bool isZeroThroughNine(int number);

int number;

int main()
{
    do
    {
        cout << "Enter a number from 0 - 9: ";
        cin >> number;

        if(isZeroThroughNine(number))
        {
        cout << number << endl;
        }
        else
        {
        cout << "The number you entered is not between 0 - 9, please try it again. " << endl;
        }
    }
    while (isZeroThroughNine(number) != true);

return 0;

}

 bool isZeroThroughNine(int number)
{
    return number >= 0 && number <=9;
}


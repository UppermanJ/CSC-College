#include<iostream>

using namespace std;

void runFinder();
void findLargest();
void showLargest();

int number[] = {1, 23, 6, 8, 5, 11, 72, 88, 35, 66, 32, 87, 2};
int largest;

int main()
{
    runFinder();
}

void runFinder()
{
    findLargest();
    showLargest();
}

void findLargest()
{
    for(int index = 0; index < 13; index++)
    {
        cout << number [index] << endl;

        if(largest <= number[index])
        {
            largest = number[index];
        }
    }
}

void showLargest()
{
    cout << endl;
    cout << "The largest number included is " << largest << "." << endl << endl;
}

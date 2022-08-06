/***
 Josiah Upperman
    CS210
    InClassLab6
    02/05/2020
 ***/
#include <iostream>

using namespace std;

void increase(int &x, int &y);
void menu();
int increase(int x);



int main(){
    menu();
    return 0;
}



void increase(int &x, int &y)
{
    x = 3 * x;
    y += 1;
    cout << "This function has been called " << y << " time(s)" << endl;
}

int increase(int x)
{
    static int count = 0;
    count++;
    cout << "This function has been called " << count << " time(s)" << endl;
    cout << "The num " << x << " multiplied by 2 is ";
    return 2 * x;
}

void menu()
{
    int count = 0;
    for (int choose = 0; choose != -1; choose = choose)
    {
        system("pause");
        system("CLS");
        cout << "ODD Number: Multiply by 2" << endl;
        cout << "EVEN Number: Multiply by 3" << endl;
        cout << "-1. Quit" << endl;
        cin >> choose;
        int choice = 0;
        if (choose % 2 == 1)
        {
            choice = 1;
        }
        else if (choose % 2 == 0)
        {
            choice = 2;
        }

        int x = 0, prev = 0;
        switch (choice)
        {
        case 1:
            cout << "Enter a number: ";
            cin >> x;
            prev = x;
            x = increase(x);
            cout << x << endl;
            break;
        case 2:
            cout << "Enter a number: ";
            cin >> x;
            prev = x;
            increase(x, count);
            cout << "The number " << prev << " multiplied by 3 is " << x << endl;
            break;
        case -1:
            cout << "Bye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
}
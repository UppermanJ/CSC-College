#include <iostream>

using namespace std;

int increase(int x)
{

    return 2*x;
}

void increase(int &x, int &y)
{
    x = 3*x;
    y = y+1;
}

void menu(int &y)
{
    
    for(int choose = 0; choose == -1; choose =0){
        cout << "1. Increase by 2" << endl;
        cout << "2. Increase by 3" << endl;
        cout << "-1. Quit" << endl;

        cin >> choose; switch(choose){
            case 1:
                cout << "Enter a number: ";
                int x; cin >> x;
                cout << "The number multiplied by 2 is " << increase(x) << endl;
                break;
            case 2:
                cout << "Enter a number: ";
                int x; cin >> x;
                increase(x, y);
                cout << "The first number multiplied by 3 is " << x << endl;
                cout << "The second number incremented by 1 is " << y << endl;
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

int main(){

    return 0;
}
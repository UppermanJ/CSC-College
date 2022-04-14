#include<iostream>

using namespace std;

int main(){

    int num = 0, alpha = 10;
/**    cin >> num;
    switch (num)
    {
    default:
        alpha = alpha + 4;
        cout << alpha << endl;
    case 3:
        alpha++;
        cout << alpha << endl;
    case 4:
        alpha = alpha + 2;
        cout << alpha << endl;
    case 8:
        alpha = alpha + 3;
        cout << alpha << endl;
    }
    cout << alpha << endl;
**/

    int total = 0, loopcount = 0;

    for (int loopcount = 0; loopcount < 5; loopcount++)
    {

        total = total + loopcount;
    }

    cout << " Total is: " << total << " loopcount is: " << loopcount << endl;

    return 0;
}
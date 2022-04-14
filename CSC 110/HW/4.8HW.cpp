#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    int partNumber;
    int quantity;
    float unitPrice;
    float totalPrice;
    string title;

    cout << fixed << showpoint
         << setprecision(2);

    cout << "Enter the title for this execution." << endl;
    getline(cin, title);

    cout << "Enter the part number:" << endl;
    cin >> partNumber;
    cout << "Enter the quantity of this part odered:"
         << endl;
    cin >> quantity;

    cout << "Enter the unit price for this part:"
         << endl;
    cin >> unitPrice;

    totalPrice = quantity * unitPrice;

    cout << title << endl;
    cout << "Part " << partNumber
         << ", quantity " << quantity
         << ", at $ " << totalPrice << " each" <<endl;
    cout << "totals $ " << totalPrice << endl;

    return 0;
}

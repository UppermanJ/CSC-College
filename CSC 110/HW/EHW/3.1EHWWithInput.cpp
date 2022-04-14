#include<iostream>
#include<iomanip>

using namespace std;

float WIDTH;
float LENGTH;
float STORIES;
float NON_LIVING_SPACE;
float PRICE;


int main()
{

cout << "Property's width (ft.): ";
cin >> WIDTH;

cout << "Property's length (ft.): ";
cin >> LENGTH;

cout << "How many stories: ";
cin >> STORIES;

cout << "Area of non occupiable space (squ. ft.): ";
cin >> NON_LIVING_SPACE;

cout << "What is the selling price of the property: ";
cin >> PRICE;

    float grossFootage;
    float livingFootage;
    float costPerFoot;

    cout << fixed << showpoint;

    grossFootage = LENGTH * WIDTH * STORIES;
    livingFootage = grossFootage - NON_LIVING_SPACE;
    costPerFoot = PRICE / livingFootage;

    cout << "Cost per square foot is "
         << setw(6) << '$' << setprecision(2) << costPerFoot << endl;

    return 0;
}

#include<iostream>
#include<iomanip>

using namespace std;

const float WIDTH = 30.0;
const float LENGTH = 40.0;
const float STORIES = 2.5;
const float NON_LIVING_SPACE = 825.0;
const float PRICE = 150000.0;

int main()
{
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

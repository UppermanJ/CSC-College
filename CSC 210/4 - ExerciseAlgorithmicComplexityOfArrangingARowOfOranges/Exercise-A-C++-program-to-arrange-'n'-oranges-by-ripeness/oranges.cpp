#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class oranges
{
private:
    string orangeLocal = "Oranges.txt";
    float Oranges[10] = {};
    int loopCounter = 0;
    int executionCounter = 0;
    int iteration = 0;

public:
    oranges();

    void showOranges();
    void readOranges();
    void arrangeNOrangesByRipeness();
};

int main()
{
    oranges oranges;
    oranges.readOranges();
    oranges.showOranges();
    oranges.arrangeNOrangesByRipeness();
    oranges.showOranges();
    return 0;
}

oranges::oranges()
{
    string readOranges = "Oranges.txt";
    float Oranges[10] = {};
    int loopCounter = 0;
    int executionCounter = 0;
    int iteration = 0;
}

void oranges::readOranges()
{
    fstream fromOranges;

    fromOranges.open(orangeLocal, ios::in);
    if (fromOranges.is_open())
    {
        for (int i = 0; i < sizeof(Oranges) / sizeof(Oranges[0]); i++)
        {
            fromOranges >> Oranges[i];
        }
        fromOranges.close();
    }
    else
    {
        cout << "Unable to open file";
    }
}

void oranges::arrangeNOrangesByRipeness()
{
    int itFinal = sizeof(Oranges) / sizeof(Oranges[0]);

    for (int left = 0; left < itFinal; left++)
    {
        float leftOrange = Oranges[left];
        for (int right = left + 1; right < itFinal; right++)
        {
            loopCounter++;
            float rightOrange = Oranges[right];
            if (Oranges[left] > Oranges[right])
            {
                executionCounter++;
                Oranges[right] = leftOrange;
                Oranges[left] = rightOrange;
                leftOrange = Oranges[left];
                rightOrange = Oranges[right];
            }
        }
    }
}

void oranges::showOranges()
{
    if (iteration >= 1)
    {
        cout << "Oranges ripenesses in order from low to high (executions: " << executionCounter << " loops: " << loopCounter << "): ";
    }
    else
    {
        cout << "Orange ripeness data: ";
    }

    for (int index = 0; index < sizeof(Oranges); index++)
    {
        cout << Oranges[index] << "%, ";
    }
    iteration++;
}
#include<iostream>
#include<string>

using namespace std;

void runApplication();
void initializeArray(int& elements);
void reverseArray(int& elements);

int array[] = {1,23,6,8,5,11,72,35,66,32,88,2};

int main()
{
    runApplication();
    return 0;
}

void runApplication()
{
    void initializeArray(int& elements);
    void reverseArray(int& elements);
}

void initializeArray(int& elements)
{
    int total = 0;
    int index = 0;
    int count = 0;

    do
    {
        index = count;
        total += array[index];
        elements++;
        count++;
    } while (total > array[index] || total == array[0]);

    cout << "The elements in the array are";
    for(int index = 0; index < elements; index++)
    {
        cout << " " << array[index] << " ";
    }
    cout << " before reversal, " << endl << endl;
}

void reverseArray(int& elements)
{
    int placeHolderArray[elements];
    int indexTwo = elements - 1;

    for(int index = 0; index < elements; index++)
    {
        placeHolderArray[index] = array[index];
    }

    for(int index = 0; index < elements; index++)
    {
        array[index] = placeHolderArray[indexTwo];
        indexTwo--;
    }

    cout << "The elements in the array are";
    for(int index = 0; index < elements; index++)
    {
        cout << " " << array[index] << " ";
    }
    cout << "following reversal. " << endl << endl;
}

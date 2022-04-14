#include <iostream>
#include <string>

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
    int elements = sizeof(array)/sizeof(array[0]);
    
    initializeArray(elements);
    reverseArray(elements);
}

void initializeArray(int& elements)
{
    cout << "The elements in the array are";
    for(int index = 0; index < elements; index++)
    {
        cout << " " << array[index] << " ";
    }
    cout << " before reversal, " << endl;
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

    cout << "and";
    for(int index = 0; index < elements; index++)
    {
        cout << " " << array[index] << " ";
    }
    cout << "following reversal. " << endl << endl;
}
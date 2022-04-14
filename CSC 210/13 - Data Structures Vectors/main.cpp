#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    vector<int> myIntVector{23, 12, 34};

    cout << myIntVector[3] << endl;

    myIntVector.push_back(51);

    cout << myIntVector[3] << endl;

    myIntVector.push_back(98);

    for (int i = 0; i < myIntVector.size(); i++){
        cout << myIntVector[i] << " ";
    }
    cout << endl;
    
    myIntVector.pop_back();

    for (int i = 0; i < myIntVector.size(); i++)
    {
        cout << myIntVector[i] << " ";
    }

    myIntVector.at(2) = 153;

    for (int i = 0; i < myIntVector.size(); i++)
    {
        cout << myIntVector[i] << " ";
    }

    myIntVector[1] = 71;

    for (int i = 0; i < myIntVector.size(); i++)
    {
        cout << myIntVector[i] << " ";
    }

    vector<Node> myNodeVector;

    Node nodeA;
    myNodeVector.push_back(nodeA);
    myNodeVector[0].data = 23;

    cout << myNodeVector[0].data << endl;

    cout << endl;
    return 0;
}
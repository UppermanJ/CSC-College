#include <iostream>

using namespace std;

struct Node{
    int data; Node* next; 
};

int main(){
    int userInp = 100; Node* head = NULL; Node* nodePtr = NULL;

    cout << "Please enter the data for the new node (0 to quit): ";
    cin >> userInp;

    if(userInp > 0) {
        head = new Node;
        nodePtr = head;
        nodePtr->data=userInp;
        nodePtr->next=NULL;

        cout << "Please enter the data for the new node (0 to quit): ";
        cin >> userInp;
    

        while(userInp > 0){
            nodePtr->next = new Node;
            nodePtr=nodePtr->next;

            nodePtr->data=userInp;
            nodePtr->next=NULL;

            cout << "Please enter the data for the new node (0 to quit): ";
            cin >> userInp;
        }

        nodePtr = head;

        while (nodePtr != NULL)
        {
            cout << nodePtr->data << " ";
            nodePtr = nodePtr->next;
        }

        cout << endl;
    }else{
        cout << "No link list is created." << endl;
    }

    return 0;
    
}
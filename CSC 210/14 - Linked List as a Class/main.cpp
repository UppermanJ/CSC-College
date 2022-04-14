/******************************************************************************
SAI 22 MAR
CSC210 CW

Write a C++ program to implement Linked List as a class.

The class should use a Node class, which has two members:
data and a next pointer which points to the next node.

The class should have the following methods:

InsertNode:
Create a new Node, and link the new node to the last node of the linked list.

DeleteNode:
Traverse till the node to be deleted. Delete the node, and link the previous
node to the next node of the deleted node.

PrintList:
print the nodes of the linked list

*******************************************************************************/

#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class Linkedlist
{

    Node *head;
    int listSize;

public:
    // Default constructor
    Linkedlist();

    // Function to insert a node at the end of the linked list.
    void insertNode(int);

    // Function to print the linked list.
    void printList();

    // Function to delete the node at given position
    void deleteNode(int);

    // Function to return the size of the list (number of nodes in it)
    int getSize();
};

// Implementation part:

// Default constructor
Linkedlist::Linkedlist()
{
    head = NULL;
    listSize = 1;
}

// Function to delete the node at given position
void Linkedlist::deleteNode(int nodeOffset)
{

    Node *temp1 = head, *temp2 = NULL;
    int ListLen = listSize;

    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }

    // Check if the position to be deleted is less than the length of the linked list.
    if (ListLen < nodeOffset)
    {
        cout << "Index out of range." << endl;
        return;
    }

    // Declare temp1
    temp1 = head;

    // Deleting the head.
    if (nodeOffset == 1)
    {

        // Update head
        head = head->next;
        delete temp1;
        return;
    }

    // Traverse the list to find the node to be deleted.
    while (nodeOffset-- > 1)
    {

        // Update temp2
        temp2 = temp1;

        // Update temp1
        temp1 = temp1->next;
    }

    // Change the next pointer of the previous node.
    temp2->next = temp1->next;

    // Delete the node
    delete temp1;
    listSize--;
}

// Function to insert a new node.
void Linkedlist::insertNode(int data)
{
    // Create the new Node.
    Node *newNode = new Node(data);

    // Assign to head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse till end of list
    Node *temp = head;
    while (temp->next != NULL)
    {

        // Update temp
        temp = temp->next;
    }

    // Insert at the last.
    temp->next = newNode;
    listSize++;
}

// Function to print the nodes of the linked list.
void Linkedlist::printList()
{
    Node *temp = head;

    // Check for empty list.
    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }

    // Traverse the list.
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int Linkedlist::getSize()
{

    return listSize;
}

int main()
{

    Linkedlist list;

    // Inserting nodes
    list.insertNode(45);
    list.insertNode(73);
    list.insertNode(29);
    list.insertNode(82);

    cout << "Elements of the list are: ";

    // Print the list
    list.printList();
    cout << endl;

    cout << "Size of the list is: " << list.getSize() << endl;

    // Delete node at position 3.
    list.deleteNode(3);

    cout << "Elements of the list are: ";
    list.printList();
    cout << endl;

    cout << "Size of the list is: " << list.getSize() << endl;

    return 0;
}

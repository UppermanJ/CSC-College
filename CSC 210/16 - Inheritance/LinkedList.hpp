/*************************************************************
 *  JSU APR 7 2022
 *  CSC 210
 *  CW: Adding methods to extend the functionality of the Linked List Class
 *  
 *  ABSTRACTION, ENCAPSULATIONF, INHERITANCE, POLYMORPHISM, COMPOSITION 
 * 
 **************************************************************/
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include<iostream>
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

    // Function to delete the node at given position
    void deleteNodeWithInteger(int);

    // Function to return the size of the list (number of nodes in it)
    int getSize();

    void deleteNodeVal(int);

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

// Function to delete all nodes containing a given integer in their data field
void Linkedlist::deleteNodeWithInteger(int integerValueOfDeletedNodes)
{
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = listSize;
    int i = 0;

    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }

    temp1 = head;

    while (ListLen-- > 0)
    {
        // Update temp2
        temp2 = temp1;
        // Update temp1
        temp1 = temp1->next;

        // If the head is to be deleted
        if (integerValueOfDeletedNodes == head->data)
        {
            // Update head
            head = head->next;
            delete temp2;
            listSize--;
            // Re assign temp1 to head again
            temp1 = head;
        }
        else if (integerValueOfDeletedNodes == temp1->data)
        {
            // Change the next pointer of the previous node.
            temp2->next = temp1->next;
            delete temp1;
            listSize--;
        }
    }
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
    else
    {
        cout << "Elements of the list are: ";
    }

    // Traverse the list.
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int Linkedlist::getSize()
{

    return listSize;
}

// Function to delete nodes by value
void Linkedlist::deleteNodeWithInteger(int dataVal){
    Node *temp1 = head, * temp2 = NULL;

    // Delete node if it is the head
    while(temp1 == head){
        if((temp1->data == dataVal)){
            cout << dataVal << " has been found.\n";
            head = temp1->next;
            delete temp1;
            temp1 = head;
            listSize--;
        }
        else{
            break;
        }
    }

    // Finds if the nodes have the value
    while ((temp1->next != NULL))
    {
        temp2 = temp1;
        temp1 = temp1->next;

        // IF the data value has been found, deletes it
        if((temp1->data == dataVal)){
            temp2->next = temp1->next;
            delete temp1;
            temp1 = temp2;
            listSize--;
        }
        else{
            cout << "Value not found!\n";
        }    
    }
}
#endif
#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include "Mammals.hpp"

class Person
{
    private:
    public:
    string pName;
    long pSSN;
    string pDOB;
    string pAddr;
    long long pTnum;
    char pGndr;

    Person(){
        string pName;
        long pSSN;
        string pDOB;
        string pAddr;
        long long pTnum;
        char pGndr;
    };
    void identify()
    {
        cout << pName << " ";
        cout << pSSN << " ";
        cout << pDOB << " ";
        cout << pAddr << " ";
        cout << pTnum << " ";
        cout << pGndr << endl;
    };

};

// Derived Classes
class Dog: public Mammals{
    private:

    public:
        string dName;
        string dDOB;
        char dGndr;
        Person *owner;
        void makeSound(){
            cout << "woof " << endl;
        };
        void speak()
        {
            cout << "My name is " << dName << " and " << owner->pName << " is my owner " << endl;
        };
};

class Cat: public Mammals{
    public:
        string cName;
        string cDOB;
        char cGndr;

        void makeSound(){
            cout << "meow " << endl;
        };

};

void makeSound(Person p, Dog d)
{
    cout << "Hi, my (" << p.pGndr << ") name is " << p.pName << " and my dog, " << d.dName << "(" << d.dGndr << "), and we can be reached by mail at " << p.pAddr << " or by phone at " << p.pTnum << ".\n";
};

#endif
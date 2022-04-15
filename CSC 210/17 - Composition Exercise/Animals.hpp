#ifndef ANIMALS_HPP
#define ANIMALS_HPP
#include "Mammal.hpp"

// Derived Classes
class Dog: public Mammal{
    public:
        void makeSound(){
            cout << "woof " << endl;
        }
};

class Cat: public Mammal{
    public:
        void makeSound(){
            cout << "meow " << endl;
        }
};

#endif
#ifndef MAMMAL_HPP
#define MAMMAL_HPP
#include "Libraries.hpp";
using namespace std;

class Mammal
{
private:
    double weight;
    string habitat;
    int litter_count;

public:
    // pure virtual function
    virtual void makeSound() = 0;
};

#endif
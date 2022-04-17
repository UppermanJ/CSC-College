#ifndef MAMMALS_HPP
#define MAMMALS_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

class Mammals
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
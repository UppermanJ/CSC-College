#ifndef PET_HPP
#define PET_HPP
#include <iostream>
#include <string>


using namespace std;

enum PetType
{
    DOG,
    CAT,
    BIRD,
    FISH,
    OTHER
};
enum foodType
{
    Kibble,
    Flakes,
    Seafood,
    Seeds
};

class Pet
{
private:

    string name;
    PetType species; foodType food;
    bool hungry;


public:
    Pet();
    ~Pet();

    void setName(string);
    void setSpecies(PetType);

    string feed();
    void speak();

    void setSpecies(PetType);
};

Pet::Pet()
{
    if(species == DOG){

    }
    else if (species == CAT)
    {
    }
    else if (species == BIRD)
    {
    }
    else if (species == DOG)
    {
    }
    else
        this->species = species;
    this->name = name;
}


Pet::~Pet()
{
}

void Pet::setName(string name)
{
    this->name = name;
}

void Pet::setSpecies(PetType species)
{
    this->species = species;
}

void Pet::feed()
{
    if (this->hungry)
    {
        hungry = false;
        if(this->species == DOG)
        {
            cout << "Woof!" << endl;
        }
        else if (this->species == CAT)
        {
            cout << "Meow!" << endl;
        }
        else if (this->species == BIRD)
        {
            cout << "Tweet!" << endl;
        }
        else if (this->species == FISH)
        {
            cout << "Glub!" << endl;
        }
    }
    else
    {
        cout << this->name << " is not hungry." << endl;
    }

}

void Pet::speak()
{
    if (this->species == DOG)
    {
        cout << "Woof!" << endl;
    }
    else if (this->species == CAT)
    {
        cout << "Meow!" << endl;
    }
    else if (this->species == BIRD)
    {
        cout << "Tweet!" << endl;
    }
    else if (this->species == FISH)
    {
        cout << "Glub!" << endl;
    }
    else
    {
        cout << "I don't know what sound this animal makes!" << endl;
    }
}

#endif
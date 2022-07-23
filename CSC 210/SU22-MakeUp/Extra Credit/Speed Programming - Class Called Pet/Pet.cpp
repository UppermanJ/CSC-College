#include "Pet.hpp"

int main()
{
    PetType species;
    string Name;

    Pet pet1(species, Name);
    cout << pet1.feed() << endl;
    cout << pet1.speak() << endl;
    return 0;
}
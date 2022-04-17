#include "Libraries.hpp"
#include "Event.hpp"
#include "Animals.hpp"

using namespace std;

int main(){
    Event Christmas; Event FourthOfJuly;

    Christmas.setEventData(0, 1, 12, 25, 2010, "Christmas"); FourthOfJuly.setEventData(0, 1, 7, 4, 2010, "Fourth of July");

    Christmas.printEventData(); FourthOfJuly.printEventData();
    Christmas.printEventDataGlobalTime(); FourthOfJuly.printEventDataGlobalTime();

    // myDog.owner.pName = "Emily Elizabeth";
    // cout << myDog.owner.pName << endl;
    // myDog.owner.job.title;

    Person literallyMyself;

    literallyMyself.pName = "Josiah Upperman";
    literallyMyself.pSSN = 3451290768;
    literallyMyself.pDOB = "09/23/2002";
    literallyMyself.pAddr = "The Clown Apts, Joke Dr, Vaudeville";
    literallyMyself.pTnum = 7578331972;
    literallyMyself.pGndr = 'M';

    Dog myDog;

    myDog.owner = &literallyMyself;
    myDog.dName = "Lucy";
    myDog.dDOB = "06/01/2021";
    myDog.dGndr = 'F';

    literallyMyself.identify();
    makeSound(literallyMyself, myDog);
    myDog.speak();


    return 0;
}
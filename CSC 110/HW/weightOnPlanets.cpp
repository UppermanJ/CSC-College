//***
// file name: weightOnPlanets.cpp
// author:    Josiah Upperman
// date:      15 October 2020
// version    1.0
// program description: This program uses
// the user's inputted weight and converts it to
// its equivalent on whatever planet in our solar
// system that the user desires.
//***
#include<iostream>
#include<string>
#include<iomanip>


using namespace std;

// methods' prototypes
void runApplication();
void displayMenu();
void executeOperation();
void calculateWeight();
void getData();
void getWeight();
void getPlanet();
void isThisCorrect();
void useData();
void whichPlanetConstant();
void isNumber();

float weight;
float newWeight;
float constant;

string allCaps;
string planet;

int main()
{
    runApplication();

} // End of method main()



//***
// method name:  runApplication
// author:       Josiah Upperman
// date:         15 October 2020
// version:      1.0
// parameter(s): void
// method description: This method calls
// the methods required to run the application.
//***
void runApplication()
{

    displayMenu();

    executeOperation();

} // End of method runApplication



//***
// method name:  displayMenu
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method display a simple menu,
// and ask the user to enter the operation to perform and
// calls the executeOperation method.
//***
void displayMenu() {
    system("CLS");
    cout << " ___________________________________" << endl;
    cout << "|      THIS PROGRAM CALCULATES      |" << endl;
    cout << "| THE USERS WEIGHT ON OTHER PLANETS |" << endl;
    cout << "|___________________________________|" << endl;
    cout << "|                                   |" << endl;
    cout << "|   1. CALCULATE MY WEIGHT          |" << endl;
    cout << "|                                   |" << endl;
    cout << "|   0. EXIT PROGRAM                 |" << endl;
    cout << "|                                   |" << endl;
    cout << "|___________________________________|" << endl;
    cout << "|  PLANETS INCLUDE MERCURY - PLUTO  |" << endl;
    cout << "|       AND THE EARTH'S MOON        |" << endl;
    cout << "|___________________________________|" << endl;
    cout << " Enter your choice: ";

} // End of method displayMenu

//***
// method name:  executeOperation
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method get the user choice
// and execute the selected operation
//***
void executeOperation()
{
    int operation = 0;

    cin >> operation;

    switch(operation)
    {
       case 0: cout << "Exiting Program" << endl;
               break;
       case 1: calculateWeight();
               break;
      default: cout << "Invalid Choice, Try Again" << endl <<endl;
               break;
    } // End of switch
    cout << endl << endl;

} // End of method executeOperation

//***
// method name:  calculate
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method is the where the data
// retrieval and application is stored.
//***
void calculateWeight()
{
    system("CLS");
    getData();
    whichPlanetConstant();
    useData();
}// End of method calculate

//***
// method name:  getData
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method stores the methods that request
// the planet and weight.
//***
void getData()
{
    getWeight();
    getPlanet();
}// End of method getData

//***
// method name:  getWeight
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method requests the user's weight.
//***
void getWeight()
{
    system("CLS");
    cout << " __________________________________" << endl;
    cout << "|THE DATA YOU ENTERED IS AS FOLLOWS|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << left << setw(10) << "| WEIGHT: " << right << setw(26) << "EMPTY |" << endl;
    cout << left << setw(10) << "| PLANET: " << right << setw(26) << "EMPTY |" << endl;
    cout << "|__________________________________|" << endl << endl;
    cout << "ENTER YOUR WEIGHT ON EARTH (LBS.): ";
    cin >> weight;

}// End of method getWeight


//***
// method name:  getPlanet
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method obtains which planet the user
// would like their weight accounted to.
//***
void getPlanet()
{
    system("CLS");
    cout << " __________________________________" << endl;
    cout << "|THE DATA YOU ENTERED IS AS FOLLOWS|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << left << setw(10) << "| WEIGHT: " << right << setw(20) << weight << right << setw(5) << " LBS |" << endl;
    cout << left << setw(10) << "| PLANET: " << right << setw(26) << "EMPTY |" << endl;
    cout << "|__________________________________|" << endl << endl;
    cout << "ENTER PLANET OF CHOICE:";
    cin >> planet;
    cout << endl;
    isThisCorrect();
}// End of method getPlanet

//***
// method name:  isThisCorrect
// author:       JS Upperman
// date:         1 Jun 2020
// version:      1.0
// parameter(s): void
// method description: This method asks the user to evaluate their
// inputs in order to give them a chance to change their inputs if they
// mis-entered some info.
//***
void isThisCorrect()
{
    system("CLS");
    string correct = " ";
    cout << " __________________________________" << endl;
    cout << "|THE DATA YOU ENTERED IS AS FOLLOWS|" << endl;
    cout << "|----------------------------------|" << endl;
    cout << left << setw(10) << "| WEIGHT: " << right << setw(20) << weight << right << setw(5) << " LBS |" << endl;
    cout << left << setw(10) << "| PLANET: " << right << setw(24) << planet << right << setw(2) << "|" << endl;
    cout << "|__________________________________|" << endl << endl;
    cout << "Is this correct? yes/no: ";
    cin >> correct;
    if(correct.compare("yes") == 0 || correct.compare("Yes") == 0|| correct.compare("YES") == 0)
    {
        cout << "Great! Computing... " << endl << endl;
        system("pause");
    }else if(correct.compare("no") == 0 || correct.compare("No") == 0|| correct.compare("No") == 0)
    {
        cout << "Let's try again... " << endl;
        system("pause");
        calculateWeight();
    }else
    {
        cout << "Let's try that again... " << endl;
        system("pause");
        system("CLS");
        isThisCorrect();
    }
}// End of method isThisCorrect

//***
// method name:  whichPlanetConstant
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method tests the user's string input,
// checking to see if it is an acceptable planet, while also testing if it was inputted in all caps.
//***
void whichPlanetConstant()
{

    if(planet.compare("mercury") == 0 || planet.compare("Mercury") == 0)
    {
        allCaps = "no";
        constant = 0.4155;
    }else if(planet.compare("MERCURY") == 0)
    {
        allCaps = "yes";
        constant = 0.4155;
    }else if(planet.compare("venus") == 0 || planet.compare("Venus") == 0)
    {
        allCaps = "no";
        constant = 0.8975;
    }
    else if(planet.compare("VENUS") == 0)
    {
        allCaps = "yes";
        constant = 0.8975;
    }else if(planet.compare("earth") == 0 || planet.compare("Earth") == 0)
    {
        allCaps = "no";
        constant = 1.0000;
    }else if(planet.compare("EARTH") == 0)
    {
        allCaps = "yes";
        constant = 1.0000;
    }else if(planet.compare("moon") == 0 || planet.compare("Moon") == 0)
    {
        allCaps = "no";
        constant = 0.1660;
    }else if(planet.compare("MOON") == 0)
    {
        allCaps = "yes";
        constant = 0.1660;
    }else if(planet.compare("mars") == 0 || planet.compare("Mars") == 0)
    {
        allCaps = "no";
        constant = 0.3507;
    }else if(planet.compare("MARS") == 0)
    {
        allCaps = "yes";
        constant = 0.3507;
    }else if(planet.compare("jupiter") == 0 || planet.compare("Jupiter") == 0)
     {
         constant = 2.5374;
         allCaps = "no";
     }else if(planet.compare("JUPITER") == 0)
    {
        allCaps = "yes";
        constant = 2.5374;
    }else if(planet.compare("saturn") == 0 || planet.compare("Saturn") == 0)
    {
        allCaps = "no";
        constant = 1.0677;
    }else if(planet.compare("SATURN") == 0)
    {
        allCaps = "yes";
        constant = 1.0677;
    }else if(planet.compare("uranus") == 0 ||  planet.compare("Uranus") == 0)
    {
        allCaps = "no";
        constant = 0.8947;
    }else if(planet.compare("URANUS") == 0)
    {
        allCaps = "yes";
        constant = 0.8947;
    }else if(planet.compare("neptune") == 0 || planet.compare("Neptune") == 0)
    {
        allCaps = "no";
        constant = 1.1794;
    }else if(planet.compare("NEPTUNE") == 0)
    {
        allCaps = "yes";
        constant = 1.1794;
    }else if(planet.compare("pluto") == 0 || planet.compare("Pluto") == 0)
    {
        allCaps = "no";
        constant = 0.0899;
    }else if(planet.compare("PLUTO") == 0)
    {
        allCaps = "yes";
        constant = 0.0899;
    }else
    {
        cout << "The planetary options range from Mercury to Pluto, with the addition of Earth's moon, please try again. " << endl << endl;
        system("pause");
        system("CLS");
        runApplication();
    }
}// End of method whichPlanetConstant

//***
// method name:  useData
// author:       JS Upperman
// date:         17 Oct 2020
// version:      1.0
// parameter(s): void
// method description: This method is the final step in this
// application, in which the user is outputted their weight on inputted planet.
//***
void useData()
{
    system("CLS");
    newWeight = weight * constant;
    if(allCaps.compare("yes") == 0)
    {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    cout << "YOUR WEIGHT ON " << planet << " IS " << newWeight << "LBS." << endl << endl;
    system("pause");
    }else if(allCaps.compare("no") == 0)
    {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    cout << "Your weight on " << planet << " is " << newWeight << "lbs." << endl << endl;
    system("pause");
    }
    runApplication();
}// End of method useData

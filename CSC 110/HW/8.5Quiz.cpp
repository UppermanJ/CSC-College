//***************************************************************
// Name: Josiah Upperman
// BMI Program
// This program calulates the body mass index (BMI) given a weight
// in pounds and a height in inches and prints a health message
// based on the BMI. Input in English measures.
//***************************************************************

#include <iostream>

using namespace std;

int main()
{
    const int BMI_CONSTANT = 703;
    float weight;
    float height;
    float bodyMassIndex;
    bool dataAreOk;

    // Prompt for and input weight and height
    cout << "Enter you weight in pounds. " << endl;
    cin >> weight;
    cout << "Enter you height in inches. " << endl;
    cin >> height;

    // Test data
    if(weight < 0 || height < 0)
        dataAreOk = false;
    else
        dataAreOk = true;

    if(dataAreOk)
    {
        // Calculate the body mass index
        bodyMassIndex = weight * BMI_CONSTANT / (height * height);

        // Print message indicating status
        cout << "Your body mass index is " << bodyMassIndex
            << ". " << endl;
        cout << "Interpretation and instructions. " << endl;
        if(bodyMassIndex < 20)
            cout << "Underweight: Have a milk shake. " << endl;
        else if(bodyMassIndex <= 25)
            cout << "Normal: Have a glass of milk. " << endl;
        else if(bodyMassIndex <= 30)
            cout << "Overweight: Have a glass of iced tea. " << endl;
        else
            cout << "Obese: See your doctor. " << endl;
    }
    else
        cout << "Invalid data; weight and height must be positive. "
             << endl;
    return 0;
}

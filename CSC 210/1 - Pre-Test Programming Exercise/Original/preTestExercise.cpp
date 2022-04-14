#include"preTestExercise.h"

dataSet::dataSet()
{
    int tenNumbers[10] = {};
    int total = 0, minimum = 0, maximum = 0;
    int const length = 10;
    float minMaxAvg = 0.0;
    float allAvg = 0.0;
    float minMaxDev = 0.0;
    string setQuality = "Null";
}

//***
// Method Name:  display
// Parameter(s): <type> <name>
// Return Type:  void
// Date:         15 Jan 2022
// Programmer:   JS Upperman
// Description:  This method displays data required for the assignment.
//***
void dataSet::dataScreen() const
{
    string crossBar = "=============================================================================================\n";
    string barWalls = "|===========================================================================================|\n";
    string programDescription = "This software aims to utilize ten numbers in various capacities, generating the data below:";
    string messageMax = "Set Maximum: ";
    string messageMin = "Set Minimum: ";
    string messageAvg = "Set Average: ";
    string messageMmAvg = "Min/Max Average: ";
    string percentDeviationMessage = "Min/Max Avg '%' deviation from Set Avg: ";
    string messageSetQuality = "Set Quality: ";
    char choice;

    int displayWidth = crossBar.length();

    system("CLS");

    cout << crossBar;
    cout << setw((displayWidth - programDescription.length()) / 2) << left << "|" << right << programDescription << setw((displayWidth - programDescription.length()) / 2) << right << "|" << endl;
    cout << barWalls;
    cout << setw(displayWidth - 2) << left << "|" << right << "|" << endl;

    cout << setw((displayWidth - messageMax.length()) / 2) << left << "|"
        << right << messageMax << setw((displayWidth - messageMax.length() - 2) / 2) << left << maximum << right << "|" << endl;
    cout << setw((displayWidth - messageMin.length()) / 2) << left << "|"
        << right << messageMin << setw((displayWidth - messageMin.length() - 2) / 2) << left << minimum << right << "|" << endl;

    cout << setw((displayWidth - messageAvg.length()) / 2) << left << "|"
        << right << messageAvg << setw((displayWidth - messageAvg.length() - 2) / 2) << left << fixed << showpoint << setprecision(2) << allAvg << right << "|" << endl;

    cout << setw((displayWidth - messageMmAvg.length()) / 2) << left << "|"
        << right << messageMmAvg << setw((displayWidth - messageMmAvg.length() - 2) / 2) << left << fixed << showpoint << setprecision(2) << minMaxAvg << right << "|" << endl;

    cout << setw((displayWidth - percentDeviationMessage.length()) / 2) << left << "|"
        << right << percentDeviationMessage << setw((displayWidth - (percentDeviationMessage.length()) - 3) / 2) << left << fixed << showpoint << setprecision(2) << minMaxDev << right << "|" << endl;

    cout << setw((displayWidth - messageSetQuality.length()) / 2) << left << "|"
        << right << messageSetQuality << setw((displayWidth - messageSetQuality.length() - 2) / 2) << left << setQuality << right << "|" << endl;

    cout << setw(displayWidth - 2) << left << "|" << right << "|" << endl;
    cout << crossBar;
    cout << endl;

}

void dataSet::exitQuery(int &intMainWhileLoop) 
{
    char exitQuery = ' ';
    cout << "Stay in application? (y/n): ";
    cin >> (exitQuery);
    //cin.ignore(' ');
    switch (exitQuery)
    {
    default:
    case 'y':
    case 'Y':
        break;
    case 'N':
    case 'n':
        intMainWhileLoop = -1;
        break;
    }
}

//***
// Method Name:  textFileMethod
// Parameter(s): int tenNumbers[]
// Return Type:  void
// Date:         15 Jan 2022
// Programmer:   JS Upperman
// Description:  This method reads the text file entered as parameter.
//***
void dataSet::textFileMethod()
{
    fstream fromFile;
    fromFile.open("tenNumbers.txt", ios::in); // open for reading

    if (fromFile.is_open())
    {
        for (int i = 0; i < length; i++)
        {
            fromFile >> tenNumbers[i];
            //            inputFile.ignore(' '); don't think this makes sense
        }
        fromFile.close();
    }
    else
    {
        cout << "Unable to open file";
    }

}

//***
// Method Name:  userInputMethod
// Parameter(s): int numberArray[]
// Return Type:  void
// Date:         15 Jan 2022
// Programmer:   JS Upperman
// Description:  This method reads the text file entered as parameter.
//***
void dataSet::userInputMethod()
{
    for (int i = 1; i <= 10; i++)
    {
        string str = to_string(i);
        cout << "Enter number " +  str + ": ";
        cin >> tenNumbers[(i - 1)];
    }
}

void dataSet::dataSetFeedback()
{
    if (minMaxDev > 0)
    {
        setQuality = "Top-loaded";
    }
    else if (minMaxDev < 0)
    {
        setQuality = "Bottom-loaded";
    }
    else
    {
        setQuality = "Null";
    }
}

void dataSet::max()
{
    maximum = tenNumbers[0];
    for (int index = 1; index < length; index++)
    {
        if (maximum <= tenNumbers[index])
        {
            maximum = tenNumbers[index];
        }
    }
}

void dataSet::min()
{
    minimum = tenNumbers[0];
    for (int index = 1; index < length; index++)
    {
        if (minimum > tenNumbers[index])
        {
            minimum = tenNumbers[index];
        }
    }
}

void dataSet::avgAll()
{
    int total = 0;
    for (int index = 0; index < length; index++)
    {
        total += tenNumbers[index];
    }
    allAvg = float(total / length);
}

void dataSet::avgMinMax()
{
    minMaxAvg = float((minimum + maximum) / 2);
}

void dataSet::deviationMinMaxFromAll()
{
    minMaxDev = ((minMaxAvg - allAvg) / allAvg);
}



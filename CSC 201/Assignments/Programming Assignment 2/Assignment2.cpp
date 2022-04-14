//***********************************************************************
// Program:     BillingReport
// Programmer:  JS Upperman
// Date:        Feb 26, 2021
// Version:     1.0
// Input:       Read From File
// Output:      Output To Console, Output To File
// Description: This Program prompts the user to input the name
// of the file for which they would like to access, then the program
// begins checking for and End Of File status as it loops receiving 
// and outputting each customers billing report. 
//***********************************************************************
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;


void menu();
void lowIncomeAndTotalDue(float, float, float, int, string, string, string);
void calculations(float, float, float, int, int, string, string, string, string);
void calculationsWrite(ofstream&, float, float, float, int, int, string, string, string, string);

int main()
{
    menu();

    return 0;
}


void menu()
{
    string dataBaseFileName, firstInitial, lastName, agentName, lowIncome;
    int customerID, consultTime, agentID;
    float yearlyIncome, agentHourly, totalDue;
    ifstream readFile;
    ofstream newFile;
    cout << "File Name: ";
    getline(cin, dataBaseFileName);
    readFile.open(dataBaseFileName + ".txt");
    if (readFile.is_open())
    {
        cout << setw(60) << right << "Billing Report" << endl << endl;
        cout << setw(15) << left << "Customer Name";
        cout << setw(14) << left << "Customer ID";
        cout << setw(16) << left << "Yearly Income";
        cout << setw(18) << left << "Consulting Time";
        cout << setw(13) << left << "Amount Due";
        cout << setw(12) << left << "Low Income";
        cout << setw(14) << left << "Agent Name";
        cout << setw(9) << right << "Agent Rate";
        cout << endl
             << endl;
        while (readFile >> firstInitial >> lastName >> customerID >> yearlyIncome >> consultTime >> agentID)
        {
            lowIncomeAndTotalDue(yearlyIncome, totalDue, agentHourly, consultTime, lowIncome, firstInitial, lastName);
            switch (agentID)
            {
            case 1:
                agentHourly = 55.00;
                agentName = "Bortles";
                calculations(yearlyIncome, agentHourly, totalDue, customerID, consultTime, firstInitial, lastName, agentName, lowIncome);
                break;
            case 2:
                agentHourly = 55.00;
                agentName = "Cower";
                calculations(yearlyIncome, agentHourly, totalDue, customerID, consultTime, firstInitial, lastName, agentName, lowIncome);
                break;
            case 3:
                agentHourly = 72.00;
                agentName = "Watt";
                calculations(yearlyIncome, agentHourly, totalDue, customerID, consultTime, firstInitial, lastName, agentName, lowIncome);
                break;
            default:
                cout << "[ERROR] - INVALID AGENT ID LISTED IN THE BILLING FOR CUSTOMER: " + firstInitial + ". " + lastName << endl
                     << endl;
                break;
            }
        }
        readFile.close();
    }else{
        cout << "[ERROR] - INVALID FILE NAME - NO FILE FOUND" << endl;
    }
    
    newFile.open("newfile.txt");
    if (newFile.is_open()) // If the file is currently opened
    {
        while(readFile >> firstInitial >> lastName >> customerID >> yearlyIncome >> consultTime >> agentID)
        {
            newFile << setw(60) << right << "Billing Report" << endl
                 << endl;
            newFile << setw(15) << left << "Customer Name";
            newFile << setw(14) << left << "Customer ID";
            newFile << setw(16) << left << "Yearly Income";
            newFile << setw(18) << left << "Consulting Time";
            newFile << setw(13) << left << "Amount Due";
            newFile << setw(12) << left << "Low Income";
            newFile << setw(14) << left << "Agent Name";
            newFile << setw(9) << right << "Agent Rate";
            newFile << endl
                 << endl;
            lowIncomeAndTotalDue(yearlyIncome, totalDue, agentHourly, consultTime, lowIncome, firstInitial, lastName);
            switch (agentID)
            {
            case 1:
                agentHourly = 55.00;
                agentName = "Bortles";
                calculationsWrite(newFile, yearlyIncome, agentHourly, totalDue, customerID, consultTime, firstInitial, lastName, agentName, lowIncome);
                break;
            case 2:
                agentHourly = 55.00;
                agentName = "Cower";
                calculationsWrite(newFile, yearlyIncome, agentHourly, totalDue, customerID, consultTime, firstInitial, lastName, agentName, lowIncome);
                break;
            case 3:
                agentHourly = 72.00;
                agentName = "Watt";
                calculationsWrite(newFile, yearlyIncome, agentHourly, totalDue, customerID, consultTime, firstInitial, lastName, agentName, lowIncome);
                break;
            default:
                cout << "[ERROR] - INVALID AGENT ID LISTED IN THE BILLING FOR CUSTOMER: " + firstInitial + ". " + lastName << endl
                     << endl;
                break;
            }
        }

        newFile.close(); // Close file
    }
    else // The file cannot be opened
    {
        cout << "Unable to open file";
    }
}

void lowIncomeAndTotalDue(float yearlyIncome, float totalDue, float agentHourly, int consultTime, string lowIncome, string firstInitial, string lastName)
{
    if(yearlyIncome == 0)
    {
        cout << "[ERROR] - INSUFFICIENT FUNDS LISTED IN THE BILLING FOR CUSTOMER: " + firstInitial + ". " + lastName << endl
             << endl;
    }
    if(consultTime == 0)
    {
        cout << "[ERROR] - INVALID CONSULTATION PERIOD LISTED IN THE BILLING FOR CUSTOMER: " + firstInitial + ". " + lastName << endl
             << endl;
    }
    if (yearlyIncome <= 25000)
    {
        lowIncome = "Y";
        if (consultTime <= 30)
        {
            totalDue = 0.00;
        }else{
            totalDue = ((agentHourly * 0.35) * ((consultTime - 30) / 60));
        }
    }
    else
    {
        lowIncome = "N";
        if(consultTime <= 20)
        {
            totalDue = 0.00;
        }else{
            totalDue = ((agentHourly * 0.65) * ((consultTime - 30) / 60));
        }
    }
}

void calculations(float yearlyIncome, float agentHourly, float totalDue, int customerID, int consultTime, string firstInitial, string lastName, string agentName, string lowIncome)
{
    if(yearlyIncome <= 25000)
    {
        cout << setw(15) << left << firstInitial + ". " + lastName;
        cout << setw(14) << left << customerID;
        cout << setw(2) << left << "$ " << setw(11) << right << fixed << setprecision(2) << yearlyIncome;
        cout << setw(18) << right << consultTime;
        cout << setw(5) << right << "$ " << setw(8) << right << fixed << setprecision(2) << totalDue;
        cout << setw(13) << right << "Y";
        cout << setw(12) << right << agentName;
        cout << setw(6) << right << "$ " << right << fixed << setprecision(2) << agentHourly;
        cout << endl
             << endl;
    }else
    {
        cout << setw(15) << left << firstInitial + ". " + lastName;
        cout << setw(14) << left << customerID;
        cout << setw(2) << left << "$ " << setw(11) << right << fixed << setprecision(2) << yearlyIncome;
        cout << setw(18) << right << consultTime;
        cout << setw(5) << right << "$ " << setw(8) << right << fixed << setprecision(2) << totalDue;
        cout << setw(13) << right << "N";
        cout << setw(12) << right << agentName;
        cout << setw(6) << right << "$ " << right << fixed << setprecision(2) << agentHourly;
        cout << endl
             << endl;
    }
}

void calculationsWrite(ofstream& newFile, float yearlyIncome, float agentHourly, float totalDue, int customerID, int consultTime, string firstInitial, string lastName, string agentName, string lowIncome)
{
    if (yearlyIncome <= 25000)
    {
        newFile << setw(15) << left << firstInitial + ". " + lastName;
        newFile << setw(14) << left << customerID;
        newFile << setw(2) << left << "$ " << setw(11) << right << fixed << setprecision(2) << yearlyIncome;
        newFile << setw(18) << right << consultTime;
        newFile << setw(5) << right << "$ " << setw(8) << right << fixed << setprecision(2) << totalDue;
        newFile << setw(13) << right << "Y";
        newFile << setw(12) << right << agentName;
        newFile << setw(6) << right << "$ " << right << fixed << setprecision(2) << agentHourly;
        newFile << endl
             << endl;
    }
    else
    {
        newFile << setw(15) << left << firstInitial + ". " + lastName;
        newFile << setw(14) << left << customerID;
        newFile << setw(2) << left << "$ " << setw(11) << right << fixed << setprecision(2) << yearlyIncome;
        newFile << setw(18) << right << consultTime;
        newFile << setw(5) << right << "$ " << setw(8) << right << fixed << setprecision(2) << totalDue;
        newFile << setw(13) << right << "N";
        newFile << setw(12) << right << agentName;
        newFile << setw(6) << right << "$ " << right << fixed << setprecision(2) << agentHourly;
        newFile << endl
             << endl;
    }
}
// 14 14 16 18 13 12 14 4
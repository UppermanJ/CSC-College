//***********************************************************************
// Program:     BillingReport
// Programmer:  JS Upperman
// Date:        Feb 26, 2021
// Version:     1.0
// Input:       Read From File
// Output:      Output To Console
// Description: This Program prompts the user to input the name
// of the file for which they would like to access, then the program
// begins checking for and End Of File status as it loops receiving
// and outputting each customers billing report.
//***********************************************************************
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void calculations();

void menu();

int main()
{
	menu();

	return 0;
}

void menu()
{
	string dataBaseFileName, firstInitial, lastName, agentName;
	int customerID, consultTime, agentID;
	float yearlyIncome, agentHourly, totalDue;
	ifstream readFile;
	cout << "File Name: ";
	getline(cin, dataBaseFileName);
	readFile.open(dataBaseFileName + ".txt");
	if (readFile.is_open())
	{

		while (readFile >> firstInitial >> lastName >> customerID >> yearlyIncome >> consultTime >> agentID)
		{
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);

			cout << setprecision(2);
			cout << setw(10) << right << fixed << yearlyIncome << endl;

			switch (agentID)
			{
			case 1:
				agentHourly = 55.00;
				agentName = "Bortles";
				calculations();
				break;
			case 2:
				agentHourly = 55.00;
				agentName = "Cower";
				calculations();
				break;
			case 3:
				agentHourly = 72.00;
				agentName = "Watt";
				calculations();
				break;
			default:
				cout << "[ERROR] - INVALID AGENT ID LISTED IN THE BILLING FOR CUSTOMER: " + firstInitial + ". " + lastName << endl
					 << endl;
				break;
			}
		}
	}
	readFile.close();
}

void calculations()
{
}

// 14 14 16 18 13 12 14 4
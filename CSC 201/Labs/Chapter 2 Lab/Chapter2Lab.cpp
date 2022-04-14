//******************************************************
// Program Name: business_Card_Printer
// Date:         13 Jan 2021
// Version:      1.0
// Programmer:   JOSIAH SETH UPPERMAN
// Description:  This program takes user input in order
// to print out their business card in sheets of eight.
//******************************************************
#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

void menu(string, string, string, string);
void menuWithCard(string, string, string, string);
void operationAssessment1(string, string, string, string);
void gatherContactInfo(string, string, string, string);
void printSheets(string, string, string, string);


int main()
{
    string name;
    string number;
    string address;
    string email;
    menu(name, address, email, number);

    return 0;
}

void menu(string name, string address, string email, string number)
{
    cout << " __________________________________ " << endl;
    cout << "|           WELCOME TO             |" << endl;
    cout << "|     BUSINESS CARD PRINTER        |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "|    1. Enter Contacts & Info      |" << endl;
    cout << "|    2. Print Business Cards       |" << endl;
    cout << "|                                  |" << endl;
    cout << "|        0. Exit Program           |" << endl;
    cout << "|__________________________________| " << endl;
    cout << "Enter: ";
    operationAssessment1(name, address, email, number);
}

void menuWithCard(string name, string address, string email, string number)
{
    cout << " __________________________________" << endl;
    cout << "|           WELCOME TO             |" << endl;
    cout << "|     BUSINESS CARD PRINTER        |" << endl;
    cout << "|----------------------------------|" << endl;
    cout << "|    1. Enter Contacts & Info      |" << endl;
    cout << "|    2. Print Business Cards       |" << endl;
    cout << "|                                  |" << endl;
    cout << "|        0. Exit Program           |" << endl;
    cout << "|__________________________________|" << endl << endl;
    cout << " Sample: " << endl;
    cout << " __________________________________" << endl;
    cout << "| " << setw(33) << left << name << right << "|" << endl;
    cout << "|                                  |" << endl;
    cout << setw(2) << left << "| " << setw(33) << left << email << right << "|" << endl;
    cout << setw(2) << left << "| " << setw(33) << left << address << right << "|" << endl;
    cout << setw(2) << left << "| " << setw(33) << left << number << right << "|" << endl;
    cout << "|__________________________________|" << endl << endl;
    cout << "Enter: ";
    operationAssessment1(name, address, email, number);
}

void operationAssessment1(string name, string email, string address, string number)
{
    int operation;
    cin >> operation;
    system("CLS");
    switch(operation)
    {
        case 1: gatherContactInfo(name, address, email, number);
        case 2: printSheets(name, email, address, number);
        case 0: break;
    }
}

void printSheets(string name, string email, string address, string number)
{

    for(int index = 0; index < 4; index++)
    {
    cout << setw(35) << left << " __________________________________" << setw(50) << right << " __________________________________" << endl;
    cout << "| " << setw(33) << left << name << right << "|" << setw(16) << right << "| " << setw(33) << right << name << "|" << endl;
    cout << "|                                  |" << setw(16) << right << "| " << setw(34) << right << " |" << endl;
    cout << setw(2) << left << "| " << setw(33) << left << number << right << "|" << setw(16) << right << "| "  << setw(33) << right << number << "|" << endl;
    cout << setw(2) << left << "| " << setw(33) << left << email << right << "|" << setw(16) << right << "| "  << setw(33) << right << email << "|" << endl;
    cout << setw(2) << left << "| " << setw(33) << left << address << right << "|" << setw(16) << right << "| " << setw(33) << right << address << "|" << endl;
    cout << "|__________________________________|" << setw(50) << right << "|__________________________________|"<<  endl << endl;
    }
    cout << "1. Next Page " << endl;
    cout << "0. Main Menu " << endl;
    int operation;
    cin >> operation;
    switch(operation)
    {
        case 1: printSheets(name, email, address, number);
        case 0: system("CLS");
            menuWithCard(name, address, email, number);
    }

}

void gatherContactInfo(string name,string address,string email,string number)
{
    string firstName;
    string lastName;
    string addressNumber;
    string streetname;
    string streetType;
    string areaCode;
    string sevenDigits;
    system("CLS");
    cout << "First name? ";
    cin >> firstName;
    cout << endl;
    cout << "Last name? ";
    cin >> lastName;
    name = lastName + ", " + firstName;
    cout <<  "--------------------------------------------------------------------------------------------" << endl;
    cout << "Street Address #? (ex. [1105] Norcova Ct.) ";
    cin >> addressNumber;
    cout << endl;
    cout << "Street name? (ex. 1105 [Norcova] Ct.) ";
    cin >> streetname;
    cout << endl;
    cout << "Street type? (ex. 1105 Norcova [Ct.]) ";
    cin >> streetType;
    address = addressNumber + ' ' +streetname + ' ' +streetType;
    cout <<  "--------------------------------------------------------------------------------------------" << endl;
    cout << "Work Phone # " << endl << endl;
    cout << "Area code: ";
    cin >> areaCode;
    cout << endl;
    cout << "Seven digits (digits only): ";
    cin >> sevenDigits;
    number = '(' + areaCode + ')' + ' ' + sevenDigits;
    cout <<  "--------------------------------------------------------------------------------------------" << endl;
    cout << "Email Address: ";
    cin >> email;
    cout << endl;
    system("CLS");
    menuWithCard(name, address, email, number);
}



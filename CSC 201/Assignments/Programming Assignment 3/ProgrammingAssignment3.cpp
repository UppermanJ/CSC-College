
//*********************************************************************
// Program Name:  ProgrammingAssignment3.cpp
// Author:  JS Upperman
// This program reads the input file declared by the user,
// then computes the billing information of the customers listed,
// and subsequently outputs the data to the user specified destination, 
// as well as closes the files.
//*********************************************************************
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

// Prototypes
int openF(string&, string&, ifstream&, ofstream&);
float billing(float&, float&, int&, string&);
float agentInfo(int &, string &);
void readingAndProcessing(int&, ifstream&, ofstream&);
void preface(ofstream&);
void writing(string&, string&, string&, string&, int&, int&, float&, float&, float&, ofstream&);

int main(){

    int fileStateIndicator = 0;
    string fileWrite, fileRead, error = " ";
    ifstream readFile;
    ofstream writeFile;

    fileStateIndicator = openF(fileRead, fileWrite, readFile, writeFile);

    readingAndProcessing(fileStateIndicator, readFile, writeFile);


    return 0;
}

<summary>
// Function inputs (getline) the two names regarding file state, opens them, and tests their state.
// Precondition:  parameter contains two strings as well as input and output file objects
// Postcondition: input and output files are opened and the data regarding their file status
// is sent to main to be used in processing. 
</summary>
int openF(string& fileRead, string& fileWrite, ifstream& reading, ofstream& writing)
{

    for(int i = 0; i < 2; i++){

        if(i == 0)
        {
            cout << "Enter file name for reading: ";
            getline(cin, fileRead);
            system("CLS");
        }else if(i == 1){
            cout << "Enter file name for reading: " << fileRead << endl;
            cout << "Enter file name for writing: ";
            getline(cin, fileWrite);
            system("CLS");
        }

    }

    fileRead += ".txt";
    fileWrite += ".txt";

    reading.open(fileRead);
    writing.open(fileWrite);

    if((!writing) && (!reading)){
        return 1;

    }else if((!writing) && (reading.is_open() == 1)){
        return 2;

    }else if ((writing.is_open() == 1) && (!reading)){
        return 3;

    }else{
        return 0;

    }
}

// Function outputs the correct message regarding file state then proceeds
// to call functions regarding output (file and cout).
// Precondition:  parameter contains an integer, an input file object, and an output file object
// Postcondition: billing information is outputted where necessary and the files are closed
void readingAndProcessing(int& indicator, ifstream& read, ofstream& write)
{
    string lastName, firstInitial, agent, lowIncome;
    int customerID, consultTime, agentID = 0;
    float hourly, yearlyIncome, total = 0.00;

    if (indicator == 1)
    {
        cout << "ERROR: ALL FILES NAMED FAILED TO OPEN, EXITING PROGRAM...";
        system("pause");
        return;
    }
    else if (indicator == 2)
    {
        cout << "ERROR: FILE NAMED FOR WRITING FAILED TO OPEN, EXITING PROGRAM...";
        system("pause");
        return;
    }
    else if (indicator == 3)
    {
        cout << "ERROR: FILES NAMED FOR READING FAILED TO OPEN, EXITING PROGRAM...";
        system("pause");
        return;
    }
    else if (indicator == 0)
    {
        cout << "FILE SUCCESS!!";
        system("pause");
        system("CLS");
    }

    preface(write);

    while (read >> firstInitial >> lastName >> customerID >> yearlyIncome >> consultTime >> agentID){
        hourly = agentInfo(agentID, agent);
        total = billing(yearlyIncome, hourly, consultTime, lowIncome);
        writing(firstInitial, lastName, agent, lowIncome, customerID, consultTime, hourly, total, yearlyIncome, write);
    }

    read.close();
    write.close();
}

// Function outputs (cout and fstream) message contained as hard-code
// Precondition:  parameter contains an fstream element
// Postcondition: a preface of billing statement outputs to console and file
void preface(ofstream& writing){

    writing << setw(15) << left << "Customer Name";
    writing << setw(14) << left << "Customer ID";
    writing << setw(16) << left << "Yearly Income";
    writing << setw(18) << left << "Consulting Time";
    writing << setw(13) << left << "Amount Due";
    writing << setw(12) << left << "Low Income";
    writing << setw(14) << left << "Agent Name";
    writing << setw(9) << right << "Agent Rate" << endl << endl;

    cout << setw(15) << left << "Customer Name";
    cout << setw(14) << left << "Customer ID";
    cout << setw(16) << left << "Yearly Income";
    cout << setw(18) << left << "Consulting Time";
    cout << setw(13) << left << "Amount Due";
    cout << setw(12) << left << "Low Income";
    cout << setw(14) << left << "Agent Name";
    cout << setw(9) << right << "Agent Rate" << endl << endl;
}

// Function outputs (cout and fstream) messages depending on customer salary, consultation time, and the rest of their info
// Precondition:  parameter contains four strings, two integers, three floats, and one output fstream element
// Postcondition: contents of all variables included are properly formatted and outputted to both file and console
void writing(string& initial, string& lastName, string& agent, string& poorQue, int& ID, int& time, float& rate, float& price, float& salary, ofstream& write){
    if (salary == 0)
    {
        cout << "[ERROR] - INSUFFICIENT FUNDS LISTED IN THE BILLING FOR CUSTOMER: " + initial + ". " + lastName << endl
             << endl;
        write << "[ERROR] - INSUFFICIENT FUNDS LISTED IN THE BILLING FOR CUSTOMER: " + initial + ". " + lastName << endl
             << endl;
    }
    if (time == 0)
    {
        cout << "[ERROR] - INVALID CONSULTATION PERIOD LISTED IN THE BILLING FOR CUSTOMER: " + initial + ". " + lastName << endl
             << endl;
        write << "[ERROR] - INVALID CONSULTATION PERIOD LISTED IN THE BILLING FOR CUSTOMER: " + initial + ". " + lastName << endl
             << endl;
    }


        cout << setw(15) << left << initial + ". " + lastName;
        cout << setw(14) << left << ID;
        cout << setw(2) << left << "$ " << setw(11) << right << fixed << setprecision(2) << salary;
        cout << setw(18) << right << time;
        cout << setw(5) << right << "$ " << setw(8) << right << fixed << setprecision(2) << price;
        cout << setw(13) << right << poorQue;
        cout << setw(12) << right << agent;
        cout << setw(6) << right << "$ " << right << fixed << setprecision(2) << rate;
        cout << endl
             << endl;

        write << setw(15) << left << initial + ". " + lastName;
        write << setw(14) << left << ID;
        write << setw(2) << left << "$ " << setw(11) << right << fixed << setprecision(2) << salary;
        write << setw(18) << right << time;
        write << setw(5) << right << "$ " << setw(8) << right << fixed << setprecision(2) << price;
        write << setw(13) << right << poorQue;
        write << setw(12) << right << agent;
        write << setw(6) << right << "$ " << right << fixed << setprecision(2) << rate;
        write << endl
             << endl;
    
}

// Function alters the agent name via reference and returns the agent's rate
// Precondition:  parameter contains a string and an integer
// Postcondition: contents of string variable are altered depending on the
// agentnumber and the return value mirrors the agents hourly rate
float agentInfo(int& agentNumber, string& agent){

    if(agentNumber == 1){
        agent = "Bortles";
        return 55.00;
    }else if (agentNumber == 1){
        agent = "Cower";
        return 55.00;
    }else if (agentNumber == 1){
        agent = "Watt";
        return 72.00;
    }
}

// Function determines the price a customer pays
// Precondition:  parameter contains a string, two floats, and an integer
// Postcondition: contents of string variable are altered to indicate the
// customers income level and the function returns with the price value
float billing(float& income, float& rate, int& time, string& lowIncome){

    if (income <= 25000)
    {
        lowIncome = "Y";
        if (time <= 30)
        {
            return 0.00;
        }
        else
        {
            return ((rate * 0.35) * ((time - 30) / 60));
        }
    }
    else
    {
        lowIncome = "N";
        if (time <= 20)
        {
            return 0.00;
        }
        else
        {
            return ((rate * 0.65) * ((time - 30) / 60));
        }
    }
}



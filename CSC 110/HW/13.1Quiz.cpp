//*****************************************************************
// Josiah Seth Upperman
// Loan Calculator Program
// This program determines the monthly payments on a loan given
// the loan amount, the yearly interest rate, number of years,
// and total interest paid over the period of the loan,
// The process repeats until a negative loan amount is entered.
//*****************************************************************
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Function Prototypes
void displayMenu();
void shouldRunApplication();
void runApplication();
void getLoanAmt(float& lonaAmount);
void getRest(float& monthlyInterest, int& numberOfYears);
void getInterest(float& monthlyInterest);
void determinePayment(float loanAmount, float monthlyInterest,
                      int numberOfPayments, float& payment);
void printResults(float loanAmount, float yearlyInterest,
                  int numberOfPayments, float payments,
                  float totalInterest);

int main()
{
    displayMenu();
    shouldRunApplication();

    return 0;
}

void displayMenu()
{
    cout << " _____________________________" << endl;
    cout << "|                             |" << endl;
    cout << "| This application will help  |" << endl;
    cout << "| you determine what your     |" << endl;
    cout << "| monthly payments will be    |" << endl;
    cout << "| for the duration of your    |" << endl;
    cout << "| loan. Would you like to     |" << endl;
    cout << "| begin?                      |" << endl;
    cout << "|_____________________________|" << endl;
    cout << "|                             |" << endl;
    cout << "|     0. Stop Program         |" << endl;
    cout << "|     1. Find My Payments     |" << endl;
    cout << "|_____________________________|" << endl;
    cout << endl << endl;
}

void shouldRunApplication()
{
    int operation = 0;
    cin >> operation;
    switch(operation)
    {
        case 0: cout << "Ending Application... " << endl;
            break;
        case 1:
            system("CLS");
            runApplication();
    }
}

void runApplication()
{
        // Variable declarations
    float loanAmount = 0;
    int numberOfYears = 0;
    float monthlyInterest = 0;
    int numberOfPayments = 0;
    float payment = 0;
    float totalInterest = 0;

    // Calculate payments
    getLoanAmt(loanAmount);
    while(loanAmount > 0)
    {
        printResults(loanAmount, monthlyInterest, numberOfPayments,
                     payment, totalInterest);

        getRest(monthlyInterest, numberOfYears);
        numberOfPayments = numberOfYears * 12;

        printResults(loanAmount, monthlyInterest, numberOfPayments,
                     payment, totalInterest);

        determinePayment(loanAmount, monthlyInterest,
                         numberOfPayments, payment);

        printResults(loanAmount, monthlyInterest, numberOfPayments,
                     payment, totalInterest);
        system("pause");
        loanAmount = 0;
    }
    system("CLS");
    displayMenu();
    shouldRunApplication();
}

//*****************************************************************

void getLoanAmt(float& loanAmount)
{
    cout << "Input loan amount. "
         << "A negative loan amount ends the processing. "
         << endl;
    cin >> loanAmount;
}

//*****************************************************************

void getRest(float& monthlyInterest, int& numberOfYears)
{

    getInterest(monthlyInterest);
    cout << "Enter the number of years of the loan. " << endl;
    cin >> numberOfYears;
}

//*****************************************************************

void getInterest(float& monthlyInterest)
{
    float yearlyInterest;
    cout << "Input interest rate. "
         << "An interest rate of less than 0.25 is assumed "
         << "to be a decimal rather than a percent." << endl;
    cin >> yearlyInterest;
    if(yearlyInterest >= 0.25)
        yearlyInterest = yearlyInterest / 100.0;
    monthlyInterest = yearlyInterest / 12;
}

//*****************************************************************

void determinePayment(float loanAmount, float monthlyInterest,
                      int numberOfPayments, float& payment)
{
    using namespace std;
    payment = (loanAmount * pow(1 + monthlyInterest, numberOfPayments)
               * monthlyInterest)/
               (pow(1 + monthlyInterest, numberOfPayments) - 1);
}

//*****************************************************************

void printResults(float loanAmount, float yearlyInterest,
                  int numberOfPayments, float payment,
                  float totalInterest)
{
    if(payment == 0)
    {
        totalInterest = 0;
    }else
    {
        totalInterest = (payment * numberOfPayments - loanAmount);
    }
    system("CLS");
    cout << " ___________________________________________" << endl;
    cout << left << setw(10) << "| Amount loaned: " << right << setw(26) << loanAmount << " |" << endl;
    cout << left << setw(10) << "| Interest rate: " << right << setw(26) << yearlyInterest << " |" << endl;
    cout << left << setw(10) << "| Number of payments: " << right << setw(21) << numberOfPayments << " |" << endl;
    cout << left << setw(10) << "| Monthly payments: " << right << setw(23) << payment << " |" << endl;
    cout << left << setw(10) << "| Total Interest " << right << setw(26) << totalInterest <<" |" << endl;
    cout << "|___________________________________________|" << endl << endl;
}

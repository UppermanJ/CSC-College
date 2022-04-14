#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// method prototypes
void menu();
void operation();
void findingDaysWeeksAndRemaining();
void countingCoins();



//--------------------------------- main --------------------------------

int main()
{
    menu();    
}

//------------------------------ interface ------------------------------

void menu()
{
    cout << " _________________________" << endl;
    cout << "|1. Convert days to weeks |" << endl;
    cout << "|                         |" << endl;
    cout << "|2. Calculate total  $$$  |" << endl;
    cout << "|                         |" << endl;
    cout << "|0. Exit Program          |" << endl;
    cout << "|_________________________|" << endl;
    cout << "Enter: ";
    operation();
}
void operation()
{
    int choice;
    cin >> choice;
    system("CLS");
    switch(choice)
    {
        case 0: break;
        case 1: findingDaysWeeksAndRemaining();
        case 2: countingCoins();
    }
}

//--------------------------- days and weeks ----------------------------

void findingDaysWeeksAndRemaining()
{
    int days;
    cout << "Enter the number of days to be converted: ";
    cin >> days;
    system("CLS");
    int numberOfDigits = 0;
    int weeks = days / 7;
    int daysRemaining = days % 7;
    for(int temporaryDividendForDayDigitLengthCalculation = days; temporaryDividendForDayDigitLengthCalculation > 0; temporaryDividendForDayDigitLengthCalculation /= 10)
    {
        numberOfDigits++;
    }

    cout << setfill('_') << setw(13 + numberOfDigits + 3) << left << " " << right << " " << endl;
    cout << setfill(' ') << setw(13 + numberOfDigits + 3) << left << "|" << right << "|" << endl;
    cout << setfill(' ') << setw(13) << left << "| # of days: " << setw(numberOfDigits + 2) << right << days << " |" << endl;
    cout << setfill(' ') << setw(13 + numberOfDigits + 3) << left << "|" << right << "|" << endl;
    cout << setfill(' ') << setw(13) << left << "| # of weeks: " << setw(numberOfDigits + 1) << right << weeks << " |" << endl;
    cout << setfill(' ') << setw(13 + numberOfDigits + 3) << left << "|" << right << "|" << endl;
    cout << setfill(' ') << setw(13) << left << "| rmng days: " << setw(numberOfDigits + 2) << right << daysRemaining << " |" << endl;
    cout << setfill('_') << setw(13 + numberOfDigits + 3) << left << "|" << right << "|" << endl;
    cout << endl << endl;
    system("pause");
    menu();
}

//------------------------ currency combinations ------------------------

void countingCoins()
{
    int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int numberOfWholeInDollars = 0;
    int numberOfWholeInCents = 0;
    int totatlDigits = 0;


    for(int currencyType = 1; currencyType <= 5; currencyType++)
    {
        if(dollars!=0)
        {
            cout << setfill(' ') << setw(17) << left << " # of Dollars:  " << dollars << endl;
        }else
        {
            cout << setfill(' ') << setw(17) << left << " # of Dollars:  " << right << "0" << endl;
        }
        if(quarters!=0)
        {
            cout << setfill(' ') << setw(17) << left << " # of Quarters:  " << quarters << endl;
        }else
        {
            cout << setfill(' ') << setw(17) << left << " # of Quarters:  " <<right << "0" << endl;
        }
        if(dimes!=0)
        {
            cout << setfill(' ') << setw(17) << left << " # of Dimes:  " << dimes << endl;
        }else
        {
            cout << setfill(' ') << setw(17) << left << " # of Dimes:  " <<right << "0" << endl;
        }
        if(nickels!=0)
        {
            cout << setfill(' ') << setw(17) << left << " # of Nickels:  " << nickels << endl;
        }else
        {
            cout << setfill(' ') << setw(17) << left << " # of Nickels:  " <<right << "0" << endl;
        }
        if(pennies!=0)
        {
            cout << setfill(' ') << setw(17) << left << " # of Pennies:  " << pennies << endl;
        }else
        {
            cout << setfill(' ') << setw(17) << left << " # of Pennies:  " << right << "0" << endl;
        }

            cout << endl;
        if(currencyType==1)
        {
            cout << " Dollars: ";
            cin >> dollars;
        }else if(currencyType==2)
        {
            cout << " Quarters: ";
            cin >> quarters;
        }else if (currencyType==3)
        {
            cout << " Dimes: ";
            cin >> dimes;
        }else if(currencyType==4)
        {
            cout << " Nickels: ";
            cin >> nickels;
        }else if(currencyType==5)
        {
            cout << " Pennies: ";
            cin >> pennies;    
        }
        system("CLS");
    
    }
    int centSignScents = (100 * dollars) + (25 * quarters) + (10 * dimes) + (5 * nickels) + pennies;
    float dollarSignDollars = dollars + (0.25 * quarters) + (0.1 * dimes) + (0.05 * nickels) + (0.01 * pennies);
    char centSign[] = {centSignScents};
    for(int howManyTotalDigits = centSignScents; howManyTotalDigits > 0; howManyTotalDigits /= 10)
    {
        totatlDigits++;
    }


    for(int pauseNumber = 0; pauseNumber < 4; pauseNumber++)
    {



        if(pauseNumber==0)
        {
                cout << setfill(' ') << setw(17) << left << " # of Dollars:  " << dollars << endl;
        cout << setfill(' ') << setw(17) << left << " # of Quarters:   " << quarters << endl;
        cout << setfill(' ') << setw(17) << left << " # of Dimes:   " << dimes << endl;
        cout << setfill(' ') << setw(17) << left << " # of Nickels:   " << nickels << endl;
        cout << setfill(' ') << setw(17) << left << " # of Pennies:   " << pennies << endl;
            cout << "Calculating total ¢ ";
            system("pause");
            system("CLS");
        }else if(pauseNumber==1)
        {
                cout << setfill(' ') << setw(17) << left << " # of Dollars:   " << dollars << endl;
        cout << setfill(' ') << setw(17) << left << " # of Quarters:   " << quarters << endl;
        cout << setfill(' ') << setw(17) << left << " # of Dimes:   " << dimes << endl;
        cout << setfill(' ') << setw(17) << left << " # of Nickels:   " << nickels << endl;
        cout << setfill(' ') << setw(17) << left << " # of Pennies:   " << pennies << endl;
            cout << setfill(' ') << setw(17) << left << " Total ¢:    " << right << "¢ "<< " " << (100 * dollars) + (25 * quarters) + (10 * dimes) + (5 * nickels) + pennies << endl;
            cout << "Calculating total $ "; 
            system("pause");   
            system("CLS");
        }else if(pauseNumber==2)
        {
                cout << setfill(' ') << setw(17) << left << " # of Dollars:  " << dollars << endl;
        cout << setfill(' ') << setw(17) << left << " # of Quarters:   " << quarters << endl;
        cout << setfill(' ') << setw(17) << left << " # of Dimes:   " << dimes << endl;
        cout << setfill(' ') << setw(17) << left << " # of Nickels:   " << nickels << endl;
        cout << setfill(' ') << setw(17) << left << " # of Pennies:   " << pennies << endl;
            cout << setfill(' ') << setw(17) << left << " Total ¢:    " << right << "¢ " << " " << centSignScents << endl;
            cout << setfill(' ') << setw(17) << left << " Total $:    " << right << "$ " << " " << dollarSignDollars << endl;
            cout << "Calculating in eight spaces ";
            system("pause");   
            system("CLS");
            for(int howManyWholeNumbers = int(dollarSignDollars); howManyWholeNumbers > 0; howManyWholeNumbers /= 10 )
            {
                numberOfWholeInDollars++;
                numberOfWholeInCents = numberOfWholeInDollars + 2;
            }
                cout << setfill(' ') << setw(17) << left << " # of Dollars:   " << dollars << endl;
                cout << setfill(' ') << setw(17) << left << " # of Quarters:   " << quarters << endl;
                cout << setfill(' ') << setw(17) << left << " # of Dimes:   " << dimes << endl;
                cout << setfill(' ') << setw(17) << left << " # of Nickels:   " << nickels << endl;
                cout << setfill(' ') << setw(17) << left << " # of Pennies:   " << pennies << endl;

            cout << setfill(' ') << setw(17) << left << " Total ¢:    " << right << "¢" << setw(8) << setfill('0')  << right << int(centSignScents) << endl;
            cout << setfill(' ') << setw(17) << left << " Total $:    "  << "$ " << setw(8) << setfill('0') << right << dollarSignDollars << endl;
        }else if(pauseNumber == 3)
        {
            cout << "Back to main menu ";
            system("pause");
            menu();
        }
    }
}   




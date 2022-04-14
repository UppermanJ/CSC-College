/********************************************************************
// Program : ProgramExample.cpp
// Author : Josiah Upperman
// Input File : inFile5.txt
********************************************************************/
#include <iostream>
#include <string>
#include <fstream>

  using namespace std;

void optionsScreen();
void oSOperationAssessment(int operation);
void requestTheFollowingFromTheUser(string author, string title, int authorFirst);
void openFile();

    

int main()
{
    optionsScreen();

    return 0;
}


void optionsScreen()
{
    int operation = 0;
    cout << " _____________________________________" << endl;
    cout << "|                                     |" << endl;
    cout << "|  1. Enter favorite boook by Author  |" << endl;
    cout << "|                                     |" << endl;
    cout << "|  2. Enter favorite book by Title    |" << endl;
    cout << "|_____________________________________|" << endl;
    cin >> operation;
    system("CLS");
    oSOperationAssessment(operation);
}

void oSOperationAssessment(int operation)
{
    int authorFirst;
    string title = "";
    string author = "";
    switch (operation)
    {
    case 1:
        authorFirst = 1;
        requestTheFollowingFromTheUser(author, title, authorFirst);
        break;
    case 2:
        authorFirst = 0;
        requestTheFollowingFromTheUser(author, title, authorFirst);
        break;
    default:
        cout << " You entered an incorrect solution... " << endl;
        cin.get();
        optionsScreen();
    }
}

void requestTheFollowingFromTheUser(string author, string title, int authorFirst)
{
    string firstName = "";
    string secondName = "";
    if (authorFirst == 0)
    {
        cout << " Favorite Book: ";
        cin.ignore();
        getline(cin, title);
        system("CLS");
        cout << " Your favorite book is " << title << endl;
    }
    else if (authorFirst == 1)
    {
        cout << " Author of favorite book: ";
        cin >> firstName >> secondName;
        author = firstName + " " + secondName;
        system("CLS");
        cout << " Your favorite book was written by " << author << endl;
    }

    system("pause");

    openFile();
}

void openFile()
{
    system("CLS");
    ifstream myFile;
    string textFile;
    cout << " Please enter the file name to open: ";
    cin.ignore();
    getline(cin, textFile);
    string file = textFile + ".txt";

    myFile.open(file.c_str());

    if (myFile.is_open())
    {
        int day1 = 0;
        int year1 = 0;
        int month1 = 0;
        int day2 = 0;
        int year2 = 0;
        int month2 = 0;
        myFile >> year1; 
        myFile >> month1;
        myFile >> day1;
        myFile >> year2 >> month2 >> day2;
        cout << year1 << '/' << month1 << '/' << day1 << " does not come before " << year2 << '/' << month2 << '/' << day2;
        cout << endl << endl;
        system("pause");
        if(year1 > year2)
        {
            cout << year1 << '/' << month1 << '/' << day1 << " does not come before " << year2 << '/' << month2 << '/' << day2;
        }else if(year2 > year1)
        {
            cout << year2 << '/' << month2 << '/' << day2 << " does not come before " << year1 << '/' << month1 << '/' << day1;
        }else if(year1 == year2)
        {
            if (month1 > month2)
            {
                cout << year1 << '/' << month1 << '/' << day1 << " does not come before " << year2 << '/' << month2 << '/' << day2;
            }
            else if (month2 > month1)
            {
                cout << year2 << '/' << month2 << '/' << day2 << " does not come before " << year1 << '/' << month1 << '/' << day1;
            }else if(month1 == month2)
            {
                if (day1 > day2)
                {
                    cout << year1 << '/' << month1 << '/' << day1 << " does not come before " << year2 << '/' << month2 << '/' << day2;
                }
                else if (day2 > day1)
                {
                    cout << year2 << '/' << month2 << '/' << day2 << " does not come before " << year1 << '/' << month1 << '/' << day1;
                }
                else if (day1 == day2)
                {
                    cout << year2 << '/' << month2 << '/' << day2 << " is on " << year1 << '/' << month1 << '/' << day1;
                }
            }
        }
        system("CLS");
        optionsScreen();
    }
    else
    {
        cout << " File failed to open, restarting...";
        cin.get();
        system("CLS");
        optionsScreen();
    }
}
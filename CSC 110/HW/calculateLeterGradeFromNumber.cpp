#include<iostream>


using namespace std;
bool calculateLetterGrade(int grade);

int main()
{
    int grade;

    cout << "Enter student's grade (0 - 100): ";
    cin >> grade;

    calculateLetterGrade;

    return 0;
}


bool calculateLetterGrade(int grade){
 if((grade >= 90) && (grade <= 100))
    {
    cout << "A";
    }
 else if((grade >= 80) && (grade <= 90))
    {
    cout << "B";
    }
 else if((grade >= 70) && (grade <= 79))
    {
     "C";
    }
 else if((grade >= 60) && (grade <= 69))
    {
    return "D";
    }
 else if((grade >= 0) && (grade < 60))
    {
    return "F";
    }
 else
    {
    return "ERROR - INVALID VALUE";
    }
}

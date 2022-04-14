#include <iostream>
#include <iomanip>
#include <string>
#include"student.h"

using namespace std;

student::student()
{
    first = " ";
    last = " ";
    address = " ";
    city = " ";
    zip = " ";
    earned = 0;
    attempted = 0;
    gpa = 0.0;
}

student::student(string first_N, string last_N, string address_N, string city_N, string zip_N)
{
    first = first_N;
    last = last_N;
    address = address_N;
    city = city_N;
    zip = zip_N;
}

student::student(string first_N, string last_N, string address_N, string city_N, string zip_N,
                 float earned_N, int attempted_N)
{
    first = first_N;
    last = last_N;
    address = address_N;
    city = city_N;
    zip = zip_N;
    earned = earned_N;
    attempted = attempted_N;
}

void student::calcGPA()
{
    gpa = earned / attempted;
}

void student::Param_calcGPA(float earned_N, int atttempted_N)
{
    gpa = earned_N / atttempted_N;
}

void student::set_E(float earned_N)
{
    earned = earned_N;
}

void student::set_A(int attempted_N)
{
    attempted = attempted_N;
}

void student::display() const
{
    cout << "===========================================================" << endl;
    cout << "Student Name: " << first << " " << last << endl;
    cout << "Address: " << address << " " << city << ", " << zip << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Credits Attempted: " << attempted << " "
         << "Credits Earned: " << earned << " "
         << "GPA: " << gpa << endl;
    cout << "===========================================================" << endl << endl;
}
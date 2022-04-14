#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    string employee_01_FirstName, employee_01_LastName, employee_02_FirstName, employee_02_LastName, employee_03_FirstName, employee_03_LastName;
    int employee_01_Hours, employee_02_Hours, employee_03_Hours;
    float employee_01_HourlyWage, employee_02_HourlyWage, employee_03_HourlyWage;

    cout << "Enter employee 01's first name, last name: ";
    cin >> employee_01_FirstName >> employee_01_LastName;
    cout << endl;

    cout << "Hours Worked: ";
    cin >> employee_01_Hours;
    cout << endl;

    cout << "Hourly Wage: ";
    cin >> employee_01_HourlyWage;
    cout << endl;

    cout << "Enter employee 02's first name, last name: ";
    cin >> employee_02_FirstName >> employee_02_LastName;
    cout << endl;

    cout << "Hours Worked: ";
    cin >> employee_02_Hours;
    cout << endl;

    cout << "Hourly Wage: ";
    cin >> employee_02_HourlyWage;
    cout << endl;

    cout << "Enter employee 03's first name, last name: ";
    cin >> employee_03_FirstName >> employee_03_LastName;
    cout << endl;

    cout << "Hours Worked: ";
    cin >> employee_03_Hours;
    cout << endl;

    cout << "Hourly Wage: ";
    cin >> employee_03_HourlyWage;
    cout << endl;

    cout << endl;

    cout << left << setw(20) << "First Name" << setw(20) << "Last Name";
    cout << setw(20) << "Hours Worked" << setw(20) << "Hourly Rate" << setw(20) << "Gross Pay" << endl;

    cout << left << setw(20) << employee_01_FirstName << setw(20) << employee_01_LastName << setw(20) << employee_01_Hours;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    cout << '$' << setw(20) << employee_01_HourlyWage << setw(20) << left << employee_01_Hours * employee_01_HourlyWage << endl;

    cout << left << setw(20) << employee_02_FirstName << setw(20) << employee_02_LastName << setw(20) << employee_02_Hours;;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    cout << '$' << setw(20) << employee_02_HourlyWage << setw(20) << left << employee_02_Hours * employee_02_HourlyWage << endl;

    cout << left << setw(20) << employee_03_FirstName << setw(20) << employee_03_LastName << setw(20) << employee_03_Hours;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    cout << '$' << setw(20) << employee_03_HourlyWage << setw(20) << left << employee_03_Hours * employee_03_HourlyWage << endl;

    return 0;
}

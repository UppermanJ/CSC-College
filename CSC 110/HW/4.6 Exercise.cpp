#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    cout << endl << endl;
    string employee_01_LastName, employee_02_LastName;
    int employee_01_Hours, employee_02_Hours;
    float employee_01_HourlyWage, employee_02_HourlyWage;

    cout << "Enter employee 01 Last Name";
    cin >> employee_01_LastName;
    cout << endl;

    cout << "Enter employee 02 Last Name";
    cin >> employee_02_LastName;
    cout << endl;

    cout << "Enter employee 01 Hours";
    cin >> employee_01_Hours;
    cout << endl;

    cout << "Enter employee 02 Hours";
    cin >> employee_02_Hours;
    cout << endl;

    cout << "Enter employee 01 Hourly Wage";
    cin >> employee_01_HourlyWage;
    cout << endl;

    cout << "Enter employee 02 Hourly Wage";
    cin >> employee_02_HourlyWage;
    cout << endl;

    cout << "012345678901234567890123456789012345678901234567890123456789" << endl;
    cout << left << setw(20) << "LAST NAME";
    cout << setw(20) << "EMPLOYEE PAY" << endl;

    cout << left << setw(20) << employee_01_LastName;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(3);
    cout << '$' << setw(20) << left << employee_01_Hours * employee_01_HourlyWage << endl;

    cout << left << setw(20) << employee_02_LastName;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(3);
    cout << '$' << setw(20) << left << employee_02_Hours * employee_02_HourlyWage << endl;

    cout << endl << endl;

    return 0;
}

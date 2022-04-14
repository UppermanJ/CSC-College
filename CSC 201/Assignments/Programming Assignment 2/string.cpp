#include <iostream>
#include<string>

using namespace std;

int main()
{
    string thing = "Customer Name ";  
    string cus = "Customer ID   ";
    string cim = "Yearly Income   ";
    string com = "Consulting Time   ";
    string amnt = "Amount Due   ";
    string inc = "Low Income  ";
    string name = "Agent Name    ";
    string acc = "Rate";
    string billing = "billing report";
    cout << thing.length() << billing.length() << cus.length() << cim.length() << com.length() << amnt.length() << inc.length() << name.length() << acc.length();
    return 0;
}
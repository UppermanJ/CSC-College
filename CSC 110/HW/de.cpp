#include<iostream>
#include<string>

using namespace std;

int main()
{
    string statement;
    getline(cin, statement);
    for(int index = 0; index < statement.length(); index++)
    {
        cout << statement.at(index);
    }
}

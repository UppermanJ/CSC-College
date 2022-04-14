#include<iostream>

using namespace std;
void PrintEveryNumberDivisibleByDivisor();
void GatherInputsFromUser();
void PromptUSerForBoundsOfRangeToCalculate();
void OutputLineBreak();
void PromptUserForDivisor();
void OutputIfDivisible(int number);

int firstNumber;
int secondNumber;
int divisor;

int main(int argc, char** argv)
{
    GatherInputsFromUser();
    PrintEveryNumberDivisibleByDivisor();

    return 0;
}

void GatherInputsFromUser()
{
    PromptUSerForBoundsOfRangeToCalculate();
    PromptUserForDivisor();
}

void PrintEveryNumberDivisibleByDivisor()
{
    for(int number = firstNumber; number <= secondNumber; number++)
    {
      OutputIfDivisible(number);
    }
}

void OutputIfDivisible(int number)
{
    if(number % divisor == 0)
    {
        cout << number << endl;
    }
}

void PromptUSerForBoundsOfRangeToCalculate()
{
    cout << "This program displays all numbers within a given range that are divisible by another number. " << endl;
    cout << "Please enter the first then second numbers in the range: ";
    OutputLineBreak();
    cin >> firstNumber >> secondNumber;
}


void PromptUserForDivisor()
{
    cout << "Divided by: ";
    cin >> divisor;
    OutputLineBreak();
}

void OutputLineBreak()
{
    cout << endl << endl;
}


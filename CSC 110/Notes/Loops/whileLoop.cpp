#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int number = 0;  //Declare variable to be used as the counter

    while(number <= 10)
    {  //While the expression in parenthesis is true, code in the loop will execute
      cout << number << endl;

      number++;  //Increment the counter by one(1)

    } // End of loop

    return 0;

} // End of method main()

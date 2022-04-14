#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
  char myLetter = 'a';

  do
  {
    cout << endl;
    cout << "Enter a letter: ";
    cin >> myLetter;

    if(myLetter == 'X' )
    {
      cout << endl;
      cout << "Critical X error" << endl;
      cout << "The letter you entered was: " << myLetter << endl;
      cout << endl;

      break;
    }

    cout << "The letter you entered was: " << myLetter << endl;

  }while( myLetter != 'x');

  cout << endl;
  cout << "Statement after the loop" << endl;

  return 0;

} // End of method theBreakStatement


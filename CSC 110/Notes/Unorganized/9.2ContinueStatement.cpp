#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
  char myChar;

  do
  {
    cout << endl;
    cout << "Enter a character: ";
    cin >> myChar;

    if(myChar >= '0' && myChar <= '9')
    {
      cout << endl;
      cout << "ignoring 0 - 9 chars" << endl;
      cout << "The character you entered was: " << myChar << endl;
      cout << endl;

      continue;
    }

    cout << "The character you entered was: " << myChar << endl;

  }while( myChar != 'x');

  cout << endl;
  cout << "Statement after the loop" << endl;

  return 0;

} // End of method theContinueStatement

#include<iostream>

using namespace std;

int main(int argc, char** argv)

{
   int a;
   cout << endl << endl;
   cout << "------ THE ASSIGNMENT OPERATORS ------" << endl;
   cout << endl;
   cout << " Assignment operators are use to store values into a variable" << endl;
   cout << " Simple assignment operator         a = 10:  " << ( a = 10 ) << endl;
   cout << " Addition assignment operator       a += 10 --> a = a + 10: " << ( a += 10 ) << endl;
   cout << " Subtraction assignment operator    a -= 10 --> a = a - 10: " << ( a -= 10 ) << endl;
   cout << " Multiplication assignment operator a *= 10 --> a = a * 10: " << ( a *= 10 ) << endl;
   cout << " Division assignment operator       a /= 10 --> a = a / 10: " << ( a /= 10 ) << endl;
   cout << " Modulo assignment operator         a %= 10 --> a = a % 10: " << ( a %= 10 ) << endl;
   cout << endl << endl;
   return 0;

} // End of function main()

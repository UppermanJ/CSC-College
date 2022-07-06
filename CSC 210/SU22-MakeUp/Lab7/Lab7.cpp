// typedef, string, enum
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool isaVowel(char);
string removeVowels(string);

int main()
{
    string aString, newString;

    cout << "Please input a string" << endl;
    getline(cin, aString);
    newString = removeVowels(aString);
    cout << "New string, vowels removed -- " << newString << endl;

    system("pause");
}

string removeVowels(string inString)
{

    string outString;
    int j = 0;

    for (int i = 0; i < inString.length(); i++)
    {
        if (isaVowel(inString[i]) == false)
        {
            outString = outString + inString[i];
        }
    }
    return outString;
}
// bool isaVowel(char inChar){
//
//   bool ret;
//
//   switch(toupper((char)inChar)) {
//     case 'A':
//     case 'E':
//     case 'I':
//     case 'O':
//     case 'U':
//       ret = true;
//       break;
//     default:
//       ret = false;
//       break;
//     }
//
//   return ret;
// }
bool isaVowel(char inChar)
{
    //  enum Letters {A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
    enum Letters
    {
        A = 65,
        E = 69,
        I = 73,
        O = 79,
        U = 85
    };
    bool ret;

    Letters aLetter;

    //  aLetter = Letters(toupper(inChar) - 65);
    aLetter = Letters(toupper(inChar));
    switch (aLetter)
    {
    case A:
    case E:
    case I:
    case O:
    case U:
        ret = true;
        break;
    default:
        ret = false;
        break;
    }

    return ret;
}
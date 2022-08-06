// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// * Josiah Upperman * CSC 210 * July 27 * Chapter 7 In Class Lab* * * * * * * * * * * * * *
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// * Pamella Smith * * Jun 30* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool isaVowel(char);
string extractVowels(string&);
void useProgramQuery();

// precondition: the user has run the program at least once
// postcondition: the user has asked the program to process as many strings as they desired
int main()
{
    useProgramQuery();
    system("pause");
    return 0;
}

// precondition: the user has run the program at least once
// postcondition: the user has chosen the course of action they seek
void useProgramQuery()
{
    cout << "Would you like to use this program to have a string deconstructed into consonants and vowels? (y/n): ";
    char answer; cin >> answer;
    if (toupper(answer) == 'Y')
    {
        string getString, newString;

        cout << "Please input a string: ";
        getline(cin, getString);
        newString = extractVowels(getString);
        cout << "New string: " << newString << " Vowels removed: " << getString << endl;
        system("pause");
        useProgramQuery();
    }
    else
    {
        system("cls");
        cout << "Logging off..." << endl;
        system("pause");
    }

}

// precondition: the user has entered a string
// postcondition: the consonants and the vowels have been returned as strings
string extractVowels(string &inString)
{

    string outString, vowels;
    int j = 0, i = 0;

    while (i < inString.length())
    {
        if (isaVowel(inString[i]) == false)
        {
            outString = outString + inString[i];
        }else{
            vowels = vowels + inString[i];
        }
        i++;
    }
    inString = vowels;
    return outString;
}

// precondition: the user has entered a string that can be processed in terms of characters
// postcondition: the program has informed the calling function of whether or not the character is a vowel
bool isaVowel(char isVowelChar)
{
    enum Vowels
    {
        A = 65,
        E = 69,
        I = 73,
        O = 79,
        U = 85
    };
    bool isItAVowel;

    Vowels holdTheInputChar;

    holdTheInputChar = Vowels(toupper(isVowelChar));
    switch (holdTheInputChar)
    {
    case A:
    case E:
    case I:
    case O:
    case U:
        isItAVowel = true;
        break;
    default:
        isItAVowel = false;
        break;
    }

    return isItAVowel;
}
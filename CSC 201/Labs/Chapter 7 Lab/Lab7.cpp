// Programmer: JS Upperman
#include <iostream>
#include<string>

using namespace std;

void request();
void translating(string sevenCharacters);

int main()
{
    request();
    return 0;
}

void translating(string sevenCharacters)
{
    int index = 0;
    while(index < 7)
    {
        switch (sevenCharacters[index])
        {
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'C':
        case 'c':
            sevenCharacters[index] = '2';
            break;
        case 'D':
        case 'd':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
            sevenCharacters[index] = '3';
            break;
        case 'G':
        case 'g':
        case 'H':
        case 'h':
        case 'I':
        case 'i':
            sevenCharacters[index] = '4';
            break;
        case 'J':
        case 'j':
        case 'K':
        case 'k':
        case 'L':
        case 'l':
            sevenCharacters[index] = '5';
            break;
        case 'M':
        case 'm':
        case 'N':
        case 'n':
        case 'O':
        case 'o':
            sevenCharacters[index] = '6';
            break;
        case 'P':
        case 'p':
        case 'Q':
        case 'q':
        case 'R':
        case 'r':
        case 'S':
        case 's':
            sevenCharacters[index] = '7';
            break;
        case 'T':
        case 't':
        case 'U':
        case 'u':
        case 'V':
        case 'v':
            sevenCharacters[index] = '8';
            break;
        case 'W':
        case 'w':
        case 'X':
        case 'x':
        case 'Y':
        case 'y':
        case 'Z':
        case 'z':
            sevenCharacters[index] = '9';
            break;
        default:
            cout << "ERROR -- [an element of the seven characters requested is of the wrong format] " << endl;
            cout << "Please try again ";
            system("pause");
            request();
        }
    index++;
    }
    for(int index = 0; index <= 7; index++)
    {
        if(index == 3)
        { cout << "-";
        }else{
        cout << sevenCharacters[index];
        }
    }
    cout << endl;
}

void request()
{
    string answer = " ";
    do
    {
        system("CLS");
        string sevenCharacters = " ";
        cout << "Please enter 7 characters: ";
        getline(cin,sevenCharacters);

        translating(sevenCharacters);
       
        cout << "Eneter y/Y to repeat the alpha-numeric translation process ";
        getline(cin, answer);
    } while ((answer.compare("y") == 0) || (answer.compare("Y")) == 0);
}

/* 3.  Create a program using the following requirements: 


        


    d.  Include an inner/nested WHILE loop that processes the entered characters until the
        entered characters are translated into the proper telephone number.

    e.  Use a SWITCH statement to translate characters to numbers. If the user enters something
        other than A-Z or a-z, display an error message and exit the WHILE loop, continuing
        with asking the user if they would like to continue.

    f.  Output/display to the console the translated telephone number.

If you like to include the following line of code:  system("pause");
You MAY need to : #include<cstdlib>

                      Complete as much as you can before you submit ensuring what you've completed compiles.  You do not have to correctly solve the coding exercise,
                  however,
                  you MUST include code that ATTEMPTS to solve the problem to get credit.

                  The program may be named any name of your choice and must have a.cpp extention.Do NOT include
                      spaces in program names;
variables may be any name of your choice.

    You DO NOT have to comment these programs,
    however, please include your NAME as a comment in ALL code files.

             SUBMIT the code file only(*.cpp)
                 .

             The program MUST compile and run and to get credit.

             You MAY zip the files and submit the zipped files.

             MUST be submitted before end of class unless otherwise stated.

             Questions will be entertained; solution may be discussed in class. This is a collaborative effort to provide examples
and practice for your understanding.
*/
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void twoChoices(int);

int main()
{
    int choice = 0;
    cout << "1. Enter file name and calculate average of values" << endl;
    cout << "2. Exit program" << endl;
    cout << float(3)/4*5 << endl;
    float f1 =3.1;
    float f2 = 10.0;
    int int1 = 1;
    int int int3 = 12;

    int3++;
    
    cout << int3 << endl;
    cin >> choice;
    cin.ignore(100, '\n');
    twoChoices(choice);
    return 0;
}

void twoChoices(int choice)
{
    while (choice != 2)
    {
        system("CLS");

        if(choice == 1)
        {   
            string fileName;
            ifstream fromFile;
            int temporaryInt = 0;
            int temporaryTotal = 0;
            int numberOfNumbers = 0;
            int keepRunning = 0;
            system("CLS");
            cout << "Enter file name for calculations: ";
            getline(cin, fileName);
            fromFile.open((fileName + ".txt").c_str());
            if(fromFile.is_open())
            {
                while((fromFile >> temporaryInt) && (numberOfNumbers <= 20))
                {
                    temporaryTotal += temporaryInt;
                    numberOfNumbers++;
                }
            }else{
                cout << "Couldn't open file... ";
                cin.get();
                twoChoices(choice);
            }
            fromFile.close();
            cout << "The total numeric average of the " << numberOfNumbers << " integers residing within " << fileName << ".txt is " << float(temporaryTotal)/numberOfNumbers << endl;
            system("pause");
            system("CLS");
            cout << "1. Enter file name and calculate average of values" << endl;
            cout << "2. Exit program" << endl;
            cin >> choice;
            cin.ignore(100, '\n');
            twoChoices(choice);
        }else
        {
            if(choice == 2)
            {
                break;
            }
            cout << "That wasn't an option. ";
            system("pause");
            system("CLS");
            cout << "1. Enter file name and calculate average of values" << endl;
            cout << "2. Exit program" << endl;
            cin >> choice;
            cin.ignore(100, '\n');
            twoChoices(choice);
        }
    }
}

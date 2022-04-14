/***********************************************************************************************
 * Program:  ProgrammingAssignment1.cpp
 * Author:  Josiah Upperman
 * Input File:  studentInput.txt
 * Output File:  studentReport.txt
 * 
 * Execute in Dev-C++: Open ProgramExample.cpp
 *                                      Select Compile and Run
************************************************************************************************/
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

/***********************************************************************************************
 * Function:  FileStream.cpp
 * Author:  Josiah Upperman
 * Precondition:  parameter contains two strings that represent the file stream destinations
 * Postcondition: contents of string variable output to console
************************************************************************************************/
void FileStream(string textFile1, string textFile)
{
    string word1, word2, word3, word4, temporaryString;
    float findingLargestValue = 0;
    float linesGrades[5] = {0,0,0,0,0};
    float sumOfAllGrades = 0.0;
    float average = 0.0;
    float word5 = 0.0;
    int ELEMENTS = 0;
    int studentsAtTop = 0;
    int tillAtTop = 0;
    int tillAtBot = 0;
    ofstream outputToFile;
    ifstream outputFromFile;

    outputFromFile.open(textFile1);

    for(int line = 0; line < 5; line++)
    {
        for(int word = 1; word <= 5; word++)
        {
            if(word == 1)
            {
                outputFromFile >> word1;
//                cout << word1 << endl;
            }else if(word == 2)
            {
                outputFromFile >> word2;
//                cout << word2 << endl;
            }else if (word == 3)
            {
                outputFromFile >> word3;
//                cout << word3 << endl;
            }
            else if (word == 4)
            {
                outputFromFile >> word4;
//                cout << word4 << endl;
            }
            else if (word == 5)
            {
                outputFromFile >> word5;
                linesGrades[line] = word5;
//                cout << word5 << endl;
            }

        }
//        cout << sumOfAllGrades << endl;
        sumOfAllGrades += word5;
//        cout << sumOfAllGrades << endl;
//        cout << average << endl;
    }
    average = sumOfAllGrades / 5;
    outputFromFile.close();
    outputFromFile.open(textFile1);
    for (int line = 0; line < 5; line++)
    {
        if(linesGrades[line] < average)
        {

            ELEMENTS++;
        }
        
        if(line == 0)
        {
            findingLargestValue = linesGrades[0];
        }else if (linesGrades[line] > linesGrades[line - 1])
        {
            findingLargestValue = linesGrades[line];
            studentsAtTop++;
        }
    }
    outputFromFile.close();
    outputFromFile.open(textFile1);

    cout << endl;
    cout << "Top students: " << studentsAtTop << endl;
    cout << "Highest number: " << findingLargestValue << endl;
    for (int line = 0; line < 5; line++)
    {
        cout << "Line " << line + 1 << "'s grade is " << linesGrades[line] << endl; // grades in order
    }
    cout << endl;
    string linesBelowAverage[ELEMENTS];
    string studentsWithHighestScore[studentsAtTop];


    for (int line = 0; line < 5; line++)
    {
        if (linesGrades[line] < average)
        {
            getline(outputFromFile, linesBelowAverage[tillAtBot]);
            tillAtBot++;
        }
        else if(linesGrades[line] == findingLargestValue)
        {
            getline(outputFromFile, studentsWithHighestScore[tillAtTop]);
            tillAtTop++;
        }else
        {
            getline(outputFromFile, temporaryString);
        }
    }


    outputFromFile.close();

    outputToFile.open(textFile);

    if(outputToFile.is_open())
    {
        outputToFile << "Students with test scores below " << average << endl;
        outputToFile << endl;
        for(int index = 0; index < ELEMENTS; index++)
        {
            outputToFile << linesBelowAverage[index] << endl;
        }
        outputToFile << endl;
        outputToFile << "Students who have a test score equal to that of the highest score of " << findingLargestValue << endl;
        outputToFile << endl;
        for(int index = 0; index < studentsAtTop; index++)
        {
            outputToFile << studentsWithHighestScore[index] << endl;
        }
    }else
    {
        cout << "ERROR - Could not open file for writing.";
    }
    outputToFile.close();
}



int main()
{
    FileStream("studentInput.txt", "studentReport.txt");
}


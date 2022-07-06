/**
 * README:
 * @file Assignment1.cpp
 * @author your name (you@domain.com)
 * @brief This is the main file for Assignment 1, a program that reads in a string followed by a list of 
 *       students and their answers to a test.  The program then calculates the score and letter grade for
 *      each student and outputs the results to the console and a file.
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Assignment1.hpp"

int main (){
    student classExams[30];
    intakeAndProcessClassExamResultsAndExportThem(classExams);
    return 0;
}

//Precondition:  The array of students is initialized, and the file is open,
//               and there is at least one student in the array who has a score.
//Postconditions:  The letter grade of the student is calculated and returned to the calling function.
char grade(float score)
{
    char grade;
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}

//Precondition:   Function main must call this function, with an array of students initialized and passed through.
//Postconditions:  The program runs through reading, interpreting and outputing the data from the file, as well as
//                 managing the file streams.
void intakeAndProcessClassExamResultsAndExportThem(student classExams[])
{

    string answers = "", examAnswersFile = "", examResultsFile;
    ifstream fin; ofstream fout;

    readAndComputeExamResults(classExams, fin, examAnswersFile, answers);
    outputExamResults(classExams, fout, examResultsFile, answers);

    closeFiles(fin, fout);
}

//Precondition:  The calling function must initialize a file stream, array of students, input file name, and 
//               the string for the answer key and pass them through.
//Postconditions:  The array of students is furnished with the data from the input file, and the answer key is established.
void readAndComputeExamResults(student classExams[], ifstream &read, string examAnswersFile, string &answers)
{
    cout << "Please enter the name of the file to read from (omit file extensions): ";
    getline(cin, examAnswersFile);
    read.open(examAnswersFile + ".txt");
    if (read.fail())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }
    getline(read, answers);
    for (int i = 0; i < 30; i++)
    {
        read >> classExams[i].Fname;
        read >> classExams[i].Lname;
        classExams[i].fullName = classExams[i].Fname + " " + classExams[i].Lname;
        read.ignore(256, ' ');
        getline(read, classExams[i].testAnswers);
        for (int j = 0; j < answers.length(); j++)
        {
            char studentAnswer = classExams[i].testAnswers[j];
            char correctAnswer = answers[j];
            if (studentAnswer == correctAnswer)
            {
                classExams[i].score += 5.00;
            }
        }
        classExams[i].grade = grade(classExams[i].score);
    }
}

//Precondition:  An array of students must be initialized and passed through, and the file stream must be open.
//Postconditions:  The array of students is output to the console and the file.
void outputExamResults(student classExams[], ofstream &write, string examResultsFile, string &answers)
{
    cout << "Please enter the name of the file to write to (omit file extensions): ";
    getline(cin, examResultsFile);
    write.open(examResultsFile + ".txt");
    if (write.fail())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }
    system("cls");
    write << setw((25 - string("Name").length())) << left << "Answer Key: "
          << setw((25 - string("Score").length())) << right << " "
          << setw((25 - string("Letter Grade").length())) << right << " "
          << setw((25 - string("Student Answers").length())) << right << answers << endl;

    write << setw((100 - string("Exam Results").length()) / 2) << "Exam Results" << endl;
    write << setw((25 - string("Name").length())) << left << "Name"
          << setw((25 - string("Score").length())) << left << "Score"
          << setw((25 - string("Letter Grade").length())) << left << "Letter Grade"
          << setw((25 - string("Student Answers").length())) << left << "Student Answers" << endl;

    cout << setw((25 - string("Name").length())) << left << "Answer Key: "
          << setw((25 - string("Score").length())) << right << ""
          << setw((25 - string("Letter Grade").length())) << right << " "
          << setw((25 - string("Student Answers").length())) << right << answers << endl;

    cout << setw((100 - string("Exam Results").length()) / 2) << "Exam Results" << endl;
    cout << setw((25 - string("Name").length())) << left << "Name"
          << setw((25 - string("Score").length())) << left << "Score"
          << setw((25 - string("Letter Grade").length())) << left << "Letter Grade"
          << setw((25 - string("Student Answers").length())) << left << "Student Answers" << endl;
    for (int i = 0; i < 30 ; i++)
    {
        write << setw((25 - string("Name").length())) << left << classExams[i].fullName
              << setw((25 - string("Score").length())) << left << setprecision(2) << fixed << classExams[i].score
              << setw((25 - string("Letter Grade").length())) << left  << classExams[i].grade
              << setw((25 - string("Student Answers").length())) << left << classExams[i].testAnswers << endl;
        cout << setw((25 - string("Name").length())) << left << classExams[i].fullName
             << setw((25 - string("Score").length())) << left << setprecision(2) << fixed << classExams[i].score
             << setw((25 - string("Letter Grade").length())) << left << classExams[i].grade
             << setw((25 - string("Student Answers").length())) << left << classExams[i].testAnswers << endl;
    }
    system("pause");
}

//Precondition:  The calling function must initialize a file stream and pass it through.
//Postconditions:  The file stream is closed.
void closeFiles(ifstream &read, ofstream &write)
{
    read.close();
    write.close();
}
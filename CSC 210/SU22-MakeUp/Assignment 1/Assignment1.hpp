#ifndef ASSIGNMENT1_HPP
#define ASSIGNMENT1_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <array>

using namespace std;

struct student
{
    string Fname;
    string Lname;
    string fullName = "";
    string testAnswers;
    float score = 0.00;
    char grade;
};

void intakeAndProcessClassExamResultsAndExportThem(student[]);
void readAndComputeExamResults(student classExams[], ifstream &read, string examAnswersFile, string &answers);
void outputExamResults(student classExams[], ofstream &write, string examResultsFile, string &answers);
void closeFiles(ifstream &read, ofstream &write);

char grade(float score);

#endif 
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class dataSet
{
public:
    dataSet();
    
    void dataScreen() const;
    void exitQuery(int &i);

    void textFileMethod();
    void userInputMethod();

    void dataSetFeedback();
    void min();
    void max();
    void avgAll();
    void avgMinMax();
    void deviationMinMaxFromAll();

private:

    int tenNumbers[10] = {};
    int total = 0, minimum = tenNumbers[0], maximum = 0;
    int const length = 10;
    float minMaxAvg = 0.0;
    float allAvg = 0.0;
    float minMaxDev = 0.0;
    string setQuality = "Null";


};


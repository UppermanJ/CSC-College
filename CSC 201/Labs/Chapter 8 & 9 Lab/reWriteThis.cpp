#include <iostream>
#include <string>
#include <fstream>
#include<cstdlib> // for system("pause")

using namespace std;

// global variables; are used anywhere within the program without re-definition



int someOpeningsBetterHappen(ifstream&, ofstream&, string&, string&, string&, int&);
void readFile(istream&, int&, int&);
float averageOutTheData(int&, int&);
void closeFiles(ifstream&, ofstream&);

int main () {
    ifstream fromFile;
    ofstream toFile;
    string inputFile, outputFile, reportFile;
    int runThrough = 0;

    int numValues, total = 0;

    inputFile = "inFile.txt";
    outputFile = "outFile.txt";
    
    while(runThrough < 2){
        someOpeningsBetterHappen(fromFile, toFile, inputFile, outputFile, reportFile, runThrough);
        if(someOpeningsBetterHappen == 0)
        {
            cout << "Error opening file: " << reportFile << ".  Exiting program..." << endl;
            return 0;
        }
        runThrough++;
    }

    readFile(fromFile, numValues, total);
    readFile(cin, numValues, total);
    averageOutTheData(numValues, total);

    cout << "You entered " << numValues << " numbers totaling "  <<  total << " with a average of " << averageOutTheData << endl;
    toFile <<  "You entered " << numValues << " numbers totaling "  <<  total << " with a average of " << averageOutTheData << endl;
    
    closeFiles(fromFile, toFile);
 
    // system("pause");

    
}


int someOpeningsBetterHappen(ifstream& inData, ofstream& outData, string& ifileName, string& ofileName, string& fileToReport, int& instance)
{
    if(instance == 0)
    {
        inData.open(ifileName);
        if (!inData)
        {
            fileToReport = ifileName;
            return 0;
        }else{
            int number;
            return 1;
        }
    }else if(instance == 1)
    {

        outData.open(ofileName);
        if (!outData)
        {
            fileToReport = ofileName;
            return 0;
        }else{
            return 1;
        }
    }else{
        return 0;
    }
}

void readFile(istream& inData, int& numValues, int& total)
{
    int num;
    inData >> numValues;
    system("pause");
    for (int i = 0; i < numValues; i++)
    {
        inData >> num;
        cout << num;
        total += num;
    }
}

float averageOutTheData(int& numValues, int& total)
{

    float avg = 0.00;
    avg = float(total) / float(numValues);

    return avg;
}

void closeFiles(ifstream& inData, ofstream& outData)
{
    inData.close();
    outData.close();
}
//*****************************************************************
// Program LawnCare calculates and writes the bills for a lawn care
// service company. The names of the input and output files are
// prompted for and read from the keyboard.
//*****************************************************************
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

// Function prototypes
void openFiles(ifstream& inFile, ofstream& outFile);
// OpenFiles reads in the names of the input file and the
// output file and opens them for processing
void processClients(ifstream& inFile, ofstream& outFile,
                    float hourlyRate);
// ProcessClients writes bills for all of the clients
// whose records are on inFile
void processAClient(ifstream& inFile, ofstream& outFile,
                    int& totalTime, float hourlyRate);
// ProcessAClient writes the bill for one client
void getAndPrintAddress(ifstream& inFile, ofstream& outFile);
// getAndPrintAddress reads the address from inFile and
// prints it on outFile
void printResults(int numberOfBills, int totalMinutes,
                  float hourlyRate);
// printRest prints total billed, average time per job,
// and average bill

int main()
{
    float hourlyRate;
    ifstream inFile;
    ofstream outFile;
    openFiles(inFile, outFile);
    if(!inFile||!outFile)
    {
        cout << "Error opening files " << endl;
        return 1;
    }
    cout << "Enter hourly rate. " << endl;
    cin >> hourlyRate;
    processClients(inFile, outFile, hourlyRate);
    inFile.close();
    outFile.close();
    return 0;
}

//*****************************************************************

void openFiles(ifstream& inFile, ofstream& outFile)
// Post: Files have been opened and filesOK reflects the result
//       of the opening process
{
    string inFileName;
    string outFileName;
    cout << "Enter a name of the input file. " << endl;
    cin >> inFileName;
    inFile.open(inFileName.c_str());

    cout << "Enter the name of the output file. " << endl;
    cin >> outFileName;
    outFile.open(outFileName.c_str());
    outFile << "Billing for clients on file " << inFileName << endl;
    outFile << fixed;
}

//*****************************************************************

void processClients(ifstream& inFile, ofstream& outFile,
                    float hourlyRate)
// Pre:  Files have been opened and the hourly rate has been set
// Post: Each bill has been written and the summary values have
//       been written to the screen
{
    int totalTime = 0;
    int numberOfBills = 0;
    string name;
    getline(inFile, name);
    while(inFile)
    {
        outFile << name << endl;
        processAClient(inFile, outFile, totalTime, hourlyRate);
        numberOfBills++;
        getline(inFile, name);
    }
    // Print summary information
    printResults(numberOfBills, totalTime, hourlyRate);
}

//*****************************************************************

void printResults(int numberOfBills, int totalMinutes,
                  float hourlyRate)
// Pre:  number of bills an total minutes have been calculated
// Post: total billing and average time and bill have been printed
{
    float minutes = static_cast<float>(totalMinutes);
    cout << "Total amount billed this month is "
         << minutes/60*hourlyRate << endl;
    cout << "Average time worked per job is "
         << minutes/float(numberOfBills)/60.0 << endl;
    cout << "Average customer bill is "
         << minutes/60.0*hourlyRate/float(numberOfBills) << endl;
}

//*****************************************************************

void getAndPrintAddress(ifstream& inFile, ofstream& outFile)
// Pre:  files have been opened and name has been read
// Post: address has been read from inFile and
//       written on outFile
{
    string line;
    getline(inFile, line);
    outFile << line << endl;
    getline(inFile, line);
    outFile << line << endl << endl;
}

//*****************************************************************

void processAClient(ifstream& inFile, ofstream& outFile,
                    int& totalTime, float hourlyRate)
// Pre:  Files have been opened, totalTime is total minutes
//       billed so far, and hourlyRate has been set
// Post: Bill has been written on outFile
{
    int time = 0;
    int hours = 0;
    int minutes = 0;
    float cost;
    int numberOfJobs;
    // Process
    getAndPrintAddress(inFile, outFile);
    inFile >> numberOfJobs;
    outFile << "Number of jobs: " << numberOfJobs << endl;
    for(int count = 1;  count <= numberOfJobs; count++)
    {
        inFile >> hours >> minutes;
        time = hours * 60 + minutes + time;
        outFile << "Job " << count << ": " << hours << " hours and "
                << minutes << " minutes " << endl;
    }
    cost = static_cast<float>(time) / 60.0 * hourlyRate;
    totalTime = totalTime + time;

    outFile << "Amount of bill: $"  << setprecision(2)  << cost
            << endl << endl;
    string skip;
    getline(inFile, skip);
}

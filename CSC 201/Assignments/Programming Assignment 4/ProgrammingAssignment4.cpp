// Name: JS Upperman
// Date: April 28th, 2021
// Program: ProgrammingAssignment4.cpp
// Function: Through an interactive menu, the program may allow the user to
// add, print, save, and view the stats of the football players with the text doc.

/// The program is to be an individual submission, i.e., each person completes
///  the program by completing the read function (an individual effort)
///  and using the functions created by the groups indicated below.
///  Each group must create one of the functions indicated by group number

#include "ProgrammingAssignment4.h"


int main()
{
    footBallPlayerType bigGiants[MAX];
    int numberOfPlayers;

    int choice;
    string name;
    int length = 0;
    int playerNum = 0;
    int numOfTouchDowns = 0;
    int numOfcatches = 0;
    int numOfPassingYards = 0;
    int numOfReceivingYards = 0;
    int numOfRushingYards = 0;
    int ret = 0;
    int num = 0;

    ifstream inFile;
    ofstream outFile;

    ret = openFile(inFile);
    if (ret){
      return 1;
    }

    getData(inFile, bigGiants, length);
    // for(int i = 0; i < length; i++){
    // cout << bigGiants[i].name << bigGiants[i].position << bigGiants[i].touchDowns << bigGiants[i].catches << bigGiants[i].passingYards << bigGiants[i].receivingYards << bigGiants[i].rushingYards << endl;
    // }
    do
    {

        showMenu();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter player's name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, num, name);
            printPlayerData(bigGiants, num, playerNum);
            break;

        case 2:
            printData(bigGiants, num);
            break;

        case 3:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, num, name);

            cout << "Enter number of touch downs to be added: ";
            cin >> numOfTouchDowns;
            cout << endl;

            touchDownUpdate(bigGiants, length, numOfTouchDowns, playerNum);
            break;

        case 4:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, num, name);

            cout << "Enter number of catches to be added: ";
            cin >> numOfcatches;
            cout << endl;

            updateCatches(playerNum, bigGiants, numOfcatches, length);
            break;

        case 5:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, num, name);

            cout << "Enter number of passing yards to be added: ";
            cin >> numOfPassingYards;
            cout << endl;

            updatePassingYards(playerNum, bigGiants, numOfPassingYards, length);
            break;

        case 6:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, num, name);

            cout << "Enter number of receiving yards to be added: ";
            cin >> numOfReceivingYards;
            cout << endl;

            updateReceivingYards(bigGiants, playerNum, numOfReceivingYards, num);
            break;

        case 7:
            cout << "Enter player name: ";
            cin >> name;
            cout << endl;

            playerNum = searchData(bigGiants, num, name);

            cout << "Enter number of rushing yards to be added: ";
            cin >> numOfRushingYards;
            cout << endl;

            updateRushing(bigGiants, length, playerNum, numOfRushingYards);
            break;

        case 99:
            break;

        default:
            cout << "Invalid selection." << endl;
        }
    }
    while (choice != 99);

    char response;

    cout << "Would you like to save data: (y,Y/n,N) ";
    cin >> response;
    cout << endl;

    if (response == 'y' || response == 'Y'){
        saveData(outFile, bigGiants, num);
    }
    inFile.close();
    outFile.close();

    return 0;
}
/// Function requests file name from the user and opens file.
///  Precondition:  None
///  Post condition:  If no error encountered, file is opened.
///   If file cannot be opened, a 1 is returned.
///  Parameter:  ifstream
int openFile(ifstream& in) {
	string filename = " ";
	cout << "Please enter football data file name: ";
	getline(cin, filename);
	in.open(filename.c_str());
    if (!in)
    {
        cout << filename << " input file does not exist. Program terminates!" << endl;
        return 1;
    }
    return 0;
}
/// Function requests file name from the user and opens file.
///  Precondition:  None
///  Post condition:  If no error encountered, file is opened.
///   If file cannot be opened, a 0 is returned.
///  Parameter:  ofstream
int openOutFile(ofstream& out) {
	string filename;
	cout << "Please enter the name of the output file: ";
	cin >> filename;
	out.open(filename.c_str());
    if (!out)
    {
        return 0;
    }
    return 1;
}
/// Function requests presents menu to user
///  Precondition:  None
///  Post condition:  None
///  Parameter:  None
void showMenu()
{
    cout << "Select one of the following options:" << endl;
    cout << "1: To print a player's data" << endl;
    cout << "2: To print the entire data" << endl;
    cout << "3: To update a player's touch downs" << endl;
    cout << "4: To update a player's number of catches" << endl;
    cout << "5: To update a player's passing yards" << endl;
    cout << "6: To update a player's receiving yards" << endl;
    cout << "7: To update a player's rushing yards" << endl;
    cout << "99: To quit the program" << endl;
}
/// Reads data into the structure array
///  Precondition: ifstream is open, howMany initialized to 0
///  Postcondition:  the structure array contains data from the input file
///                  the howMany parameter contains the number of rows read
/// Parameters:  ifstream, structure array, int file read counter
void getData(ifstream& inf, footBallPlayerType list[], int& howMany)
{
    int i = 0;
    while (inf >> list[i].name >> list[i].position >> list[i].touchDowns >> list[i].catches >> list[i].passingYards >> list[i].receivingYards >> list[i].rushingYards)
    {
        // cout << list[i].name << list[i].position << list[i].touchDowns << list[i].catches << list[i].passingYards << list[i].receivingYards << list[i].rushingYards;
        // system("pause");
        i++;
        howMany++;
    }
}
///  Prints statistics for a selected player
///  Precondition:  structure array contains data, length contains number of
///   rows in structure array,  playernum contains the index of the player
///   returned from the search (by name)
///  Parameters:  structure array, int length of array, int number of player
void printPlayerData(footBallPlayerType list[], int length, int playerNum)
{
    if ((0 > playerNum) || (playerNum >= length)){
        cout << "Invalid player number." << endl
             << endl;
    }else{
        cout << "Name: " << list[playerNum].name
             << " Position: " << list[playerNum].position << endl;
        cout << "Touch Downs: " << list[playerNum].touchDowns
             << ";  Number of Catches: " << list[playerNum].catches << endl;
        cout << "Passing Yards: " << list[playerNum].passingYards
             << ";  Receiving Yards: " << list[playerNum].receivingYards
             << ";  Rushing Yards: " << list[playerNum].rushingYards << endl
             << endl;
    }
}
///  Prints statistics for all players
///  Precondition:  structure array contains data, length contains number of
///   rows in structure array
///  Parameters;  structure array, int length of array
void printData(footBallPlayerType list[], int length)
{
    cout << left << setw(15) << "Name"
         << setw(14) << "Position"
         << setw(12) << "Touch Downs"
         << setw(9) << "Catches"
         << setw(12) << "Pass Yards"
         << setw(10) << "Rec Yards"
         << setw(12) << "Rush Yards" << endl;

    for (int i = 0; i < length; i++){
        cout << left << setw(15) << list[i].name
             << setw(14) << list[i].position
             << right << setw(6) << list[i].touchDowns
             << setw(9) << list[i].catches
             << setw(12) << list[i].passingYards
             << setw(10) << list[i].receivingYards
             << setw(12) << list[i].rushingYards << endl;
     cout << endl << endl;
    }
}
/// Saves updated data to file name entered by user
/// Precondition:  structure array contains data, length of array is filled
/// Postcondition:  If requested file is opened, updated data is written to the
///   output file
/// Parameters:  ofstream, structure array, int length of array
void saveData(ofstream& outF, footBallPlayerType list[], int length)
{
    int ret;
    ret = openOutFile(outF);
    if (!ret) {
        cout << "Output file did not open...data will not be output to a file. " << endl;
        return;
    }

    for (int i = 0; i < length; i++){
        outF << list[i].name
             << " " << list[i].position
             << " " << list[i].touchDowns
             << " " << list[i].catches
             << " " << list[i].passingYards
             << " " << list[i].receivingYards
             << " " << list[i].rushingYards<< endl;
    }
}
/// Finds a football player by name
/// Precondition:  structure array contains data, length of array properly set,
///   string contains name of a football player
/// Postcondition:  if the player is found by name, the array index is returned.
///  otherwise, a -1 is returned
/// Parameters:  structure array, int length of array, string player name
int searchData(footBallPlayerType list[], int length, string n)
{
    for (int i = 0; i < length; i++){
        cout << i;
        if (list[i].name == n){
            return i;
        }

    }
    return -1;
}

/// replace with functions to:
///   update Touch Downs
///   update Catches
///   update Passing Yards
///   update Receiving Yards
///   update Rushing Yards

//Precondition: Structure array contains data, playerNum contains player's index, addRush contains user's yard input
//Postcondition: Structure array has updated rushing yards data
//Parameters: Player index, structure array, and the value of yards the user entered
void updateRushing(footBallPlayerType list[], int length, int index, int addRush)
{
    // cout << index << endl;
    // cout << length << endl;
    // cout << addRush << endl;
    // cout << list[index].rushingYards << endl;
    // Check that the index (playerNum) is valid: check that index is not negative and
    // compare against number of components (howMany)
    // If index is not valid, cout an error message and exit function
    if ((0 > index) || (index >= length)){
        cout << "Unable to update rushing yards." << endl;
    }else{
    // If it is valid, add value to update catches to existing catch value
        list[index].rushingYards += addRush;
    }
}

void updateCatches(int playerNum, footBallPlayerType list[], int numOfCatches, int howMany)
/// Updates number of catches for a given player
/// Precondition: structure array contains data, howMany contains number of rows in structure array,
///  playerNum contains the index of the player returned from the search (by name),
///  numOfCatches contains the number of catches (input by user) to be added to the player's existing total.
/// Postcondition: If no error encountered, structure array contains
///  the updated value for number of catches for the indicated player
/// Parameters: int index of array, structure array, int value to update catches, int length of length of array
{
    ///Check that the index (playerNum) is valid: check that index is not negative and
    ///compare against number of components (howMany)
    ///If index is not valid, cout an error message and exit function
    if (playerNum < 0 || playerNum > howMany)
    {
        cout << "Error updating data: invalid player reference value" << endl
             << endl;
        return;
    }
    ///If it is valid, add value to update catches to existing catch value
    list[playerNum].catches += numOfCatches;
}

//Preconditions:structure array contains data, playerNum contains index of the player, numOfReceivingYards contains number input by user, num contains number of rows in the array.
//Postconditions:structure array contains updated value for receiving yards
//Parameters: structure array, int player location in the array, int receiving yards to add, int length of array
void updateReceivingYards(footBallPlayerType list[], int playerNum, int numOfReceivingYards, int num)
{
    if (playerNum > num)
    {
        cout << "Error: Player location not available" << endl;
    }
    else
    {
        list[playerNum].receivingYards = list[playerNum].receivingYards + numOfReceivingYards;
    }
}

///Updates a player's touchdown count
///Precondition: structure array contains data, length contains number of
///rows in structure array, numoftouchdowns contains a number, playernum contains the index of the player
///returned from the search (by name)
///Parameters: structure array, int length of array, int number of added touchdowns, int number of player
void touchDownUpdate(footBallPlayerType list[], int length, int numOfTouchDowns, int playerNum)
{
    if (0 <= playerNum && playerNum < length)
    {
        list[playerNum].touchDowns = list[playerNum].touchDowns + numOfTouchDowns;
    }
    else
    {
        cout << "The player number entered is invalid." << endl
             << endl;
    }
}

// Parameters: int index of array, structure array, int value to update passing yards, int length of length of array
void updatePassingYards(int playerNum, footBallPlayerType list[], int numOfPassingYards, int howMany)
{
    if (playerNum > howMany)
    {
        cout << "Error updating data" << endl;
        return;
    }
    list[playerNum].passingYards += numOfPassingYards;
}
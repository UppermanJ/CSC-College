// Debugging lab
// The program runs but is incorrect
// It asks for a number of integers to read from the file
//  It should read the exact number of integers into the array
//   Output the exact number of integers read from the array
//   Correctly total the number of integers in the array
//  Find and fix the bug(s)
// Please add your name here: Josiah U 

#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int totals(int[], int&, int&, istream&, int&);

const int MAX = 20;

int main(){
	ifstream inData;
	int toRead, total, readNumber, counter = 0;
	
	inData.open("numbers.txt");
	
	cout << "Please enter the number of integers to read " << endl;
	cin >> toRead;



	if (toRead <= 0 || toRead > 16) {
	  cout << "User requested to read too few/many numbers " << endl;
	  return 0;
    }

	while (inData >> readNumber)
	{
		counter++;
	}
	int myArray[counter];
	inData.close();
	inData.open("numbers.txt");

	total = totals(myArray, toRead, readNumber, inData, counter);
	
	cout << "The numbers read were: " << endl << endl;    
    for (int i = 0; i < toRead; i++) {
     	cout << "Array value: " << i + 1 << ":  " << myArray[i] << endl;
		 
    }
	
    cout << endl;
    

    cout << "The total of the numbers read is: " << total << endl;
	
	return 0;
}

int totals(int myArray[], int &toRead, int &readNumber, istream &inData, int &counter)
{

	int total= 0;

	for (int i = 0; i < toRead; i++)
	{
		inData >> myArray[i];
		total += myArray[i];
	}
	
	return total;
}
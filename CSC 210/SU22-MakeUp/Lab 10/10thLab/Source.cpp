#include "Numerals.h"

using namespace std;

int main()
{

	Numerals IRoman;// create a roman numeral object with default constructor
	IRoman.convertToArabic(); // convert to int
	IRoman.printRomanNumerals();
	cout << " converts to "; 
	cout << IRoman.getArabicNumerals();// output roman numeral followed by arabic numeral
	cout << endl << endl;

	Numerals IIRoman("MCMIV");// create a roman numeral object with overloaded constructor
	IIRoman.convertToArabic();// convert to int
	cout << IIRoman.getRomanNumerals();
	cout << " converts to ";
	IIRoman.printArabicNumerals();// output roman numeral followed by arabic numeral
	cout << endl << endl;

	Numerals IIIRoman[3];// create a array of roman numerals object with default constructor g. create an array of the roman class of size 3
	for (int i = 0; i < 3; i++) {
		IIIRoman[i].setRomanNumerals();
		IIIRoman[i].convertToArabic();// convert to int
	}
	cout << endl << endl;
	for (int i = 0; i < 3; i++) {
		IIIRoman[i].printRomanNumerals();
		cout << " converts to "; 
		cout << IIIRoman[i].getArabicNumerals();// output roman numeral followed by arabic numeral
		cout << endl;
	}


	return 0;
}
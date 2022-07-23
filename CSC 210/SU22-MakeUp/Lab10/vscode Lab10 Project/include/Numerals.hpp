#ifndef NUMERALS_HPP
#define NUMERALS_HPP

#include <iostream>
#include <string>
#include <array>

using namespace std;

class Numerals
{
private:
    string romanNumerals;
    int arabicNumerals;

public:
    Numerals();
    Numerals(string);
    ~Numerals();

    void setRomanNumerals(string); // this.romanNumerals = String;
    void setRomanNumerals();       // this.romanNumerals = String;
    int getArabicNumerals();
    string getRomanNumerals();

    void convertToArabic(); // this.arabicNumerals = convertToArabic(this.romanNumerals);
    void printArabicNumerals();
    void printRomanNumerals();
};

#endif // NUMERALS_HPP
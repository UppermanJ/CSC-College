#include "Numerals.hpp"

Numerals::Numerals(string romanNumeral)
{
    this->romanNumerals = romanNumeral;
}

Numerals::~Numerals() {}

Numerals::Numerals()
{
    this->romanNumerals = "IIII";
    this->arabicNumerals = 0;
}

void Numerals::printArabicNumerals()
{
    cout << this->arabicNumerals << endl;
}

void Numerals::printRomanNumerals()
{
    cout << this->romanNumerals << endl;
}

string Numerals::getRomanNumerals()
{
    return this->romanNumerals;
}

int Numerals::getArabicNumerals()
{
    return this->arabicNumerals;
}

void Numerals::setRomanNumerals(string romanNumeral)
{
    this->romanNumerals = romanNumeral;
} // this.romanNumerals = String;

void Numerals::setRomanNumerals()
{
    cout << "Enter a string of Roman Numerals: ";
    cin >> this->romanNumerals;
} // this.romanNumerals = String;

void Numerals::convertToArabic()
{
    string roman = this->romanNumerals;
    int arabicNumeral = 0, i = 0;
    size_t numeralQuantity = roman.length();

    while (i < numeralQuantity)
    {
        if (this->romanNumerals[i] == 'I')
        {
            if (i + 1 < numeralQuantity)
            {
                if (this->romanNumerals[i + 1] == 'V')
                {
                    arabicNumeral += 4;
                    i++;
                }
                else if (this->romanNumerals[i + 1] == 'X')
                {
                    arabicNumeral += 9;
                    i++;
                }
                else
                {
                    arabicNumeral += 1;
                }
            }
            else
            {
                arabicNumeral += 1;
            }
        }
        else if (this->romanNumerals[i] == 'V')
        {
            arabicNumeral += 5;
        }
        else if (this->romanNumerals[i] == 'X')
        {
            if (i + 1 < numeralQuantity)
            {
                if (this->romanNumerals[i + 1] == 'L')
                {
                    arabicNumeral += 40;
                    i++;
                }
                else if (this->romanNumerals[i + 1] == 'C')
                {
                    arabicNumeral += 90;
                    i++;
                }
                else
                {
                    arabicNumeral += 10;
                }
            }
            else
            {
                arabicNumeral += 10;
            }
        }
        else if (this->romanNumerals[i] == 'L')
        {
            arabicNumeral += 50;
        }
        else if (this->romanNumerals[i] == 'C')
        {
            if (i + 1 < numeralQuantity)
            {
                if (this->romanNumerals[i + 1] == 'D')
                {
                    arabicNumeral += 400;
                    i++;
                }
                else if (this->romanNumerals[i + 1] == 'M')
                {
                    arabicNumeral += 900;
                    i++;
                }
                else
                {
                    arabicNumeral += 100;
                }
            }
            else
            {
                arabicNumeral += 100;
            }
        }
        else if (this->romanNumerals[i] == 'D')
        {
            arabicNumeral += 500;
        }
        else if (this->romanNumerals[i] == 'M')
        {
            arabicNumeral += 1000;
        }
        this->arabicNumerals = arabicNumeral;
    }
}
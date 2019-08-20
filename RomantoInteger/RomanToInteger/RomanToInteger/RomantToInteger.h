#ifndef ROMAN_TO_INTEGER
#define ROMAN_TO_INTEGER

#include <string>

using namespace std;

enum SpecialNumbers { Normal = 0, I = 1, X = 10, C = 100};
//enum RomanLetters { I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000 };

class RomanToInteger
{
public:
	RomanToInteger();
	int romanToInt(string s);
private:
	int romanValue(char rommanLetter, SpecialNumbers &isSpecial);
	int romanValue(char rommanLetter, unsigned int currentRoman);
	
	int currentRomanLetter[7];
};

#endif // !ROMAN_TO_INTEGER


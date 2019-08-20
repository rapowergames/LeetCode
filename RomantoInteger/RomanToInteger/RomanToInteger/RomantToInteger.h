#ifndef ROMAN_TO_INTEGER
#define ROMAN_TO_INTEGER

#include <string>

using namespace std;

enum SpecialNumbers { Normal = 0, I = 1, X = 10, C = 100};

class RomanToInteger
{
public:
	int romanToInt(string s);
	//int romanValue(char romanLetter, bool& isSpecial);
private:
	int romanValue(char rommanLetter, SpecialNumbers &isSpecial);
};

#endif // !ROMAN_TO_INTEGER


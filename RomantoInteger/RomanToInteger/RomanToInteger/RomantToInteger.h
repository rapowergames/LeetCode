#ifndef ROMAN_TO_INTEGER
#define ROMAN_TO_INTEGER

#include <string>

using namespace std;

class RomanToInteger
{
public:
	int romanToInt(string s);
	int romanValue(char romanLetter, bool& isSpecial);
};

#endif // !ROMAN_TO_INTEGER


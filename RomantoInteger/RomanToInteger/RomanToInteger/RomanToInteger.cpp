#include "RomantToInteger.h"

int RomanToInteger::romanToInt(string s)
{
	//s = toupper(s);
	int romanInteger = 0;
	int convertedNumber = 0;
	bool isSpecial = false;

	for (int i = 0; i < s.size(); ++i)
	{
		convertedNumber = romanValue(s[i], isSpecial);

		if (isSpecial)
		{
		}
		else
		{
			romanInteger += convertedNumber;
		}

	}

	return romanInteger;
}

int RomanToInteger::romanValue(char romanLetter, bool& isSpecial)
{
	switch (romanLetter)
	{
	case 'M':
		return 1000;
		break;
	case 'D':
		return 500;
		break;
	case 'C':
		return 100;
		break;
	case 'L':
		return 50;
		break;
	case 'X':
		return 10;
		break;
	case 'V':
		return 5;
		break;
	case 'I':
		return 1;
		break;
	}

	return 0;
}


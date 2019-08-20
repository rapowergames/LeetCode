#include "RomantToInteger.h"

RomanToInteger::RomanToInteger()
{
	currentRomanLetter[0] = 1000;
	currentRomanLetter[1] = 500;
	currentRomanLetter[2] = 100;
	currentRomanLetter[3] = 50;
	currentRomanLetter[4] = 10;
	currentRomanLetter[5] = 5;
	currentRomanLetter[6] = 1;
}

int RomanToInteger::romanToInt(string s)
{
	//s = toupper(s);
	unsigned int currentRomanIndex = 0;
	int romanInteger = 0;
	int convertedNumber = 0;
	SpecialNumbers isSpecial = Normal;

	for (unsigned int i = 0; i < s.size(); ++i)
	{
		convertedNumber = romanValue(s[i], isSpecial);

		if (convertedNumber == -1)
			return -1;


		if (isSpecial == Normal)
		{
			romanInteger += convertedNumber;
		}
		else // Special case like I, X, or C
		{
			++i;

			if (i > s.size())
				break;

			SpecialNumbers isNextSpecial = Normal;
			int nextConvertedNumber = romanValue(s[i], isNextSpecial);

			switch (isSpecial)
			{
			case C:
				if (nextConvertedNumber == 500 || nextConvertedNumber == 1000)
				{
					romanInteger += (nextConvertedNumber - convertedNumber);
					isSpecial = Normal;
				}
				else
				{
					romanInteger += convertedNumber;
					--i;
				}
				break;
			case X:
				if (nextConvertedNumber == 50 || nextConvertedNumber == 100)
				{
					romanInteger += (nextConvertedNumber - convertedNumber);
					isSpecial = Normal;
				}
				else
				{
					romanInteger += convertedNumber;
					--i;
				}
				break;
			case I:
				if (nextConvertedNumber == 5 || nextConvertedNumber == 10)
				{
					romanInteger += (nextConvertedNumber - convertedNumber);
					isSpecial = Normal;
				}
				else
				{
					romanInteger += convertedNumber;
					--i;
				}
				break;
			default:
				break;
			}			
		}
	}

	return romanInteger;
}

int RomanToInteger::romanValue(char romanLetter, SpecialNumbers &isSpecial)// bool& isSpecial)
{
	switch (romanLetter)
	{
	case 'M':
		isSpecial = Normal;
		return 1000;
		break;
	case 'D':
		isSpecial = Normal;
		return 500;
		break;
	case 'C':
		isSpecial = C;
		return 100;
		break;
	case 'L':
		isSpecial = Normal;
		return 50;
		break;
	case 'X':
		isSpecial = X;
		return 10;
		break;
	case 'V':
		isSpecial = Normal;
		return 5;
		break;
	case 'I':
		isSpecial = I;
		return 1;
		break;
	}

	return -1;
}

int RomanToInteger::romanValue(char romanLetter, unsigned int currentRoman)
{
	return 0;
}

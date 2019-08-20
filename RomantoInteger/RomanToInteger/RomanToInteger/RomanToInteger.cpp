#include "RomantToInteger.h"

int RomanToInteger::romanToInt(string s)
{
	//s = toupper(s);
	int romanInteger = 0;
	int convertedNumber = 0;
	SpecialNumbers isSpecial = Normal;

	for (int i = 0; i < s.size(); ++i)
	{
		convertedNumber = romanValue(s[i], isSpecial);

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
					romanInteger += nextConvertedNumber + convertedNumber;
					isSpecial = isNextSpecial;
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
					romanInteger += nextConvertedNumber + convertedNumber;
					isSpecial = isNextSpecial;
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
					romanInteger += nextConvertedNumber + convertedNumber;
					isSpecial = isNextSpecial;
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

	return 0;
}


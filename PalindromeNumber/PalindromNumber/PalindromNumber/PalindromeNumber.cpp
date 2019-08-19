#include "PalindromeNumber.h"
const int ARRAYBUFFER = 1;

bool PalindromeNumber::isPalindrome(int x)
{
	if (x < 0)
		return false;

	return isPalindrome(to_string(x));
}

bool PalindromeNumber::isPalindrome(string inputString)
{
	for (int i = 0; i < (int)(inputString.size() / 2); ++i)
	{
		if (inputString[i] != inputString[inputString.size() - ARRAYBUFFER - i])
		{
			return false;
		}
	}

	return true;
}
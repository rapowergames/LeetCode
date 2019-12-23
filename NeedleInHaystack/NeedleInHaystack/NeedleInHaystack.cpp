/*
Author: Apolo Campos Jr.

Objective:
 * Create a function that can check for a substring (needle) within a string (haystack) and returns the index of the first letter
*/

#include "NeedleInHaystack.h"

int searchStr(string haystack, string needle)
{
	int hayIndex = 0;
	int needIndex = 0;

	// Goes through the haystack
	for (unsigned int i = 0; i < haystack.size(); ++i)
	{
		// If the first letter matches the haystack then check the rest matches
		if (haystack[i] == needle[0])
		{
			hayIndex = i; // Stores where the match was made in case 
			needIndex = 0;

			// Goes through and compares the strings as it walks along
			for (unsigned int j = OFFSET; j < needle.size(); ++j)
			{
				//Checks that it doesn't go out of bounds on the haystack side
				if (hayIndex + j < haystack.size())
				{
					if (haystack[hayIndex + j] != needle[j])
						break;
				}
				else // returns not found when it runs out haystack but needle is still not found
					return NOT_FOUND;

				needIndex = j + OFFSET; // used to make sure it went through the whole needle string
			}
			// returns the index needed if it was succesful
			if (needIndex == needle.size())
				return hayIndex;
		}
	}
	// by default, it returns not found
	return NOT_FOUND;
}
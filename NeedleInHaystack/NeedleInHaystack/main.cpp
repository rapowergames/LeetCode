/*
Author: Apolo Campos Jr.

Objective:
 * Create a function that can check for a substring (needle) within a string (haystack) and returns the index of the first letter
*/
#include <iostream>
#include "NeedleInHaystack.h"

using namespace std;

int main(void)
{
	cout << "ll   in hello      is in index: " << searchStr("hello", "ll") << endl;			// prints 2
	cout << "welc in welcome    is in index: " << searchStr("welc", "welc") << endl;		// prints 0
	cout << "abcd in def        is in index: " << searchStr("abcd", "def") << endl;			// prints -1
	cout << "ood  in good food  is in index: " << searchStr("good food", "ood") << endl;	// prints 1
	cout << "oods in good foods is in index: " << searchStr("good foods", "oods") << endl;	// prints 6
	cout << "oods in good foods is in index: " << searchStr("good foods", "oodsx") << endl;	// prints -1, Checks for a case when needle is shorter than the needle
	
	return 0;
}
#include "RomantToInteger.h"
#include <iostream>


int main(void)
{
	RomanToInteger* convert = new RomanToInteger();

	string invalid0("IIIII");
	string test0("III");
	string test1("XLIV");
	string test2("MMMDCCCXXXIII");
	string test3("IV");

	cout << "The Roman number " << invalid0 << " is the integer number: " <<  convert->romanToInt(invalid0) << " This should be(-1): "  << endl;
	cout << "The Roman number " << test0 << " is the integer number: " << convert->romanToInt(test0) << endl;

	return 0;
}
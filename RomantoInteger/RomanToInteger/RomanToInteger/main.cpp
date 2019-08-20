#include "RomantToInteger.h"
#include <iostream>


int main(void)
{
	RomanToInteger* convert = new RomanToInteger();

	string invalid0("IIIII");
	string invalid1("MMMM");
	string invalid2("DD");
	string invalid3("CCCC");
	string invalid4("LL");
	string invalid5("VV");
	string test0("III");
	string test1("XLIV");
	string test2("MMMDCCCXXXIII");
	string test3("IV");
	string test4("MCXL");
	string test5("MMXIX");

	cout << "The Roman number " << invalid0 << " is the integer number: " <<  convert->romanToInt(invalid0) << " This should be(-1): "  << endl;
	cout << "The Roman number " << test0 << " is the integer number: " << convert->romanToInt(test0) << endl;
	cout << "The Roman number " << test1 << " is the integer number: " << convert->romanToInt(test1) << endl;
	cout << "The Roman number " << test2 << " is the integer number: " << convert->romanToInt(test2) << endl;
	cout << "The Roman number " << test3 << " is the integer number: " << convert->romanToInt(test3) << endl;
	cout << "The Roman number " << test4 << " is the integer number: " << convert->romanToInt(test4) << endl;
	cout << "The Roman number " << test5 << " is the integer number: " << convert->romanToInt(test5) << endl;

	return 0;
}
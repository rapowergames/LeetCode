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
	string invalid6("IIIM");
	string invalid7("HHH");

	string test0("III");
	string test1("XLIV");
	string test2("MMMDCCCXXXIII");
	string test3("IV");
	string test4("MCXL");
	string test5("MMXIX"); 
	string test6("MCMXCIV");

	cout << "INVALID INPUTS (Should throw exception or -1)" << endl;
	cout << "The Roman number " << invalid0 << " = " << convert->romanToInt(invalid0) << " Invalid repeating letters." << endl;
	cout << "The Roman number " << invalid1 << " = " << convert->romanToInt(invalid1) << " Invalid repeating letters. " << endl;
	cout << "The Roman number " << invalid2 << " = " << convert->romanToInt(invalid2) << " Invalid repeating letters." << endl;
	cout << "The Roman number " << invalid3 << " = " << convert->romanToInt(invalid3) << " Invalid repeating letters." << endl;
	cout << "The Roman number " << invalid4 << " = " << convert->romanToInt(invalid4) << " Invalid repeating letters." << endl;
	cout << "The Roman number " << invalid5 << " = " << convert->romanToInt(invalid5) << " Invalid repeating letters." << endl;
	cout << "The Roman number " << invalid6 << " = " << convert->romanToInt(invalid6) << " Invalid order." << endl;
	cout << "The Roman number " << invalid7 << " = " << convert->romanToInt(invalid7) << " Invalid letters." << endl;
	cout << "VALID INPUTS" << endl;
	cout << "The Roman number " << test0 << " = " << convert->romanToInt(test0) << endl;
	cout << "The Roman number " << test1 << " = " << convert->romanToInt(test1) << endl;
	cout << "The Roman number " << test2 << " = " << convert->romanToInt(test2) << endl;
	cout << "The Roman number " << test3 << " = " << convert->romanToInt(test3) << endl;
	cout << "The Roman number " << test4 << " = " << convert->romanToInt(test4) << endl;
	cout << "The Roman number " << test5 << " = " << convert->romanToInt(test5) << endl;
	cout << "The Roman number " << test6 << " = " << convert->romanToInt(test6) << endl;

	return 0;
}
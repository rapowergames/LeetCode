/******************************************************************************/
/*!
\file   main.cpp
\author Apolo Campos Jr
\par    Assignment #3
\date   07/24/2019
\brief
  This is the driver to showcase functionality of the fraction calculator
*/
/******************************************************************************/

#include "FractionCalc.h"

int main(void)
{
	// case that checks for an invalid denominator 
	try
	{
		FractionCalc badFraction(1, 0);
		cout << "Unable to catch division by 0" << endl;
	}
	catch (const exception& e)
	{
		cout << "Exception worked as expected " << e.what() << endl;
	}
	// sample of fractions
	FractionCalc sample1(1, 2);
	FractionCalc sample2(3, 4);
	FractionCalc sample3(5, 9);
	FractionCalc sample4(13, 7);
	FractionCalc sample5(7, 11);
	FractionCalc sample6(11, 7);
	FractionCalc sample7(5, 10);
	FractionCalc sample8(1, 1);
	//Sample of addition	
	cout << "Testing Addition" << endl;
	cout << sample1 << " + " << sample2 << " = " << sample1 + sample2 << endl;
	cout << "True Answer 5 / 4" << endl << endl;
	//Sample of subtraction
	cout << "Testing Subtraction" << endl; 
	cout << sample3 << " - " << sample4 << " = " << sample3 - sample4 << endl;
	cout << "True Answer 82 / -63" << endl << endl;
	//Sample of multiplication
	cout << "Testing Multiplication" << endl;
	cout << sample5 << " * " << sample6 << " = " << sample5 * sample6 << endl;
	cout << "True Answer is 1 / 1" << endl << endl;
	//Sample of division
	cout << "Testing Division" << endl; 
	cout << sample7 << " / " << sample8 << " = " << sample7 / sample8 << endl;
	cout << "True Answer is 1 / 2" << endl << endl;

	return 0;
}
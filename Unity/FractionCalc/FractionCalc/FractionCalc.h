/******************************************************************************/
/*!
\file   FractionCalc.h
\author Apolo Campos Jr
\par    Assignment #3
\date   07/24/2019
\brief
  Header file for FractionCalc.cpp
*/
/******************************************************************************/

#ifndef FRACTION_CALC_H
#define FRACTION_CALC_H

#include <iostream>
using namespace std;

class FractionCalc
{
public:
	// Constructor
	FractionCalc(int num = 1, int den = 1);
	// overloading operators for siumplicity
	FractionCalc& operator+(const FractionCalc& RHS);
	FractionCalc& operator-(const FractionCalc& RHS);
	FractionCalc& operator*(const FractionCalc& RHS);
	FractionCalc& operator/(const FractionCalc& RHS);
	friend ostream& operator<<(ostream& out, const FractionCalc& fraction);
	int GreatestCommonDenominator(int num0, int num1);
	// memebers
	int numerator;
	int denominator;
};
#endif // FRACTION_CALC_H


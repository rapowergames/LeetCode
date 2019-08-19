/******************************************************************************/
/*!
\file   FractionCalc.cpp
\author Apolo Campos Jr
\par    Assignment #3
\date   07/24/2019
\brief
  This is the implementation file for all member functions
  of a class FractionCalc, as specified in specification
  file FractionCalc.h.

  Operations include:

  - Fraction addition
  - Fraction subtraction
  - Fraction multiplication
  - Fraction division
  - Catches exceptions
  - displays fractions in numerator and denominator 

*/
/******************************************************************************/

#include "FractionCalc.h"

FractionCalc::FractionCalc(int num, int den)
{
	if (den == 0) // covers for division by zero
	{
		throw invalid_argument("Invalid denominator value. Value cannot be 0");
	}
	// Initializes member variables
	numerator = num;
	denominator = den;
}

FractionCalc& FractionCalc::operator+(const FractionCalc& RHS)
{
	int lhsNum, lhsDen, rhsNum, rhsDen;

	lhsNum = numerator;
	lhsDen = denominator;
	rhsNum = RHS.numerator;
	rhsDen = RHS.denominator;

	int tempNumerator = lhsNum * rhsDen + lhsDen * rhsNum;
	int tempDenominator = lhsDen * rhsDen;
	int gdc = GreatestCommonDenominator(tempNumerator, tempDenominator);
	numerator = tempNumerator / gdc;
	denominator = tempDenominator / gdc;

	return *this;
}

FractionCalc& FractionCalc::operator-(const FractionCalc& RHS)
{
	int lhsNum, lhsDen, rhsNum, rhsDen;

	lhsNum = numerator;
	lhsDen = denominator;
	rhsNum = RHS.numerator;
	rhsDen = RHS.denominator;

	int tempNumerator = lhsNum * rhsDen - lhsDen * rhsNum;
	int tempDenominator = lhsDen * rhsDen;
	int gdc = GreatestCommonDenominator(tempNumerator, tempDenominator);
	numerator = tempNumerator / gdc;
	denominator = tempDenominator / gdc;

	return *this;
}

FractionCalc& FractionCalc::operator*(const FractionCalc& RHS)
{
	int lhsNum, lhsDen, rhsNum, rhsDen;

	lhsNum = numerator;
	lhsDen = denominator;
	rhsNum = RHS.numerator;
	rhsDen = RHS.denominator;

	int tempNumerator = lhsNum * rhsNum;
	int tempDenominator = lhsDen * rhsDen;
	int gdc = GreatestCommonDenominator(tempNumerator, tempDenominator);
	numerator = tempNumerator / gdc;
	denominator = tempDenominator / gdc;

	return *this;
}

FractionCalc& FractionCalc::operator/(const FractionCalc& RHS)
{
	int lhsNum, lhsDen, rhsNum, rhsDen;

	lhsNum = numerator;
	lhsDen = denominator;
	rhsNum = RHS.numerator;
	rhsDen = RHS.denominator;

	int tempNumerator = lhsNum * rhsDen;
	int tempDenominator = lhsDen * rhsNum;
	int gdc = GreatestCommonDenominator(tempNumerator, tempDenominator);
	numerator = tempNumerator / gdc;
	denominator = tempDenominator / gdc;

	return *this;
}

ostream& operator<<(ostream& out, const FractionCalc& fraction)
{
	return out << fraction.numerator << " / " << fraction.denominator;
}

int FractionCalc::GreatestCommonDenominator(int num0, int num1)
{
	int remainder = 1;

	while (num1)
	{
		remainder = num0 % num1;
		num0 = num1;
		num1 = remainder;
	}

	return num0;
}
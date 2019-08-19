#include "Fract.h"

Fract::Fract( int numerator, int denominator )
{
  if (denominator == 0)
  {
    throw invalid_argument("Denominator can't be 0!");
  }
  num = numerator;
  den = denominator;
}

int Fract::GCD( int m, int n )
{
  int remainder = 1;

  while (n!= 0)
  {
    remainder = m % n;
    m = n;
    n = remainder;
  }
  return m;
}

Fract& Fract::operator+( const Fract& RHS )
{
  int a = num;
  int b = den;
  int c = RHS.num;
  int d = RHS.den;

  int tempn = a*d+b*c;
  int tempd = b*d;
  int gdc = GCD(tempn, tempd);
  num = tempn/gdc;
  den = tempd/gdc;
  return *this;
}

Fract& Fract::operator-( const Fract& RHS )
{
  int a = num;
  int b = den;
  int c = RHS.num;
  int d = RHS.den;

  int tempn = a*d-b*c;
  int tempd = b*d;
  int gdc = GCD(tempn, tempd);
  num = tempn/gdc;
  den = tempd/gdc;
  return *this;
}

Fract& Fract::operator*( const Fract& RHS )
{
  int a = num;
  int b = den;
  int c = RHS.num;
  int d = RHS.den;

  int tempn = a*c;
  int tempd = b*d;
  int gdc = GCD(tempn, tempd);
  num = tempn/gdc;
  den = tempd/gdc;
  return *this;
}

Fract& Fract::operator/( const Fract& RHS )
{
  int a = num;
  int b = den;
  int c = RHS.num;
  int d = RHS.den;

  int tempn = a*d;
  int tempd = b*c;
  int gdc = GCD(tempn, tempd);
  num = tempn/gdc;
  den = tempd/gdc;
  return *this;
}

std::ostream& operator<< (ostream& out, const Fract& fr)
{
  return out << fr.num << '/' << fr.den;
}










#ifndef FRACT_H
#define FRACT_H
#include <iostream>
using std::cout;
using std::endl;
using std::end;
using std::ostream;
using std::invalid_argument;
using std::exception;

class Fract
{
public:
  Fract():num(1), den(1){};
  Fract(int numerator, int denominator);
  int GCD(int m, int n);
  Fract& operator+(const Fract& RHS);
  Fract& operator-(const Fract& RHS);
  Fract& operator*(const Fract& RHS);
  Fract& operator/(const Fract& RHS);
  int num;
  int den;

friend std::ostream& operator<< (ostream& out, const Fract& fr);

};
#endif
#include "Fract.h"

int main(void)
{

  Fract f1(1, 2);
  Fract f2(3, 4);
  Fract f3(5, 6);
  Fract f4(7, 8);
  Fract f5(9, 10);
  Fract f6(11, 12);
  Fract f7(13, 14);
  Fract f8(15, 16);

  try
  {
    Fract f9(1, 0);
    cout << "Failed to detect creation of invalid fraction" << endl;
  }
  catch (const exception& e)
  {
    cout << "Creation of 0 denominator fraction was caught with exception '" << e.what() << endl;
  }
  cout << f1 << " + " << f2 << " = ";
  cout << f1 + f2 << " Should be 5/4" << endl;
  cout << f3 << " - " << f4 << " = ";
  cout << f3 - f4 << " Should be 1/-24" << endl;
  cout << f5 << " * " << f6 << " = ";
  cout << f5 * f6 << " Should be 33/40" << endl;
  cout << f7 << " / " << f8 << " = ";
  cout << f7 / f8 << " Should be 104/105" << endl;
  system("pause");
  return 0;
}
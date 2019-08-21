#include <iostream>
#include "AddBinary.h"

int main(void)
{
	AddBinaryNumbers *calculator = new AddBinaryNumbers();

	string lNum0 = "11"; string rNum0 = "1"; string binaryResult0 = "0";
	string lNum1 = "1010"; string rNum1 = "1011"; string binaryResult1 = "0";
	string lNum2 = "0"; string rNum2 = "1"; string binaryResult2 = "0";
	string lNum3 = "11001100"; string rNum3 = "11110000"; string binaryResult3 = "0";
	string lNum4 = "100101"; string rNum4 = "100001"; string binaryResult4 = "0";

	cout << "Adding Binary Numbers" << endl;
	cout << lNum0 << " + " << rNum0 << " = " << calculator->AddBinary(lNum0, rNum0) << endl;
	cout << lNum1 << " + " << rNum1 << " = " << calculator->AddBinary(lNum1, rNum1) << endl;
	cout << lNum2 << " + " << rNum2 << " = " << calculator->AddBinary(lNum2, rNum2) << endl;
	cout << lNum3 << " + " << rNum3 << " = " << calculator->AddBinary(lNum3, rNum3) << endl;
	cout << lNum4 << " + " << rNum4 << " = " << calculator->AddBinary(lNum4, rNum4) << endl;

	return 0;
}
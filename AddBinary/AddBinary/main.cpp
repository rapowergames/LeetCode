#include <iostream>
#include "AddBinary.h"

int main(void)
{
	AddBinaryNumbers *calculator = new AddBinaryNumbers();

	string lNumInvalid = "0"; string rNumInvalid = "-1"; string binaryResultInvalid = "INVALID!";
	string lNum0 = "0"; string rNum0 = "1"; string binaryResult0 = "1";
	string lNum1 = "1010"; string rNum1 = "1011"; string binaryResult1 = "10101";
	string lNum2 = "0"; string rNum2 = "0"; string binaryResult2 = "0";
	string lNum3 = "11001100"; string rNum3 = "11110000"; string binaryResult3 = "111100100";
	string lNum4 = "100101"; string rNum4 = "100001"; string binaryResult4 = "1000110";

	cout << "Adding Binary Numbers" << endl;
	cout << lNumInvalid << " + " << rNumInvalid << " = " << calculator->AddBinary(lNumInvalid, rNumInvalid) << " Should be: " << binaryResultInvalid << endl;
	cout << lNum0 << " + " << rNum0 << " = " << calculator->AddBinary(lNum0, rNum0) << " Should be: " << binaryResult0 << endl;
	cout << lNum1 << " + " << rNum1 << " = " << calculator->AddBinary(lNum1, rNum1) << " Should be: " << binaryResult1 << endl;
	cout << lNum2 << " + " << rNum2 << " = " << calculator->AddBinary(lNum2, rNum2) << " Should be: " << binaryResult2 << endl;
	cout << lNum3 << " + " << rNum3 << " = " << calculator->AddBinary(lNum3, rNum3) << " Should be: " << binaryResult3 << endl;
	cout << lNum4 << " + " << rNum4 << " = " << calculator->AddBinary(lNum4, rNum4) << " Should be: " << binaryResult4 << endl;

	return 0;
}
#include <iostream>
#include "AddBinary.h"

int main(void)
{
	AddBinaryNumbers *calculator = new AddBinaryNumbers();

	string lNumInvalid = "0"; string rNumInvalid = "-1"; string binaryResultInvalid = "INVALID!";
	string lNum0 = "0"; string rNum0 = "1"; string binaryResult0 = "1";
	string lNum1 = "1010"; string rNum1 = "1011"; string binaryResult1 = "10101";
	string lNum2 = "0"; string rNum2 = "0"; string binaryResult2 = "0";
	string lNum3 = "11001100"; string rNum3 = "11110000"; string binaryResult3 = "110111100";
	string lNum4 = "100101"; string rNum4 = "100001"; string binaryResult4 = "1000110";
	string lNum5 = "11001001"; string rNum5 = "1101"; string binaryResult5 = "11010110";
	string lNum6 = "1"; string rNum6 = "111"; string binaryResult6 = "1000";
	string lNum7 = "1"; string rNum7 = "1"; string binaryResult7 = "10";
	//string lNum8 = "1010"; string rNum8 = "1011"; string binaryResult8 = "10";
	string lNum9 = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101"; // 95 digits
	// 0000 0101 0000 0100 1001 1011 0010 0000 1010 1111 0110 1100 1101 1101 1111 1111 1010 0000 0101 1110 0111 0001 1111 0000 1101
	string rNum9 = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011"; 
	// 0110 1010 0101 1101 1100 0111 1100 1100 0101 0100 0011 0101 1101 0100 0001 1011 0110 0101 1101 1110 0110 0000 0110 1111 0011
	string binaryResult9 = "Too large!";
	//  0000 0000
	
	cout << "Adding Binary Numbers" << endl;
	//cout << lNumInvalid << " + " << rNumInvalid << " = " << calculator->AddBinary(lNumInvalid, rNumInvalid) << " Should be: " << binaryResultInvalid << endl;
	cout << lNum0 << " + " << rNum0 << endl << "  = " << calculator->AddBinary(lNum0, rNum0) << endl << "Is: " << binaryResult0 << endl;
	cout << lNum1 << " + " << rNum1 << endl << "  = " << calculator->AddBinary(lNum1, rNum1) << endl << "Is: " << binaryResult1 << endl;
	cout << lNum2 << " + " << rNum2 << endl << "  = " << calculator->AddBinary(lNum2, rNum2) << endl << "Is: " << binaryResult2 << endl;
	cout << lNum3 << " + " << rNum3 << endl << "  = " << calculator->AddBinary(lNum3, rNum3) << endl << "Is: " << binaryResult3 << endl;
	cout << lNum4 << " + " << rNum4 << endl << "  = " << calculator->AddBinary(lNum4, rNum4) << endl << "Is: " << binaryResult4 << endl;
	cout << lNum5 << " + " << rNum5 << endl << "  = " << calculator->AddBinary(lNum5, rNum5) << endl << "Is: " << binaryResult5 << endl;
	cout << lNum6 << " + " << rNum6 << endl << "  = " << calculator->AddBinary(lNum6, rNum6) << endl << "Is: " << binaryResult6 << endl;
	cout << lNum7 << " + " << rNum7 << endl << "  = " << calculator->AddBinary(lNum7, rNum7) << endl << "Is: " << binaryResult7 << endl;
	cout << lNum9 << " + " << rNum9 << endl << "  = " << calculator->AddBinary(lNum9, rNum9) << endl << "Is: " << binaryResult9 << endl;

	return 0;
}
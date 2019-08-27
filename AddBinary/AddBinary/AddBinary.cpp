#include "AddBinary.h"

string AddBinaryNumbers::AddBinary(string a, string b)
{
	int binary0 = stoi(a, nullptr, 2);// GetBinaryValue(a);
	int binary1 = stoi(b, nullptr, 2);// GetBinaryValue(b);

	if (binary0 < 0 || binary1 < 0)
		return "INVALID!";

	return ConvertBinaryToString(binary0 + binary1);
}

int AddBinaryNumbers::GetBinaryValue(string binaryNumber)
{
	int binaryExponent = 0;
	int binaryValue = 0;


	/*for (unsigned int i = binaryNumber.size; i >= 0; --i)
	{
		binaryValue += ();

		++binaryExponent;
	}*/

	return 0;
}

string AddBinaryNumbers::ConvertBinaryToString(unsigned int binaryNumber)
{
	if (binaryNumber == 0)
		return "0";

	int divisionResult, remainder, exponent = 0;
	string convertedBinary = "";
	
	remainder = binaryNumber % BINARY_VALUE; 
	divisionResult = binaryNumber / BINARY_VALUE;
	convertedBinary.append(to_string(remainder));

	while (divisionResult > 0)
	{
		remainder = divisionResult % BINARY_VALUE; 
		divisionResult /= BINARY_VALUE;
		++exponent;
		convertedBinary.append(to_string(remainder));
	}

	/*if (exponent > 0)
	{
		convertedBinary.append(to_string(1));
	}*/

	return convertedBinary;
}
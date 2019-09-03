#include "AddBinary.h"

string AddBinaryNumbers::AddBinary(string a, string b)
{
	return stringAddition(a, b);
	// stoi method
	if (a.size() > MAX_STRING_SIZE || b.size() > MAX_STRING_SIZE)
		return "INVALID";

	int binary0 = stoi(a, nullptr, 2);// GetBinaryValue(a);
	int binary1 = stoi(b, nullptr, 2);// GetBinaryValue(b);

	if (binary0 < 0 || binary1 < 0)
		return "INVALID!";

	return ConvertBinaryToString(binary0 + binary1);
}

string AddBinaryNumbers::stringAddition(string topBinary, string bottomBinary)
{
	string resultingBinary;
	unsigned int maxBinarySize;
	bool carryBinaryValue = false;
	// gets the max length of both binary strings
	if (topBinary.size() > bottomBinary.size())
		maxBinarySize = topBinary.size();
	else
		maxBinarySize = bottomBinary.size();

	for (unsigned int i = 0; i < maxBinarySize; ++i)
	{
		bool topBinaryValue, bottomBinaryValue, resultBinaryValue, prelimBinaryValue = false;
		int topIndex = topBinary.size() - i - 1;
		int bottomIndex = bottomBinary.size() - i - 1;
		// check binary strings are in bounds and get value if it 
		if (topIndex < 0)
			topBinaryValue = false;
		else
			topBinaryValue = charToBool(topBinary[topIndex]);

		if (bottomIndex < 0)
			bottomBinaryValue = false;
		else
			bottomBinaryValue = charToBool(bottomBinary[bottomIndex]);
		//addiing binaries
		if (carryBinaryValue) // math when there's a carry over value	
		{		
			bool prelimCarryValue; 

			prelimBinaryValue = carryBinaryValue ^ topBinaryValue;

			if (carryBinaryValue & topBinaryValue)
				prelimCarryValue = true;
			else
				prelimCarryValue = false;

			resultBinaryValue = prelimBinaryValue ^ bottomBinaryValue;
			
			if (!prelimCarryValue)
			{
				if (prelimBinaryValue & bottomBinaryValue)
					carryBinaryValue = true;
				else
					carryBinaryValue = false;
			}
			else
				carryBinaryValue = prelimCarryValue;
		}
		else // Normal math
		{
			resultBinaryValue = topBinaryValue ^ bottomBinaryValue;

			if (topBinaryValue & bottomBinaryValue)
				carryBinaryValue = true;
			else
				carryBinaryValue = false;
		}
		// add binary to resulting string;
		AddBinary2String(resultingBinary, resultBinaryValue);
	}

	if (carryBinaryValue)
		AddBinary2String(resultingBinary, true);

	reverse(resultingBinary.begin(), resultingBinary.end());

	return resultingBinary;
}

bool AddBinaryNumbers::charToBool(char binaryBool)
{
	if (binaryBool == '1')
		return true;

	return false;
}
void AddBinaryNumbers::AddBinary2String(string &resultString, bool binaryNumber)
{
	int binaryValue;

	if (binaryNumber)
		binaryValue = 1;
	else
		binaryValue = 0;

	resultString.append(to_string(binaryValue));
}
// First Implementation, limited by binary string size
string AddBinaryNumbers::ConvertBinaryToString(unsigned int binaryNumber)
{
	if (binaryNumber == 0)
		return "0";

	int divisionResult, remainder;
	string convertedBinary = "";
	
	remainder = binaryNumber % BINARY_VALUE; 
	divisionResult = binaryNumber / BINARY_VALUE;
	convertedBinary.append(to_string(remainder));

	while (divisionResult > 0)
	{
		remainder = divisionResult % BINARY_VALUE; 
		divisionResult /= BINARY_VALUE;
		convertedBinary.append(to_string(remainder));
	}

	reverse(convertedBinary.begin(), convertedBinary.end());

	return convertedBinary;
}
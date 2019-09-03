#ifndef ADDBINARY_H
#define ADDBINARY_H

#include <string>

using namespace std;
const int BINARY_VALUE = 2;
const int MAX_STRING_SIZE = 30;

class AddBinaryNumbers
{
public:
	string AddBinary(string a, string b);
private:
	string stringAddition(string topBinary, string bottomBinary);
	bool charToBool(char binaryValue);
	void AddBinary2String(string & resultString, bool binaryNumber);
	// Only used in first implementation. It's limited by binary string size
	string ConvertBinaryToString(unsigned int binaryNumber);
};

#endif // !ADDBINARY_H


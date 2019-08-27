#ifndef ADDBINARY_H
#define ADDBINARY_H

#include <string>

using namespace std;
const int BINARY_VALUE = 2;

class AddBinaryNumbers
{
public:
	string AddBinary(string a, string b);
private:
	int GetBinaryValue(string binaryNumber);
	string ConvertBinaryToString(unsigned int binaryNumber);
};

#endif // !ADDBINARY_H


#include "PalindromeNumber.h"
#include <iostream>

int main(void)
{
	PalindromeNumber* test = new PalindromeNumber();
	int input0 = 101;
	int input1 = -121;
	int input2 = 10;
	int input3 = 152;
	int input4 = 458854;
	int input5 = 0;
	int input6 = 4;

	cout << "Is " << input0 << " a palindrome?: " << test->isPalindrome(input0) << endl;
	cout << "Is " << input1 << " a palindrome?: " << test->isPalindrome(input1) << endl;
	cout << "Is " << input2 << " a palindrome?: " << test->isPalindrome(input2) << endl;
	cout << "Is " << input3 << " a palindrome?: " << test->isPalindrome(input3) << endl;
	cout << "Is " << input4 << " a palindrome?: " << test->isPalindrome(input4) << endl;
	cout << "Is " << input5 << " a palindrome?: " << test->isPalindrome(input5) << endl;
	cout << "Is " << input6 << " a palindrome?: " << test->isPalindrome(input6) << endl;
	
	return 0;
}
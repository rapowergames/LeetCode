/*
Author: Apolo Campos Jr.
Leetcode Objective:
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?
*/

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
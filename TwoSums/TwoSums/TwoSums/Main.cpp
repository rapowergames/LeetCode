/*
Author: Apolo Campos Jr.
Leetcode Objective:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

#include "TwoSums.h"
#include <iostream> 
#include <vector>
// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return[0, 1].
using namespace std;
int main(void)
{
	vector<int> *example = new vector<int>();

	example->push_back(2);
	example->push_back(7);
	example->push_back(11);
	example->push_back(15);
	vector<int> result;
	result.assign(2, 0);
	int target = 9;
	//TwoSumsClass* assignment = new TwoSumsClass();
	TwoSumsClass assignment;// = new TwoSumsClass();

	//result = 
	//assignment.twoSum(example, target);
	assignment.twoSum(result, target);
	cout << "Result [" << result[0] << ", " << result[1] << "]" << endl;

	//delete assignment;
	return 0;
}
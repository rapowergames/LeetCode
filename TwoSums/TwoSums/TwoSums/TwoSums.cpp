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

vector<int> TwoSumsClass::twoSum(vector<int>& nums, int target)
{
	int firstIndex = 0;
	int secondIndex = 0;
	int result = 0;
	vector<int> answer;
	answer.assign(2, 0);
	//for (int i == 0; i < nums.length(); ++i)
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			firstIndex = i;

			result = nums[i] + nums[j];
			if (result == target)
			{
				secondIndex = j;

				answer[0] = firstIndex;
				answer[1] = secondIndex;

				return answer;
			}

		}
	}

	answer[0] = firstIndex;
	answer[1] = secondIndex;

	return answer;
}
#include "TwoSums.h"
// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return[0, 1].

int main(void)
{
	vector<int> example { 2, 7, 11, 15 };
	vector<int> result(2, 0);
	int target = 9;
	TwoSumsClass* assignment = new TwoSumsClass();

	result = assignment->twoSum(example, target);
	cout << "Result [" << result[0] << ", " << result[1] << "]" << endl;

	delete assignment;
	return 0;
}
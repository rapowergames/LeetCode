/*
Author: Apolo Campos Jr.

Objective:
 * Given an expression string using the "+" and "-" operators like "5+16-2", write a function to find the total.
*/
#include "PokemonIntegerParser.h"

int pokemonIntegerParser(string numStr)
{
	int result = 0;
	string number;
	bool isFirstNum = true;
	bool isAdd = false;
	bool doOperation = false;
	
	for (unsigned int i = 0; i < numStr.size(); ++i)
	{
		//  Adds number to a number substring if it's not an Operator
		if (numStr[i] != PLUS_OP && numStr[i] != MINUS_OP)
			number.push_back(numStr[i]);
		else if (numStr[i] == PLUS_OP)
		{ // if it's an plus operator
			doOperation = true; // this flags to do an operation at the end
			// just stores number in the result
			if (isFirstNum)
			{
				isFirstNum = false;
				result = stoi(number);
				number.clear();
			}
			else // does the appropriate operation based on the previous operator
			{
				result = intOperation(isAdd, result, number);
				number.clear();
			}
			// sets the operator for the next operation
			isAdd = true;
		}
		else if (numStr[i] == MINUS_OP)
		{ // if it's an plus operator
			doOperation = true;// this flags to do an operation at the end
			// just stores number in the result
			if (isFirstNum)
			{
				isFirstNum = false;				
				result = stoi(number);
				number.clear();
			}
			else // does the appropriate operation based on the previous operator
			{
				result = intOperation(isAdd, result, number);
				number.clear();
			}
			// sets the operator for the next operation
			isAdd = false;
		}
	}
	// performs the last operation
	if (doOperation)
	{
		result = intOperation(isAdd, result, number);
		number.clear();
	}
	else // this expression had no operators so it returns the number
	{
		result = stoi(number);
		number.clear();
	}

	return result;
}

int intOperation(bool isAdding, int curResult, string strNumber)
{
	// convert nums to int
	int rightNum = stoi(strNumber);
	// performs add or subtraction based on bool
	if (isAdding)
		curResult += rightNum;
	else
		curResult -= rightNum;
	// returns result
	return curResult;
}
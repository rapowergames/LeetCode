/*
Author: Apolo Campos Jr.

Objective:
 * You are building an educational website and want to create a simple calculator for students to use. The calculator will only allow addition and subtraction of non-negative integers.

 * Given an expression string using the "+" and "-" operators like "5+16-2", write a function to find the total.

// Sample input/output:
// calculate("6+9-12")  => 3
// calculate("1+2-3+4-5+6-7") => -2
// calculate("100+200+300") => 600
// calculate("1-2-3-0") => -4
// calculate("255") => 255
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "PokemonIntegerParser.h"

using namespace std;

int main()
{
	string expression1 = "6+9-12"; // = 3
	string expression2 = "1+2-3+4-5+6-7"; // = -2
	string expression3 = "100+200+300"; // = 600
	string expression4 = "1-2-3-0"; // = -4
	string expression5 = "255"; // = 255
	
	cout << "Expression 01: " << pokemonIntegerParser(expression1) << endl;
	cout << "Expression 02: " << pokemonIntegerParser(expression2) << endl;
	cout << "Expression 03: " << pokemonIntegerParser(expression3) << endl;
	cout << "Expression 04: " << pokemonIntegerParser(expression4) << endl;
	cout << "Expression 05: " << pokemonIntegerParser(expression5) << endl;

	return 0;
}

/*
Author: Apolo Campos Jr.

Objective:
 * Given an expression string using the "+" and "-" operators like "5+16-2", write a function to find the total.
*/
#pragma once
#ifndef PKMNINTEGERPARSER_H
#define PKMNINTEGERPARSER_H

#include <iostream>
#include <string>

const char PLUS_OP = '+';
const char MINUS_OP = '-';

using namespace std;

int pokemonIntegerParser(string numStr);
int intOperation(bool isAdding, int curResult, string strNumber);

#endif // !PKMNINTEGERPARSER_H

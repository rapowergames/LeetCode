/*
Author: Apolo Campos Jr.

Objective:
 * Create a function that can check for a substring (needle) within a string (haystack) and returns the index of the first letter
*/
#ifndef NEEDLEINHAYSTACK_H
#define NEEDLEINHAYSTACK_H

#include <string>

using namespace std;

const int NOT_FOUND = -1;
const int OFFSET = 1;

int searchStr(string haystack, string needle);

#endif // !NEEDLEINHAYSTACK_H



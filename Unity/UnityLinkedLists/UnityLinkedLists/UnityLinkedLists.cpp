/******************************************************************************/
/*!
\file   UnityLinkedLists.cpp
\author Apolo Campos Jr
\par    Assignment #2
\date   07/24/2019
\brief
  This file drives the example of inserting values into the list and dsiplaying them in order
*/
/******************************************************************************/

#include "SinglyLinkedList.h"
#include <iostream>

const int SIZE_OF_LIST = 20;
const int RANDOM_NUMBER_RANGE = 100;

int main()
{
	SinglyLinkedList* list = new SinglyLinkedList();

	for (int i = 0; i < SIZE_OF_LIST; ++i)
	{
		list->insert(rand() % RANDOM_NUMBER_RANGE);
	}

	list->print();
	cout << "List Lenght: " << list->getLenght() << endl;
	delete list;

	return 0;
}
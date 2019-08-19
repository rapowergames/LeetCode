/******************************************************************************/
/*!
\file   SinglyLinkedList.cpp
\author Apolo Campos Jr
\par    Assignment #2
\date   07/24/2019
\brief
  This is the implementation file for all member functions
  of a class SinglyLinkedList, as specified in specification
  file SinglyLinkedList.h.

  Operations include:

  - Insert items in ascending order
  - Printing all items

*/
/******************************************************************************/

#include "SinglyLinkedList.h"

// Constructor
SinglyLinkedList::SinglyLinkedList()
{
	length = 0;
	head = NULL;
}
// Destructor that deletes each allocated node
SinglyLinkedList::~SinglyLinkedList()
{
	while (head)
	{
		Node *tempNode = head->next;
		delete head;
		head = tempNode;
	}
}
// Gets private memebr lenght
int SinglyLinkedList::getLenght()
{
	return length;
}

void SinglyLinkedList::insert(int data)
{
	// Makes new node
	Node* newNode = new Node();
	Node* tempNode = head;
	// sets new nodes's data
	newNode->data = data;

	if (!head)// if it's the first elemeent, it simple updates relavent pointers
	{
		newNode->next = NULL;
		head = newNode;
	}
	else if(tempNode->data > data)// this handles the uinique case when the new element should be the first one
	{
		head = newNode;
		newNode->next = tempNode;
	}
	else// This is for all other cases where it goes through the list to place it in the right ascending spot
	{
		while (tempNode->next && tempNode->next->data < data)
		{
			tempNode = tempNode->next;
		}

		newNode->next = tempNode->next;
		tempNode->next = newNode;
	}

	++length;
}
// used to display the entire list
void SinglyLinkedList::print()
{
	Node* listHead = head;
	int index = 1;

	while (listHead)
	{
		cout << index << ": " << listHead->data << endl;
		listHead = listHead->next;
		++index;
	}
}
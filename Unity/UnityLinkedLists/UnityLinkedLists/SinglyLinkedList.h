/******************************************************************************/
/*!
\file   SinglyLinkedList.h
\author Apolo Campos Jr
\par    Assignment #2
\date   07/24/2019
\brief
  Header file for SinglyLinkedList.cpp
*/
/******************************************************************************/

#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
public: 
	Node* next;
	int data;
};

class SinglyLinkedList
{
public:
	SinglyLinkedList();
	~SinglyLinkedList();
	void insert(int data);
	void print();
	int getLenght();
private:
	int length;
	Node* head;
};
#endif // !SINGLYLINKEDLIST_H
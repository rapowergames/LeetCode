//Robin Woodbury Unity Toolsmith Assignment 2 Linked Lists

#ifndef LIST_H
#define LIST_H

#include <iostream>

struct Node
{
  int number;
  Node *next;

  Node(int value)
  {
    number = value;
    next = 0;
  }
};

class List
{
public:
  List(void);
  ~List(void);
  void Insert(int value);

  friend std::ostream& operator<< (std::ostream& os, const List& list);

private:
  Node *head_;
  Node* MakeNode(int value);
};
#endif

//Robin Woodbury Unity Toolsmith Assignment 2 Linked Lists

#include <iostream>
#include "List.h"

List::List(void)
{
  head_ = 0;
}

List::~List( void )
{
  while (head_)
  {
    Node *placeholder = head_->next;
    delete head_;
    head_ = placeholder;
  }
}

Node* List::MakeNode(int value)
{
  return new Node(value);
}

void List::Insert(int newvalue)
{
  struct Node* newnode = MakeNode(newvalue);
  struct Node* placeholder = head_;

  if(!head_)
  {
    head_ = newnode;
  }
  else if(placeholder->number > newvalue) //handles case where new node value is less than the first node value
  {
    head_ = newnode;
    newnode->next = placeholder;
  }
  else
  {
    while(placeholder->next && placeholder->next->number < newvalue)
    {
      placeholder = placeholder->next;
    }
    newnode->next = placeholder->next;
    placeholder->next = newnode;
  }	
}



std::ostream& operator<< (std::ostream& os, const List& list)
{
  Node *placeholder = list.head_;    
  while (placeholder)
  {
    std::cout << placeholder->number << "   ";
    placeholder = placeholder->next;
  }
  return os;
}
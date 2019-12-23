/*
Author: Apolo Campos Jr.

LettCode Objective:
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
*/
#ifndef MINSTACK_H
#define MINSTACK_H

struct Node
{
	int value;
	Node *next;
};

class MinStack 
{
public:
	/** initialize your data structure here. */
	MinStack();

	void push(int x);
	void pop();
	int top();
	int getMin();
private:
	Node *_myStack;
	Node *_head;

	void sortMinFirst(void);
};

#endif // !MINSTACK_H

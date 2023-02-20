#ifndef STACK_H
#define STACK_H

#include "ItemType.h"

class Stack
{
public:
	Stack();
	~Stack();

	bool IsEmpty();
	bool IsFull();
	void Push(ItemType item);
	ItemType Pop();
	ItemType Top();

private:
	ItemType items[Max_Items];
	int top;
};

#endif // !STACK_H


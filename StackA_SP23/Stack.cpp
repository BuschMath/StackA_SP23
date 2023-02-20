#include "Stack.h"

Stack::Stack()
{
	top = 0;
}

Stack::~Stack()
{
}

bool Stack::IsEmpty()
{
	if (top == 0)
		return true;
	return false;
}

bool Stack::IsFull()
{
	if (top >= Max_Items)
		return true;
	return false;
}

void Stack::Push(ItemType item)
{
	if (!IsFull())
		items[top++] = item;
}

ItemType Stack::Pop()
{
	return items[--top];
}

ItemType Stack::Top()
{
	return items[top - 1];
}

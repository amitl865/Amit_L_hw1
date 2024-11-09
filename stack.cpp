#include "Stack.h"
#include "LinkedList.h"

void push(Stack* s, unsigned int element)
{
	if (s->elements == nullptr)
	{
		s->elements = new linkedList;
		s->elements->val = element;
		s->elements->next = nullptr;
	}
	else
	{
		addLink(s->elements, element);
	}
}

int pop(Stack* s) // Return -1 if stack is empty
{
	if (s->elements->next != nullptr)
	{
		return removeLastLink(s->elements);
	}
	else
	{
		int val = s->elements->val;
		delete s->elements;
		s->elements = nullptr;
		return val;
	}
	
}

void initStack(Stack* s)
{
	s->elements = nullptr;
}

void cleanStack(Stack* s)
{
	linkedList* pre = s->elements;
	if (pre == nullptr)
	{
		return;
	}
	else if (pre->next == nullptr)
	{
		delete pre;
		return;
	}
	else
	{
		linkedList* cur = s->elements->next;
		while (cur)
		{
			delete pre;
			pre = cur;
			cur = cur->next;
		}
		delete pre;
	}
}

bool isEmpty(Stack* s)
{
	return s->elements == nullptr;
}

bool isFull(Stack* s)
{
	return false;
}
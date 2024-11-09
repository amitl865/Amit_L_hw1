#include "LinkedList.h"
#include <iostream>

void addLink(linkedList* ls, int value)
{
	if (ls != nullptr)
	{
		linkedList* newPart = new linkedList;
		newPart->val = value;
		newPart->next = nullptr;
		while (ls->next != nullptr)
		{
			ls = ls->next;
		}
		ls->next = newPart;
	}
}

linkedList* removeFirstLink(linkedList* ls)
{
	if (ls->next != nullptr)
	{
		linkedList* newHead = ls->next;
		delete(ls);
		return newHead;
	}
	else
	{
		return nullptr;
	}
}

int removeLastLink(linkedList* ls)
{
	linkedList* cur = ls;
	if (ls == nullptr || ls->next == nullptr)
	{
		int val = ls->val;
		delete ls;
		ls = nullptr;
		return val;
	}

	while (cur->next->next != nullptr)
	{
		cur = cur->next;
	}

	int val = cur->next->val;
	delete cur->next; 
	cur->next = nullptr;
	return val;
}

void printLinkedList(linkedList* ls)
{
	int place = 0;
	while (ls != nullptr)
	{
		std::cout << place << " : " << ls->val << std::endl;
		place++;
		ls = ls->next;
	}
}
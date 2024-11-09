#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct linkedList
{
	linkedList* next  = nullptr;
	int val = 0;

} typedef linkedList;

void addLink(linkedList* ls, int value);

linkedList* removeFirstLink(linkedList* ls);

int removeLastLink(linkedList* ls);

void printLinkedList(linkedList* ls);

#endif
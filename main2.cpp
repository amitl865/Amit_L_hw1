#include "linkedList.h"


int main()
{
	linkedList* ls = new linkedList;
	addLink(ls, 1);
	addLink(ls, 2);
	addLink(ls, 3);
	addLink(ls, 4);
	addLink(ls, 5);
	ls = removeFirstLink(ls);
	removeLastLink(ls);
	addLink(ls, 6);
	printLinkedList(ls);
	return 0;
}
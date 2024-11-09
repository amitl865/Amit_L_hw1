#include "Utils.h"
#include "Stack.h"
#include <iostream>
void reverse(int* nums, unsigned int size)
{
	int* newNums = new int[size];
	Stack* s = new Stack;
	initStack(s);

	for (int i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (int i = 0; i < size; i++)
	{
		newNums[i] = pop(s);
	}
	for (int i = 0; i < size; i++)
	{
		nums[i] = newNums[i];
	}
	delete newNums;
}

int* reverse10()
{
	Stack* s = new Stack;
	initStack(s);
	int* arr = new int[10];
	int cur = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Enter " << i << " more numbers: ";
		std::cin >> cur;
		push(s, cur);
	}
	for (int i = 0; i < 10; i++)
	{
		arr[i] = pop(s);
	}
	return arr;

}
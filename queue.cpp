#include "Queue.h";
#include <iostream>


void initQueue(Queue* q, unsigned int size)
{
    q->maxSize = size;
    q->elements = new int[size];
    q->members = 0;
    q->firstInQ = 0;
}

void cleanQueue(Queue* q)
{
    free(q->elements); 
    q->members = 0;
    q->firstInQ = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
    int place = (q->firstInQ + q->members) % q->maxSize;
    if (isFull(q))
    {
        std::cout << "Queue out of bounds!, remove a member to add to the queue" << std::endl;
    }
    if (!isFull(q))
    {
        q->elements[place] = newValue;
        q->members++;
    }

}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
    if (isEmpty(q))
    {
        return -1;
    }
    else
    {
        int val = q->elements[q->firstInQ];
        q->elements[q->firstInQ] = -1;
        
        if (q->firstInQ == q->members)
        {
            q->firstInQ = 0;
            q->members -= 1;
        }
        else
        {
            q->firstInQ++;
            q->members -= 1;
        }
        return val;
    }
}

bool isEmpty(Queue* s)
{
    return s->members == 0;
}

bool isFull(Queue* s)
{
    return s->members == s->maxSize;
}


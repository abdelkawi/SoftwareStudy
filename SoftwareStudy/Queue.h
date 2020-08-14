#include "LinkedList.h"
class Queue
{
private:
	MyLinkedList myLinkedList;
public:
	Queue();
	void enqueue(int value);
	int dequeue();
	void print();
};
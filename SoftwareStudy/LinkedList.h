#ifndef LinkedList_H
#define LinkedList_H
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class MyLinkedList{
    Node *head,*tail;
	int listSize;
    public:
     MyLinkedList();
	 int size();
	
    void push_back(int data);
     
	void push_front(int data);
	  int value_at(int index);
	  int pop_front();
	  int pop_back();
	  void reverseList();
    void print();
};
#endif
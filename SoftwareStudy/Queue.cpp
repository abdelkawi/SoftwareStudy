#include "Queue.h"

	Queue:: Queue(){
		myLinkedList = MyLinkedList();
	}

	void Queue:: enqueue(int value){
		myLinkedList.push_back(value);
	}
	int Queue::dequeue(){
		return myLinkedList.pop_back();
	}
	void Queue::print(){
		myLinkedList.print();
	}




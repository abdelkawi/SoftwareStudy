#include <iostream>
#include "LinkedList.h"
using namespace std;




    MyLinkedList:: MyLinkedList(){
        head =NULL;
        tail =NULL;
		listSize= 0;
    }

	 int MyLinkedList::size(){
		 return listSize ;
	 }

    void MyLinkedList::push_back(int data){
         Node * temp = new Node;
            temp->data = data;
            temp->next =NULL;
			listSize++;
        if(head==NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }
     
	void MyLinkedList::push_front(int data){
         Node * temp = new Node;
            temp->data = data;
            temp->next = head;
			listSize++;
        if(head==NULL){
            head = temp;
            tail = temp;
        }else{
            head = temp;
        }
    }
	  int MyLinkedList::value_at(int index){
		  Node *temp = new Node;
		  temp->data = head->data;
		  temp->next =head->next;
		  while (index>0)
		  {
			  temp->data = temp->next->data;
			  temp = temp->next;
			  index--;
		  }
		  return temp->data;
	  }
	  int MyLinkedList::pop_front(){
		  int data = head->data;
		  Node * temp = head;
		  head = head->next;
		  delete temp ;
		  return data;
	  }
	  int MyLinkedList::pop_back(){
		  int data =  tail->data;
		  Node *current = head;
		
		  while(current->next!=NULL){
			  tail = current;
			  current = current->next;
		  }
		  tail->next=  NULL;
		  return data;
	  }

	  void MyLinkedList::reverseList(){
	  Node * prev = NULL;
	  Node *current = head;
	  Node * next = NULL;
      while(current!=NULL){
		  next = current->next;
		  current ->next = prev;
		  prev = current;
		  current = next;
	  }
	  tail = head;
	  head = prev;
	  }

    void MyLinkedList:: print(){
         Node *current = head;
        do 
        {
           cout<<current->data<<"";
           current =current->next;
        }while(current!=NULL);
    }


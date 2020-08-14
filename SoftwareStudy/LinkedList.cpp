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
     MyLinkedList(){
        head =NULL;
        tail =NULL;
		listSize= 0;
    }

	 int size(){
		 return listSize ;
	 }

    void push_back(int data){
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
     
	void push_front(int data){
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
	  int value_at(int index){
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
	  int pop_front(){
		  int data = head->data;
		  Node * temp = head;
		  head = head->next;
		  delete temp ;
		  return data;
	  }
	  int pop_back(){
		  int data =  tail->data;
		  Node *current = head;
		
		  while(current->next!=NULL){
			  tail = current;
			  current = current->next;
		  }
		  tail->next=  NULL;
		  return data;
	  }

	  void reverseList(){
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

    void print(){
         Node *current = head;
        do 
        {
           cout<<current->data<<"";
           current =current->next;
        }while(current!=NULL);
    }
};


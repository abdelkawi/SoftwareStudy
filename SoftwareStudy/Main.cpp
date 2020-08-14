using namespace std;
#include <iostream>;
#include "Queue.h"
int main(){
	Queue q = Queue();
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.print();
	cout<<endl;
	cout<<q.dequeue();
	cout<<q.dequeue();
	cout<<q.dequeue();
	cout<<q.dequeue();
	cout<<q.dequeue();
	system("pause");
	return 0;
}

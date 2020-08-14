using namespace std;
#include <iostream>
class MyVectorClass
{
	int *arr;	  // define a pointer
	int capacity; // arr capacity
	int current;  // current number of elements // or size 

public:
	MyVectorClass()
	{
		arr = new int[1];
		capacity = 1;
		current = 0;
	}
	void push(int data)
	{
		if (current == capacity)
		{									   // array is full
			int *temp = new int[2 * capacity]; // double the size of array

			//copy old values
			for (int i = 0; i < capacity; i++)
			{
				temp[i] = arr[i];
			}
			delete[] arr;  // delete the old array
			capacity *= 2; //  double the capacity
			arr = temp;	   //  new array with double size
		}
		arr[current] = data; // add data to the end
		current++;			 // increase the next item index
	}
	bool isEmpty()
	{
		return current == 0;
	}

	void insert(int data, int index)
	{
		if (index == capacity)
			push(data);
		else
		{
			int *temp = new int[capacity];	// copy the array
			for (int i = 0; i < index; i++) // items before the index
			{
				temp[i] = arr[i];
			}
			temp[index] = data; // insert in index
			for (int i = index; i < current; i++)
			{ // items after the index
				temp[i + 1] = arr[i];
			}
			delete[] arr;
			arr = temp;
			current++;
		}
	}
	void push(int data, int index)
	{
		if (index == capacity)
			push(data);
		else if(index<capacity)
		{
			arr[index] = data;
		}else {
			cout<<"U trying to insert in non existing index"<<endl;
		}
	}

	int at(int index)
	{
		if (index < current)
			return arr[index];
	}
	void pop()
	{
		current--;
	}
	int size()
	{
		return current;
	}
	void prepend(int data)
	{
		if (current == capacity)
		{
			int *temp = new int[2 * capacity];
			temp[0] = data;
			current++;
			for (int i = 0; i < current; i++)
			{
				temp[i + 1] = arr[i];
			}
			delete[] arr;
			capacity *= 2;
			arr = temp;
		}
		else
		{
			current++;
			for (int i = current; i > 0; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[0] = data;
		}
	}
	int getCapcity()
	{
		return capacity;
	}
	void print()
	{
		for (int i = 0; i < current; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void deleteAt (int index){
		if(index==current) {// item at the end
		pop();
		}else if (index<current){
			for(int i=index;i<current;i++){
				arr[i]=arr[i+1];
			}
			pop();
		}
		
	}
	void resize(){
		if(current<(capacity/2)){
			cout<<current<<" "<<capacity<<endl;
			int *temp = new int[capacity/2]; 
			//copy old values
			for (int i = 0; i < capacity; i++)
			{
				temp[i] = arr[i];
			}
			delete[] arr;  // delete the old array
			capacity /= 2; //  divid the capacity
			arr = temp;	   //  new array with divided size
		}
	}
	void remove(int data){
		for(int i=0;i<current;i++){
			if(arr[i]==data){
				deleteAt(i);
			}
		}
	}
};

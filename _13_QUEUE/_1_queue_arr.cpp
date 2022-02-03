#include <bits/stdc++.h>
using namespace std;

struct Queue
{
	int front, rear, size;
	int capacity;
	int *array;

	Queue(int capacity)
	{
		this->capacity = capacity;
		this->front = this->size = 0;
		this->rear = capacity - 1;
		this->array = new int[capacity];
	}

	bool isFull()
	{
		return (size == capacity);
	}

	bool isEmpty()
	{
		return (size == 0);
	}

	void enqueue(int item)
	{
		if (isFull())
			return;
		rear = (rear + 1) % capacity;
		array[rear] = item;
		size++;
	}

	int dequeue()
	{
		if (isEmpty())
			return INT_MIN;
		front = (front + 1) % capacity;
		size--;
		return array[front];
	}

	int getFront()
	{
		if (isEmpty())
			return INT_MIN;
		return array[(front + 1) % capacity];
	}

	int getRear()
	{
		if (isEmpty())
			return INT_MIN;
		return array[rear];
	}

	void printQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty" << endl;
			return;
		}
		int i = front;
		while (i != rear)
		{
			cout << array[i] << " ";
			i = (i + 1) % capacity;
		}
		cout << array[i] << endl;
	}
};

int main()
{
	Queue qu(5);

	qu.enqueue(10);
	qu.enqueue(20);
	qu.enqueue(30);
	qu.enqueue(40);
	qu.printQueue();

	cout << qu.dequeue() << endl;
	cout << qu.dequeue() << endl;

	qu.enqueue(50);
	qu.enqueue(60);
	qu.printQueue();

	cout << qu.getFront() << endl;
	cout << qu.getRear() << endl;

	return 0;
}

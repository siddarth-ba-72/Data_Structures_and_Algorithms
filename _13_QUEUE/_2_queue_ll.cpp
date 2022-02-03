#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

struct Queue
{
	Node *front, *rear;
	Queue()
	{
		front = rear = NULL;
	}

	void enqueue(int x)
	{
		Node *temp = new Node(x);
		if (front == NULL)
			front = rear = temp;
		rear->next = temp;
		rear = temp;
	}

	int dequeue()
	{
		if (front == NULL)
			return -1;
		Node *temp = front;
		front = front->next;
		return temp->data;
	}

	int getFront()
	{
		if (front == NULL)
			return -1;
		return front->data;
	}

	int getRear()
	{
		if (rear == NULL)
			return -1;
		return rear->data;
	}

	void display()
	{
		Node *temp = front;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};

int main()
{
	Queue qu;
	qu.enqueue(10);
	qu.enqueue(20);
	qu.enqueue(30);
	qu.enqueue(40);
	qu.display();

	cout << qu.getFront() << endl;
	cout << qu.getRear() << endl;

	cout << qu.dequeue() << endl;
	cout << qu.dequeue() << endl;

	qu.display();

	return 0;
}

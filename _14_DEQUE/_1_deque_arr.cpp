#include <iostream>
using namespace std;

struct Deque_Simple
{
	int *arr;
	int size, cap;

	Deque_Simple(int c)
	{
		cap = c;
		size = 0;
		arr = new int[cap];
	}

	int isFull()
	{
		return size == cap;
	}

	int isEmpty()
	{
		return size == 0;
	}

	void insertRear(int x)
	{
		if (isFull())
			return;
		arr[size] = x;
		size++;
	}

	void deleteRear()
	{
		if (isEmpty())
			return;
		size--;
	}

	int getRear()
	{
		if (isEmpty())
			return -1;
		return arr[size - 1];
	}

	void insertFront(int x)
	{
		if (isFull())
			return;
		for (int i = size - 1; i >= 0; i--)
			arr[i + 1] = arr[i];
		arr[0] = x;
		size++;
	}

	void deleteFront()
	{
		if (isEmpty())
			return;
		for (int i = 0; i < size - 1; i++)
			arr[i] = arr[i + 1];
		size--;
	}

	int getFront()
	{
		if (isEmpty())
			return -1;
		return arr[0];
	}
};

// * Efficient Implementation

struct Deque
{
	int *arr;
	int front, cap, size;

	Deque(int c)
	{
		arr = new int[c];
		cap = c;
		size = 0;
		front = 0;
	}

	int isFull()
	{
		return size == cap;
	}

	int isEmpty()
	{
		return size == 0;
	}

	void deleteFront()
	{
		if (isEmpty())
			return;
		front = (front + 1) % cap;
		size--;
	}

	void insertRear(int x)
	{
		if (isFull())
			return;
		arr[(front + size) % cap] = x;
		size++;
	}

	int getFront()
	{
		if (isEmpty())
			return -1;
		return arr[front];
	}

	void insertFront(int x)
	{
		if (isFull())
			return;
		front = (front - 1 + cap) % cap;
		arr[front] = x;
		size++;
	}

	void deleteRear()
	{
		if (isEmpty())
			return;
		size--;
	}

	int getRear()
	{
		if (isEmpty())
			return -1;
		return arr[(front + size - 1) % cap];
	}

	void display()
	{
		for (int i = 0; i < size; i++)
			cout << arr[(front + i) % cap] << " ";
		cout << endl;
	}
};

int main()
{
	Deque dq(5);
	dq.insertFront(1);
	dq.insertFront(2);
	dq.insertFront(3);

	dq.display();

	dq.insertRear(4);
	dq.insertRear(5);

	dq.display();

	dq.deleteFront();
	dq.deleteFront();

	dq.display();

	dq.deleteRear();
	dq.deleteRear();

	dq.display();

	return 0;
}

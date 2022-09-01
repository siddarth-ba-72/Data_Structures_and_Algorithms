#include <bits/stdc++.h>
using namespace std;

class MinHeap
{

	int *arr;
	int size;
	int capacity;

public:
	MinHeap(int c)
	{
		size = 0;
		capacity = c;
		arr = new int[c];
	}

	int left(int i)
	{
		return ((2 * i) + 1);
	}

	int right(int i)
	{
		return ((2 * i) + 2);
	}

	int parent(int i)
	{
		return ((i - 1) / 2);
	}

	void insert(int x)
	{
		if (size == capacity)
			return;
		arr[size++] = x;
		for (int i = size - 1; i != 0 && (arr[parent(i)] > arr[i]);)
		{
			swap(arr[i], arr[parent(i)]);
			i = parent(i);
		}
	}

	void printArray()
	{
		if (size == 0)
			return;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void minHeapify(int i)
	{
		int lt = left(i), rt = right(i);
		int smallest = i;
		if (lt < size && arr[lt] < arr[i])
			smallest = lt;
		if (rt < size && arr[rt] < arr[smallest])
			smallest = rt;
		if (smallest != i)
		{
			swap(arr[i], arr[smallest]);
			minHeapify(smallest);
		}
	}
	// * TC: O(log(n))
	// * AS: O(h)

	int extractMin()
	{
		if (size == 0)
			return INT_MAX;
		if (size == 1)
		{
			size--;
			return arr[0];
		}
		swap(arr[0], arr[size - 1]);
		size--;
		minHeapify(0);
		return arr[size];
	}
};

int main()
{
	MinHeap mh(20);
	mh.insert(40);
	mh.insert(20);
	mh.insert(30);
	mh.insert(35);
	mh.insert(25);
	mh.insert(80);
	mh.insert(32);
	mh.insert(100);
	mh.insert(70);
	mh.insert(60);

	mh.printArray();
	cout << "Deleted Node = " << mh.extractMin() << endl;
	mh.printArray();

	return 0;
}
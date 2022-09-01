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

	// Insertion
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

	// Heapify
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

	void buildHeap()
	{
		for (int i = ((size - 2) / 2); i >= 0; i--)
			minHeapify(i);
	}
};

int main()
{
	int a[6] = {10, 5, 20, 2, 4, 8};
	MinHeap mh(6);

	for (int i = 0; i < 6; i++)
		mh.insert(a[i]);

	mh.printArray();
	mh.buildHeap();
	mh.printArray();

	return 0;
}
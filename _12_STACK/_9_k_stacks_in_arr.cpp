#include <bits/stdc++.h>
using namespace std;

struct KSTACKS
{
	int *arr, *next, *top;
	int k, freeTop, cap;
	KSTACKS(int k_dash, int n)
	{
		k = k_dash;
		cap = n;
		arr = new int[cap];
		top = new int[k];
		next = new int[cap];
		for (int i = 0; i < k; i++)
			top[i] = -1;
		for (int i = 0; i < cap - 1; i++)
			next[i] = i + 1;
		next[cap - 1] = -1;
	}
	bool isFull() { return (freeTop == -1); }

	bool isEmpty(int sn) { return (top[sn] == -1); }

	void push(int x, int sn)
	{
		if (isFull())
		{
			cout << "\nStack Overflow\n";
			return;
		}
		int i = freeTop;
		freeTop = next[i];
		next[i] = top[sn];
		top[sn] = i;
		arr[i] = x;
	}

	int pop(int sn)
	{
		if (isEmpty(sn))
		{
			cout << "\nStack Underflow\n";
			return INT_MAX;
		}
		int i = top[sn];
		top[sn] = next[i];
		next[i] = freeTop;
		freeTop = i;
		return arr[i];
	}
};

int main()
{
	return 0;
}

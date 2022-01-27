#include <bits/stdc++.h>
using namespace std;

// * Naive Solution
void span(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int sp = -1;
		for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
		{
			sp++;
		}
		cout << sp << " ";
	}
}

// * Optimized Solution
void printSpan(int arr[], int n)
{
	stack<int> stk;
	stk.push(0);
	printf("%d ", 1);
	for (int i = 1; i < n; i++)
	{
		while (!stk.empty() && arr[stk.top()] <= arr[i])
		{
			stk.pop();
		}
		int span = stk.empty() ? i + 1 : i - stk.top();
		printf("%d ", span);
		stk.push(i);
	}
}
// * TC: Theta(n)
// * AS: O(n)

int main()
{
	int arr[] = {10, 4, 5, 90, 120, 80};
	int n = sizeof(arr) / sizeof(arr[0]);
	printSpan(arr, n);

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void getPrevGreater(int arr[], int n)
{
	stack<int> stk;
	stk.push(arr[0]);
	cout << -1 << " ";
	for (int i = 1; i < n; i++)
	{
		while (!stk.empty() && stk.top() <= arr[i])
		{
			stk.pop();
		}
		int prev = stk.empty() ? -1 : stk.top();
		cout << prev << " ";
		stk.push(arr[i]);
	}
}

int main()
{
	int arr[] = {15, 10, 18, 12, 4, 6, 2, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	getPrevGreater(arr, n);
	return 0;
}

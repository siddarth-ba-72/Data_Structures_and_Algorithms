#include <bits/stdc++.h>
using namespace std;

int getMaxArNaive(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int curr = arr[i];
		for (int j = i - 1; j >= 0; i--)
		{
			if (arr[j] < arr[i])
				curr += arr[i];
			else
				break;
		}
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
				curr += arr[i];
			else
				break;
		}
		res = max(res, curr);
	}
	return res;
}

// * Optimized solution
int getMaxArea(int arr[], int n)
{
	int res = 0;
	stack<int> s;
	int curr;
	int tp;
	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && arr[s.top()] >= arr[i])
		{
			tp = s.top();
			s.pop();
			curr = arr[tp] * (s.empty() ? i : (i - s.top() - 1));
			res = max(res, curr);
		}
		s.push(i);
	}
	while (!s.empty())
	{
		tp = s.top();
		s.pop();
		curr = arr[tp] * (s.empty() ? n : (n - s.top() - 1));
		res = max(res, curr);
	}
	return res;
}

int main()
{
	int arr[] = {6, 2, 5, 4, 1, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << getMaxArea(arr, n) << endl;

	return 0;
}

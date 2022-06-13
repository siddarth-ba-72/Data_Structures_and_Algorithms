#include <bits/stdc++.h>
using namespace std;

// ? Recursive Linear Search
int linear_search(int arr[], int low, int high, int key)
{
	if (high < low)
		return INT_MIN;
	if (arr[low] == key)
		return low;
	return linear_search(arr, low + 1, high, key);
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	cout << linear_search(arr, 0, n - 1, key) << endl;
}

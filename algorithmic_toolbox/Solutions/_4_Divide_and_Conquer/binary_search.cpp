#include <bits/stdc++.h>
using namespace std;

// ? Recursive Binary Search
// ? Always accepts the sorted array as input
int binary_search_recursive(int arr[], int low, int high, int key)
{
	if (high < low)
		return low - 1;
	int mid = (low + ((high - low) / 2));
	if (arr[mid] == key)
		return mid;
	else if (arr[mid] > key)
		return binary_search_recursive(arr, low, mid - 1, key);
	else
		return binary_search_recursive(arr, mid + 1, high, key);
}

// ? Iterative Binary Search
int binary_search_iterative(int arr[], int low, int high, int key)
{
	while (low <= high)
	{
		int mid = (low + ((high - low) / 2));
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return low - 1;
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
	// sort the array
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << binary_search_iterative(arr, 0, n - 1, key) << endl;
}
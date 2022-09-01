#include <bits/stdc++.h>
using namespace std;

void sortKSortedArrays(int arr[], int n, int k)
{
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i <= k; i++)
		pq.push(arr[i]);
	int index = 0;
	for (int i = k + 1; i < n; i++)
	{
		arr[index++] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}
	while (!pq.empty())
	{
		arr[index++] = pq.top();
		pq.pop();
	}
}
// * TC: O(n + klog(k))

int main()
{
	int n;
	cout << "n: ";
	cin >> n;

	int arr[n];
	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int k;
	cout << "k: ";
	cin >> k;

	cout << "Original Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	sortKSortedArrays(arr, n, k);
	cout << "Sorted Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
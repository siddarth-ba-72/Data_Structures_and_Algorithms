#include <bits/stdc++.h>
using namespace std;

void printKLargest(int arr[], int n, int k)
{
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < k; i++)
		pq.push(arr[i]);
	for (int i = k; i < n; i++)
	{
		if (pq.top() > arr[i])
			continue;
		else
		{
			pq.pop();
			pq.push(arr[i]);
		}
	}
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}
// * TC: O(k + (n-k)log(k))

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

	printKLargest(arr, n, k);
}
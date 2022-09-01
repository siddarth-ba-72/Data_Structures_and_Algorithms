#include <bits/stdc++.h>
using namespace std;

void printKClosest(int arr[], int n, int x, int k)
{
	priority_queue<pair<int, int>> pq;
	for (int i = 0; i < k; i++)
		pq.push({abs(arr[i] - x), i});
	for (int i = k; i < n; i++)
	{
		int dif = abs(arr[i] - x);
		if (pq.top().first > dif)
		{
			pq.pop();
			pq.push({dif, i});
		}
	}
	while (!pq.empty())
	{
		cout << arr[pq.top().second] << " ";
		pq.pop();
	}
	cout << endl;
}
// * TC: O(nlog(k))

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

	int k, x;
	cout << "k: ";
	cin >> k;
	cout << "x: ";
	cin >> x;

	printKClosest(arr, n, x, k);
}

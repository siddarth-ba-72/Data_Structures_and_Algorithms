#include <iostream>
#include <deque>
using namespace std;

void getMaxSubArr_naive(int arr[], int n, int k)
{
	for (int i = 0; i < n - k + 1; i++)
	{
		int mx = arr[i];
		for (int j = i + 1; j < i + k; j++)
		{
			mx = max(mx, arr[j]);
		}
		cout << mx << " ";
	}
}
// * TC: O(n^2)

void printKMax(int arr[], int n, int k)
{
	deque<int> dq;
	for (int i = 0; i < k; i++)
	{
		while (!dq.empty() && arr[i] >= arr[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	for (int i = k; i < n; i++)
	{
		cout << arr[dq.front()] << " ";
		while (!dq.empty() && dq.front() <= i - k)
			dq.pop_front();
		while (!dq.empty() && arr[i] >= arr[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	cout << arr[dq.front()];
}

int main()
{
	int n;
	cout << "n: ";
	cin >> n;

	int arr[n];
	cout << "arr: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Array:- ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int k;
	cout << "k: ";
	cin >> k;

	// getMaxSubArr_naive(arr, n, k);
	printKMax(arr, n, k);
}

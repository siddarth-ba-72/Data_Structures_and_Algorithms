#include <bits/stdc++.h>
using namespace std;

int purchaseMax(int cost[], int n, int sum)
{
	priority_queue<int, vector<int>, greater<int>> pq;
	int res = 0;
	for (int i = 0; i < n; i++)
		pq.push(cost[i]);
	for (int i = 0; i < n; i++)
	{
		if (pq.top() <= sum)
		{
			sum -= pq.top();
			pq.pop();
			res++;
		}
		else
			break;
	}
	return res;
}

int main()
{
	int n;
	cout << "n: ";
	cin >> n;

	int cost[n];
	cout << "Enter the cost of items: ";
	for (int i = 0; i < n; i++)
		cin >> cost[i];

	int sum;
	cout << "Enter the total amount: ";
	cin >> sum;

	cout << "Maximum items that can be purchased = " << purchaseMax(cost, n, sum) << endl;
}

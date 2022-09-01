#include <bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(10);
	pq.push(15);
	pq.push(5);

	cout << "Size = " << pq.size() << endl;
	cout << "Top = " << pq.top() << endl;

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	int arr[3] = {10, 15, 5};
	priority_queue<int> prq(arr, arr + 3);
	while (!prq.empty())
	{
		cout << prq.top() << " ";
		prq.pop();
	}
	cout << endl;

	return 0;
}
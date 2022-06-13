#include <bits/stdc++.h>
using namespace std;

int minRefills(vector<int> stops, int n, int capacity)
{
	int numOfRefills = 0, currRefill = 0, lastRefill = 0;
	while (currRefill < (n - 1))
	{
		lastRefill = currRefill;
		while (currRefill < (n - 1))
		{
			if ((stops[currRefill + 1] - stops[lastRefill]) <= capacity)
				currRefill++;
			else
				break;
		}
		if (currRefill == lastRefill)
			return -1;
		if (currRefill < (n - 1))
		{
			numOfRefills++;
		}
	}
	return numOfRefills;
}

int main()
{
	int capacity;
	int n;

	cin >> capacity;
	cin >> n;

	vector<int> stops(n);
	for (size_t i = 0; i < n; ++i)
		cin >> stops.at(i);
	cout << minRefills(stops, n, capacity);

	return 0;
}

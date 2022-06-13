#include <bits/stdc++.h>
using namespace std;

int minGroups(float ages[], int n)
{
	int elder = n;
	int curr = 1;
	int groups = 0;
	int start = 0;
	while (curr < elder)
	{
		if (ages[curr] - ages[start] > 1)
		{
			start = curr;
			groups++;
		}
		if (curr == elder - 1)
			groups++;
		curr++;
	}
	return groups;
}

int main()
{
	int n;
	cin >> n;
	float ages[n];
	for (int i = 0; i < n; i++)
		cin >> ages[i];
	cout << minGroups(ages, n) << endl;

	return 0;
}

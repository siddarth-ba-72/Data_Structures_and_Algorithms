#include <bits/stdc++.h>
using namespace std;

// * Naive Solution
int lftMst(string &str)
{
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			if (str[i] == str[j])
				return i;
		}
	}
	return -1;
}

// * Optimized Solution
const int MAX_CHAR = 256;

int leftMost(string &str)
{
	int fIndex[MAX_CHAR] = {0};
	fill(fIndex, fIndex + MAX_CHAR, -1);
	int res = INT_MAX;
	for (int i = 0; i < str.length(); i++)
	{
		int fI = fIndex[str[i]];
		if (fI == -1)
			fIndex[str[i]] = i;
		else
			res = min(res, fI);
	}
	return res == INT_MAX ? -1 : res;
}
// * TC: O(n + MAX_CHAR)
// * AS: O(MAX_CHAR)

// * Efficient Solution
int leftMostRep(string &str)
{
	bool visited[MAX_CHAR];
	fill(visited, visited + MAX_CHAR, false);
	int res = -1;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (visited[str[i]])
			res = i;
		else
			visited[str[i]] = true;
	}
	return res;
}

int main()
{
	string str;
	cout << "Enter a string: ";
	cin >> str;
	cout << leftMostRep(str) << endl;

	return 0;
}

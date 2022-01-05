#include <bits/stdc++.h>
using namespace std;

// * Naive solution
int nonRep(string &str)
{
	for (int i = 0; i < str.size(); i++)
	{
		bool flag = false;
		for (int j = 0; j < str.size(); j++)
		{
			if (i != j && str[i] == str[j])
			{
				flag = true;
				break;
			}
		}
		if (!flag)
			return i;
	}
	return -1;
}
// * TC: O(n^2)

const int MAX_CHAR = 256;

// * Optimized solution
int lfMNonRep(string &str)
{
	int count[MAX_CHAR] = {0};
	for (int i = 0; i < str.length(); i++)
	{
		count[str[i]]++;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (count[str[i]] == 1)
			return i;
	}
	return -1;
}
// * TC: O(n)
// * AS: O(1)

// * Efficient solution
int leftMostNonRep(string &str)
{
	int fI[MAX_CHAR];
	fill(fI, fI + MAX_CHAR, -1);
	for (int i = 0; i < str.length(); i++)
	{
		if (fI[str[i]] == -1)
			fI[str[i]] = i;
		else
			fI[str[i]] = -2;
	}
	int res = INT_MAX;
	for (int i = 0; i < str.length(); i++)
	{
		if (fI[str[i]] > 0)
			res = min(res, fI[str[i]]);
	}
	return res == INT_MAX ? -1 : res;
}

int main()
{
	string str;
	cout << "Enter a string: ";
	cin >> str;
	cout << leftMostNonRep(str) << endl;

	return 0;
}

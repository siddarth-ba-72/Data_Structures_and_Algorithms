#include <bits/stdc++.h>
using namespace std;

// * Naive Solution
bool isAna(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	return s1 == s2;
}

// * Optimized Solution
bool isAnagram(string s1, string s2)
{
	int count = 0;
	if (s1.length() != s2.length())
		return false;
	for (int i = 0; i < s1.length(); i++)
	{
		count = count ^ s1[i];
	}
	for (int i = 0; i < s2.length(); i++)
	{
		count = count ^ s2[i];
	}
	return count == 0;
}

int main()
{
	string s1 = "listen";
	string s2 = "silent";
	if (isAnagram(s1, s2))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

// ? KMP Algorithm

// * Part-1: LPS Array
// ? LPS array is used to find the length of the longest prefix which is also a suffix

// ? Naive Algorithm for LPS array

int longestProPreSuf(string str, int n)
{
	for (int len = n - 1; len > 0; len--)
	{
		bool flag = true;
		for (int i = 0; i < len; i++)
		{
			if (str[i] != str[n - len + i])
				flag = false;
		}
		if (flag)
			return len;
	}
	return 0;
}

void fillLps(string str, int lps[])
{
	for (int i = 0; i < str.length(); i++)
	{
		lps[i] = longestProPreSuf(str, i + 1);
	}
}
// * TC: O(n^3)

// ? Optimized Algorithm for LPS array

void fill_LPS_array(string str, int LPS[])
{
	int n = str.length();
	int len = 0;
	LPS[0] = 0;
	int i = 1;
	while (i < n)
	{
		if (str[i] == str[len])
		{
			len++;
			LPS[i] = len;
			i++;
		}
		else
		{
			if (len == 0)
			{
				LPS[i] = 0;
				i++;
			}
			else
			{
				len = LPS[len - 1];
			}
		}
	}
}

// * Part-2: KMP Algorithm

void KMP_search(string txt, string pat)
{
	int n = txt.length();
	int m = pat.length();
	int LPS[m];
	fill_LPS_array(pat, LPS);
	int i = 0, j = 0;
	while (i < n)
	{
		if (txt[i] == pat[j])
		{
			i++;
			j++;
		}
		if (j == m)
		{
			cout << "Pattern found at index " << i - j << endl;
			j = LPS[j - 1];
		}
		else if (i < n && pat[j] != txt[i])
		{
			if (j == 0)
				i++;
			else
				j = LPS[j - 1];
		}
	}
}
// * TC: O(n)

int main()
{
	string txt = "ABABDABACDABABCABAB";
	string pat = "ABABCABAB";
	KMP_search(txt, pat);

	return 0;
}

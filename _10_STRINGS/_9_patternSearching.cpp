#include <bits/stdc++.h>
using namespace std;
#define d 256
const int q = 101;

// ? Naive Algorithm
void ptrnSrchNaive(string str, string pattern)
{
	int i = 0, j = 0;
	int flag = 0;
	while (i < str.length() && j < pattern.length())
	{
		if (str[i] == pattern[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
		if (j == pattern.length() - 1)
		{
			flag = 1;
			cout << "Pattern found at index " << i - j << endl;
			j = 0;
		}
	}
	if (flag == 0)
		cout << "Pattern not found" << endl;
}
// * TC: O(n-m+1 * m)

// ? Improved Navive Algorithm (Only for Distinct Characters)
void ptrnSrchNaiveImp(string str, string pattern)
{
	int n = str.length();
	int m = pattern.length();
	for (int i = 0; i < n - m; i++)
	{
		int j;
		for (j = 0; j < m; j++)
		{
			if (pattern[j] != str[i + j])
				break;
		}
		if (j == m)
			cout << "Pattern found at index " << i << endl;
		if (j == 0)
			i++;
		else
			i = i + j;
	}
}

// ? Rabin-Karp Algorithm
void rabinKarpPatternSearch(string txt, string pat, int M, int N)
{
	int h = 1;
	for (int i = 1; i <= M - 1; i++)
		h = (h * d) % q;
	int p = 0, t = 0;
	for (int i = 0; i < M; i++)
	{
		p = (p * d + pat[i]) % q;
		t = (t * d + txt[i]) % q;
	}
	for (int i = 0; i <= (N - M); i++)
	{
		if (p == t)
		{
			bool flag = true;
			for (int j = 0; j < M; j++)
				if (txt[i + j] != pat[j])
				{
					flag = false;
					break;
				}
			if (flag == true)
				cout << "Pattern Found at: " << i << endl;
		}
		if (i < N - M)
		{
			t = ((d * (t - txt[i] * h)) + txt[i + M]) % q;
			if (t < 0)
				t = t + q;
		}
	}
}

int main()
{
	string str = "GEEKSFORGEEKS";
	string pattern = "EKS";

	int m = pattern.length();
	int n = str.length();
	// ptrnSrchNaive(str, pattern);
	rabinKarpPatternSearch(str, pattern, m, n);

	return 0;
}

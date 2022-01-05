#include <iostream>
#include <string>
using namespace std;

// ? Itertive Solution
bool subSeqIterative(string &str1, int n, string &str2, int m)
{
	int j = 0;
	for (int i = 0; i < n && j < m; i++)
	{
		if (str1[i] == str2[j])
			j++;
	}
	return j == m;
}
// * TC: O(n + m)
// * AS: O(1)

// ? Recursive Solution
bool subSeqRecursive(string &str1, int n, string &str2, int m)
{
	if (m == 0)
		return true;
	if (n == 0)
		return false;
	if (str1[n - 1] == str2[m - 1])
		return subSeqRecursive(str1, n - 1, str2, m - 1);
	return subSeqRecursive(str1, n - 1, str2, m);
}
// * TC: O(n + m)
// * AS: O(n + m)

int main()
{
	string str1 = "ABCBA";
	string str2 = "ABC";
	if (subSeqIterative(str1, str1.length(), str2, str2.length()))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

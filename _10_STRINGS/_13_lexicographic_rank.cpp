#include <bits/stdc++.h>
using namespace std;
#define CHAR 256

int fact(int n)
{
	return (n <= 1) ? 1 : n * fact(n - 1);
}

int lexicographic_rank(string str)
{
	int rank = 1;
	int n = str.length();
	int permutations = fact(n);
	int counter[CHAR] = {0};
	for (int i = 0; i < n; i++)
		counter[str[i]]++;
	for (int i = 0; i < CHAR; i++)
		counter[i] += (counter[i - 1]);
	for (int i = 0; i < n - 1; i++)
	{
		permutations /= (n - i);
		rank += (counter[str[i] - 1] * permutations);
		for (int j = str[i]; j < CHAR; j++)
			counter[j]--;
	}
	return rank;
}
// * TC: O(n)

int main()
{
	string str = "string";
	cout << lexicographic_rank(str) << endl;

	return 0;
}

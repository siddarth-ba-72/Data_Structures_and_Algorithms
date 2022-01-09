#include <bits/stdc++.h>
using namespace std;
#define CHAR 256

// ? Function to check if the contents of two arrays are equal or not
bool areSameArr(int ct[], int cp[])
{
	for (int i = 0; i < CHAR; i++)
		if (ct[i] != cp[i])
			return false;
	return true;
}

bool isPresent(string txt, string pat)
{
	int CT[CHAR] = {0}, CP[CHAR] = {0};
	for (int i = 0; i < pat.length(); i++)
	{
		CT[txt[i]]++;
		CP[pat[i]]++;
	}
	for (int i = pat.length(); i < txt.length(); i++)
	{
		if (areSameArr(CT, CP))
			return true;
		CT[txt[i]]++;
		CT[txt[i - pat.length()]]--;
	}
	return false;
}
// * TC: O(n * CHAR)
// * AS: Theta(CHAR)

int main()
{
	string s1 = "geeksforgeeks";
	string s2 = "frog";
	cout << isPresent(s1, s2) << endl;
	return 0;
}

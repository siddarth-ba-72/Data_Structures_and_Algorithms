#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str)
{
	int i = 0, j = str.length() - 1;
	while (i < j)
	{
		if (str[i] != str[j])
			return false;
		i++;
		j--;
	}
	return true;
}
// * TC: O(n)
// * AS: O(1)

int main()
{
	string str = "ABCBA";
	if (isPalindrome(str))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

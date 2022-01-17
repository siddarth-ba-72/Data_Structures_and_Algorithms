#include <iostream>
#include <stack>
using namespace std;

bool isMatching(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

bool isBalanaced(string str)
{
	stack<char> st;
	for (char x : str)
	{
		if (x == '(' || x == '{' || x == '[')
			st.push(x);
		else
		{
			if (st.empty())
				return false;
			else
			{
				if (!isMatching(st.top(), x))
					return false;
				else
					st.pop();
			}
		}
	}
	return st.empty();
}
// * TC: O(n)

int main()
{
	string str;
	cout << "Enter a string of brackets only: ";
	cin >> str;
	if (isBalanaced(str))
		cout << "Balanced";
	else
		cout << "Not Balanced";

	return 0;
}

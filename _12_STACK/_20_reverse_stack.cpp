#include <iostream>
#include <stack>
using namespace std;

void push_at_bottom(stack<int> stk, int x)
{
	if (stk.empty())
	{
		stk.push(x);
		return;
	}
	else
	{
		int a = stk.top();
		stk.pop();
		push_at_bottom(stk, x);
		stk.push(a);
	}
}

void reverse(stack<int> stk)
{
	if (stk.empty())
		return;
	else
	{
		int a = stk.top();
		stk.pop();
		reverse(stk);
		push_at_bottom(stk, a);
	}
}

void print(stack<int> stk)
{
	if (stk.empty())
		return;
	else
	{
		int a = stk.top();
		stk.pop();
		print(stk);
		cout << a << " ";
	}
	cout << endl;
}

int main()
{
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);

	push_at_bottom(stk, 5);
	print(stk);

	reverse(stk);
	print(stk);

	return 0;
}

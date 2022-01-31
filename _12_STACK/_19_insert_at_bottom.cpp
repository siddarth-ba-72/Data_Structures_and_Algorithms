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

int main()
{
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);

	push_at_bottom(stk, 5);

	return 0;
}

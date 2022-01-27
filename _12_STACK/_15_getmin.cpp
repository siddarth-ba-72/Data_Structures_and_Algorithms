#include <bits/stdc++.h>
using namespace std;

struct STACK
{

	stack<int> main_stk;
	stack<int> aux_stk;

	void push(int x)
	{

		if (main_stk.empty())
		{
			main_stk.push(x);
			aux_stk.push(x);
			return;
		}

		main_stk.push(x);

		if (aux_stk.top() >= main_stk.top())
			aux_stk.push(x);
	}

	void pop()
	{

		if (aux_stk.top() == main_stk.top())
			aux_stk.pop();
		main_stk.pop();
	}

	int top()
	{
		return main_stk.top();
	}

	int getMin()
	{
		return aux_stk.top();
	}
};

int main()
{
	STACK stack;
	stack.push(4);
	stack.push(5);
	stack.push(8);
	stack.push(1);
	stack.pop();

	cout << " Minimum Element from Stack: " << stack.getMin();

	return 0;
}

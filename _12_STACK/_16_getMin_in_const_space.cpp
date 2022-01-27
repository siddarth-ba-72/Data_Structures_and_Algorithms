#include <bits/stdc++.h>
using namespace std;

struct OptimizedStack
{

	stack<int> stk;
	int minm;

	void push(int x)
	{
		if (stk.empty())
		{
			stk.push(x);
			minm = x;
		}
		else if (x < minm)
		{
			stk.push(2 * x - minm);
			minm = x;
		}
		else
			stk.push(x);
	}

	int pop()
	{
		int t = stk.top();
		stk.pop();
		if (t <= minm)
		{
			int res = minm;
			minm = 2 * minm - t;
			return res;
		}
		else
			return t;
	}

	int top()
	{
		int t = stk.top();
		return t <= minm ? minm : t;
	}

	int getMin()
	{
		return minm;
	}
};

int main()
{
	OptimizedStack os;
	os.push(1);
	os.push(2);
	os.push(3);

	cout << os.getMin() << endl;

	cout << os.pop() << endl;
	cout << os.getMin() << endl;

	return 0;
}

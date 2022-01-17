#include <iostream>
using namespace std;

struct TwoStack
{
	int *array;
	int cap;
	int top1;
	int top2;

	TwoStack(int cap)
	{
		this->cap = cap;
		array = new int[cap];
		top1 = -1;
		top2 = cap;
	}

	void push1(int x)
	{
		if (top1 < top2 - 1)
			array[++top1] = x;
	}

	void push2(int x)
	{
		if (top2 > top1 + 1)
			array[--top2] = x;
	}

	int pop1()
	{
		if (top1 >= 0)
			return array[top1--];
		else
			exit(1);
	}

	int pop2()
	{
		if (top2 < cap)
			return array[top2++];
		else
			exit(1);
	}

	int peek1()
	{
		if (top1 >= 0)
			return array[top1];
		else
			exit(1);
	}

	int peek2()
	{
		if (top2 < cap)
			return array[top2];
		else
			exit(1);
	}

	bool isEmpty1()
	{
		return top1 == -1;
	}

	bool isEmpty2()
	{
		return top2 == cap;
	}

	void print()
	{
		cout << "\nStack 1: " << endl;
		for (int i = top1; i >= 0; i--)
			cout << array[i] << endl;
		cout << "\nStack 2: " << endl;
		for (int i = top2; i < cap; i++)
			cout << array[i] << endl;
	}
};

int main()
{
	TwoStack two_stk(10);

	two_stk.push1(1);
	two_stk.push1(2);
	two_stk.push1(3);
	two_stk.push2(4);
	two_stk.push2(5);
	two_stk.push2(6);

	two_stk.print();

	cout << "\nPop 1: " << two_stk.pop1() << endl;
	cout << "Pop 2: " << two_stk.pop2() << endl;

	two_stk.print();

	cout << "\nPeek 1: " << two_stk.peek1() << endl;
	cout << "Peek 2: " << two_stk.peek2() << endl;

	two_stk.print();

	return 0;
}

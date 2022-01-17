#include <bits/stdc++.h>
using namespace std;

// ? In C++, the stack is implemented using an array.
// ? NOTE: The stack is not dynamic. It is a fixed size array.
// ? For stack to be dynamic(without stack class or linked list), we need to use vector class.

struct MyStack_arrs
{
	int *arr;
	int capacity;
	int top;

	MyStack_arrs(int cap)
	{
		arr = new int[cap];
		capacity = cap;
		top = -1;
	}

	void push(int x)
	{
		if (top == capacity - 1)
		{
			cout << "Stack Overflow" << endl;
			return;
		}
		arr[++top] = x;
	}

	int pop()
	{
		if (top == -1)
		{
			cout << "Stack Underflow" << endl;
			return INT_MIN;
		}
		return arr[top--];
	}

	int peek()
	{
		if (top == -1)
		{
			cout << "Stack Underflow" << endl;
			return INT_MIN;
		}
		return arr[top];
	}

	int size()
	{
		return top + 1;
	}

	bool isEmpty()
	{
		return top == -1;
	}

	void display()
	{
		if (top == -1)
		{
			cout << "Stack is Empty" << endl;
			return;
		}
		cout << "\n-:Stack:-\n";
		for (int i = top; i >= 0; i--)
			cout << arr[i] << endl;
		cout << endl;
	}
};

// ? Stack implementation using vector class makes the stack dynamic.

struct MyStack_vect
{
	vector<int> vect;

	void push(int x)
	{
		vect.push_back(x);
	}

	int pop()
	{
		if (vect.empty())
		{
			cout << "Stack Underflow" << endl;
			return INT_MIN;
		}
		int x = vect.back();
		vect.pop_back();
		return x;
	}

	int peek()
	{
		if (vect.empty())
		{
			cout << "Stack Underflow" << endl;
			return INT_MIN;
		}
		return vect.back();
	}

	int size()
	{
		return vect.size();
	}

	bool isEmpty()
	{
		return vect.empty();
	}

	void print()
	{
		cout << "\n-:Stack:-\n";
		for (int i = vect.size() - 1; i >= 0; i--)
			cout << vect[i] << endl;
		cout << endl;
	}
};

int main()
{
	MyStack_arrs arrstk(5);

	arrstk.push(10);
	arrstk.push(20);
	arrstk.push(30);
	arrstk.push(40);

	arrstk.display();

	arrstk.pop();
	arrstk.pop();

	arrstk.display();

	arrstk.peek();

	MyStack_vect stk;

	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);

	stk.print();

	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();
	stk.pop();

	stk.print();

	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);

	stk.print();

	stk.peek();

	return 0;
}

#include <iostream>
#include <queue>
using namespace std;

struct StackUsingQueue
{
	queue<int> q1, q2;
	int curr_size;
	StackUsingQueue()
	{
		curr_size = 0;
	}

	void push(int x)
	{
		curr_size++;
		q2.push(x);
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		swap(q1, q2);
	}

	void pop()
	{
		if (q1.empty())
			return q1.pop();
		curr_size--;
	}

	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}

	int size()
	{
		return curr_size;
	}
};

int main()
{

	StackUsingQueue s;
	s.push(10);
	s.push(5);
	s.push(15);
	s.push(20);

	cout << "current size: " << s.size() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << "current size: " << s.size() << endl;
	return 0;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void Print(queue<int> &Queue)
{
	for (int i = 0; i < Queue.size(); i++)
	{
		// Restore the queue
		int k = Queue.front();
		cout << k << " ";
		Queue.pop();
		Queue.push(k);
	}
	cout << endl;
}

void reverseQueueIterative(queue<int> &Queue)
{
	stack<int> Stack;
	while (!Queue.empty())
	{
		Stack.push(Queue.front());
		Queue.pop();
	}
	while (!Stack.empty())
	{
		Queue.push(Stack.top());
		Stack.pop();
	}
}

void reverseQueueRecursive(queue<int> q)
{
	if (q.empty())
		return;
	int x = q.front();
	q.pop();
	reverseQueueRecursive(q);
	q.push(x);
}

int main()
{
	queue<int> q;
	q.push(12);
	q.push(5);
	q.push(15);
	q.push(20);

	// Print(q);
	// reverseQueueIterative(q);
	// Print(q);

	reverseQueueRecursive(q);
	Print(q);
}

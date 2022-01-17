#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

struct MyStack
{
	Node *head;
	int size;

	MyStack()
	{
		head = NULL;
		size = 0;
	}

	void push(int x)
	{
		Node *newNode = new Node(x);
		newNode->next = head;
		head = newNode;
		size++;
	}

	int pop()
	{
		if (head == NULL)
		{
			cout << "Stack is empty" << endl;
			return -1;
		}
		else
		{
			Node *temp = head;
			head = head->next;
			delete (temp);
			size--;
			return temp->data;
		}
	}

	int peek()
	{
		if (head == NULL)
		{
			cout << "Stack is empty" << endl;
			return -1;
		}
		return head->data;
	}

	int sizeOfStack()
	{
		return size;
	}

	bool isEmpty()
	{
		return (size == 0);
	}

	void printStack()
	{
		if (head == NULL)
		{
			cout << "Stack is empty" << endl;
			return;
		}
		cout << "\nStack: " << endl;
		Node *temp = head;
		while (temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
		cout << endl;
	}
};

int main()
{
	MyStack stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	stack.printStack();

	cout << "Size of stack: " << stack.sizeOfStack() << endl;
	cout << "Peek: " << stack.peek() << endl;

	cout << "Popped: " << stack.pop() << endl;
	cout << "Popped: " << stack.pop() << endl;

	stack.printStack();

	cout << "Size of stack: " << stack.sizeOfStack() << endl;

	stack.push(60);
	stack.push(70);

	stack.printStack();

	return 0;
}

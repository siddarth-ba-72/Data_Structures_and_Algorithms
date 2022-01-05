#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

void recuriveTraversalPrintLL(Node *head)
{
	if (head == NULL)
		return;
	cout << head->data << " ";
	recuriveTraversalPrintLL(head->next);
}

int main()
{
}

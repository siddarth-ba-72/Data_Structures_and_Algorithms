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

void cllTraversal(Node *head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	else
	{
		Node *curr = head;
		do
		{
			cout << curr->data << " ";
			curr = curr->next;
		} while (curr != head);
		cout << endl;
	}
}

int main()
{
	Node *head = new Node(5);
	head->next = new Node(6);
	head->next->next = new Node(7);
	head->next->next->next = new Node(8);
	head->next->next->next->next = new Node(9);
	head->next->next->next->next->next = new Node(10);
	head->next->next->next->next->next->next = head;
	cllTraversal(head);
	return 0;
}

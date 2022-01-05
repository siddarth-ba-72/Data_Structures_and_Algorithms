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

// Naive solution
Node *insertBeginCll1(Node *head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	Node *cur = head;
	while (cur->next != head)
	{
		cur = cur->next;
	}
	cur->next = temp;
	temp->next = head;
	return temp;
}
// * TC: O(n)

// Efficient solution
Node *insertBeginCll2(Node *head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	else
	{
		temp->next = head->next;
		head->next = temp;
		int t = head->data;
		head->data = temp->data;
		temp->data = t;
		return head;
	}
}
// * TC: O(1)

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
	Node *head = NULL;
	head = insertBeginCll2(head, 10);
	cllTraversal(head);
	head = insertBeginCll2(head, 20);
	cllTraversal(head);
	head = insertBeginCll2(head, 30);
	cllTraversal(head);
	head = insertBeginCll2(head, 40);
	cllTraversal(head);
	return 0;
}

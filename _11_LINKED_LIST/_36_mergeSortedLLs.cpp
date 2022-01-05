#include <bits/stdc++.h>
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

Node *insertAtEnd(Node *head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
		return temp;
	Node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = temp;
	return head;
}

void traverseAndPrintLinkedList(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}

Node *mergeSortedLLs(Node *a, Node *b)
{
	if (a == NULL)
		return b;
	if (b == NULL)
		return a;
	Node *head = NULL;
	Node *tail = NULL;
	if (a->data <= b->data)
	{
		head = tail = a;
		a = a->next;
	}
	else
	{
		head = tail = b;
		b = b->next;
	}
	while (a != NULL && b != NULL)
	{
		if (a->data <= b->data)
		{
			tail->next = a;
			tail = a;
			a = a->next;
		}
		else
		{
			tail->next = b;
			tail = b;
			b = b->next;
		}
	}
	if (a == NULL)
		tail->next = b;
	else
		tail->next = a;
	return head;
}

int main()
{
	Node *head1 = NULL;
	head1 = insertAtEnd(head1, 10);
	head1 = insertAtEnd(head1, 20);
	head1 = insertAtEnd(head1, 30);
	head1 = insertAtEnd(head1, 40);
	traverseAndPrintLinkedList(head1);
	cout << endl;
	Node *head2 = NULL;
	head2 = insertAtEnd(head2, 5);
	head2 = insertAtEnd(head2, 15);
	head2 = insertAtEnd(head2, 17);
	head2 = insertAtEnd(head2, 18);
	head2 = insertAtEnd(head2, 35);
	traverseAndPrintLinkedList(head2);
	cout << endl;
	Node *head3 = mergeSortedLLs(head1, head2);
	traverseAndPrintLinkedList(head3);

	return 0;
}

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(int x)
	{
		data = x;
		next = NULL;
		prev = NULL;
	}
};

Node *reverseDll(Node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node *prev = NULL;
	Node *curr = head;
	while (curr != NULL)
	{
		prev = curr->prev;
		curr->prev = curr->next;
		curr->prev = prev;
		curr = curr->prev;
	}
	return prev->prev;
}

void traverseAndPrintLinkedList(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}

int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	head->next = temp1;
	temp1->prev = head;
	temp1->next = temp2;
	temp2->prev = temp1;
	// Node *head = NULL;
	traverseAndPrintLinkedList(head);
	cout << endl;
	head = reverseDll(head);
	traverseAndPrintLinkedList(head);
	return 0;
}

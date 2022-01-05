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

Node *sortedInsertionLL(Node *head, int k)
{
	Node *temp = new Node(k);
	Node *curr = head;
	if (head->data > k)
	{
		temp->next = head;
		return temp;
	}
	while (curr->next != NULL && curr->next->data < k)
	{
		curr = curr->next;
	}
	temp->next = curr->next;
	curr->next = temp;
	return head;
}
// * TC: Theta(n)

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

int main()
{
	Node *head = NULL;
	head = insertAtEnd(head, 10);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 20);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 30);
	traverseAndPrintLinkedList(head);
	head = sortedInsertionLL(head, 40);
	traverseAndPrintLinkedList(head);
}

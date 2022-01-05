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

void removeDuplicates(Node *head)
{
	if (head == NULL || head->next == NULL)
		return;
	Node *curr = head;
	while (curr != NULL && curr->next != NULL)
	{
		if (curr->data == curr->next->data)
		{
			Node *temp = curr->next;
			curr->next = curr->next->next;
			delete (temp);
		}
		else
		{
			curr = curr->next;
		}
	}
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

int main()
{
	Node *head = NULL;
	head = insertAtEnd(head, 10);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 20);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 20);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 30);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 30);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 30);
	traverseAndPrintLinkedList(head);

	removeDuplicates(head);
	traverseAndPrintLinkedList(head);

	return 0;
}

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

// ? Inserts the node at the end of the list
Node *insertLLNode(Node *head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
	{
		head = temp;
		return head;
	}
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
}

int main()
{
	Node *Head = new Node(0);
	Head = insertLLNode(Head, 1);
	Head = insertLLNode(Head, 2);
	Head = insertLLNode(Head, 3);
	traverseAndPrintLinkedList(Head);
	return 0;
}

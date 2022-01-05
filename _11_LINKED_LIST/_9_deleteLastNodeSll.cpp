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

Node *deleteLastNodeFromSll(Node *head)
{
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
	{
		delete (head);
		return NULL;
	}
	Node *curr = head;
	while (curr->next->next != NULL)
	{
		curr = curr->next;
	}
	delete (curr->next);
	curr->next = NULL;
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
}

int main()
{
	Node *head = new Node(10);
	head = insertLLNode(head, 20);
	head = insertLLNode(head, 30);
	head = insertLLNode(head, 40);
	head = insertLLNode(head, 50);
	head = insertLLNode(head, 60);
	head = insertLLNode(head, 70);
	head = insertLLNode(head, 80);
	head = insertLLNode(head, 90);
	traverseAndPrintLinkedList(head);
	cout << endl;
	head = deleteLastNodeFromSll(head);
	traverseAndPrintLinkedList(head);
	return 0;
}

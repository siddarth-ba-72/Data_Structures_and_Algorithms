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

Node *insertAtBegin(Node *head, int x)
{
	Node *temp = new Node(x);
	temp->next = head;
	return temp;
}
// * TC: O(1)

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
	Node *head = NULL;
	head = insertAtBegin(head, 10);
	head = insertAtBegin(head, 20);
	head = insertAtBegin(head, 30);
	head = insertAtBegin(head, 40);
	traverseAndPrintLinkedList(head);
	return 0;
}

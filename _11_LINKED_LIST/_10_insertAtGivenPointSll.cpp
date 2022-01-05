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

Node *insertAtGivenPos(Node *head)
{
	int pos, data;
	cout << "Data: ";
	cin >> data;
	cout << "Pos: ";
	cin >> pos;
	Node *temp = new Node(data);
	if (pos == 1)
	{
		temp->next = head;
		return temp;
	}
	Node *curr = head;
	for (int i = 1; i <= pos - 2 && curr != NULL; i++)
	{
		curr = curr->next;
	}
	if (curr == NULL)
		return head;
	temp->next = curr->next;
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
	Node *head = new Node(10);
	head = insertLLNode(head, 20);
	head = insertLLNode(head, 30);
	head = insertLLNode(head, 40);
	head = insertLLNode(head, 50);
	head = insertLLNode(head, 60);
	head = insertLLNode(head, 70);
	head = insertLLNode(head, 80);
	traverseAndPrintLinkedList(head);
	cout << endl;
	head = insertAtGivenPos(head);
	traverseAndPrintLinkedList(head);
	return 0;
}

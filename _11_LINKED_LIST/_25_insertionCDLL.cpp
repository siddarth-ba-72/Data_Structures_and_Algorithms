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

Node *insertBeginCDLL(Node *head, int k)
{
	if (head == NULL)
	{
		head = new Node(k);
		head->next = head;
		head->prev = head;
		return head;
	}
	Node *temp = new Node(k);
	Node *curr = head->prev;
	head->prev = temp;
	temp->next = head;
	temp->prev = curr;
	curr->next = temp;
	return temp;
}

Node *insertRearCDLL(Node *head, int k)
{
	if (head == NULL)
	{
		head = new Node(k);
		head->next = head;
		head->prev = head;
		return head;
	}
	Node *temp = new Node(k);
	Node *curr = head->prev;
	curr->next = temp;
	temp->next = head;
	temp->prev = curr;
	head->prev = temp;
	return head;
}

void traverseCDLL(Node *head)
{
	if (head == NULL)
		return;
	Node *curr = head;
	do
	{
		cout << curr->data << " ";
		curr = curr->next;
	} while (curr != head);
	cout << endl;
}

int main()
{
	Node *head = NULL;
	head = insertBeginCDLL(head, 1);
	traverseCDLL(head);
	head = insertBeginCDLL(head, 2);
	traverseCDLL(head);
	head = insertBeginCDLL(head, 3);
	traverseCDLL(head);
	head = insertBeginCDLL(head, 4);
	traverseCDLL(head);
	head = insertRearCDLL(head, 5);
	traverseCDLL(head);
	head = insertRearCDLL(head, 6);
	traverseCDLL(head);
	head = insertRearCDLL(head, 7);
	traverseCDLL(head);
	head = insertRearCDLL(head, 8);
	traverseCDLL(head);
}

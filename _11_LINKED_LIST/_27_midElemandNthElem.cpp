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

// ? MIDDLE ELEMENT

// * Naive approach
void midElemNaive(Node *head)
{
	if (head == NULL)
		return;
	int count = 0;
	Node *curr;
	for (curr = head; curr != NULL; curr = curr->next)
		count++;
	curr = head;
	for (int i = 0; i < count / 2; i++)
		curr = curr->next;
	cout << curr->data;
}

// * Optimized approach
int middleElement(Node *head)
{
	if (head == NULL)
		return -1;
	Node *slow = head;
	Node *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
}
// * TC: Theta(log(n))

// ? NTH ELEMENT

// * Using length of the Linked list
void nthElemFromEnd1(Node *head, int n)
{
	if (head == NULL)
		return;
	Node *curr = head;
	int c = 0;
	while (curr != NULL)
	{
		c++;
		curr = curr->next;
	}
	int k = c + 1 - n;
	if (k <= 0)
		return;
	curr = head;
	while (k != 1)
	{
		curr = curr->next;
		k--;
	}
	cout << curr->data << endl;
}

// * Using two pointer algorithm
void nthElemFromEnd2(Node *head, int n)
{
	Node *first, *second;
	first = head;
	second = head;
	for (int i = 0; i < n; i++)
	{
		if (first == NULL)
			return;
		first = first->next;
	}
	while (first != NULL)
	{
		first = first->next;
		second = second->next;
	}
	cout << second->data << endl;
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
	head = insertAtEnd(head, 30);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 40);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 50);
	traverseAndPrintLinkedList(head);
	// cout << middleElement(head) << endl;
	nthElemFromEnd2(head, 5);

	return 0;
}

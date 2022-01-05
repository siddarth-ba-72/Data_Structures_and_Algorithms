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

// ? Method-1:
void pairwiseSwap(Node *head)
{
	Node *curr = head;
	while (curr != NULL & curr->next != NULL)
	{
		swap(curr->data, curr->next->data);
		curr = curr->next->next;
	}
}

// ? Method-2:
Node *pairwiseSwapping(Node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node *curr = head->next->next;
	Node *prev = head;
	head = head->next;
	head->next = prev;
	while (curr != NULL && curr->next != NULL)
	{
		prev->next = curr->next;
		prev = curr;
		Node *next = curr->next->next;
		curr->next->next = curr;
		curr = next;
	}
	prev->next = curr;
	return head;
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

	head = pairwiseSwapping(head);
	traverseAndPrintLinkedList(head);

	return 0;
}

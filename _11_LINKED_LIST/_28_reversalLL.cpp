#include <iostream>
#include <vector>
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

// ? Iterative Method

// * Naive approach:
Node *revListNaive(Node *head)
{
	vector<int> arr;
	for (Node *curr = head; curr != NULL; curr = curr->next)
	{
		arr.push_back(curr->data);
	}
	for (Node *curr = head; curr != NULL; curr = curr->next)
	{
		curr->data = arr.back();
		arr.pop_back();
	}
	return head;
}
// * TC: O(n)
// * AS: O(n)

// * Better approach:
Node *reverseLL(Node *head)
{
	Node *curr = head;
	Node *prev = NULL;
	while (curr != NULL)
	{
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}
// * TC: O(n)
// * AS: O(1)

// ? Recursive Method

Node *revLLRec(Node *head)
{
	if (head == NULL || head->next == NULL)
		return head;
	Node *rest_head = revLLRec(head->next);
	Node *rest_tail = head->next;
	rest_tail->next = head;
	head->next = NULL;
	return rest_head;
}

// ? Reverse in the groups of K

// * Recurive
Node *reverseInKRec(Node *head, int k)
{
	Node *curr = head;
	Node *prev = NULL;
	Node *next = NULL;
	int count = 0;
	while (curr != NULL && count < k)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	if (next != NULL)
	{
		Node *rest_head = reverseInKRec(next, k);
		head->next = rest_head;
	}
	return prev;
}

// * Iterative
// Node *reverseInKIter(Node *head, int k)
// {

// }

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
	head = insertAtEnd(head, 60);
	traverseAndPrintLinkedList(head);
	head = insertAtEnd(head, 70);
	traverseAndPrintLinkedList(head);

	// head = reverseLL(head);
	// head = revLLRec(head);
	head = reverseInKRec(head, 3);
	traverseAndPrintLinkedList(head);

	return 0;
}

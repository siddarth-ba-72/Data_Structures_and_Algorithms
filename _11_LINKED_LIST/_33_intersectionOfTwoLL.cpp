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

// ? Method-1: Hashing

int intersectionHash(Node *head1, Node *head2)
{
	unordered_set<Node *> hs;
	Node *curr = head1;
	while (curr != NULL)
	{
		hs.insert(curr);
		curr = curr->next;
	}
	curr = head2;
	while (curr != NULL)
	{
		if (hs.find(curr) != hs.end())
			return curr->data;
		curr = curr->next;
	}
	return -1;
}

// ? Method-2: Two Pointers

int getNodesCounts(Node *head)
{
	int n = 0;
	Node *curr = head;
	while (curr != NULL)
	{
		n++;
		curr = curr->next;
	}
	return n;
}

int _getIntersection(int d, Node *head1, Node *head2)
{
	Node *curr1 = head1;
	Node *curr2 = head2;
	for (int i = 0; i < d; i++)
	{
		if (curr1 == NULL)
			return -1;
		curr1 = curr1->next;
	}
	while (curr1 != NULL && curr2 != NULL)
	{
		if (curr1 == curr2)
			return curr1->data;
		curr1 = curr1->next;
		curr2 = curr2->next;
	}
}

int getIntersectionPoint(Node *head1, Node *head2)
{
	int c1 = getNodesCounts(head1);
	int c2 = getNodesCounts(head2);
	int d = abs(c1 - c2);
	if (c1 > c2)
		return _getIntersection(d, head1, head2);
	else
		return _getIntersection(d, head2, head1);
}

void printlist(Node *head)
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

	Node *newNode;

	Node *head1 = new Node(10);
	Node *head2 = new Node(3);

	newNode = new Node(6);
	head2->next = newNode;

	newNode = new Node(9);
	head2->next->next = newNode;

	newNode = new Node(15);
	head1->next = newNode;
	head2->next->next->next = newNode;

	newNode = new Node(30);
	head1->next->next = newNode;

	head1->next->next->next = NULL;

	// cout << intersectionHash(head1, head2);
	cout << getIntersectionPoint(head1, head2);
}

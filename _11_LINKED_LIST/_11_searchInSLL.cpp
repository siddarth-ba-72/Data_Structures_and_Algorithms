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

// ? Iterative Solution
int searchNodeDataIterative(Node *head, int x)
{
	int pos = 1;
	Node *curr = head;
	while (curr != NULL)
	{
		if (curr->data == x)
		{
			return pos;
		}
		else
		{
			pos++;
			curr = curr->next;
		}
	}
	return -1;
}
// * TC: O(n)
// * AS: Theta(1)

// ? Recursive Solution
int searchNodeDataRecursive(Node *head, int x)
{
	if (head == NULL)
		return -1;
	if (head->data == x)
		return 1;
	else
	{
		int res = searchNodeDataRecursive(head->next, x);
		if (res == -1)
			return -1;
		else
			return (res + 1);
	}
}
// * TC: O(n)
// * AS: O(n)

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
	int x;
	cout << "Enter the data to search: ";
	cin >> x;
	cout << "Pos: (Iterative) " << searchNodeDataIterative(head, x) << endl;
	cout << "Pos: (Recursive) " << searchNodeDataIterative(head, x) << endl;
}

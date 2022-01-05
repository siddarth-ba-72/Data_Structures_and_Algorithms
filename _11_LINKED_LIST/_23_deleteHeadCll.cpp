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

// * Naive solution
Node *deleteHeadNaive(Node *head)
{
	if (head == NULL)
		return NULL;
	if (head->next == head)
	{
		delete (head);
		return NULL;
	}
	Node *curr = head;
	while (curr->next != head)
	{
		curr = curr->next;
	}
	Node *temp = head;
	curr->next = head->next;
	head = head->next;
	delete (temp);
	return head;
}
// * TC: Theta(n)

Node *deleteHead(Node *head)
{
	if (head == NULL)
		return head;
	if (head->next == head)
	{
		delete (head);
		return head;
	}
	head->data = head->next->data;
	Node *temp = head->next;
	head->next = temp->next;
	delete (temp);
	return head;
}
// * TC: Theta(1)

Node *insertRear2(Node *head, int x)
{
	Node *temp = new Node(x);
	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	temp->next = head->next;
	head->next = temp;
	int t = temp->data;
	temp->data = head->data;
	head->data = t;
	return temp;
}

void cllTraversal(Node *head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	else
	{
		Node *curr = head;
		do
		{
			cout << curr->data << " ";
			curr = curr->next;
		} while (curr != head);
		cout << endl;
	}
}

int main()
{
	Node *head = NULL;
	head = insertRear2(head, 10);
	cllTraversal(head);
	head = insertRear2(head, 20);
	cllTraversal(head);
	head = insertRear2(head, 30);
	cllTraversal(head);
	head = insertRear2(head, 40);
	cllTraversal(head);
	head = deleteHead(head);
	cllTraversal(head);
}

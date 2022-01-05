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

Node *deleteKthNode(Node *head, int k)
{
	if (head == NULL)
		return NULL;
	if (k == 1)
	{
		Node *temp = head->next;
		head->data = temp->data;
		head->next = temp->next;
		delete (temp);
		return head;
	}
	Node *curr = head;
	for (int i = 0; i < k - 2; i++)
	{
		curr = curr->next;
		if (curr->next == head)
			return head;
	}
	Node *temp = curr->next;
	curr->next = temp->next;
	delete (temp);
	return head;
}

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
	head = deleteKthNode(head, 3);
	cllTraversal(head);
}
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

int main()
{
	Node *head = new Node(5);
	head->next = new Node(15);
	head->next->next = new Node(25);
	head->next->next->next = new Node(35);
	head->next->next->next->next = head;
}

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next; //? address of the next Node -- self-referential structure
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	head->next = temp1;
	temp1->next = temp2;

	// * shorter implementation
	Node *Head = new Node(0);
	Head->next = new Node(10);
	Head->next->next = new Node(20);
}

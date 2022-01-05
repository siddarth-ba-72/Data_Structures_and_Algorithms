#include <iostream>
#include <vector>
#include <unordered_set>
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

bool isLoop(Node *head)
{
	Node *temp = new Node(0);
	Node *curr = head;
	while (curr != NULL)
	{
		if (curr->next == NULL)
			return false;
		if (curr->next == temp)
			return true;
		Node *curr_next = curr->next;
		curr->next = temp;
		curr = curr_next;
	}
	return false;
}

// ? Hashing method

bool isLoopLL(Node *head)
{
	unordered_set<Node *> hs;
	for (Node *curr = head; curr != NULL; curr = curr->next)
	{
		if (hs.find(curr) != hs.end())
			return true;
		hs.insert(curr);
	}
	return false;
}
// * TC: O(n)
// * AS: O(n)

// ? FLOYD'S CYCLE DETECTION ALGORITHM

bool isLoopFCDA(Node *head)
{
	Node *slowptr = head;
	Node *fastptr = head;
	while (fastptr != NULL && fastptr->next != NULL)
	{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
		if (slowptr == fastptr)
			return true;
	}
	return false;
}
// * TC: O(n)

// ? Delete Loop

void detectAndRemoveLoop(Node *head)
{
	Node *slow = head;
	Node *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow != fast)
		return;
	int n = 0;
	Node *curr = slow;
	do
	{
		curr = curr->next;
		n++;
	} while (curr != slow);
	cout << "Number of Nodes in loop: " << n << endl;
	slow = head;
	while (slow->next != fast->next)
	{
		slow = slow->next;
		fast = fast->next;
	}
	cout << "First element in Loop: " << fast->data << endl;
	fast->next = NULL;
}

int main()
{
	Node *head = new Node(15);
	head->next = new Node(10);
	head->next->next = new Node(12);
	head->next->next->next = new Node(20);
	head->next->next->next->next = head->next;
	if (isLoopLL(head))
		cout << "Loop found" << endl;
	else
		cout << "No Loop" << endl;
	detectAndRemoveLoop(head);
	if (isLoopLL(head))
		cout << "Loop found" << endl;
	else
		cout << "No Loop" << endl;
	return 0;
}

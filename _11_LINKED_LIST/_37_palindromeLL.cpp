#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	Node *next;
	Node(char x)
	{
		data = x;
		next = NULL;
	}
};

Node *insertAtEnd(Node *head, char x)
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

// ? Naive approach using stack
bool isPalindrome(Node *head)
{
	stack<char> st;
	Node *curr = head;
	while (curr != NULL)
	{
		st.push(curr->data);
		curr = curr->next;
	}
	curr = head;
	while (curr != NULL)
	{
		if (st.top() != curr->data)
			return false;
		st.pop();
		curr = curr->next;
	}
	return true;
}

// ? Efficient approach
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

bool palindromeLL(Node *head)
{
	if (head == NULL)
		return true;
	Node *slow = head, *fast = head;
	while (fast->next != NULL && fast->next->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	Node *rev = reverseLL(slow->next);
	Node *curr = head;
	while (rev != NULL)
	{
		if (rev->data != curr->data)
			return false;
		rev = rev->next;
		curr = curr->next;
	}
	return true;
}
// * TC: Theta(n)
// * AS: Theta(1)

int main()
{
	Node *head1 = NULL;
	head1 = insertAtEnd(head1, 'r');
	head1 = insertAtEnd(head1, 'a');
	head1 = insertAtEnd(head1, 'd');
	head1 = insertAtEnd(head1, 'a');
	head1 = insertAtEnd(head1, 'r');
	traverseAndPrintLinkedList(head1);
	if (palindromeLL(head1))
		cout << "Palindrome" << endl;
	else
		cout << "Not Palindrome" << endl;

	cout << endl;

	Node *head2 = NULL;
	head2 = insertAtEnd(head2, 'r');
	head2 = insertAtEnd(head2, 'a');
	head2 = insertAtEnd(head2, 'd');
	traverseAndPrintLinkedList(head2);
	if (palindromeLL(head1))
		cout << "Palindrome" << endl;
	else
		cout << "Not Palindrome" << endl;

	return 0;
}

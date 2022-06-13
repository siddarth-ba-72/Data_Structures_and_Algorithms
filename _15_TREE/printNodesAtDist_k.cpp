#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;

	Node(int k)
	{
		data = k;
		left = NULL;
		right = NULL;
	}

	void printNodesAtK(int k, Node *root)
	{
		if (root == NULL)
			return;
		if (k == 0)
			cout << root->data << " ";
		printNodesAtK(k - 1, root->left);
		printNodesAtK(k - 1, root->right);
	}
	// * TC: O(n)
};

int main()
{
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->right = new Node(70);

	root->printNodesAtK(2, root);
	return 0;
}

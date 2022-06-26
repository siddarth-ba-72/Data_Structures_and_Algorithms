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

	void inorderTraversal(Node *root)
	{
		if (root == NULL)
			return;
		inorderTraversal(root->left);
		cout << root->data << " ";
		inorderTraversal(root->right);
	}

	void preorderTraversal(Node *root)
	{
		if (root == NULL)
			return;
		cout << root->data << " ";
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}

	void postorderTraversal(Node *root)
	{
		if (root == NULL)
			return;
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		cout << root->data << " ";
	}

	int heightOfATree(Node *root)
	{
		if (root == NULL)
			return 0;
		return 1 + max(heightOfATree(root->left), heightOfATree(root->right));
	}

	int numOfNodes(Node *root)
	{
		if (root == NULL)
			return 0;
		return 1 + numOfNodes(root->left) + numOfNodes(root->right);
	}
	// * TC: O(n)

	int maxNodeValue(Node *root)
	{
		if (root == NULL)
			return 0;
		return max(maxNodeValue(root->left), maxNodeValue(root->right));
	}
	// * TC: O(n)
};

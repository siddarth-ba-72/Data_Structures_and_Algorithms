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
};

int heightOfATree(Node *root)
{
	if (root == NULL)
		return 0;
	return 1 + max(heightOfATree(root->left), heightOfATree(root->right));
}

// * Naive solution
bool checkBalancedTreeNaive(Node *root)
{
	if (root == NULL)
		return true;
	int lh = heightOfATree(root->left);
	int rh = heightOfATree(root->right);
	if (abs(lh - rh) > 1)
		return false;
	return checkBalancedTreeNaive(root->left) && checkBalancedTreeNaive(root->right);
}
// * TC: O(n^2)

// * Optimized solution
int isBalanced(Node *root)
{
	if (root == NULL)
		return 0;
	int lh = isBalanced(root->left);
	if (lh == -1)
		return -1;
	int rh = isBalanced(root->right);
	if (rh == -1)
		return -1;
	if (abs(lh - rh) > 1)
		return -1;
	return 1 + max(lh, rh);
}
// * TC: O(n)

int main()
{
	Node *root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(12);
	root->left->left = new Node(3);
	root->left->right = new Node(5);

	// cout << checkBalancedTreeNaive(root) << endl;
	cout << isBalanced(root) << endl;
	return 0;
}

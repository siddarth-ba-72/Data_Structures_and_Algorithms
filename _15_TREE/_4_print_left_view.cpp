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

void printLeftView(Node *root, int level)
{
	int maxLevel = 0;
	if (root == NULL)
		return;
	if (maxLevel < level)
	{
		cout << root->data << " ";
		maxLevel = level;
	}
	printLeftView(root->left, level + 1);
	printLeftView(root->right, level + 1);
}
// * TC: O(n)
// * AS: Theta(Height)

int main()
{
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->right = new Node(70);

	printLeftView(root, 1);
	return 0;
}

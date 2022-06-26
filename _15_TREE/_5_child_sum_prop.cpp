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

bool childrenSumProperty(Node *root)
{
	if (root == NULL)
		return true;
	if (root->left == NULL && root->right == NULL)
		return true;
	int sum = 0;
	if (root->left != NULL)
		sum += root->left->data;
	if (root->right != NULL)
		sum += root->right->data;
	return (root->data == sum) && childrenSumProperty(root->left) && childrenSumProperty(root->right);
}
// * TC: O(n)
// * AS: O(Height)

int main()
{
	Node *root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(12);
	root->left->left = new Node(3);
	root->left->right = new Node(5);

	cout << childrenSumProperty(root) << endl;
	return 0;
}

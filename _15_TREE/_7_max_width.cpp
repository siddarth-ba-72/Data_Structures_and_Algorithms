#include <iostream>
#include <queue>
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

int maxWidth(Node *root)
{
	if (root == NULL)
		return 0;
	queue<Node *> q;
	q.push(root);
	int res = 0;
	while (q.empty() == false)
	{
		int count = q.size();
		res = max(res, count);
		for (int i = 0; i < count; i++)
		{
			Node *curr = q.front();
			q.pop();
			if (curr->left != NULL)
				q.push(curr->left);
			if (curr->right)
				q.push(curr->right);
		}
	}
	return res;
}
// * TC: Theta(n)
// * AS: Theta(maxW)

int main()
{
	Node *root = new Node(8);
	root->left = new Node(9);
	root->right = new Node(10);
	root->left->left = new Node(11);
	root->left->right = new Node(12);
	root->right->left = new Node(13);
	root->right->right = new Node(14);
	int maxW = maxWidth(root);

	cout << "Max Width: " << maxW << endl;
	return 0;
}

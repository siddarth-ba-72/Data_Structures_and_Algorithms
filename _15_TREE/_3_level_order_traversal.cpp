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

	void levelOrder(Node *root)
	{
		if (root == NULL)
			return;
		queue<Node *> q;
		q.push(root);
		while (!q.empty())
		{
			Node *temp = q.front();
			q.pop();
			cout << temp->data << " ";
			if (temp->left)
				q.push(temp->left);
			if (temp->right)
				q.push(temp->right);
		}
	}
	// * TC: Theta(n)
	// * AS: O(n)
};

int main()
{
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->right = new Node(70);

	root->levelOrder(root);
	return 0;
}

// leaf on same level

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};

struct Node* newNode(int data)
{
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
	node->data = data;
	node->left = node->right = NULL;
	return node;
}

bool checkUtil(struct Node *root,int level, int *leafLevel)
{
	if (root == NULL) return true;
	if (root->left == NULL &&
		root->right == NULL)
	{
		if (*leafLevel == 0)
		{
			*leafLevel = level;
			return true;
		}
		return (level == *leafLevel);
	}
	return checkUtil(root->left, level + 1, leafLevel) && checkUtil(root->right, level + 1, leafLevel);
}

bool check(struct Node *root)
{
	int level = 0, leafLevel = 0;
	return checkUtil(root, level, &leafLevel);
}

int main()
{
	struct Node *root = newNode(12);
	root->left = newNode(5);
	root->left->left = newNode(3);
	root->left->right = newNode(9);
	root->left->left->left = newNode(1);
	root->left->right->left = newNode(1);
	if (check(root))
		cout << "Leaves are at same level\n";
	else
		cout << "Leaves are not at same level\n";
	getchar();
	return 0;
}
#include <bits/stdc++.h>
using namespace std;


// Binary Search Tree
// The left  subtree of a node contains only nodes with keys less than the nodes key
// The right subtree of a node contains only nodes with keys more than the nodes key
// The left and right subtree must also be a BST, 
// There must be no duplicate nodes.

struct Node{
	int data;
	Node* left;
	Node* right;

	Node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

Node* insertBST(Node* root,int val)
{
	if(root == NULL)
	{
		return new Node(val);
	}
	if(val < root->data)
	{
		root->left = insertBST(root->left,val);
	}
	else
	{
		root->right=insertBST(root->right,val);
	}
	return root;
}

void printInorder(Node* root)
{
	if(root == NULL)
	{
		return;
	}
	printInorder(root->left);
	cout<<root->data<<" ";
	printInorder(root->right);
}

int main()
{
	Node* root = NULL;
	root = insertBST(root,5);
	insertBST(root,3);
	insertBST(root,9);
	insertBST(root,10);
	insertBST(root,1);
	insertBST(root,2);

	printInorder(root);
	cout<<endl;

	return 0;
}
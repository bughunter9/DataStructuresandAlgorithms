#include <bits/stdc++.h>
using namespace std;

// Sum Replacement : Replacing the value of each node with the sum of all subtree nodes and itself

struct Node{

	int data;
	struct Node* left;
	struct Node* right;

	Node(int val)
	{
		data= val;
		left= NULL;
		right= NULL;
	}
};


void sumReplace(Node* node)
{
	if(node==NULL)
	{
		return;
	}
	sumReplace(node->right);
	sumReplace(node->left);

	if(node->left != NULL)
	{
		node->data += node->left->data;
	}
	if(node->right != NULL)
	{
		node->data += node->right->data;
	}
}


void preorder(Node* node)
{
	if(node==NULL)
	{
		return;
	}
	cout<<node->data<<" ";
	preorder(node->left);
	preorder(node->right);
}


int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->right->right->left=new Node(8);
	root->right->right->right=new Node(9);

	preorder(root);
	cout<<endl;
	sumReplace(root);
	preorder(root);
	cout<<endl;


}
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


Node* searchInBST(Node* root, int key)
{

	if(root == NULL)
	{
		return NULL;
	}

	if(root->data == key)
	{
		return root;
	}

	if(root->data < key)
	{
		return searchInBST(root->right,key);
	}


	return searchInBST(root->left,key);
	
}

Node* inorderSucc(Node* root)
{
	Node* current = root;
	while(current && current->left != NULL)
	{
		current=current->left;
	}
	return current;
}


Node* deleteInBST(Node* root,int key)
{
	if(key < root->data)
	{
		root->left=deleteInBST(root->left,key);
	}
	else if(key > root->data)
	{
		root->right=deleteInBST(root->right,key);
	}
	else
	{
		if(root->left == NULL)
		{
			Node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL)
		{
			Node* temp=root->left;
			free(root);
			return temp;
		}
		Node* temp=inorderSucc(root->right);
		root->data = temp->data;
		root->right = deleteInBST(root->right,temp->data);
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
	Node* root=new Node(3);
	root->left=new Node(2);
	root->right=new Node(8);
	root->left->left=new Node(1);
	root->right->left=new Node(6);
	root->right->right=new Node(11);
	root->right->right->left=new Node(10);
	root->right->right->right=new Node(19);

	// if(searchInBST(root,9) == NULL)
	// {
	// 	cout<<"Does not exist"<<endl;
	// }
	// else
	// {
	// 	cout<<"Exists"<<endl;
	// }
	printInorder(root);
	cout<<endl;
	root = deleteInBST(root,11);
	printInorder(root);
	cout<<endl;
	return 0;
}
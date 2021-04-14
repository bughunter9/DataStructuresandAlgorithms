#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;


struct Node{
	int data;
	Node* right;
	Node* left;

	Node(int value)
	{
		data=value;
		right=NULL;
		left=NULL;
	}	
};


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void calcPointers(Node* root, Node** first,Node** mid,Node** last,Node** prev)
{
	if(root == NULL)
	{
		return;
	}
	calcPointers(root->left,first,mid,last,prev);

	if(*prev && root->data < (*prev)->data)
	{
		if(!*first)
		{
			*first = *prev;
			*mid = root;
		}
		else
		{
			*last = root;
		}
		*prev=root;
		calcPointers(root->right,first,mid,last,prev);
	}
}


void restoreBST(Node* root)
{
	Node* first=NULL;
	Node* mid=NULL;
	Node* last=NULL;
	Node* prev=NULL;

	calcPointers(root,&first,&mid,&last,&prev);
	if(first && last)
	{
		swap(&(first->data),&(last->data));
	}
	else if(first && mid)
	{
		swap(&(first->data),&(mid->data));
	}
	
}

void inorder(Node* root)
{
	if(root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	Node* root = new Node(12);
	root->left=new Node(9);
	root->right=new Node(15);
	root->left->left=new Node(2);
	root->left->right=new Node(10);
	root->right->left=new Node(14);
	root->right->right=new Node(29);

	inorder(root);
	cout<<endl;
	restoreBST(root);
	inorder(root);

	
}
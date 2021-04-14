#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

// Identical BST are the ones which are stucturally identical and have same values

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

bool isIdentical(Node* root1, Node* root2)
{
	if(root1 == NULL && root2 == NULL)
	{
		return true;
	}
	else if(root1 == NULL || root2 == NULL)
	{
		return false;
	}
	else
	{
		bool cond1= root1->data == root2->data;
		bool cond2= isIdentical(root1->left,root2->left);
		bool cond3= isIdentical(root1->right,root2->right);

		if(cond1 && cond2 && cond3)
		{
			return true;
		}
		return false;
		
	}
}

int main()
{
	Node* root1 = new Node(12);
	root1->left=new Node(9);
	root1->right=new Node(15);

	Node* root2 = new Node(12);
	root2->left=new Node(9);
	root2->right=new Node(15);


	if(isIdentical(root1,root2))
	{
		cout<<"Identical"<<endl;
	}
	else
	{
		cout<<"Not Identical"<<endl;
	}
}
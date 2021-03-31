#include<bits/stdc++.h>
using namespace std;

// Height of a Balanced Tree :
// For each node the difference between the heights of the left and right subtrees <=1

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


int height(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int lHeight=height(root->left);
	int rHeight=height(root->right);

	return max(lHeight,rHeight) + 1;
}


bool isBalanced(Node* root)
{
	if(root == NULL)
	{
		return true;
	}
	if(isBalanced(root->left)==false)
	{
		return false;
	}
	if(isBalanced(root->right)==false)
	{
		return false;
	}
	int lHeight=height(root->left);
	int rHeight=height(root->right);
	if(abs(lHeight-rHeight) <=1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool optimisedBalance(Node* root,int* height)
{
	if(root==NULL)
	{
		return true;
	}
	int lHeight=0,rHeight=0;
	if(optimisedBalance((root->left),&lHeight) == false)
	{
		return false;
	}
	if(optimisedBalance((root->right),&rHeight) == false)
	{
		return false;
	}

	*height = max(lHeight,rHeight)+1;
	if(abs(lHeight-rHeight)<=1)
	{
		return true;
	}
	else
	{
		return false;
	}

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

	int height=0;

	// if(isBalanced(root))
	// {
	// 	cout<<"Balanced Tree"<<endl;
	// }
	// else
	// {
	// 	cout<<"UnBalanced Tree"<<endl;
	// }
	if(optimisedBalance(root,&height))
	{
		cout<<"Balanced Tree"<<endl;
	}
	else
	{
		cout<<"UnBalanced Tree"<<endl;
	}
}

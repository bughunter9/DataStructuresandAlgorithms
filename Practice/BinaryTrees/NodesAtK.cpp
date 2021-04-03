#include<bits/stdc++.h>
using namespace std;

// To get nodes (ancestors or subtree ) which are at distance k from out node

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


void printSubtreeNodes(Node* root,int k)
{
	if(root == NULL || k<0)
	{
		return;
	}
	if(k == 0)
	{
		cout<<root->data<<" ";
		return;
	}

	printSubtreeNodes(root->left,k-1);
	printSubtreeNodes(root->right,k-1);
}

int printNodesAtK(Node* root,Node* target,int k)
{
	if(root == NULL)
	{
		return -1;
	}
	if(root == target)
	{
		printSubtreeNodes(root,k);
		return 0;
	}

	int dl=printNodesAtK(root->left,k);
	if(dl!=-1)
	{
		if(dl+1==k)
		{
			
		}
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


}

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


void leftView(Node* root)
{
	if(root==NULL)
	{
		return;
	}

	queue<Node*>q;
	q.push(root);

	while(!q.empty())
	{
		int n = q.size();
		for(int i=0;i<n;i++)
		{
			Node* current=q.front();
			q.pop();

			if(i==0)
			{
				cout<<current->data<<" ";
			}

			if(current->left != NULL)
			{
				q.push(current->left);
			}

			if(current->right != NULL)
			{
				q.push(current->right);
			}
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

	leftView(root);
}

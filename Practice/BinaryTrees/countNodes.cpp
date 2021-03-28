#include<bits/stdc++.h>
using namespace std;


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

int countNodes(Node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	return countNodes(node->left) + countNodes(node->right) + 1;
}

int sumNodes(Node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	return sumNodes(node->left) + sumNodes(node->right) + node->data;
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

	cout<<countNodes(root)<<endl;
	cout<<sumNodes(root)<<endl;

}
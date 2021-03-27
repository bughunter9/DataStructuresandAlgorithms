#include<bits/stdc++.h>
using namespace std;

// Build tree with Preorder and Inorder
// Algorithm
// 1. Pick element from preorder and create a node
// 2. Increment preorder index
// 3. Search for picked elements position in inorder
// 4. Call to build left subtree from inorders 0 to pos-1
// 5. Call to build right subtree from inorder to pos+1 to n
// 6. Return the node

struct Node {
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

int search (int inorder[],int start,int end,int current)
{
	for(int i=start;i<=end;i++)
	{
		if(inorder[i]==current)
		{
			return i;
		}
	}
	return -1;
}


Node* buildTree (int preorder[] , int inorder[], int start, int end)
{
	static int index=0;
	if(start > end)
	{
		return NULL;
	}


	int current = preorder[index];
	index++;
	Node* node= new Node(current);

	if(start == end)
	{
		return node;
	}

	int pos= search(inorder, start, end, current);
	node->left = buildTree(preorder, inorder, start, pos-1);
	node->right = buildTree(preorder,inorder, pos+1, end);

	return node;
}

void inorderPrint(Node* root)
{
	if(root == NULL)
	{
		return;
	}
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}


int main()
{
	int preorder[] = {1,2,4,3,5};
	int inorder[]= {4,2,1,5,3};

	Node* root = buildTree(preorder, inorder, 0, 4);
	inorderPrint(root);
	cout<<endl;
}
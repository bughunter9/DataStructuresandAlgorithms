#include<bits/stdc++.h>
using namespace std;

// Build tree with postorder and inorder
// Algorithm
// 1. Start from the end of postorder and pick an element to create a node
// 2. Decrement postorder index
// 3. Search for picked elements position in inorder
// 4. Call to build right subtree from inorders pos+1 to n
// 5. Call to build left subtree from inorder 0 to pos-1
// 6. Return the node


// Tree Cannot be constructed from a postorder and preorder forms
// as with same preorder and postorder structure we can build more than 1 tree structure
// This is possible for a complete binary tree only


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

int Search(int inorder[], int start, int end, int current)
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

Node* buildTree (int postorder[], int inorder[], int start, int end)
{
	static int index=end;

	if(start > end)
	{
		return NULL;
	}
	int current = postorder[index];
	index--;
	Node* node = new Node(current);

	if(start == end)
	{
		return node;
	}

	int pos=Search(inorder, start,end,current);
	node->right=buildTree(postorder,inorder,pos+1,end);
	node->left=buildTree(postorder,inorder,start,pos-1);

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
	int postorder[]= {4,2,5,3,1};
	int inorder[]= {4,2,1,5,3};

	Node* root= buildTree(postorder,inorder,0,4);
	inorderPrint(root);

	return 0;
}
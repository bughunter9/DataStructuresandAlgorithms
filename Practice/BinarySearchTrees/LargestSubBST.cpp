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

struct Info{
	int size;
	int max;
	int min;
	int ans;
	bool isBST;
};

Info largestBST(Node* root)
{
	if(root == 	NULL)
	{
		return{0,INT_MIN,INT_MAX,0,true};
	}
	if(root->left == NULL && root->right == NULL)
	{
		return{1,root->data, root->data,1,true};
	}
	Info leftInfo = largestBST(root->left);
	Info rightInfo = largestBST(root->right);
	Info currInfo;
	currInfo.size= (1 + leftInfo.size + rightInfo.size);

	if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data)
	{
		currInfo.min = min(leftInfo.min , min(rightInfo.min, root->data));
		currInfo.max = max(leftInfo.max , max(rightInfo.max, root->data));
		currInfo.ans = currInfo.size;
		currInfo.isBST = true;
		return currInfo;
	}

	currInfo.ans = max(leftInfo.ans , rightInfo.ans);
	currInfo.isBST = false;
	return currInfo;
}


int main()
{
	Node* root = new Node(12);
	root->left=new Node(9);
	root->right=new Node(15);
	root->left->left = new Node(4);
	root->left->right = new Node(10);
	cout<<largestBST(root).ans<<endl;

}
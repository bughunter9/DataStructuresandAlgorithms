#include<bits/stdc++.h>
#include<map>
using namespace std;

// In binary tree : Parent Index : i , Left Child : 2*i + 1, Right Child : 2*i + 2
// Vertical Order of Binary Tree

struct Node{
	int key;
	Node* left;
	Node* right;
};

Node* newNode(int key)
{
	Node* node = new Node;
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	return node;
}


void getVerticalOrder(Node* root,int hordis,map<int,vector<int>>&m)
{
	if(root == NULL)
	{
		return;
	}
	m[hordis].push_back(root->key);
	getVerticalOrder(root->left,hordis-1,m);
	getVerticalOrder(root->right,hordis+1,m);
}

int main()
{
	Node* root = newNode(10);
	root->left = newNode(4);
	root->right= newNode(19);
	root->left->left = newNode(2);
	root->left->right = newNode(12);
	root->right->left= newNode(1);
	root->right->right= newNode(9);

	map<int,vector<int>>m;
	int hordis = 0;

	getVerticalOrder(root,hordis,m);

	map<int,vector<int>> :: iterator it;

	for(it=m.begin();it!=m.end();it++)
	{
		for(int i=0;i<(it->second).size();i++)
		{
			cout<<(it->second)[i] <<" ";
		}
		cout<<endl;
	}
}
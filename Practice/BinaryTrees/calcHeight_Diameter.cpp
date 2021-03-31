#include<bits/stdc++.h>
using namespace std;

// Height of a tree is the depth of the trees deepest node
// Time Complexity : O(N:number of nodes in tree)
// Diameter of tree is the number of nodes in the longest path between any 2 leaves
// Time Complexity : O(N^2)

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

int calcHeight(Node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	int lHeight=calcHeight(node->left);
	int rHeight=calcHeight(node->right);
	return max(lHeight,rHeight) + 1;
}


int calcDiameter(Node* node)
{
	if(node==NULL)
	{
		return 0;
	}

	int lHeight=calcHeight(node->left);
	int rHeight=calcHeight(node->right);
	int currDiameter= lHeight + rHeight + 1;

	int lDiameter = calcDiameter(node->left);
	int rDiameter = calcDiameter(node->right);

	return max(currDiameter,max(lDiameter,rDiameter));
}

int optimizedDiameter(Node* root,int* height)
{
	if(root==NULL)
	{
		int* height=0;
		return 0;
	}
	int lHeight=0,rHeight=0;
	int lDiameter=optimizedDiameter(root->left, &lHeight);
	int rDiameter=optimizedDiameter(root->right, &rHeight);

	int currDiameter=lHeight + rHeight + 1;
	*height= max(lHeight,rHeight) + 1;

	return max(currDiameter,max(lDiameter,rDiameter));
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

	cout<<calcHeight(root)<<endl;
	cout<<calcDiameter(root)<<endl;
	cout<<optimizedDiameter(root,&height)<<endl;

}

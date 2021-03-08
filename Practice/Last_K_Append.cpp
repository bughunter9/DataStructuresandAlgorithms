#include <bits/stdc++.h>
using namespace std;

class node{
 	public:
 		node* next;
 		int data;

 		node(int value)
 		{
 			next=NULL;
 			data=value;
 		}
};


	void insertAtTail(node* &head, int value)
	{
		node* n = new node(value);

		if(head==NULL)
		{
			head=n;
			return;
		}
		node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=n;
	}

	void insertAtHead(node* &head,int value)
	{
		node* n=new node(value);
	
		n->next=head;
		head=n;
	}


	void display(node* head)
	{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

	int length(node* &head)
	{
		int l=0;
		node* temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
			l++;
		}
		return l;
	}

	node* kappend(node* &head,int k)
	{
		node* newHead;
		node* newTail;
		node* temp=head;

		int l=length(head);
		k=k%l;
		int count=1;
		while(temp->next!=NULL)
		{
			if(count==l-k)
			{
				newTail=temp;
			}
			if(count==l-k+1)
			{
				newHead=temp;
			}
			count++;
			temp=temp->next;
		}
		newTail->next=NULL;
		temp->next=head;

		return newHead;

	}


int main()
{
	node* head=NULL;
	int arr[]={1,2,3,4,5,6};
	for(int i=0;i<6;i++)
	{
		insertAtTail(head,arr[i]);
	}
	display(head);
	node* newHead=kappend(head,3);
	display(newHead);
}
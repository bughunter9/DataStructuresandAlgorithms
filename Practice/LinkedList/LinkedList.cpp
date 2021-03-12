#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;

		node(int value)
		{
			data=value;
			next=NULL;
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

	bool search(node* &head,int key)
	{
		node* temp=head;

		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				return true;
			}
			temp=temp->next;
		}
		return false;
	}


	void deleteAtHead(node* &head)
	{
		node* todel=head;
		
		head=head->next;
		delete todel;
		
	}

	void deletion(node* &head,int value)
	{
		if(head==NULL)
		{
			return;
		}
		if(head->next==NULL)
		{
			deleteAtHead(head);
			return;
		}

		node* temp=head;
		
		while(temp->next->data!=value)
		{
			temp=temp->next;
		}
		node* todelete=temp->next;
		temp->next=temp->next->next;
		delete todelete;
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

	node* reverse(node* &head)
	{
		node* prevptr=NULL;
		node* currptr=head;
		node* nextptr;

		while(currptr!=NULL)
		{
			nextptr=currptr->next;
			currptr->next=prevptr;

			prevptr=currptr;
			currptr=nextptr;
		}

		return prevptr;
	}

	node* reversek(node* &head,int k)
	{

		node* prevptr=NULL;
		node* currptr=head;
		node *nextptr;

		int count=0;
		while(currptr!=NULL && count<k)
		{
			nextptr=currptr->next;
			currptr->next=prevptr;

			prevptr=currptr;
			currptr=nextptr;
			count++;
		}
		if(nextptr!=NULL)
		{
		head->next = reversek(nextptr,k);
		}
		return prevptr;

	}

int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	display(head);
	insertAtHead(head,9);
	display(head);
	// cout<<search(head,4)<<endl;
	// deletion(head,2);
	// deleteAtHead(head);
	// display(head);
	// node* newHead=reverse(head);
	// display(newHead);
	int k=2;
	node* newHead=reversek(head,k);
	display(newHead);
}
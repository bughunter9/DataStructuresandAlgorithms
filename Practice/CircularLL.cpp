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

	

	void insertAtHead(node* &head,int value)
	{
		node* n=new node(value);
		node* temp=head;
		if(head==NULL)
		{
			n->next=n;
			head=n;
			return;
		}
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=n;
		n->next=head;
		head=n;
	}


	void insertAtTail(node* &head, int value)
	{
		node* n = new node(value);

		if(head==NULL)
		{
			insertAtHead(head,value);
			return;
		}
		node* temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=n;
		n->next=head;
	}

	void deleteAtHead(node* &head)
	{
		node* temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}

		node* todelete=temp->next;
		temp->next=head->next;
		head=head->next;
		delete todelete;
	}

	void deletion(node* &head,int pos)
	{
		if(pos==1)
		{
			deleteAtHead(head);
			return;
		}
		node* temp=head;
		int count=1;

		while(count!=pos-1)
		{
			temp=temp->next;
			count++;
		}

		node* todelete =temp->next;
		temp->next=temp->next->next;

		delete todelete;
	}


	void display(node* head)
	{
		node* temp=head;
		do
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}while(temp!=head);
		cout<<endl;
	}


int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);
	insertAtHead(head,5);
	display(head);
	deletion(head,1);
	display(head);

}
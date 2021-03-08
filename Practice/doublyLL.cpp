#include<bits/stdc++.h>
using namespace std;

class node
{
	public:

		int data;
		node* next;
		node* prev;

		node(int value)
		{
			data=value;
			next=NULL;
			prev=NULL;
		}
};


	void insertAtHead(node* &head, int value)
	{
		node* n=new node(value);

		if(head!=NULL)
		{
			head->prev=n;
		}
		n->next=head;
		head=n;	
	}


	void insertAtTail(node* &head, int value)
	{

		if(head==NULL)
		{
			insertAtHead(head,value);
			return;
		}

		node* n=new node(value);
		node* temp=head;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}

		temp->next=n;
		n->prev=temp;

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

	void deleteAtHead(node* &head)
	{
		node* temp=head;
		head=head->next;
		delete temp;
	}

	void deletion(node* &head, int pos)
	{
		if(pos==1)
		{
			deleteAtHead(head);
			return;
		}

		node* temp = head;
		int count=1;

		while(temp!=NULL || count!=pos)
		{
			temp=temp->next;
			count++;
		}

		temp->prev->next=temp->next;
		if(temp->next!=NULL)
		{
			temp->next->prev=temp->prev;
		}

		delete temp;
	}


int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtHead(head,4);
	insertAtTail(head,5);
	display(head);
	deletion(head,1);
	display(head);
}

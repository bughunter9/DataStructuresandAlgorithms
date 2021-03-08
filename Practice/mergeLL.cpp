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

	node* merge(node* &head1,node* &head2)
	{
		node* p1=head1;
		node* p2=head2;
		node* dummy=new node(-1);
		node*p3=dummy;

		while(p1!=NULL && p2!=NULL)
		{

			if(p1->data > p2->data)
			{
				p3->next=p2;
				p2=p2->next;
			}
			else
			{
				p3->next=p1;
				p1=p1->next;
			}
			p3=p3->next;
		}

		while(p1!=NULL)
		{
			p3->next=p1;
			p1=p1->next;
			p3=p3->next;
		}

		while(p2!=NULL)
		{
			p3->next=p2;
			p2=p2->next;
			p3=p3->next;
		}

		return dummy->next;
	}




int main()
{
	node* head1=NULL;
	node* head2=NULL;

	int arr1[]={1,4,5,7};
	int arr2[]={2,3,6};
	for(int i=0;i<4;i++)
	{
		insertAtTail(head1,arr1[i]);
	}
	for(int i=0;i<3;i++)
	{
		insertAtTail(head2,arr2[i]);
	}
	display(head1);
	display(head2);

	node* newHead=merge(head1,head2);
	display(newHead);
}
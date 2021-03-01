#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int val)
        {
            data = val;
            next = NULL;
        }
};

void insertAtHead(Node *&head,int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&head,int val)
{
    Node *temp;
    
    if (head == NULL)
    {
        insertAtHead(head, val);
    }
    else
    {
        Node *n = new Node(val);
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        
    }
    
    


}
bool search(Node *head,int key)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAtHead(Node *&head)
{
    Node *toDelete = head;
    head = head->next;
    delete (toDelete);
    return;
}
void deletion(Node *&head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->data==val)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    Node *toDelete;
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }
    toDelete = temp->next;
    temp->next = temp->next->next;
    delete (toDelete);
}

void display(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
Node* reverse(Node*&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *next;
    while(currptr!=NULL)
    {
        next = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = next;
    }
    return prevptr;
}
Node* reverseK(Node* &head,int k)
{
    Node* prevptr=NULL;
    Node *currptr = head;
    Node *next;
    int count = 0;
    while(currptr!=NULL && count<k)
    {
        next = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = next;
        count++;
    }
    if(next!=NULL)
    {
        head->next = reverseK(next, k);
    }
    return prevptr;
}
Node* reverseRecursive(Node* &head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
       
        return head;
    }
    Node *newNode = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newNode;
}
int main()
{
    Node *head=NULL;
    //display(head);
    insertAtTail(head, 1);
    //display(head);
    insertAtTail(head, 2);
    // display(head);
    insertAtTail(head, 3);
    insertAtHead(head, 4);
    
    display(head);
    Node *newHead = reverseK(head,2);
    display(newHead);
    //cout<<search(head, 2);
}
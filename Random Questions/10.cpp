#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

struct Node
{
    int data;
    Node * next;
};

Node * head=NULL;
void push_back(int data)
{
    Node * temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        Node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}

void reOrderList(Node * head)
{
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    Node * second=slow->next;
    slow->next=NULL;
    Node * prev=NULL;
    while(second!=NULL)
    {
        Node * temp=second->next;
        second->next=prev;
        prev=second;
        second=temp;
    }
    second=prev;
    Node * first=head;
    while(second!=NULL)
    {
        Node * temp1=first->next;
        Node * temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }    
}




int main()
{
     dfile();
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int data;
         cin>>data;
         push_back(data);
     }
     reOrderList(head);
     while(head!=NULL)
     {
         cout<<head->data<<" ";
         head=head->next;
     }
     return 0;
}
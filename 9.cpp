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
void reverse(Node * &j)
{
    Node * c=j;
    Node * p=NULL;
    Node * n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
   j=p;
}
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
void insert(int data,int pos)
{
    Node * temp=new Node();
    temp->data=data;
    Node * p=head;
    if(pos==0)
    {
        push_back(data);
        return;
    }
    for(int i=1;i<=pos-1;i++)
    {
        p=p->next;
    }    
    temp->next=p->next;
    p->next=temp;
}
void reOrderList(Node * head)
{
    Node * i=head;
    Node * j=head;
    Node * temp=head;
    int size=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    int mid=size/2;
    Node * temp2;
    for(int i=0;i<mid;i++)
    {
        j=j->next;
        if(i==mid-1)
        {
            temp2=j->next;
            j->next=NULL;
            j=temp2;
        }
    }

    reverse(j);
    int pos=0;
    while(j!=NULL)
    {
        if(pos==0)
        {
            pos=pos+1;
            insert(j->data,pos);
            j=j->next;
        }
        else
        {
            pos=pos+2;
            insert(j->data,pos);
            j=j->next;
        }
    }

    // while(j!=NULL)
    // {
    //     cout<<j->data<<" ";
    //     j=j->next;
    // }
    // cout<<endl;
    while(i!=NULL)
    {
        cout<<i->data<<" ";
        i=i->next;
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
     return 0;
}